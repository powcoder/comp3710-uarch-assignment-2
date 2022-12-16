https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "simulator.h"
#include "perceptron_predictor.h"

PerceptronPredictor::PerceptronPredictor(String name, core_id_t core_id)
   : BranchPredictor(name, core_id)
{
}

bool PerceptronPredictor::predict(bool indirect, IntPtr ip, IntPtr target)
{
   return false;
}

void PerceptronPredictor::update(bool predicted, bool actual, bool indirect, IntPtr ip, IntPtr target)
{
   updateCounters(predicted, actual);
}
