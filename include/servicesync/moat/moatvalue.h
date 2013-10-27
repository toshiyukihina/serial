/*
 * LEGAL NOTICE
 *
 * Copyright (C) 2012-2013 InventIt Inc. All rights reserved.
 *
 * This source code, product and/or document is protected under licenses 
 * restricting its use, copying, distribution, and decompilation.
 * No part of this source code, product or document may be reproduced in
 * any form by any means without prior written authorization of InventIt Inc.
 * and its licensors, if any.
 *
 * InventIt Inc.
 * 9F KOJIMACHI CP BUILDING
 * 4-4-7 Kojimachi, Chiyoda-ku, Tokyo 102-0083
 * JAPAN
 * http://www.yourinventit.com/
 */

#ifndef MOATVALUE_H_
#define MOATVALUE_H_

SSE_BEGIN_C_DECLS

typedef struct MoatValue_ MoatValue;
typedef struct MoatObject_ MoatObject;
typedef struct MoatObjectIterator_ MoatObjectIterator;

typedef enum moat_value_type_ moat_value_type;
enum moat_value_type_ {
	MOAT_VALUE_TYPE_BOOLEAN,
	MOAT_VALUE_TYPE_INT16,
	MOAT_VALUE_TYPE_INT32,
#ifdef SSE_CONFIG_USE_INT64
	MOAT_VALUE_TYPE_INT64,
#endif /* SSE_CONFIG_USE_INT64 */
#ifdef SSE_CONFIG_USE_SINGLE_FLOAT
	MOAT_VALUE_TYPE_FLOAT,
#endif /* SSE_CONFIG_USE_SINGLE_FLOAT */
#ifdef SSE_CONFIG_USE_DOUBLE_FLOAT
	MOAT_VALUE_TYPE_DOUBLE,
#endif /* SSE_CONFIG_USE_DOUBLE_FLOAT */
	MOAT_VALUE_TYPE_STRING,
	MOAT_VALUE_TYPE_BINARY,
	MOAT_VALUE_TYPE_RESOURCE,
	MOAT_VALUE_TYPE_OBJECT,
	MOAT_VALUE_TYPE_NULL,
	MOAT_VALUE_TYPEs
};

MOAT_API MoatValue * moat_value_new(void);
MOAT_API MoatValue * moat_value_clone(MoatValue *self);
MOAT_API void moat_value_free(MoatValue *self);
MOAT_API moat_value_type moat_value_get_type(MoatValue *self);
MOAT_API sse_uint moat_value_get_size(MoatValue *self);
MOAT_API sse_pointer moat_value_peek_value(MoatValue *self);
MOAT_API sse_int moat_value_set_value(MoatValue *self, moat_value_type in_type, sse_pointer in_v, sse_uint in_len, sse_bool in_dup);
MOAT_API sse_int moat_value_get_boolean(MoatValue *self, sse_bool *out_bool_val);
MOAT_API sse_int moat_value_get_int16(MoatValue *self, sse_int16 *out_int16_val);
MOAT_API sse_int moat_value_get_int32(MoatValue *self, sse_int32 *out_int32_val);
MOAT_API sse_int moat_value_get_int64(MoatValue *self, sse_int64 *out_int64_val);
MOAT_API sse_int moat_value_get_float(MoatValue *self, sse_float *out_float_val);
MOAT_API sse_int moat_value_get_double(MoatValue *self, sse_double *out_double_val);
MOAT_API sse_int moat_value_get_string(MoatValue *self, sse_char **out_str_val, sse_uint *out_len);
MOAT_API sse_int moat_value_get_binary(MoatValue *self, sse_byte **out_bin_val, sse_uint *out_size);
MOAT_API sse_int moat_value_get_object(MoatValue *self, MoatObject **out_obj_val);
MOAT_API void moat_value_set_boolean(MoatValue *self, sse_bool in_bool_val);
MOAT_API void moat_value_set_int16(MoatValue *self, sse_int16 in_int16_val);
MOAT_API void moat_value_set_int32(MoatValue *self, sse_int32 in_int32_val);
MOAT_API void moat_value_set_int64(MoatValue *self, sse_int64 in_int64_val);
MOAT_API void moat_value_set_float(MoatValue *self, sse_float in_float_val);
MOAT_API void moat_value_set_double(MoatValue *self, sse_double in_double_val);
MOAT_API void moat_value_set_null(MoatValue *self);
MOAT_API sse_int moat_value_set_string(MoatValue *self, sse_char *in_str_val, sse_uint in_len, sse_bool in_dup);
MOAT_API sse_int moat_value_set_binary(MoatValue *self, sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup);
MOAT_API sse_int moat_value_set_object(MoatValue *self, MoatObject *in_obj_val, sse_bool in_dup);
MOAT_API MoatValue * moat_value_new_boolean(sse_bool in_bool_val);
MOAT_API MoatValue * moat_value_new_int16(sse_int16 in_int16_val);
MOAT_API MoatValue * moat_value_new_int32(sse_int32 in_int32_val);
MOAT_API MoatValue * moat_value_new_int64(sse_int64 in_int64_val);
MOAT_API MoatValue * moat_value_new_float(sse_float in_float_val);
MOAT_API MoatValue * moat_value_new_double(sse_double in_double_val);
MOAT_API MoatValue * moat_value_new_string(sse_char *in_str_val, sse_uint in_len, sse_bool in_dup);
MOAT_API MoatValue * moat_value_new_binary(sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup);
MOAT_API MoatValue * moat_value_new_object(MoatObject *in_obj_val, sse_bool in_dup);

