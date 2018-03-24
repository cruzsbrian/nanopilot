#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "cmp/cmp.h"
#include "cmp_mem_access/cmp_mem_access.h"

#include "type_definition.h"
#include "serialization_msgpack.h"


bool ts_cmp_ser_value_once(const void *var,
                               const ts_type_entry_t *entry,
                               cmp_ctx_t *ctx,
                               bool compact)
{
    if (entry->is_base_type) {
        switch (entry->base_type) {
        case TS_TYPE_FLOAT16:
        case TS_TYPE_FLOAT32:
            return cmp_write_float(ctx, *(float*)var);
        case TS_TYPE_FLOAT64:
            return cmp_write_double(ctx, *(double*)var);
        case TS_TYPE_INT8:
            return cmp_write_int(ctx, *(int8_t*)var);
        case TS_TYPE_INT16:
            return cmp_write_int(ctx, *(int16_t*)var);
        case TS_TYPE_INT32:
            return cmp_write_int(ctx, *(int32_t*)var);
        case TS_TYPE_INT64:
            return cmp_write_int(ctx, *(int64_t*)var);
        case TS_TYPE_UINT8:
            return cmp_write_uint(ctx, *(uint8_t*)var);
        case TS_TYPE_UINT16:
            return cmp_write_uint(ctx, *(uint16_t*)var);
        case TS_TYPE_UINT32:
            return cmp_write_uint(ctx, *(uint32_t*)var);
        case TS_TYPE_UINT64:
            return cmp_write_uint(ctx, *(uint64_t*)var);
        case TS_TYPE_STRING:
            return cmp_write_str(ctx, (const char*)var, strlen((const char*)var));
        default:
            return false;
        }
    } else {
        return ts_cmp_ser_type(var, entry->type, ctx, compact);
    }
}


bool ts_cmp_ser_value(const void *var,
                          const ts_type_entry_t *entry,
                          cmp_ctx_t *ctx,
                          bool compact)
{
    if (entry->is_array || entry->is_dynamic_array) {
        uint16_t len = 0;
        if (entry->is_array) {
            len = entry->array_len;
        }
        if (entry->is_dynamic_array) {
            len = *(uint16_t*)(var + entry->dynamic_array_len_struct_offset);
            if (len > entry->array_len) {
                return false;
            }
        }
        if (!cmp_write_array(ctx, len)) {
            return false;
        }
        uint16_t i;
        for (i = 0; i < len; i++) {
            const void *var_entry_i = var + entry->struct_offset + entry->size * i;
            if (!ts_cmp_ser_value_once(var_entry_i, entry, ctx, compact)) {
                return false;
            }
        }
        return true;
    } else {
        const void *var_entry = var + entry->struct_offset;
        return ts_cmp_ser_value_once(var_entry, entry, ctx, compact);
    }
}


bool ts_cmp_ser_struct_entry(const void *var,
                                 const ts_type_entry_t *entry,
                                 cmp_ctx_t *ctx,
                                 bool compact)
{
    if (!compact) {
        if (!cmp_write_str(ctx, entry->name, strlen(entry->name))) {
            return false;
        }
    }
    return ts_cmp_ser_value(var, entry, ctx, compact);
}


bool ts_cmp_ser_type(const void *var,
                         const ts_type_definition_t *type,
                         cmp_ctx_t *ctx,
                         bool compact)
{
    if (compact) {
        if (!cmp_write_array(ctx, type->nb_elements)) {
            return false;
        }
    } else {
        if (!cmp_write_map(ctx, type->nb_elements)) {
            return false;
        }
    }
    int i;
    for (i = 0; i < type->nb_elements; i++) {
        if (!ts_cmp_ser_struct_entry(var, &type->elements[i], ctx, compact)) {
            return false;
        }
    }
    return true;
}


int ts_serialize_msgpack_self_describing(const void *var,
                                         const ts_type_definition_t *type,
                                         char *buf,
                                         size_t buf_sz)
{
    cmp_mem_access_t mem;
    cmp_ctx_t cmp;
    cmp_mem_access_init(&cmp, &mem, buf, buf_sz);
    if (!ts_cmp_ser_type(var, type, &cmp, false)) {
        return -1;
    }
    return cmp_mem_access_get_pos(&mem);
}


int ts_serialize_msgpack(const void *var,
                         const ts_type_definition_t *type,
                         char *buf,
                         size_t buf_sz)
{
    cmp_mem_access_t mem;
    cmp_ctx_t cmp;
    cmp_mem_access_init(&cmp, &mem, buf, buf_sz);
    if (!ts_cmp_ser_type(var, type, &cmp, true)) {
        return -1;
    }
    return cmp_mem_access_get_pos(&mem);
}

