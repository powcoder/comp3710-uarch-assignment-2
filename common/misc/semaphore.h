https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __SEMAPHORE_H__
#define __SEMAPHORE_H__

#include "lock.h"

class Semaphore
{
   private:
      int _count;
      int _numWaiting;
      int _futx;
      Lock _lock;

   public:
      Semaphore(int count);
      Semaphore();
      ~Semaphore();

      void wait();
      void signal();
      void broadcast();
};

#endif



