#pragma once
#include <ace/Task_Ex_T.h>
#include "SEGSEvent.h"
// Independent Task, each EventProcessor when activate'd dequeues SEGSEvents, and dispatch'es them
class EventProcessor : public ACE_Task_Ex<ACE_MT_SYNCH,SEGSEvent>
{
typedef ACE_Task_Ex<ACE_MT_SYNCH,SEGSEvent> super;

		EventProcessor *	m_target;
public:
		int					open(void *args /* = 0 */);
		int					handle_timeout(const ACE_Time_Value &current_time, const void *act /* = 0 */);
		int					svc(void);
virtual	void				dispatch(SEGSEvent *ev)=0;
};
