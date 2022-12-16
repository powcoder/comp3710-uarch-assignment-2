https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef BRANCH_TARGET_BUFFER_H
#define BRANCH_TARGET_BUFFER_H

#include "branch_predictor.h"

class BranchTargetBuffer : BranchPredictor
{

   bool predict(bool indirect, IntPtr ip, IntPtr target)
   {
      return false;
   }

   BranchPredictorReturnValue lookup(IntPtr ip, IntPtr target)
   {

      BranchPredictorReturnValue ret = { 0, 0, 0, BranchPredictorReturnValue::InvalidBranch };

      return ret;

   }

   void update(bool predicted, bool actual, bool indirect, IntPtr ip, IntPtr target)
   {
   }

};

#endif /* BRANCH_TARGET_BUFFER_H */
