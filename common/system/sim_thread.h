https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef SIM_THREAD_H
#define SIM_THREAD_H

#include "_thread.h"
#include "fixed_types.h"
#include "network.h"

class SimThread : public Runnable
{
public:
   SimThread();
   ~SimThread();

   void spawn();

private:
   void run();

   static void terminateFunc(void *vp, NetPacket pkt);

   _Thread *m_thread;
};

#endif // SIM_THREAD_H
