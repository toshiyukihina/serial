/*
 * LEGAL NOTICE
 *
 * Copyright (C) 2013 InventIt Inc. All rights reserved.
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

#include <servicesync/moat.h>
#include <string.h>
#include <stdlib.h>

sse_int
moat_register_model(Moat in_moat, sse_char *in_model_name, ModelMapper *in_mapper, sse_pointer in_model_context)
{
  return SSE_E_OK;
}
/* sse_int */
/* moat_register_model_with_desc(Moat in_moat, sse_char *in_model_name, sse_char *in_desc, ModelMapper *in_mapper, sse_pointer in_model_context) */
/* { */
/*   return SSE_E_OK; */
/* } */
sse_int
moat_unregister_model(Moat in_moat, sse_char *in_model_name)
{
  return SSE_E_OK;
}
sse_int
moat_send_notification(Moat in_moat, sse_char *in_urn, sse_char *in_key, sse_char *in_model_name, MoatObject *collection, MoatNotifyResultProc in_proc, sse_pointer in_user_data)
{
  return SSE_E_OK;
}
/* void */
/* moat_set_user_data(Moat in_moat, sse_pointer user_data) */
/* { */
/* } */
/* sse_pointer */
/* moat_get_user_data(Moat in_moat) */
/* { */
/*   return SSE_E_OK; */
/* } */

/* sse_int */
/* moat_datastore_save_object(Moat in_moat, sse_char *in_key, MoatObject *in_obj) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_datastore_load_object(Moat in_moat, sse_char *in_key, MoatObject **out_obj) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_datastore_remove_object(Moat in_moat, sse_char *in_key) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_datastore_save_value(Moat in_moat, sse_char *in_key, MoatValue *in_value) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_datastore_load_value(Moat in_moat, sse_char *in_key, MoatValue **out_value) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_datastore_remove_value(Moat in_moat, sse_char *in_key) */
/* { */
/*   return SSE_E_OK; */
/* } */

sse_int
moat_init(sse_char *in_urn, Moat *out_moat)
{
  return SSE_E_OK;
}
void
moat_destroy(Moat in_moat)
{
}

/* sse_int */
/* moat_run(Moat in_moat) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* void */
/* moat_quit(Moat in_moat) */
/* { */
/* } */

/* MoatValue * */
/* moat_value_new(void) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_clone(MoatValue *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* void */
/* moat_value_free(MoatValue *self) */
/* { */
/* } */
/* moat_value_type */
/* moat_value_get_type(MoatValue *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_uint */
/* moat_value_get_size(MoatValue *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_pointer */
/* moat_value_peek_value(MoatValue *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_set_value(MoatValue *self, moat_value_type in_type, sse_pointer in_v, sse_uint in_len, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_boolean(MoatValue *self, sse_bool *out_bool_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_int16(MoatValue *self, sse_int16 *out_int16_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_int32(MoatValue *self, sse_int32 *out_int32_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_int64(MoatValue *self, sse_int64 *out_int64_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_float(MoatValue *self, sse_float *out_float_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_double(MoatValue *self, sse_double *out_double_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_string(MoatValue *self, sse_char **out_str_val, sse_uint *out_len) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_binary(MoatValue *self, sse_byte **out_bin_val, sse_uint *out_size) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_get_object(MoatValue *self, MoatObject **out_obj_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* void */
/* moat_value_set_boolean(MoatValue *self, sse_bool in_bool_val) */
/* { */
/* } */
/* void */
/* moat_value_set_int16(MoatValue *self, sse_int16 in_int16_val) */
/* { */
/* } */
/* void */
/* moat_value_set_int32(MoatValue *self, sse_int32 in_int32_val) */
/* { */
/* } */
/* void */
/* moat_value_set_int64(MoatValue *self, sse_int64 in_int64_val) */
/* { */
/* } */
/* void */
/* moat_value_set_float(MoatValue *self, sse_float in_float_val) */
/* { */
/* } */
/* void */
/* moat_value_set_double(MoatValue *self, sse_double in_double_val) */
/* { */
/* } */
/* void */
/* moat_value_set_null(MoatValue *self) */
/* { */
/* } */
/* sse_int */
/* moat_value_set_string(MoatValue *self, sse_char *in_str_val, sse_uint in_len, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_set_binary(MoatValue *self, sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_int */
/* moat_value_set_object(MoatValue *self, MoatObject *in_obj_val, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_boolean(sse_bool in_bool_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_int16(sse_int16 in_int16_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_int32(sse_int32 in_int32_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_int64(sse_int64 in_int64_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_float(sse_float in_float_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_double(sse_double in_double_val) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_string(sse_char *in_str_val, sse_uint in_len, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_binary(sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* MoatValue * */
/* moat_value_new_object(MoatObject *in_obj_val, sse_bool in_dup) */
/* { */
/*   return SSE_E_OK; */
/* } */

