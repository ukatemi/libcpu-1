/*
 * libcpu: x86_isa.h
 *
 * instruction decoding (shared by diassembler and translator)
 */

#ifndef X86_ISA_H
#define X86_ISA_H

/*
 * 8086 instruction set. See the following URL for further information:

 * http://www.emu8086.com/assembly_language_tutorial_assembler_reference/8086_instruction_set.html
 */
enum x86_instr_types {
	INSTR_AAA,
	INSTR_AAD,
	INSTR_AAM,
	INSTR_AAS,
	INSTR_ADC,
	INSTR_ADD,
	INSTR_AND,
	INSTR_CALL,
	INSTR_CBW,
	INSTR_CLC,
	INSTR_CLD,
	INSTR_CLI,
	INSTR_CMC,
	INSTR_CMP,
	INSTR_CMPSB,
	INSTR_CMPSW,
	INSTR_CWD,
	INSTR_DAA,
	INSTR_DAS,
	INSTR_DEC,
	INSTR_DIV,
	INSTR_HLT,
	INSTR_IDIV,
	INSTR_IMUL,
	INSTR_IN,
	INSTR_INC,
	INSTR_INT,
	INSTR_INTO,
	INSTR_IRET,
	INSTR_JA,
	INSTR_JAE,
	INSTR_JB,
	INSTR_JBE,
	INSTR_JC,
	INSTR_JCXZ,
	INSTR_JE,
	INSTR_JG,
	INSTR_JGE,
	INSTR_JL,
	INSTR_JLE,
	INSTR_JMP,
	INSTR_JNA,
	INSTR_JNAE,
	INSTR_JNB,
	INSTR_JNBE,
	INSTR_JNC,
	INSTR_JNE,
	INSTR_JNG,
	INSTR_JNGE,
	INSTR_JNL,
	INSTR_JNLE,
	INSTR_JNO,
	INSTR_JNP,
	INSTR_JNS,
	INSTR_JNZ,
	INSTR_JO,
	INSTR_JP,
	INSTR_JPE,
	INSTR_JPO,
	INSTR_JS,
	INSTR_JZ,
	INSTR_LAHF,
	INSTR_LDS,
	INSTR_LEA,
	INSTR_LES,
	INSTR_LODSB,
	INSTR_LODSW,
	INSTR_LOOP,
	INSTR_LOOPE,
	INSTR_LOOPNE,
	INSTR_LOOPNZ,
	INSTR_LOOPZ,
	INSTR_MOV,
	INSTR_MOVSB,
	INSTR_MOVSW,
	INSTR_MUL,
	INSTR_NEG,
	INSTR_NOP,
	INSTR_NOT,
	INSTR_OR,
	INSTR_OUT,
	INSTR_POP,
	INSTR_POPA,
	INSTR_POPF,
	INSTR_PUSH,
	INSTR_PUSHA,
	INSTR_PUSHF,
	INSTR_RCL,
	INSTR_RCR,
	INSTR_REP,
	INSTR_REPE,
	INSTR_REPNE,
	INSTR_REPNZ,
	INSTR_REPZ,
	INSTR_RET,
	INSTR_RETF,
	INSTR_ROL,
	INSTR_ROR,
	INSTR_SAHF,
	INSTR_SAL,
	INSTR_SAR,
	INSTR_SBB,
	INSTR_SCASB,
	INSTR_SCASW,
	INSTR_SHL,
	INSTR_SHR,
	INSTR_STC,
	INSTR_STD,
	INSTR_STI,
	INSTR_STOSB,
	INSTR_STOSW,
	INSTR_SUB,
	INSTR_TEST,
	INSTR_XCHG,
	INSTR_XLATB,
	INSTR_XOR,
};

#endif /* X86_ISA_H */