MOAT_API MoatObject * moat_object_new(void);
MOAT_API void moat_object_free(MoatObject *self);
MOAT_API MoatObject * moat_object_clone(MoatObject *self);
MOAT_API sse_int moat_object_add_value(MoatObject *self, sse_char *in_key, MoatValue *in_value, sse_bool in_dup, sse_bool in_overwrite);
MOAT_API void moat_object_remove_value(MoatObject *self, sse_char *in_key);
MOAT_API void moat_object_remove_all(MoatObject *self);
MOAT_API MoatValue * moat_object_get_value(MoatObject *self, sse_char *in_key);
MOAT_API sse_uint moat_object_get_length(MoatObject *self);
MOAT_API sse_int moat_object_add_boolean_value(MoatObject *self, sse_char *in_key, sse_bool in_bool_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_int16_value(MoatObject *self, sse_char *in_key, sse_int16 in_int16_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_int32_value(MoatObject *self, sse_char *in_key, sse_int32 in_int32_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_int64_value(MoatObject *self, sse_char *in_key, sse_int64 in_int64_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_float_value(MoatObject *self, sse_char *in_key, sse_float in_float_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_double_value(MoatObject *self, sse_char *in_key, sse_double in_double_val, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_string_value(MoatObject *self, sse_char *in_key, sse_char *in_str_val, sse_uint in_len, sse_bool in_dup, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_binary_value(MoatObject *self, sse_char *in_key, sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup, sse_bool in_overwrite);
MOAT_API sse_int moat_object_add_object_value(MoatObject *self, sse_char *in_key, MoatObject *in_obj_val, sse_bool in_dup, sse_bool in_overwrite);
MOAT_API sse_int moat_object_get_boolean_value(MoatObject *self, sse_char *in_key, sse_bool *out_bool_val);
MOAT_API sse_int moat_object_get_int16_value(MoatObject *self, sse_char *in_key, sse_int16 *out_int16_val);
MOAT_API sse_int moat_object_get_int32_value(MoatObject *self, sse_char *in_key, sse_int32 *out_int32_val);
MOAT_API sse_int moat_object_get_int64_value(MoatObject *self, sse_char *in_key, sse_int64 *out_int64_val);
MOAT_API sse_int moat_object_get_float_value(MoatObject *self, sse_char *in_key, sse_float *out_float_val);
MOAT_API sse_int moat_object_get_double_value(MoatObject *self, sse_char *in_key, sse_double *out_double_val);
MOAT_API sse_int moat_object_get_string_value(MoatObject *self, sse_char *in_key, sse_char **out_str_val, sse_uint *out_len);
MOAT_API sse_int moat_object_get_binary_value(MoatObject *self, sse_char *in_key, sse_byte **out_bin_val, sse_uint *out_size);
MOAT_API sse_int moat_object_get_object_value(MoatObject *self, sse_char *in_key, MoatObject **out_obj_va);

MOAT_API MoatObjectIterator * moat_object_create_iterator(MoatObject *self);
MOAT_API void moat_object_iterator_free(MoatObjectIterator *self);
MOAT_API sse_bool moat_object_iterator_has_next(MoatObjectIterator *self);
MOAT_API sse_char * moat_object_iterator_get_next_key(MoatObjectIterator *self);
MOAT_API void moat_object_iterator_reset(MoatObjectIterator *self);

MOAT_API MoatValue * moat_value_new_from_stream(sse_byte *in_stream, sse_uint *out_processed_bytes);
MOAT_API MoatObject * moat_object_new_from_stream(sse_byte *in_stream, sse_uint *out_processed_bytes);
MOAT_API sse_int moat_value_to_stream(MoatValue *self, sse_byte *out_stream, sse_uint *out_size);
MOAT_API sse_int moat_value_to_string(MoatValue *self, sse_char **out_string, sse_uint *out_len);
MOAT_API sse_int moat_value_to_json_string(MoatValue *self, sse_char *out_json, sse_uint *out_len);
MOAT_API sse_int moat_object_to_stream(MoatObject *self, sse_byte *out_stream, sse_uint *out_size);
MOAT_API sse_int moat_object_to_json_string(MoatObject *self, sse_char *out_json, sse_uint *out_len);

SSE_END_C_DECLS

#endif /* MOATVALUE_H_ */
