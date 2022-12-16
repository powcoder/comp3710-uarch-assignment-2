https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __PR_L1_CACHE_BLOCK_INFO_H__
#define __PR_L1_CACHE_BLOCK_INFO_H__

#include "cache_state.h"
#include "cache_block_info.h"

class PrL1CacheBlockInfo : public CacheBlockInfo
{
   public:
      PrL1CacheBlockInfo(IntPtr tag = ~0,
            CacheState::cstate_t cstate = CacheState::INVALID):
         CacheBlockInfo(tag, cstate)
      {}

      ~PrL1CacheBlockInfo() {}
};
#endif /* __PR_L1_CACHE_BLOCK_INFO_H__ */
