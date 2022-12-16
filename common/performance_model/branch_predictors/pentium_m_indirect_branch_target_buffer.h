https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef PENTIUM_M_INDIRECT_BRANCH_TARGET_BUFFER
#define PENTIUM_M_INDIRECT_BRANCH_TARGET_BUFFER

#include "ibtb.h"

class PentiumMIndirectBranchTargetBuffer
   : public IndirectBranchTargetBuffer
{

public:

   // The Pentium M Indirect Branch Target Buffer (iBTB)
   // 256 entries
   // 7-bit tag
   PentiumMIndirectBranchTargetBuffer()
      : IndirectBranchTargetBuffer(256)
   {}

};

#endif /* PENTIUM_M_INDIRECT_BRANCH_TARGET_BUFFER */

