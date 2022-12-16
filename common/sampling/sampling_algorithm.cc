https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "sampling_algorithm.h"
#include "simulator.h"
#include "config.hpp"
#include "log.h"
#include "periodic_sampling.h"

SamplingAlgorithm*
SamplingAlgorithm::create(SamplingManager *sampling_manager)
{
   String sampling_algorithm = Sim()->getCfg()->getString("sampling/algorithm");
   if (sampling_algorithm == "periodic")
   {
      return new PeriodicSampling(sampling_manager);
   }
   else
   {
      LOG_PRINT_ERROR("Unexpected sampling algorithm '%s'", sampling_algorithm.c_str());
   }
}
