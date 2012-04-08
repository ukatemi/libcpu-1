/*
 * libcpu: i386_tcond.cpp
 */

#include <llvm/Instructions.h>

#include "i386_arch.h"
#include "i386_disasm.h"
#include "libcpu/libcpu_llvm.h"

llvm::Value *
arch_i386_translate_cond(cpu_t *cpu, addr_t pc, llvm::BasicBlock *bb)
{
	MCInst insn;
	insn = DecodeInstruction(cpu, pc, NULL);

	/*
	switch (insn.opcode) {
		case ARCH_I386_OPC_ILLEGAL:
			assert(0 && "Illegal opcode while translating");
			return 0;

		default:
			break;
	}
	*/

	return 0;
}
