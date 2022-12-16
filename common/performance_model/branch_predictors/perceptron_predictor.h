https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef PERCEPTRON_PREDICTOR_H
#define PERCEPTRON_PREDICTOR_H

#include "branch_predictor.h"

class PerceptronPredictor : public BranchPredictor
{
public:
   PerceptronPredictor(String name, core_id_t core_id);

   virtual bool predict(bool indirect, IntPtr ip, IntPtr target) override;

   virtual void update(bool predicted, bool actual, bool indirect, IntPtr ip, IntPtr target) override;
};

#endif
