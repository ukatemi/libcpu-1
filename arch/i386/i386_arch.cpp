/*
 * libcpu: i386_arch.cpp
 * 
 * !!! DO NOT EDIT THIS FILE !!!
 * 
 * THIS FILE HAS BEEN AUTOMATICALLY GENERATED BY UPCC
 */

#include "i386_arch.h"

// Register File Layout
static cpu_register_layout_t const arch_i386_register_layout[] = {
	{ CPU_REGTYPE_INT, 16, 16, 0, 0, "cs" },
	{ CPU_REGTYPE_INT, 16, 16, 2, 0, "cw" },
	{ CPU_REGTYPE_INT, 16, 16, 4, 0, "ds" },
	{ CPU_REGTYPE_INT, 32, 32, 8, 0, "eax" },
	{ CPU_REGTYPE_INT, 32, 32, 12, 0, "ebp" },
	{ CPU_REGTYPE_INT, 32, 32, 16, 0, "ebx" },
	{ CPU_REGTYPE_INT, 32, 32, 20, 0, "ecx" },
	{ CPU_REGTYPE_INT, 32, 32, 24, 0, "edi" },
	{ CPU_REGTYPE_INT, 32, 32, 28, 0, "edx" },
	{ CPU_REGTYPE_INT, 32, 32, 32, CPU_REGFLAG_PSR, "eflags" },
	{ CPU_REGTYPE_INT, 16, 16, 36, 0, "es" },
	{ CPU_REGTYPE_INT, 32, 32, 40, 0, "esi" },
	{ CPU_REGTYPE_INT, 32, 32, 44, 0, "esp" },
	{ CPU_REGTYPE_INT, 8, 8, 48, 0, "intno" },
	{ CPU_REGTYPE_INT, 48, 64, 56, CPU_REGFLAG_PC, "pc" },
	{ CPU_REGTYPE_INT, 16, 16, 64, 0, "ss" },
	{ CPU_REGTYPE_INT, 80, 128, 80, 0, "st_mmx0" },
	{ CPU_REGTYPE_INT, 80, 128, 96, 0, "st_mmx1" },
	{ CPU_REGTYPE_INT, 80, 128, 112, 0, "st_mmx2" },
	{ CPU_REGTYPE_INT, 80, 128, 128, 0, "st_mmx3" },
	{ CPU_REGTYPE_INT, 80, 128, 144, 0, "st_mmx4" },
	{ CPU_REGTYPE_INT, 80, 128, 160, 0, "st_mmx5" },
	{ CPU_REGTYPE_INT, 80, 128, 176, 0, "st_mmx6" },
	{ CPU_REGTYPE_INT, 80, 128, 192, 0, "st_mmx7" },
	{ CPU_REGTYPE_INT, 16, 16, 208, 0, "sw" },
	{ 0, 0, 0, 0, 0, NULL }

};

// Processor Status Register Flags Layout
static cpu_flags_layout_t const arch_i386_flags_layout[] = {
	{ 0, CPU_FLAGTYPE_CARRY, "C" },
	{ 2, CPU_FLAGTYPE_PARITY, "P" },
	{ 4, CPU_FLAGTYPE_NONE, "A" },
	{ 6, CPU_FLAGTYPE_ZERO, "Z" },
	{ 7, CPU_FLAGTYPE_NEGATIVE, "S" },
	{ 8, CPU_FLAGTYPE_NONE, "T" },
	{ 9, CPU_FLAGTYPE_NONE, "I" },
	{ 10, CPU_FLAGTYPE_NONE, "D" },
	{ 11, CPU_FLAGTYPE_OVERFLOW, "O" },
	{ -1, 0, NULL }
};

// Architecture Initalization
static void
arch_i386_init(cpu_t *, cpu_archinfo_t *info, cpu_archrf_t *rf)
{
	reg_i386_t *register_file = NULL;

	// Architecture definition
	info->name = "i386";
	info->full_name = "Intel 80386";
	info->common_flags = CPU_FLAG_ENDIAN_LITTLE;
	info->byte_size = 8;
	info->word_size = 16;
	info->address_size = 24;
	info->psr_size = 32;
	info->register_layout = arch_i386_register_layout;
	info->register_count2 = 25;
	info->flags_layout = arch_i386_flags_layout;
	info->flags_count = 2;

	// Register file initialization
	register_file = (reg_i386_t *)calloc(1, sizeof(reg_i386_t));
	assert(register_file != NULL);
	rf->storage = register_file;
	
	// This crap is supposed to be deprecated, but it's required
	info->register_size[CPU_REG_GPR] = 32;
	info->register_count[CPU_REG_GPR] = 8;
	info->register_size[CPU_REG_XR] = 32;
	info->register_count[CPU_REG_XR] = 1;
}

// Architecture Finalization
static void
arch_i386_done(cpu_t *cpu)
{
	free(cpu->rf.storage);
}

// Architecture Callbacks
arch_func_t const arch_func_i386 = {
	arch_i386_init,
	arch_i386_done,
	NULL, /* get_pc */
	NULL, /* emit_decode_reg */
	NULL, /* spill_reg_state */
	arch_i386_tag_instr,
	arch_i386_disasm_instr,
	arch_i386_translate_cond,
	/*arch_i386_translate_instr*/ NULL,
	/* idbg support */
	NULL, /* get_psr */
	NULL, /* get_reg */
	NULL  /* get_fpreg */
};

