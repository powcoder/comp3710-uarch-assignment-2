https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "mmu_perf_model_base.h"
#include "mmu_perf_model.h"

#include "log.h"

MMUPerfModelBase* MMUPerfModelBase::createModel(UInt32 type)
{
   switch(type)
   {
      case(MMU_PERF_MODEL):
         return new MMUPerfModel();
            
      default:
         LOG_ASSERT_ERROR(false, "Unsupported MMUModel type: %u", type);
         return NULL;
   }
}
