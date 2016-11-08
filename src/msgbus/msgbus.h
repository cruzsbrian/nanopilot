#ifndef MSGBUS_H
#define MSGBUS_H

/** WARNING this wrapper is currently not threadsafe */


#include <stdbool.h>
#include <stdint.h>
#include "type_definition.h"
#include <messagebus_port.h>


#define TOPIC_NAME_MAX_LENGTH 64

typedef struct topic_s {
    void *buffer;
    const msgbus_type_definition_t *type;
    msgbus_mutex_t lock;
    msgbus_cond_t condvar;
    char name[TOPIC_NAME_MAX_LENGTH+1];
    struct topic_s *next;
    bool published;
    uint32_t pub_seq_nbr;
} msgbus_topic_t;


typedef struct {
    struct {
        msgbus_topic_t *head;
    } topics;
    msgbus_mutex_t lock;
    msgbus_cond_t condvar;
} msgbus_t;


typedef struct {
    uint32_t pub_seq_nbr;
    msgbus_topic_t *topic;
} msgbus_subscriber_t;



#define MSGBUS_TIMEOUT_NEVER UINT32_MAX
#define MSGBUS_TIMEOUT_IMMEDIATE 0

#ifdef __cplusplus
extern "C" {
#endif


/** Initialize a Message Bus
 *
 * @parameter [in] bus The bus object to initialize
 */
void msgbus_init(msgbus_t *bus);

/** Create a new topic
 *
 * @parameter [in] topic The topic object to create
 * @parameter [in] bus The bus object on which the topic will be advertised
 * @parameter [in] type The data type of the topic
 * @parameter [in] buffer The buffer to be used (the size is given by the type)
 * @parameter [in] name The name under which the topic is published
 *
 * @note The topic name will be truncated to TOPIC_NAME_MAX_LENGTH characters.
 */
void msgbus_topic_create(msgbus_topic_t *topic,
                         msgbus_t *bus,
                         const msgbus_type_definition_t *type,
                         void *buffer,
                         const char *name);

/** Search for a topic or wait for creation
 *
 * @parameter [in] bus The bus object
 * @parameter [in] name The name of the topic
 * @parameter [in] timeout_us Timeout in microseconds
 *
 * @returns A pointer to the topic or NULL if it wasn't created before the timeout
 */
msgbus_topic_t *msgbus_find_topic(msgbus_t *bus,
                                  const char *name,
                                  uint64_t timeout_us);

/** Start iteration over all topics on a bus
 *
 * The order of iteration is arbitrary
 *
 * @parameter [in] bus The bus object
 *
 * @returns A pointer to the first topic on the bus or NULL if there are no topics.
 */
msgbus_topic_t *msgbus_iterate_topics(msgbus_t *bus);

/** Iterate over all topics on a bus
 *
 * @parameter [in] topic Topic pointer that is iterated
 *
 * @returns A pointer to the next topic on the bus or NULL for the last topic.
 */
msgbus_topic_t *msgbus_iterate_topics_next(msgbus_topic_t *topic);


/** Publish to a topic
 *
 * @parameter [in] topic Topic to publish to
 * @parameter [in] val Value to be published
 */
void msgbus_topic_publish(msgbus_topic_t *topic, const void *val);

/** Get the type of a topic
 *
 * @parameter [in] topic Topic object
 *
 * @returns A pointer to the topic type
 */
const msgbus_type_definition_t *msgbus_topic_get_type(msgbus_topic_t *topic);

/** Get the name of a topic
 *
 * @parameter [in] topic Topic object
 *
 * @returns A pointer to the topic name string
 */
const char *msgbus_topic_get_name(msgbus_topic_t *topic);


/** Subscribe to a topic
 *
 * @parameter [in] sub Subscriber object
 * @parameter [in] bus The bus object
 * @parameter [in] name The name of the topic
 * @parameter [in] timeout_us Timeout in microseconds
 *
 * @returns true on success and false on timeout.
 */
bool msgbus_topic_subscribe(msgbus_subscriber_t *sub,
                            msgbus_t *bus,
                            const char *name,
                            uint64_t timeout_us);

/** Wait for a topic update
 *
 * @parameter [in] sub Subscriber object
 * @parameter [in] timeout_us Timeout in microseconds
 *
 * @returns true on success and false on timeout
 */
bool msgbus_subscriber_wait_for_update(msgbus_subscriber_t *sub,
                                       uint64_t timeout_us);

/** Wait for a topic update on multiple subscribers
 *
 * @parameter [in] subs Subscriber pointer list
 * @parameter [in] nb_sub number of subscriber pointers in list
 * @parameter [in] timeout_us Timeout in microseconds
 *
 * @returns true on success and false on timeout
 */
bool msgbus_subscriber_wait_for_update_on_any(msgbus_subscriber_t **subs,
                                              int nb_sub,
                                              uint64_t timeout_us);

/** Check if the topic has an update
 *
 * @parameter [in] sub Subscriber object
 *
 * @returns 0 if there is no update or the number of updates otherwise
 */
uint32_t msgbus_subscriber_has_update(msgbus_subscriber_t *sub);

/** Check if the topic is valid and can be read
 *
 * A topic is valid if it has been published at least once
 *
 * @parameter [in] sub Subscriber object
 *
 * @returns true if the topic is valid
 */
bool msgbus_subscriber_topic_is_valid(msgbus_subscriber_t *sub);

/** Read a topic
 *
 * @parameter [in] sub Subscriber object
 * @parameter [out] dest Pointer to the value to be read
 *
 * @returns the number of updates since the last read
 *
 * @note A topic must not be read if it is not valid (has not been pubished yet)
 */
uint32_t msgbus_subscriber_read(msgbus_subscriber_t *sub, void *dest);

/** Get a pointer to the topic to which the subscriber subscribed
 *
 * @parameter [in] sub Subscriber object
 *
 * @returns A pointer to the topic to which the subscriber subscribed
 */
msgbus_topic_t *msgbus_subscriber_get_topic(msgbus_subscriber_t *sub);


#ifdef __cplusplus
}
#endif

#endif /* MSGBUS_H */
