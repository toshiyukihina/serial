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

#ifndef MOATPLUGIN_H_
#define MOATPLUGIN_H_

SSE_BEGIN_C_DECLS

typedef sse_int (*MoatPluginOnLoadProc)(Moat in_moat);
typedef void (*MoatPluginOnUnloadProc)(Moat in_moat);

SSE_END_C_DECLS

#endif /* MOATPLUGIN_H_ */
