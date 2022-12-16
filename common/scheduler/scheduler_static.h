https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __SCHEDULER_STATIC_H
#define __SCHEDULER_STATIC_H

#include "scheduler.h"

#include <vector>

class SchedulerStatic : public Scheduler
{
   public:
      SchedulerStatic(ThreadManager *thread_manager);

      core_id_t threadCreate(thread_id_t);

   private:
      std::vector<bool> m_core_mask;
      core_id_t findFirstFreeMaskedCore();
};

#endif // __SCHEDULER_STATIC_H