MoatObject *
moat_object_new(void)
{
  return (MoatObject*)sse_malloc(100); // dummy object
  //return SSE_E_OK;
}
void
moat_object_free(MoatObject *self)
{
  sse_free(self);
}
MoatObject *
moat_object_clone(MoatObject *self)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_value(MoatObject *self, sse_char *in_key, MoatValue *in_value, sse_bool in_dup, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
void
moat_object_remove_value(MoatObject *self, sse_char *in_key)
{
}
void
moat_object_remove_all(MoatObject *self)
{
}
MoatValue *
moat_object_get_value(MoatObject *self, sse_char *in_key)
{
  return SSE_E_OK;
}
sse_uint
moat_object_get_length(MoatObject *self)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_boolean_value(MoatObject *self, sse_char *in_key, sse_bool in_bool_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_int16_value(MoatObject *self, sse_char *in_key, sse_int16 in_int16_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_int32_value(MoatObject *self, sse_char *in_key, sse_int32 in_int32_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_int64_value(MoatObject *self, sse_char *in_key, sse_int64 in_int64_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_float_value(MoatObject *self, sse_char *in_key, sse_float in_float_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_double_value(MoatObject *self, sse_char *in_key, sse_double in_double_val, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_string_value(MoatObject *self, sse_char *in_key, sse_char *in_str_val, sse_uint in_len, sse_bool in_dup, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_binary_value(MoatObject *self, sse_char *in_key, sse_byte *in_bin_val, sse_uint in_size, sse_bool in_dup, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_add_object_value(MoatObject *self, sse_char *in_key, MoatObject *in_obj_val, sse_bool in_dup, sse_bool in_overwrite)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_boolean_value(MoatObject *self, sse_char *in_key, sse_bool *out_bool_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_int16_value(MoatObject *self, sse_char *in_key, sse_int16 *out_int16_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_int32_value(MoatObject *self, sse_char *in_key, sse_int32 *out_int32_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_int64_value(MoatObject *self, sse_char *in_key, sse_int64 *out_int64_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_float_value(MoatObject *self, sse_char *in_key, sse_float *out_float_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_double_value(MoatObject *self, sse_char *in_key, sse_double *out_double_val)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_string_value(MoatObject *self, sse_char *in_key, sse_char **out_str_val, sse_uint *out_len)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_binary_value(MoatObject *self, sse_char *in_key, sse_byte **out_bin_val, sse_uint *out_size)
{
  return SSE_E_OK;
}
sse_int
moat_object_get_object_value(MoatObject *self, sse_char *in_key, MoatObject **out_obj_va)
{
  return SSE_E_OK;
}

/* MoatObjectIterator * */
/* moat_object_create_iterator(MoatObject *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* void */
/* moat_object_iterator_free(MoatObjectIterator *self) */
/* { */
/* } */
/* sse_bool */
/* moat_object_iterator_has_next(MoatObjectIterator *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* sse_char * */
/* moat_object_iterator_get_next_key(MoatObjectIterator *self) */
/* { */
/*   return SSE_E_OK; */
/* } */
/* void */
/* moat_object_iterator_reset(MoatObjectIterator *self) */
/* { */
/* } */

SSESList *
sse_slist_new(void)
{
  SSESList *list;

  list = sse_malloc(sizeof(SSESList));
  if (list == NULL ) {
    return NULL ;
  }
  list->data = NULL;
  list->next = NULL;
  return list;
}

void
sse_slist_free(SSESList *list)
{
  sse_free(list);
}

SSESList *
sse_slist_add(SSESList *list, sse_pointer data)
{
  SSESList *new_list;
  SSESList *last;

  new_list = sse_slist_new();
  new_list->data = data;
  if (list == NULL ) {
    return new_list;
  }
  last = sse_slist_last(list);
  last->next = new_list;
  return list;
}

SSESList *
sse_slist_add_first(SSESList *list, sse_pointer data)
{
  SSESList *new_list;

  new_list = sse_slist_new();
  new_list->data = data;
  new_list->next = list;
  return new_list;
}

SSESList *
sse_slist_concat(SSESList *list, SSESList *cat_list)
{
  SSESList *last;

  if (cat_list == NULL ) {
    /* do nothing */
    return list;
  }
  last = sse_slist_last(list);
  if (last != NULL ) {
    last->next = cat_list;
  } else {
    list = cat_list;
  }
  return list;
}

static SSESList *
sse_slist_remove_by_data(SSESList *list, sse_pointer data, sse_bool all)
{
  SSESList *cur;
  SSESList *prev = NULL;
  SSESList *next;

  cur = list;
  while (cur != NULL ) {
    if (cur->data == data) {
      next = cur->next;
      if (prev == NULL ) {
        list = cur->next;
      } else {
        prev->next = cur->next;
      }
      sse_slist_free(cur);
      if (!all) {
        break;
      }
      cur = next;
    } else {
      prev = cur;
      cur = prev->next;
    }
  }
  return list;
}

SSESList *
sse_slist_remove(SSESList *list, sse_pointer data)
{
  return sse_slist_remove_by_data(list, data, sse_false);
}

SSESList *
sse_slist_remove_all(SSESList *list, sse_pointer data)
{
  return sse_slist_remove_by_data(list, data, sse_true);
}

SSESList *
sse_slist_unlink(SSESList *list, SSESList *link)
{
  SSESList *e;
  SSESList *prev;

  prev = NULL;
  e = list;
  while (e != NULL) {
    if (e != link) {
      prev = e;
      e = e->next;
      continue;
    }
    if (prev != NULL) {
      prev->next = e->next;
    }
    if (list == e) {
      list = list->next;
    }
    e->next = NULL;
    break;
  }
  return list;
}

SSESList *
sse_slist_find(SSESList *list, sse_pointer data)
{
  while (list != NULL ) {
    if (list->data == data) {
      break;
    }
    list = list->next;
  }
  return list;
}

SSESList *
sse_slist_foreach(SSESList *list, sse_pointer data, SSECompareProc proc)
{
  while (list != NULL ) {
    if ((*proc)(data, list->data) == 0) {
      return list;
    }
    list = list->next;
  }
  return NULL ;
}

SSESList *
sse_slist_get(SSESList *list, sse_int i)
{
  while (i > 0) {
    if (list == NULL ) {
      break;
    }
    list = list->next;
    i--;
  }
  return list;
}

sse_pointer
sse_slist_get_data(SSESList *list, sse_int i)
{
  SSESList *e;

  e = sse_slist_get(list, i);
  return (e == NULL ) ? NULL : e->data;
}

SSESList *
sse_slist_last(SSESList *list)
{
  while (list != NULL ) {
    if (list->next == NULL ) {
      break;
    }
    list = list->next;
  }
  return list;
}

sse_uint
sse_slist_length(SSESList *list)
{
  sse_uint length = 0;

  while (list != NULL ) {
    length++;
    list = list->next;
  }
  return length;
}

SSEList *
sse_list_new(void)
{
  SSEList *list;

  list = sse_malloc(sizeof(SSEList));
  if (list == NULL ) {
    return NULL ;
  }
  list->data = NULL;
  list->prev = NULL;
  list->next = NULL;
  return list;
}

void
sse_list_free(SSEList *list)
{
  sse_free(list);
}

SSEList *
sse_list_add(SSEList *list, sse_pointer data)
{
  SSEList *new_list;
  SSEList *last;

  new_list = sse_list_new();
  new_list->data = data;
  new_list->prev = list;
  if (list == NULL ) {
    return new_list;
  }
  last = sse_list_last(list);
  last->next = new_list;
  return list;
}

SSEList *
sse_list_add_first(SSEList *list, sse_pointer data)
{
  SSEList *new_list;

  new_list = sse_list_new();
  new_list->data = data;
  new_list->next = list;
  list->prev = new_list;
  return new_list;
}

SSEList *
sse_list_concat(SSEList *list, SSEList *cat_list)
{
  SSEList *last;

  if (cat_list == NULL ) {
    /* do nothing */
    return list;
  }
  last = sse_list_last(list);
  if (last != NULL ) {
    last->next = cat_list;
  } else {
    list = cat_list;
  }
  return list;
}

static SSEList *
sse_list_remove_by_data(SSEList *list, sse_pointer data, sse_bool all)
{
  SSEList *cur;
  SSEList *next;

  cur = list;
  while (cur != NULL ) {
    if (cur->data == data) {
      next = cur->next;
      if (cur->prev == NULL ) {
        list = next;
      } else {
        cur->prev->next = next;
      }
      if (next != NULL ) {
        next->prev = cur->prev;
      }
      sse_list_free(cur);
      if (!all) {
        break;
      }
      cur = next;
    } else {
      cur = cur->next;
    }
  }
  return list;
}

SSEList *
sse_list_remove(SSEList *list, sse_pointer data)
{
  return sse_list_remove_by_data(list, data, sse_false);
}

SSEList *
sse_list_remove_all(SSEList *list, sse_pointer data)
{
  return sse_list_remove_by_data(list, data, sse_true);
}

SSEList *
sse_list_unlink(SSEList *list, SSEList *link)
{
  if (link == NULL) {
    return list;
  }
  if (link->prev != NULL) {
    link->prev->next = link->next;
  }
  if (link->next != NULL) {
    link->next->prev = link->prev;
  }
  if (link == list) {
    list = list->next;
  }
  link->next = NULL;
  link->prev = NULL;
  return list;
}

SSEList *
sse_list_find(SSEList *list, sse_pointer data)
{
  while (list != NULL ) {
    if (list->data == data) {
      break;
    }
    list = list->next;
  }
  return list;
}

SSEList *
sse_list_foreach(SSEList *list, sse_pointer data, SSECompareProc proc)
{
  while (list != NULL ) {
    if ((*proc)(data, list->data) == 0) {
      return list;
    }
    list = list->next;
  }
  return NULL ;
}

SSEList *
sse_list_get(SSEList *list, sse_int i)
{
  while (i > 0) {
    if (list == NULL ) {
      break;
    }
    list = list->next;
    i--;
  }
  return list;
}

sse_pointer
sse_list_get_data(SSEList *list, sse_int i)
{
  SSEList *e;

  e = sse_list_get(list, i);
  return (e == NULL ) ? NULL : e->data;
}

SSEList *
sse_list_last(SSEList *list)
{
  while (list != NULL ) {
    if (list->next == NULL ) {
      break;
    }
    list = list->next;
  }
  return list;
}

sse_uint
sse_list_length(SSEList *list)
{
  sse_uint length = 0;

  while (list != NULL ) {
    length++;
    list = list->next;
  }
  return length;
}

sse_bool
sse_queue_is_empty(SSEQueue *q)
{
  return (q->head == NULL);
}

void
sse_queue_clear(SSEQueue *q)
{
  q->head = q->tail = NULL;
  q->length = 0;
}

sse_int
sse_queue_enqueue(SSEQueue *q, sse_pointer data)
{
  SSEList *new_tail;

  new_tail = sse_list_new();
  if (new_tail == NULL) {
    return SSE_E_NOMEM;
  }
  new_tail->data = data;
  if (q->tail == NULL) {
    q->head = q->tail = new_tail;
  } else {
    q->tail->next = new_tail;
    q->tail = new_tail;
  }
  return SSE_E_OK;
}

sse_pointer
sse_queue_dequeue(SSEQueue *q)
{
  sse_pointer data;
  SSEList *head;

  if (q->head == NULL) {
    return NULL;
  }
  head = q->head;
  data = head->data;
  q->head = head->next;
  if (q->head == NULL) {
    q->tail = NULL;
  } else {
    q->head->prev = NULL;
  }
  sse_list_free(head);
  return data;
}

sse_pointer
sse_queue_peek_next(SSEQueue *q)
{
  if (q->head == NULL) {
    return NULL;
  }
  return q->head->data;
}

SSEQueue *
sse_queue_new(void)
{
  SSEQueue *q = NULL;

  q = sse_malloc(sizeof(SSEQueue));
  if (q == NULL) {
    return NULL;
  }
  q->head = NULL;
  q->tail = NULL;
  q->length = 0;
  return q;
}

void
sse_queue_free(SSEQueue *q)
{
  sse_free(q);
}

/* sse_char * */
/* sse_strcpy(sse_char *s1, const sse_char *s2) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strncpy(sse_char *s1, const sse_char *s2, sse_size n) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strcat(sse_char *s1, const sse_char *s2) */
/* { */
/*   return NULL; */
/* } */
/* sse_int */
/* sse_strcmp(const sse_char *s1, const sse_char *s2) */
/* { */
/*   return 0; */
/* } */
/* sse_int */
/* sse_strncmp(const sse_char *s1, const sse_char *s2, sse_size n) */
/* { */
/*   return 0; */
/* } */
/* sse_int */
/* sse_strcasecmp(const sse_char *s1, const sse_char *s2) */
/* { */
/*   return 0; */
/* } */
/* sse_int */
/* sse_strncasecmp(const sse_char *s1, const sse_char *s2, sse_size n) */
/* { */
/*   return 0; */
/* } */
sse_int
sse_strlen(const sse_char *s)
{
  return strlen((char*)s);
}
/* sse_char * */
/* sse_strstr(const sse_char *s1, const sse_char *s2) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strchr(const sse_char *s, sse_int c) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strnchr(const sse_char *s, sse_size len, sse_int c) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strrchr(const sse_char *s, sse_int c) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strndup(const sse_char *s, sse_size n) */
/* { */
/*   return NULL; */
/* } */
/* sse_char * */
/* sse_strdup(const sse_char *s) */
/* { */
/*   return NULL; */
/* } */

/* sse_char * */
/* sse_u16tohex(sse_uint16 val, sse_char *buf) */
/* { */
/*   return NULL; */
/* } */

/* sse_byte */
/* sse_hexntobyte(sse_char *s, sse_int n) */
/* { */
/*   return 0; */
/* } */
/* sse_byte */
/* sse_hextobyte(sse_char *s) */
/* { */
/*   return 0; */
/* } */
/* sse_uint16 */
/* sse_hexntou16(sse_char *s, sse_int n) */
/* { */
/*   return 0; */
/* } */
/* sse_uint16 */
/* sse_hextou16(sse_char *s) */
/* { */
/*   return 0; */
/* } */
/* sse_uint32 */
/* sse_hexntou32(sse_char *s, sse_int n) */
/* { */
/*   return 0; */
/* } */

static sse_uint32
hex_to_uint(sse_char *s, sse_int n) {
  sse_int i;
  sse_uint32 a = 0;

  for(i = 0; i < n; i++, s++){
    if(('0' <= *s) && (*s <= '9')){
      a = (a << 4) | (*s - '0');
    } else if(('A' <= *s) && (*s <= 'F')){
      a = (a << 4) | (*s - 'A' + 10);
    } else if(('a' <= *s) && (*s <= 'f')){
      a = (a << 4) | (*s - 'a' + 10);
    } else {
      return 0;
    }
  }
  return a;
}
  
sse_uint32
sse_hextou32(sse_char *s)
{
  return hex_to_uint(s, sse_strlen(s));
}

void *
sse_memcpy(void *buf1, const void *buf2, sse_size size)
{
  return memcpy(buf1, buf2, size);
}
void *
sse_memset(void *buf, sse_int32 ch, sse_size n)
{
  return memset(buf, ch, n);
}
sse_int
sse_memcmp(void *buf1, void *buf2, sse_size size)
{
  return memcmp(buf1, buf2, size);
}

/* void * */
/* sse_memdup(void *in_buff, sse_size in_size) */
/* { */
/*   return NULL; */
/* } */

/* sse_char */
/* sse_to_lower_case(const sse_char in_c) */
/* { */
/*   return 0; */
/* } */
/* sse_char */
/* sse_to_upper_case(const sse_char in_c) */
/* { */
/*   return 0; */
/* } */

sse_pointer
sse_malloc(sse_size size)
{
  return (sse_pointer)malloc(size);
}
void
sse_free(sse_pointer p)
{
  free(p);
}

/* sse_char * */
/* sse_itoa(sse_int val, sse_char *buf) */
/* { */
/*   return NULL; */
/* } */

/* sse_int */
/* sse_atoi(sse_char *s) */
/* { */
/*   return 0; */
/* } */
/* sse_int */
/* sse_antoi(sse_char *s1, sse_int32 n) */
/* { */
/*   return 0; */
/* } */

/* sse_int32 */
/* sse_div(sse_int32 num, sse_int32 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int16 */
/* sse_div16(sse_int16 num, sse_int16 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int32 */
/* sse_div32(sse_int32 num, sse_int32 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int64 */
/* sse_div64(sse_int64 num, sse_int64 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int32 */
/* sse_mod(sse_int32 num, sse_int32 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int16 */
/* sse_mod16(sse_int16 num, sse_int16 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int32 */
/* sse_mod32(sse_int32 num, sse_int32 den) */
/* { */
/*   return 0; */
/* } */
/* sse_int64 */
/* sse_mod64(sse_int64 num, sse_int64 den) */
/* { */
/*   return 0; */
/* } */

