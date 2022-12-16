https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "core.h"
#include "simulator.h"
#include "core_manager.h"
#include "subsecond_time.h"

#include <iostream>

std::ostream &operator<<(std::ostream &os, const SubsecondTime &time)
{
#ifdef SUBSECOND_TIME_SIMPLE_OSTREAM
   return os << time.m_time;
#else
   return os << "T:" << time.m_time;
#endif
}

