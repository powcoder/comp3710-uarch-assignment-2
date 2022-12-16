https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef ONEIPC_PERFORMANCE_MODEL_H
#define ONEIPC_PERFORMANCE_MODEL_H

#include "performance_model.h"

class OneIPCPerformanceModel : public PerformanceModel
{
public:
   OneIPCPerformanceModel(Core *core);
   ~OneIPCPerformanceModel();

private:
   void handleInstruction(DynamicInstruction *instruction);

   bool isModeled(Instruction const* instruction) const;

   UInt64 m_latency_cutoff;

   SubsecondTime m_cpiBase;
   SubsecondTime m_cpiBranchPredictor;
   std::vector<SubsecondTime> m_cpiDataCache;
};

#endif // ONEIPC_PERFORMANCE_MODEL_H
