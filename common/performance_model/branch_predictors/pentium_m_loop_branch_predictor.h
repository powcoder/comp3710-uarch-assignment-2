https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef PENTIUM_M_LOOP_BRANCH_PREDICTOR
#define PENTIUM_M_LOOP_BRANCH_PREDICTOR

#include "lpb.h"

class PentiumMLoopBranchPredictor : public LoopBranchPredictor
{

public:

   // 128 entries
   // 6 bit tag
   // 2 ways
   PentiumMLoopBranchPredictor()
      : LoopBranchPredictor(128, 6, 2)
   {}

};

#endif /* PENTIUM_M_LOOP_BRANCH_PREDICTOR */
