#include "ch.h"
#include "hal.h"
#include <ros_interface/msg.h>
#include "thread_prio.h"
#include "timestamp.h"
#include "log.h"

#include <math.h>

#include "ros_comm.hpp"

comm_interface_t comm_if;


static void comm_rcv_cb(comm_msg_id_t msg_id, const uint8_t *msg, size_t len)
{
    switch (static_cast<RosInterfaceCommMsgID>(msg_id)) {
    case RosInterfaceCommMsgID::PING:
        comm_send(&comm_if, RosInterfaceCommMsgID::PONG, msg, len);
        break;
    default:
        break;
    }
}

static THD_WORKING_AREA(comm_rx_thread_wa, (2000));
static THD_FUNCTION(comm_rx_thread, arg) {
    (void)arg;
    chRegSetThreadName("comm_rx");
    while (1) {
        comm_receive(&comm_if);
    }
}

static THD_WORKING_AREA(comm_tx_thread_wa, (2000));
static THD_FUNCTION(comm_tx_thread, arg) {
    (void)arg;
    chRegSetThreadName("comm_tx");

    int i=0;
    while (true) {
        comm_send(&comm_if, RosInterfaceCommMsgID::HEARTBEAT, NULL, 0);
        uint64_t timestamp = timestamp_get();
        comm_send(&comm_if, RosInterfaceCommMsgID::TIME, &timestamp, sizeof(timestamp));

        static char buf[1000];
        auto serializer = nop::Serializer<nop::BufferWriter>(buf, sizeof(buf));
        serializer.Write(SimpleType{static_cast<uint32_t>(i), sinf(i)});
        comm_send(&comm_if, RosInterfaceCommMsgID::TEST, buf, serializer.writer().size());

        chThdSleepMilliseconds(10);
        i++;
    }
}

static log_handler_t log_handler_comm;
static void log_handler_comm_cb(log_level_t lvl, const char *msg, size_t len)
{
    (void)lvl;
    comm_send(&comm_if, RosInterfaceCommMsgID::LOG, msg, len);
}


void ros_comm_init(SerialDriver *sd)
{
    comm_init(&comm_if, sd, comm_rcv_cb);

    log_handler_register(&log_handler_comm, LOG_LVL_DEBUG, log_handler_comm_cb);

    chThdCreateStatic(comm_rx_thread_wa, sizeof(comm_rx_thread_wa),
                      THD_PRIO_COMM_RX, comm_rx_thread, NULL);
    chThdCreateStatic(comm_tx_thread_wa, sizeof(comm_tx_thread_wa),
                      THD_PRIO_COMM_TX, comm_tx_thread, NULL);
}