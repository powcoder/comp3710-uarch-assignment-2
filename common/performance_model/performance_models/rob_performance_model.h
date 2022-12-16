https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef ROB_PERFORMANCE_MODEL_H
#define ROB_PERFORMANCE_MODEL_H

#include "micro_op_performance_model.h"
#include "rob_timer.h"

class RobPerformanceModel : public MicroOpPerformanceModel
{
public:
   RobPerformanceModel(Core *core);
   ~RobPerformanceModel();
protected:
   virtual boost::tuple<uint64_t,uint64_t> simulate(const std::vector<DynamicMicroOp*>& insts);
   virtual void notifyElapsedTimeUpdate();
private:
   RobTimer rob_timer;
};

#endif
