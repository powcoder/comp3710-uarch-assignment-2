https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef LOCKFREE_HASH_H
#define LOCKFREE_HASH_H

#include "fixed_types.h"
#include "basic_hash.h"

#include <map>
#include <utility>
#include <iostream>
#include <assert.h>

//#define DEBUG_LOCKFREE_HASH


class LockFreeHash : private BasicHash
{
   private:
      UInt64 bucket_size(UInt64 key);

   public:
      LockFreeHash(UInt64 size);
      ~LockFreeHash();

      std::pair<bool, UInt64> find(UInt64 key);
      bool insert(UInt64 key, UInt64 value);
};

#endif
