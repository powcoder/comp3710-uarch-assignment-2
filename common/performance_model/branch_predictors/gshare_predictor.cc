https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "simulator.h"
#include "gshare_predictor.h"

GsharePredictor::GsharePredictor(String name, core_id_t core_id)
   : BranchPredictor(name, core_id)
{
}

bool GsharePredictor::predict(bool indirect, IntPtr ip, IntPtr target)
{
   return false;
}

void GsharePredictor::update(bool predicted, bool actual, bool indirect, IntPtr ip, IntPtr target)
{
   updateCounters(predicted, actual);
}
