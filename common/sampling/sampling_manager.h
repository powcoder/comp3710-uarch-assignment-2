https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef SAMPLING_MANAGER_H
#define SAMPLING_MANAGER_H

#include "fixed_types.h"
#include "subsecond_time.h"
#include "sampling_algorithm.h"
#include "inst_mode.h"

#include <vector>
#include <boost/tuple/tuple.hpp>

class Core;
class SamplingProvider;

class SamplingManager
{
   private:
      bool m_sampling_enabled;
      bool m_uncoordinated;

      bool m_fastforward;
      bool m_warmup;
      SubsecondTime m_target_ffend;

      SamplingProvider *m_sampling_provider;
      SamplingAlgorithm *m_sampling_algorithm;

      std::vector<UInt64> m_instructions;
      std::vector<SubsecondTime> m_time_total;
      std::vector<SubsecondTime> m_time_nonidle;

      void setInstrumentationMode(InstMode::inst_mode_t mode);
      void periodic(SubsecondTime time);
      void instr_count(core_id_t core_id);

      static int64_t hook_instr_count(uint64_t self, uint64_t core_id) { reinterpret_cast<SamplingManager *>(self)->instr_count(static_cast<core_id_t>(core_id)); return 0; }
      static int64_t hook_periodic(uint64_t self, uint64_t time) { subsecond_time_t t; t.m_time = time; reinterpret_cast<SamplingManager *>(self)->periodic(t); return 0; }

   protected:
      friend class FastforwardPerformanceModel;

      void recalibrateInstructionsCallback(core_id_t core_id);

   public:
      SamplingManager();
      ~SamplingManager();

      // To be called by SamplingAlgorithm
      void enableFastForward(SubsecondTime until, bool warmup, bool detailed_sync);
      void disableFastForward();

      SamplingProvider* getSamplingProvider() { return m_sampling_provider; };

      SubsecondTime getCoreHistoricCPI(Core *core, bool non_idle, SubsecondTime min_nonidle_time) const;
      void resetCoreHistoricCPIs();
};

#endif // SAMPLING_MANAGER_H
