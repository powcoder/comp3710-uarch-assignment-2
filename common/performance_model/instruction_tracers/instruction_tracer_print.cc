https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "instruction_tracer_print.h"
#include "core.h"
#include "dynamic_micro_op.h"

void InstructionTracerPrint::traceInstruction(const DynamicMicroOp *uop, uop_times_t *times)
{
   std::cout << "[INS_PRINT:" << m_core->getId() << "] " << Sim()->getDecoder()->inst_name(uop->getMicroOp()->getInstructionOpcode()) << std::endl;;
}
