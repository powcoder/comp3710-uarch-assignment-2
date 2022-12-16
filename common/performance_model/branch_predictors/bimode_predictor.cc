https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "simulator.h"
#include "bimode_predictor.h"

BiModePredictor::BiModePredictor(String name, core_id_t core_id)
   : BranchPredictor(name, core_id)
{
}

bool BiModePredictor::predict(bool indirect, IntPtr ip, IntPtr target)
{
   return false;
}

void BiModePredictor::update(bool predicted, bool actual, bool indirect, IntPtr ip, IntPtr target)
{
   updateCounters(predicted, actual);
}
