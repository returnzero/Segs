/*
 * SEGS - Super Entity Game Server
 * http://www.segs.io/
 * Copyright (c) 2006 - 2018 SEGS Team (see AUTHORS.md)
 * This software is licensed under the terms of the 3-clause BSD License. See LICENSE.md for details.
 */

/*!
 * @addtogroup Components
 * @{
 */

#include "SEGSEvent.h"

SEGSEvent SEGSEvent::s_ev_finish(SEGS_EventTypes::evFinish,nullptr);

const char *SEGSEvent::info()
{
    return typeid(*this).name();
}

//! @}
