https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __INSTR_COUNT_SAMPLING
#define __INSTR_COUNT_SAMPLING

#include "sampling_provider.h"

class InstrCountSampling : public SamplingProvider
{
public:
   virtual void startSampling(SubsecondTime until)
   {}
   virtual InstrumentLevel::Level requestedInstrumentation()
   {
      return InstrumentLevel::INSTR;
   }
};

#endif /* __INSTR_COUNT_SAMPLING */
