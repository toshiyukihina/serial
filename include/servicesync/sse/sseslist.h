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


#ifndef SSESLIST_H_
#define SSESLIST_H_

SSE_BEGIN_C_DECLS

typedef struct SSESList_ SSESList;

struct SSESList_ {
	sse_pointer data;
	SSESList *next;
};

SSESList * sse_slist_new(void);
void sse_slist_free(SSESList *list);

SSESList * sse_slist_add(SSESList *list, sse_pointer data);
SSESList * sse_slist_add_first(SSESList *list, sse_pointer data);
SSESList * sse_slist_concat(SSESList *list, SSESList *cat_list);
SSESList * sse_slist_remove(SSESList *list, sse_pointer data);
SSESList * sse_slist_remove_all(SSESList *list, sse_pointer data);
SSESList * sse_slist_unlink(SSESList *list, SSESList *link);
SSESList * sse_slist_find(SSESList *list, sse_pointer data);
SSESList * sse_slist_foreach(SSESList *list, sse_pointer data, SSECompareProc proc);
SSESList * sse_slist_get(SSESList *list, sse_int i);
sse_pointer sse_slist_get_data(SSESList *list, sse_int i);
SSESList * sse_slist_last(SSESList *list);
sse_uint sse_slist_length(SSESList *list);

#define sse_slist_data(l)		((l == NULL) ? NULL : (((SSESList *)(l))->data))
#define sse_slist_next(l)		((l == NULL) ? NULL : (((SSESList *)(l))->next))

SSE_END_C_DECLS

#endif /* SSESLIST_H_ */
