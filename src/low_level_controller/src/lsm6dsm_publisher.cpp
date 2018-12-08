#include "lsm6dsm_publisher.hpp"
#include <drivers/lsm6dsm.h>
#include "log.h"
#include "thread_prio.h"

static lsm6dsm_t lsm6dsm_dev;


static THD_WORKING_AREA(lsm6dsm_publisher_wa, 800);
static THD_FUNCTION(lsm6dsm_publisher, arg)
{
    (void)arg;
    chRegSetThreadName("lsm6dsm_publisher");
    float gyro[3], acc[3], temperature;
    lsm6dsm_setup(&lsm6dsm_dev);
    while (true) {
        lsm6dsm_read(&lsm6dsm_dev, gyro, acc, &temperature);

        chThdSleepMilliseconds(1);
    }
}

void lsm6dsm_publisher_start(SPIDriver *spi, const SPIConfig *config)
{
    lsm6dsm_init(&lsm6dsm_dev, spi, config);
    chThdCreateStatic(lsm6dsm_publisher_wa, sizeof(lsm6dsm_publisher_wa), THD_PRIO_SPI_DRIVERS, lsm6dsm_publisher, NULL);
}


