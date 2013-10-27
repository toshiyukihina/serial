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

#ifndef MOAT_API_H_
#define MOAT_API_H_

SSE_BEGIN_C_DECLS

typedef sse_pointer Moat;

/* Mapper methods */
typedef sse_int (*MoatAddProc)(Moat in_moat, sse_char *in_uid, MoatObject *in_object, sse_pointer in_model_context);
typedef sse_int (*MoatRemoveProc)(Moat in_moat, sse_char *in_uid, sse_pointer in_model_context);
typedef sse_int (*MoatUpdateProc)(Moat in_moat, sse_char *in_uid, MoatObject *in_object, sse_pointer in_model_context);
typedef sse_int (*MoatUpdateFieldsProc)(Moat in_moat, sse_char *in_uid, MoatObject *in_object, sse_pointer in_model_context);
typedef sse_int (*MoatFindAllUidsProc)(Moat in_moat, SSESList **out_uid_list, sse_pointer in_model_context);
typedef sse_int (*MoatFindByUidProc)(Moat in_moat, sse_char *in_uid, MoatObject **out_object, sse_pointer in_model_context);
typedef sse_int (*MoatCountProc)(Moat in_moat, sse_uint *out_count, sse_pointer in_model_context);

typedef struct ModelMapper_ ModelMapper;
struct ModelMapper_ {
	MoatAddProc AddProc;
	MoatRemoveProc RemoveProc;
	MoatUpdateProc UpdateProc;
	MoatUpdateFieldsProc UpdateFieldsProc;
	MoatFindAllUidsProc FindAllUidsProc;
	MoatFindByUidProc FindByUidProc;
	MoatCountProc CountProc;
};

/* Command method interface */
typedef sse_int (*MoatCommandProc)(Moat in_moat, sse_char *in_uid, sse_char *in_key, MoatValue *in_data, sse_pointer in_model_context);

typedef void (*MoatNotifyResultProc)(Moat in_moat, sse_char *in_urn, sse_char *in_model_name, sse_int in_request_id, sse_int in_result, sse_pointer in_user_data);

MOAT_API sse_int moat_register_model(Moat in_moat, sse_char *in_model_name, ModelMapper *in_mapper, sse_pointer in_model_context);
MOAT_API sse_int moat_register_model_with_desc(Moat in_moat, sse_char *in_model_name, sse_char *in_desc, ModelMapper *in_mapper, sse_pointer in_model_context);
MOAT_API sse_int moat_unregister_model(Moat in_moat, sse_char *in_model_name);
#define moat_remove_model(moat, model)		moat_unregister_model(moat, model)
MOAT_API sse_int moat_send_notification(Moat in_moat, sse_char *in_urn, sse_char *in_key, sse_char *in_model_name, MoatObject *collection, MoatNotifyResultProc in_proc, sse_pointer in_user_data);
MOAT_API void moat_set_user_data(Moat in_moat, sse_pointer user_data);
MOAT_API sse_pointer moat_get_user_data(Moat in_moat);

MOAT_API sse_int moat_datastore_save_object(Moat in_moat, sse_char *in_key, MoatObject *in_obj);
MOAT_API sse_int moat_datastore_load_object(Moat in_moat, sse_char *in_key, MoatObject **out_obj);
MOAT_API sse_int moat_datastore_remove_object(Moat in_moat, sse_char *in_key);
MOAT_API sse_int moat_datastore_save_value(Moat in_moat, sse_char *in_key, MoatValue *in_value);
MOAT_API sse_int moat_datastore_load_value(Moat in_moat, sse_char *in_key, MoatValue **out_value);
MOAT_API sse_int moat_datastore_remove_value(Moat in_moat, sse_char *in_key);

SSE_END_C_DECLS

#endif /* MOAT_API_H_ */
