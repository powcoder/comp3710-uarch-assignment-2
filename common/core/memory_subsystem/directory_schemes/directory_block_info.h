https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __DIRECTORY_BLOCK_INFO_H__
#define __DIRECTORY_BLOCK_INFO_H__

#include "directory_state.h"

class DirectoryBlockInfo
{
   private:
      DirectoryState::dstate_t m_dstate;

   public:
      DirectoryBlockInfo(
            DirectoryState::dstate_t dstate = DirectoryState::UNCACHED):
         m_dstate(dstate)
      {}
      ~DirectoryBlockInfo() {}

      DirectoryState::dstate_t getDState() { return m_dstate; }
      void setDState(DirectoryState::dstate_t dstate) { m_dstate = dstate; }


};

#endif /* __DIRECTORY_BLOCK_INFO_H__ */
