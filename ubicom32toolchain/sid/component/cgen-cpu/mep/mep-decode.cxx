/* Simulator instruction decoder for mep.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2005 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#if HAVE_CONFIG_H
#include "config.h"
#endif
#include "mep_basic.h"

using namespace mep_basic; // FIXME: namespace organization still wip


// The instruction descriptor array. 

mep_idesc mep_idesc::idesc_table[MEP_INSN_RI_19 + 1] =
{
  { mep_sem_x_invalid, "X_INVALID", MEP_INSN_X_INVALID, { 0|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), { 1, "\x80" }, 0, CONFIG_NONE } },
  { mep_sem_sb, "SB", MEP_INSN_SB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sh, "SH", MEP_INSN_SH, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sw, "SW", MEP_INSN_SW, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lb, "LB", MEP_INSN_LB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lh, "LH", MEP_INSN_LH, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lw, "LW", MEP_INSN_LW, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lbu, "LBU", MEP_INSN_LBU, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lhu, "LHU", MEP_INSN_LHU, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_sw_sp, "SW_SP", MEP_INSN_SW_SP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lw_sp, "LW_SP", MEP_INSN_LW_SP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_sb_tp, "SB_TP", MEP_INSN_SB_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sh_tp, "SH_TP", MEP_INSN_SH_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sw_tp, "SW_TP", MEP_INSN_SW_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lb_tp, "LB_TP", MEP_INSN_LB_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lh_tp, "LH_TP", MEP_INSN_LH_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lw_tp, "LW_TP", MEP_INSN_LW_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lbu_tp, "LBU_TP", MEP_INSN_LBU_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lhu_tp, "LHU_TP", MEP_INSN_LHU_TP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_sb16, "SB16", MEP_INSN_SB16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sh16, "SH16", MEP_INSN_SH16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sw16, "SW16", MEP_INSN_SW16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lb16, "LB16", MEP_INSN_LB16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lh16, "LH16", MEP_INSN_LH16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lw16, "LW16", MEP_INSN_LW16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lbu16, "LBU16", MEP_INSN_LBU16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_lhu16, "LHU16", MEP_INSN_LHU16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_sw24, "SW24", MEP_INSN_SW24, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lw24, "LW24", MEP_INSN_LW24, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_extb, "EXTB", MEP_INSN_EXTB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_exth, "EXTH", MEP_INSN_EXTH, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_extub, "EXTUB", MEP_INSN_EXTUB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_extuh, "EXTUH", MEP_INSN_EXTUH, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ssarb, "SSARB", MEP_INSN_SSARB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_mov, "MOV", MEP_INSN_MOV, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_movi8, "MOVI8", MEP_INSN_MOVI8, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_movi16, "MOVI16", MEP_INSN_MOVI16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_movu24, "MOVU24", MEP_INSN_MOVU24, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_movu16, "MOVU16", MEP_INSN_MOVU16, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_movh, "MOVH", MEP_INSN_MOVH, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_add3, "ADD3", MEP_INSN_ADD3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_add, "ADD", MEP_INSN_ADD, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_add3i, "ADD3I", MEP_INSN_ADD3I, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_advck3, "ADVCK3", MEP_INSN_ADVCK3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sub, "SUB", MEP_INSN_SUB, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sbvck3, "SBVCK3", MEP_INSN_SBVCK3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_neg, "NEG", MEP_INSN_NEG, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_slt3, "SLT3", MEP_INSN_SLT3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sltu3, "SLTU3", MEP_INSN_SLTU3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_slt3i, "SLT3I", MEP_INSN_SLT3I, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sltu3i, "SLTU3I", MEP_INSN_SLTU3I, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sl1ad3, "SL1AD3", MEP_INSN_SL1AD3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sl2ad3, "SL2AD3", MEP_INSN_SL2AD3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_add3x, "ADD3X", MEP_INSN_ADD3X, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_slt3x, "SLT3X", MEP_INSN_SLT3X, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sltu3x, "SLTU3X", MEP_INSN_SLTU3X, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_or, "OR", MEP_INSN_OR, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_and, "AND", MEP_INSN_AND, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_xor, "XOR", MEP_INSN_XOR, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_nor, "NOR", MEP_INSN_NOR, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_or3, "OR3", MEP_INSN_OR3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_and3, "AND3", MEP_INSN_AND3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_xor3, "XOR3", MEP_INSN_XOR3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sra, "SRA", MEP_INSN_SRA, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_srl, "SRL", MEP_INSN_SRL, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sll, "SLL", MEP_INSN_SLL, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_srai, "SRAI", MEP_INSN_SRAI, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_srli, "SRLI", MEP_INSN_SRLI, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_slli, "SLLI", MEP_INSN_SLLI, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sll3, "SLL3", MEP_INSN_SLL3, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_fsft, "FSFT", MEP_INSN_FSFT, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bra, "BRA", MEP_INSN_BRA, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_beqz, "BEQZ", MEP_INSN_BEQZ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bnez, "BNEZ", MEP_INSN_BNEZ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_beqi, "BEQI", MEP_INSN_BEQI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bnei, "BNEI", MEP_INSN_BNEI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_blti, "BLTI", MEP_INSN_BLTI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bgei, "BGEI", MEP_INSN_BGEI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_beq, "BEQ", MEP_INSN_BEQ, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bne, "BNE", MEP_INSN_BNE, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bsr12, "BSR12", MEP_INSN_BSR12, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bsr24, "BSR24", MEP_INSN_BSR24, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_jmp, "JMP", MEP_INSN_JMP, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_jmp24, "JMP24", MEP_INSN_JMP24, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_jsr, "JSR", MEP_INSN_JSR, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ret, "RET", MEP_INSN_RET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_repeat, "REPEAT", MEP_INSN_REPEAT, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_erepeat, "EREPEAT", MEP_INSN_EREPEAT, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_stc_lp, "STC_LP", MEP_INSN_STC_LP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_stc_hi, "STC_HI", MEP_INSN_STC_HI, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_stc_lo, "STC_LO", MEP_INSN_STC_LO, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_stc, "STC", MEP_INSN_STC, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldc_lp, "LDC_LP", MEP_INSN_LDC_LP, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldc_hi, "LDC_HI", MEP_INSN_LDC_HI, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldc_lo, "LDC_LO", MEP_INSN_LDC_LO, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldc, "LDC", MEP_INSN_LDC, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 2, CONFIG_NONE } },
  { mep_sem_di, "DI", MEP_INSN_DI, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ei, "EI", MEP_INSN_EI, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_reti, "RETI", MEP_INSN_RETI, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_halt, "HALT", MEP_INSN_HALT, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sleep, "SLEEP", MEP_INSN_SLEEP, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swi, "SWI", MEP_INSN_SWI, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_break, "BREAK", MEP_INSN_BREAK, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_syncm, "SYNCM", MEP_INSN_SYNCM, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_stcb, "STCB", MEP_INSN_STCB, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldcb, "LDCB", MEP_INSN_LDCB, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 3, CONFIG_NONE } },
  { mep_sem_bsetm, "BSETM", MEP_INSN_BSETM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bclrm, "BCLRM", MEP_INSN_BCLRM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bnotm, "BNOTM", MEP_INSN_BNOTM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_btstm, "BTSTM", MEP_INSN_BTSTM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_tas, "TAS", MEP_INSN_TAS, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_cache, "CACHE", MEP_INSN_CACHE, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_mul, "MUL", MEP_INSN_MUL, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_mulu, "MULU", MEP_INSN_MULU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_mulr, "MULR", MEP_INSN_MULR, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 3, CONFIG_NONE } },
  { mep_sem_mulru, "MULRU", MEP_INSN_MULRU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 3, CONFIG_NONE } },
  { mep_sem_madd, "MADD", MEP_INSN_MADD, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_maddu, "MADDU", MEP_INSN_MADDU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_maddr, "MADDR", MEP_INSN_MADDR, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 3, CONFIG_NONE } },
  { mep_sem_maddru, "MADDRU", MEP_INSN_MADDRU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 3, CONFIG_NONE } },
  { mep_sem_div, "DIV", MEP_INSN_DIV, { 0|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DIV_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 34, CONFIG_NONE } },
  { mep_sem_divu, "DIVU", MEP_INSN_DIVU, { 0|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DIV_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 34, CONFIG_NONE } },
  { mep_sem_dret, "DRET", MEP_INSN_DRET, { 0|(1<<CGEN_INSN_OPTIONAL_DEBUG_INSN)|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_dbreak, "DBREAK", MEP_INSN_DBREAK, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DEBUG_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ldz, "LDZ", MEP_INSN_LDZ, { 0|(1<<CGEN_INSN_OPTIONAL_LDZ_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_abs, "ABS", MEP_INSN_ABS, { 0|(1<<CGEN_INSN_OPTIONAL_ABS_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ave, "AVE", MEP_INSN_AVE, { 0|(1<<CGEN_INSN_OPTIONAL_AVE_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_min, "MIN", MEP_INSN_MIN, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_max, "MAX", MEP_INSN_MAX, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_minu, "MINU", MEP_INSN_MINU, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_maxu, "MAXU", MEP_INSN_MAXU, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_clip, "CLIP", MEP_INSN_CLIP, { 0|(1<<CGEN_INSN_OPTIONAL_CLIP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_clipu, "CLIPU", MEP_INSN_CLIPU, { 0|(1<<CGEN_INSN_OPTIONAL_CLIP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sadd, "SADD", MEP_INSN_SADD, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ssub, "SSUB", MEP_INSN_SSUB, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_saddu, "SADDU", MEP_INSN_SADDU, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ssubu, "SSUBU", MEP_INSN_SSUBU, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcp, "SWCP", MEP_INSN_SWCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcp, "LWCP", MEP_INSN_LWCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcp, "SMCP", MEP_INSN_SMCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcp, "LMCP", MEP_INSN_LMCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcpi, "SWCPI", MEP_INSN_SWCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcpi, "LWCPI", MEP_INSN_LWCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcpi, "SMCPI", MEP_INSN_SMCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcpi, "LMCPI", MEP_INSN_LMCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcp16, "SWCP16", MEP_INSN_SWCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcp16, "LWCP16", MEP_INSN_LWCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcp16, "SMCP16", MEP_INSN_SMCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcp16, "LMCP16", MEP_INSN_LMCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sbcpa, "SBCPA", MEP_INSN_SBCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lbcpa, "LBCPA", MEP_INSN_LBCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_shcpa, "SHCPA", MEP_INSN_SHCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lhcpa, "LHCPA", MEP_INSN_LHCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcpa, "SWCPA", MEP_INSN_SWCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcpa, "LWCPA", MEP_INSN_LWCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcpa, "SMCPA", MEP_INSN_SMCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcpa, "LMCPA", MEP_INSN_LMCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sbcpm0, "SBCPM0", MEP_INSN_SBCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lbcpm0, "LBCPM0", MEP_INSN_LBCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_shcpm0, "SHCPM0", MEP_INSN_SHCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lhcpm0, "LHCPM0", MEP_INSN_LHCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcpm0, "SWCPM0", MEP_INSN_SWCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcpm0, "LWCPM0", MEP_INSN_LWCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcpm0, "SMCPM0", MEP_INSN_SMCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcpm0, "LMCPM0", MEP_INSN_LMCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sbcpm1, "SBCPM1", MEP_INSN_SBCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lbcpm1, "LBCPM1", MEP_INSN_LBCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_shcpm1, "SHCPM1", MEP_INSN_SHCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lhcpm1, "LHCPM1", MEP_INSN_LHCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_swcpm1, "SWCPM1", MEP_INSN_SWCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lwcpm1, "LWCPM1", MEP_INSN_LWCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_smcpm1, "SMCPM1", MEP_INSN_SMCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_lmcpm1, "LMCPM1", MEP_INSN_LMCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bcpeq, "BCPEQ", MEP_INSN_BCPEQ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bcpne, "BCPNE", MEP_INSN_BCPNE, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bcpat, "BCPAT", MEP_INSN_BCPAT, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bcpaf, "BCPAF", MEP_INSN_BCPAF, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_synccp, "SYNCCP", MEP_INSN_SYNCCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_jsrv, "JSRV", MEP_INSN_JSRV, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_bsrv, "BSRV", MEP_INSN_BSRV, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_sim_syscall, "SIM_SYSCALL", MEP_INSN_SIM_SYSCALL, { 0, (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_0, "RI_0", MEP_INSN_RI_0, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_1, "RI_1", MEP_INSN_RI_1, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_2, "RI_2", MEP_INSN_RI_2, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_3, "RI_3", MEP_INSN_RI_3, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_4, "RI_4", MEP_INSN_RI_4, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_5, "RI_5", MEP_INSN_RI_5, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_6, "RI_6", MEP_INSN_RI_6, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_7, "RI_7", MEP_INSN_RI_7, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_8, "RI_8", MEP_INSN_RI_8, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_9, "RI_9", MEP_INSN_RI_9, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_10, "RI_10", MEP_INSN_RI_10, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_11, "RI_11", MEP_INSN_RI_11, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_12, "RI_12", MEP_INSN_RI_12, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_13, "RI_13", MEP_INSN_RI_13, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_14, "RI_14", MEP_INSN_RI_14, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_15, "RI_15", MEP_INSN_RI_15, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_17, "RI_17", MEP_INSN_RI_17, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_20, "RI_20", MEP_INSN_RI_20, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_21, "RI_21", MEP_INSN_RI_21, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_22, "RI_22", MEP_INSN_RI_22, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_23, "RI_23", MEP_INSN_RI_23, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_24, "RI_24", MEP_INSN_RI_24, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_25, "RI_25", MEP_INSN_RI_25, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_26, "RI_26", MEP_INSN_RI_26, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_16, "RI_16", MEP_INSN_RI_16, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_18, "RI_18", MEP_INSN_RI_18, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },
  { mep_sem_ri_19, "RI_19", MEP_INSN_RI_19, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xe0" }, 0, CONFIG_NONE } },

};

// Given a canonical virtual insn id, return the target specific one.

mep_insn_type
mep_idesc::lookup_virtual (virtual_insn_type vit)
{
  switch (vit)
    {
      case VIRTUAL_INSN_INVALID: return MEP_INSN_X_INVALID;
      case VIRTUAL_INSN_COND: return MEP_INSN_X_INVALID;
    }
  abort ();
}


// Declare extractor functions

static void
mep_extract_sfmt_empty (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sh (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sw (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lh (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lw (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sw_sp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lw_sp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sb_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sh_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sw_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lb_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lh_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lw_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbu_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhu_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sb16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sh16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sw16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lb16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lh16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lw16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sw24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lw24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_extb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_exth (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_extub (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ssarb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_mov (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_movi8 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_movi16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_movu24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_movu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_add3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_add (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_add3i (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_advck3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sub (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_slt3i (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sl1ad3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_add3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_slt3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sltu3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_or3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_srai (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sll3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_fsft (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_bra (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_beqz (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_beqi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_beq (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_bsr12 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_bsr24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_jmp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_jmp24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_jsr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ret (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_repeat (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_erepeat (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_stc_lp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_stc_hi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_stc_lo (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_stc (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ldc_lp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ldc_hi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ldc_lo (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ldc (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_di (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_reti (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_halt (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sleep (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_break (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_stcb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_bsetm (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_btstm (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_tas (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_cache (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_mul (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_mulr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_madd (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_maddr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_div (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_dret (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_dbreak (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_ldz (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_abs (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_min (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_clip (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_clipu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sbcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_shcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sbcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_shcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sbcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lbcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_shcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lhcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_swcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lwcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_smcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_lmcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_bcpeq (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_synccp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);
static void
mep_extract_sfmt_sim_syscall (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn);

// Fetch & decode instruction
void
mep_scache::decode (mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn)
{
  /* Result of decoder.  */
  MEP_INSN_TYPE itype;

  {
    mep_insn_word insn = base_insn;

    {
      unsigned int val = (((insn >> 24) & (15 << 4)) | ((insn >> 16) & (15 << 0)));
      switch (val)
      {
      case 0 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x0)
          { itype = MEP_INSN_MOV; mep_extract_sfmt_mov (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 1 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1)
          { itype = MEP_INSN_NEG; mep_extract_sfmt_mov (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 2 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2)
          { itype = MEP_INSN_SLT3; mep_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 3 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3)
          { itype = MEP_INSN_SLTU3; mep_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 4 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x4)
          { itype = MEP_INSN_SUB; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 5 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x5)
          { itype = MEP_INSN_SBVCK3; mep_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 6 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x6)
          { itype = MEP_INSN_RI_0; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 7 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7)
          { itype = MEP_INSN_ADVCK3; mep_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 8 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x8)
          { itype = MEP_INSN_SB; mep_extract_sfmt_sb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 9 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x9)
          { itype = MEP_INSN_SH; mep_extract_sfmt_sh (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 10 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xa)
          { itype = MEP_INSN_SW; mep_extract_sfmt_sw (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 11 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xb)
          { itype = MEP_INSN_LBU; mep_extract_sfmt_lbu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 12 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xc)
          { itype = MEP_INSN_LB; mep_extract_sfmt_lb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 13 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xd)
          { itype = MEP_INSN_LH; mep_extract_sfmt_lh (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 14 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xe)
          { itype = MEP_INSN_LW; mep_extract_sfmt_lw (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 15 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf)
          { itype = MEP_INSN_LHU; mep_extract_sfmt_lhu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 16 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1000)
          { itype = MEP_INSN_OR; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 17 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1001)
          { itype = MEP_INSN_AND; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 18 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1002)
          { itype = MEP_INSN_XOR; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 19 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1003)
          { itype = MEP_INSN_NOR; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 20 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1004)
          { itype = MEP_INSN_MUL; mep_extract_sfmt_mul (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 21 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1005)
          { itype = MEP_INSN_MULU; mep_extract_sfmt_mul (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 22 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1006)
          { itype = MEP_INSN_MULR; mep_extract_sfmt_mulr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 23 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1007)
          { itype = MEP_INSN_MULRU; mep_extract_sfmt_mulr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 24 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1008)
          { itype = MEP_INSN_DIV; mep_extract_sfmt_div (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 25 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1009)
          { itype = MEP_INSN_DIVU; mep_extract_sfmt_div (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 26 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x100a)
          { itype = MEP_INSN_RI_1; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 27 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x100b)
          { itype = MEP_INSN_RI_2; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 28 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xfc0f) == 0x100c)
          { itype = MEP_INSN_SSARB; mep_extract_sfmt_ssarb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 29 :
        {
          unsigned int val = (((insn >> 22) & (1 << 1)) | ((insn >> 21) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x100d)
              { itype = MEP_INSN_EXTB; mep_extract_sfmt_extb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x102d)
              { itype = MEP_INSN_EXTH; mep_extract_sfmt_exth (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x108d)
              { itype = MEP_INSN_EXTUB; mep_extract_sfmt_extub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x10ad)
              { itype = MEP_INSN_EXTUH; mep_extract_sfmt_extub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 30 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xff0f) == 0x100e)
          { itype = MEP_INSN_JMP; mep_extract_sfmt_jmp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 31 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xff0f) == 0x100f)
              { itype = MEP_INSN_JSR; mep_extract_sfmt_jsr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xff0f) == 0x180f)
              { itype = MEP_INSN_JSRV; mep_extract_sfmt_jsr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 32 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2000)
          { itype = MEP_INSN_BSETM; mep_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 33 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2001)
          { itype = MEP_INSN_BCLRM; mep_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 34 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2002)
          { itype = MEP_INSN_BNOTM; mep_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 35 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2003)
          { itype = MEP_INSN_BTSTM; mep_extract_sfmt_btstm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 36 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2004)
          { itype = MEP_INSN_TAS; mep_extract_sfmt_tas (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 37 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2005)
          { itype = MEP_INSN_RI_3; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 38 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2006)
          { itype = MEP_INSN_SL1AD3; mep_extract_sfmt_sl1ad3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 39 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2007)
          { itype = MEP_INSN_SL2AD3; mep_extract_sfmt_sl1ad3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 40 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2008)
          { itype = MEP_INSN_RI_4; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 41 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2009)
          { itype = MEP_INSN_RI_5; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 42 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200a)
          { itype = MEP_INSN_RI_6; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 43 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200b)
          { itype = MEP_INSN_RI_7; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 44 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200c)
          { itype = MEP_INSN_SRL; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 45 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200d)
          { itype = MEP_INSN_SRA; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 46 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200e)
          { itype = MEP_INSN_SLL; mep_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 47 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200f)
          { itype = MEP_INSN_FSFT; mep_extract_sfmt_fsft (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 48 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3000)
          { itype = MEP_INSN_SWCPI; mep_extract_sfmt_swcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 49 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3001)
          { itype = MEP_INSN_LWCPI; mep_extract_sfmt_lwcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 50 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3002)
          { itype = MEP_INSN_SMCPI; mep_extract_sfmt_smcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 51 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3003)
          { itype = MEP_INSN_LMCPI; mep_extract_sfmt_lmcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 52 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3004)
          { itype = MEP_INSN_RI_8; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 53 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3005)
          { itype = MEP_INSN_RI_9; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 54 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3006)
          { itype = MEP_INSN_RI_10; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 55 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3007)
          { itype = MEP_INSN_RI_11; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 56 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3008)
          { itype = MEP_INSN_SWCP; mep_extract_sfmt_swcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 57 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3009)
          { itype = MEP_INSN_LWCP; mep_extract_sfmt_lwcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 58 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300a)
          { itype = MEP_INSN_SMCP; mep_extract_sfmt_smcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 59 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300b)
          { itype = MEP_INSN_LMCP; mep_extract_sfmt_lmcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 60 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300c)
          { itype = MEP_INSN_RI_12; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 61 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300d)
          { itype = MEP_INSN_RI_13; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 62 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300e)
          { itype = MEP_INSN_RI_14; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 63 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300f)
          { itype = MEP_INSN_RI_15; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 64 : /* fall through */
      case 68 : /* fall through */
      case 72 : /* fall through */
      case 76 :
        {
          unsigned int val = (((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4000)
              { itype = MEP_INSN_ADD3I; mep_extract_sfmt_add3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEP_INSN_LBU_TP; mep_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 65 : /* fall through */
      case 69 : /* fall through */
      case 73 : /* fall through */
      case 77 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf880) == 0x4880)
          { itype = MEP_INSN_LBU_TP; mep_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 66 : /* fall through */
      case 70 : /* fall through */
      case 74 : /* fall through */
      case 78 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4002)
              { itype = MEP_INSN_SW_SP; mep_extract_sfmt_sw_sp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf883) == 0x4082)
              { itype = MEP_INSN_SW_TP; mep_extract_sfmt_sw_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEP_INSN_LBU_TP; mep_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 67 : /* fall through */
      case 71 : /* fall through */
      case 75 : /* fall through */
      case 79 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4003)
              { itype = MEP_INSN_LW_SP; mep_extract_sfmt_lw_sp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf883) == 0x4083)
              { itype = MEP_INSN_LW_TP; mep_extract_sfmt_lw_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEP_INSN_LBU_TP; mep_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 80 : /* fall through */
      case 81 : /* fall through */
      case 82 : /* fall through */
      case 83 : /* fall through */
      case 84 : /* fall through */
      case 85 : /* fall through */
      case 86 : /* fall through */
      case 87 : /* fall through */
      case 88 : /* fall through */
      case 89 : /* fall through */
      case 90 : /* fall through */
      case 91 : /* fall through */
      case 92 : /* fall through */
      case 93 : /* fall through */
      case 94 : /* fall through */
      case 95 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf000) == 0x5000)
          { itype = MEP_INSN_MOVI8; mep_extract_sfmt_movi8 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 96 : /* fall through */
      case 100 : /* fall through */
      case 104 : /* fall through */
      case 108 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf003) == 0x6000)
          { itype = MEP_INSN_ADD; mep_extract_sfmt_add (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 97 : /* fall through */
      case 105 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6001)
          { itype = MEP_INSN_SLT3I; mep_extract_sfmt_slt3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 98 : /* fall through */
      case 106 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6002)
          { itype = MEP_INSN_SRLI; mep_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 99 : /* fall through */
      case 107 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6003)
          { itype = MEP_INSN_SRAI; mep_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 101 : /* fall through */
      case 109 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6005)
          { itype = MEP_INSN_SLTU3I; mep_extract_sfmt_slt3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 102 : /* fall through */
      case 110 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6006)
          { itype = MEP_INSN_SLLI; mep_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 103 : /* fall through */
      case 111 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6007)
          { itype = MEP_INSN_SLL3; mep_extract_sfmt_sll3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 112 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7000)
              { itype = MEP_INSN_DI; mep_extract_sfmt_di (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7010)
              { itype = MEP_INSN_EI; mep_extract_sfmt_di (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 : /* fall through */
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf8ef) == 0x7800)
              { itype = MEP_INSN_SIM_SYSCALL; mep_extract_sfmt_sim_syscall (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 113 :
        {
          unsigned int val = (((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7011)
              { itype = MEP_INSN_SYNCM; mep_extract_sfmt_sleep (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7021)
              { itype = MEP_INSN_SYNCCP; mep_extract_sfmt_synccp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 114 :
        {
          unsigned int val = (((insn >> 20) & (7 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7002)
              { itype = MEP_INSN_RET; mep_extract_sfmt_ret (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7012)
              { itype = MEP_INSN_RETI; mep_extract_sfmt_reti (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7022)
              { itype = MEP_INSN_HALT; mep_extract_sfmt_halt (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7032)
              { itype = MEP_INSN_BREAK; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7062)
              { itype = MEP_INSN_SLEEP; mep_extract_sfmt_sleep (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 115 :
        {
          unsigned int val = (((insn >> 21) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7013)
              { itype = MEP_INSN_DRET; mep_extract_sfmt_dret (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7033)
              { itype = MEP_INSN_DBREAK; mep_extract_sfmt_dbreak (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 116 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7004)
          { itype = MEP_INSN_CACHE; mep_extract_sfmt_cache (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 117 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7005)
          { itype = MEP_INSN_RI_16; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 118 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xffcf) == 0x7006)
          { itype = MEP_INSN_SWI; mep_extract_sfmt_swi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 119 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7007)
          { itype = MEP_INSN_RI_17; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 120 :
        {
          unsigned int val = (((insn >> 20) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf00e) == 0x7008)
              { itype = MEP_INSN_STC; mep_extract_sfmt_stc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7018)
              { itype = MEP_INSN_STC_LP; mep_extract_sfmt_stc_lp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7078)
              { itype = MEP_INSN_STC_HI; mep_extract_sfmt_stc_hi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7088)
              { itype = MEP_INSN_STC_LO; mep_extract_sfmt_stc_lo (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 121 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00e) == 0x7008)
          { itype = MEP_INSN_STC; mep_extract_sfmt_stc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 122 :
        {
          unsigned int val = (((insn >> 20) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf00e) == 0x700a)
              { itype = MEP_INSN_LDC; mep_extract_sfmt_ldc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x701a)
              { itype = MEP_INSN_LDC_LP; mep_extract_sfmt_ldc_lp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x707a)
              { itype = MEP_INSN_LDC_HI; mep_extract_sfmt_ldc_hi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x708a)
              { itype = MEP_INSN_LDC_LO; mep_extract_sfmt_ldc_lo (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 123 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00e) == 0x700a)
          { itype = MEP_INSN_LDC; mep_extract_sfmt_ldc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 124 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700c)
          { itype = MEP_INSN_RI_18; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 125 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700d)
          { itype = MEP_INSN_RI_19; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 126 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700e)
          { itype = MEP_INSN_RI_20; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 127 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700f)
          { itype = MEP_INSN_RI_21; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 128 : /* fall through */
      case 130 : /* fall through */
      case 132 : /* fall through */
      case 134 : /* fall through */
      case 136 : /* fall through */
      case 138 : /* fall through */
      case 140 : /* fall through */
      case 142 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8000)
              { itype = MEP_INSN_SB_TP; mep_extract_sfmt_sb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8080)
              { itype = MEP_INSN_SH_TP; mep_extract_sfmt_sh_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8800)
              { itype = MEP_INSN_LB_TP; mep_extract_sfmt_lb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8880)
              { itype = MEP_INSN_LH_TP; mep_extract_sfmt_lh_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 129 : /* fall through */
      case 131 : /* fall through */
      case 133 : /* fall through */
      case 135 : /* fall through */
      case 137 : /* fall through */
      case 139 : /* fall through */
      case 141 : /* fall through */
      case 143 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8000)
              { itype = MEP_INSN_SB_TP; mep_extract_sfmt_sb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8800)
              { itype = MEP_INSN_LB_TP; mep_extract_sfmt_lb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8881)
              { itype = MEP_INSN_LHU_TP; mep_extract_sfmt_lhu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 144 : /* fall through */
      case 145 : /* fall through */
      case 146 : /* fall through */
      case 147 : /* fall through */
      case 148 : /* fall through */
      case 149 : /* fall through */
      case 150 : /* fall through */
      case 151 : /* fall through */
      case 152 : /* fall through */
      case 153 : /* fall through */
      case 154 : /* fall through */
      case 155 : /* fall through */
      case 156 : /* fall through */
      case 157 : /* fall through */
      case 158 : /* fall through */
      case 159 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf000) == 0x9000)
          { itype = MEP_INSN_ADD3; mep_extract_sfmt_add3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 160 : /* fall through */
      case 162 : /* fall through */
      case 164 : /* fall through */
      case 166 : /* fall through */
      case 168 : /* fall through */
      case 170 : /* fall through */
      case 172 : /* fall through */
      case 174 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xa000)
          { itype = MEP_INSN_BEQZ; mep_extract_sfmt_beqz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 161 : /* fall through */
      case 163 : /* fall through */
      case 165 : /* fall through */
      case 167 : /* fall through */
      case 169 : /* fall through */
      case 171 : /* fall through */
      case 173 : /* fall through */
      case 175 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xa001)
          { itype = MEP_INSN_BNEZ; mep_extract_sfmt_beqz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 176 : /* fall through */
      case 178 : /* fall through */
      case 180 : /* fall through */
      case 182 : /* fall through */
      case 184 : /* fall through */
      case 186 : /* fall through */
      case 188 : /* fall through */
      case 190 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xb000)
          { itype = MEP_INSN_BRA; mep_extract_sfmt_bra (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 177 : /* fall through */
      case 179 : /* fall through */
      case 181 : /* fall through */
      case 183 : /* fall through */
      case 185 : /* fall through */
      case 187 : /* fall through */
      case 189 : /* fall through */
      case 191 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xb001)
          { itype = MEP_INSN_BSR12; mep_extract_sfmt_bsr12 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 192 :
        if ((entire_insn & 0xf00f0000) == 0xc0000000)
          { itype = MEP_INSN_ADD3X; mep_extract_sfmt_add3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 193 :
        {
          unsigned int val = (((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xc0010000)
              { itype = MEP_INSN_MOVI16; mep_extract_sfmt_movi16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf0ff0000) == 0xc0110000)
              { itype = MEP_INSN_MOVU16; mep_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf0ff0000) == 0xc0210000)
              { itype = MEP_INSN_MOVH; mep_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 194 :
        if ((entire_insn & 0xf00f0000) == 0xc0020000)
          { itype = MEP_INSN_SLT3X; mep_extract_sfmt_slt3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 195 :
        if ((entire_insn & 0xf00f0000) == 0xc0030000)
          { itype = MEP_INSN_SLTU3X; mep_extract_sfmt_sltu3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 196 :
        if ((entire_insn & 0xf00f0000) == 0xc0040000)
          { itype = MEP_INSN_OR3; mep_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 197 :
        if ((entire_insn & 0xf00f0000) == 0xc0050000)
          { itype = MEP_INSN_AND3; mep_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 198 :
        if ((entire_insn & 0xf00f0000) == 0xc0060000)
          { itype = MEP_INSN_XOR3; mep_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 199 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xc007)
          { itype = MEP_INSN_RI_22; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 200 :
        if ((entire_insn & 0xf00f0000) == 0xc0080000)
          { itype = MEP_INSN_SB16; mep_extract_sfmt_sb16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 201 :
        if ((entire_insn & 0xf00f0000) == 0xc0090000)
          { itype = MEP_INSN_SH16; mep_extract_sfmt_sh16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 202 :
        if ((entire_insn & 0xf00f0000) == 0xc00a0000)
          { itype = MEP_INSN_SW16; mep_extract_sfmt_sw16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 203 :
        if ((entire_insn & 0xf00f0000) == 0xc00b0000)
          { itype = MEP_INSN_LBU16; mep_extract_sfmt_lbu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 204 :
        if ((entire_insn & 0xf00f0000) == 0xc00c0000)
          { itype = MEP_INSN_LB16; mep_extract_sfmt_lb16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 205 :
        if ((entire_insn & 0xf00f0000) == 0xc00d0000)
          { itype = MEP_INSN_LH16; mep_extract_sfmt_lh16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 206 :
        if ((entire_insn & 0xf00f0000) == 0xc00e0000)
          { itype = MEP_INSN_LW16; mep_extract_sfmt_lw16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 207 :
        if ((entire_insn & 0xf00f0000) == 0xc00f0000)
          { itype = MEP_INSN_LHU16; mep_extract_sfmt_lhu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 208 : /* fall through */
      case 209 : /* fall through */
      case 210 : /* fall through */
      case 211 : /* fall through */
      case 218 : /* fall through */
      case 220 : /* fall through */
      case 221 : /* fall through */
      case 222 : /* fall through */
      case 223 :
        if ((entire_insn & 0xf8000000) == 0xd0000000)
          { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 212 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8040000)
              { itype = MEP_INSN_BCPEQ; mep_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 213 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8050000)
              { itype = MEP_INSN_BCPNE; mep_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 214 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8060000)
              { itype = MEP_INSN_BCPAT; mep_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 215 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8070000)
              { itype = MEP_INSN_BCPAF; mep_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 216 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd8080000)
              { itype = MEP_INSN_JMP24; mep_extract_sfmt_jmp24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 217 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd8090000)
              { itype = MEP_INSN_BSR24; mep_extract_sfmt_bsr24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 219 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEP_INSN_MOVU24; mep_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd80b0000)
              { itype = MEP_INSN_BSRV; mep_extract_sfmt_bsr24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 224 :
        if ((entire_insn & 0xf00f0000) == 0xe0000000)
          { itype = MEP_INSN_BEQI; mep_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 225 :
        if ((entire_insn & 0xf00f0000) == 0xe0010000)
          { itype = MEP_INSN_BEQ; mep_extract_sfmt_beq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 226 : /* fall through */
      case 230 : /* fall through */
      case 234 : /* fall through */
      case 238 :
        if ((entire_insn & 0xf0030000) == 0xe0020000)
          { itype = MEP_INSN_SW24; mep_extract_sfmt_sw24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 227 : /* fall through */
      case 231 : /* fall through */
      case 235 : /* fall through */
      case 239 :
        if ((entire_insn & 0xf0030000) == 0xe0030000)
          { itype = MEP_INSN_LW24; mep_extract_sfmt_lw24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 228 :
        if ((entire_insn & 0xf00f0000) == 0xe0040000)
          { itype = MEP_INSN_BNEI; mep_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 229 :
        if ((entire_insn & 0xf00f0000) == 0xe0050000)
          { itype = MEP_INSN_BNE; mep_extract_sfmt_beq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 232 :
        if ((entire_insn & 0xf00f0000) == 0xe0080000)
          { itype = MEP_INSN_BGEI; mep_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 233 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xe0090000)
              { itype = MEP_INSN_REPEAT; mep_extract_sfmt_repeat (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xffff0000) == 0xe0190000)
              { itype = MEP_INSN_EREPEAT; mep_extract_sfmt_erepeat (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 236 :
        if ((entire_insn & 0xf00f0000) == 0xe00c0000)
          { itype = MEP_INSN_BLTI; mep_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 237 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xe00d)
          { itype = MEP_INSN_RI_23; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 241 :
        {
          unsigned int val = (((insn >> 8) & (3 << 4)) | ((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00fffff) == 0xf0010000)
              { itype = MEP_INSN_LDZ; mep_extract_sfmt_ldz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf00fffff) == 0xf0010002)
              { itype = MEP_INSN_AVE; mep_extract_sfmt_abs (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            if ((entire_insn & 0xf00fffff) == 0xf0010003)
              { itype = MEP_INSN_ABS; mep_extract_sfmt_abs (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 4 :
            if ((entire_insn & 0xf00fffff) == 0xf0010004)
              { itype = MEP_INSN_MIN; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 5 :
            if ((entire_insn & 0xf00fffff) == 0xf0010005)
              { itype = MEP_INSN_MAX; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            if ((entire_insn & 0xf00fffff) == 0xf0010006)
              { itype = MEP_INSN_MINU; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            if ((entire_insn & 0xf00fffff) == 0xf0010007)
              { itype = MEP_INSN_MAXU; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            if ((entire_insn & 0xf00fffff) == 0xf0010008)
              { itype = MEP_INSN_SADD; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 9 :
            if ((entire_insn & 0xf00fffff) == 0xf0010009)
              { itype = MEP_INSN_SADDU; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 10 :
            if ((entire_insn & 0xf00fffff) == 0xf001000a)
              { itype = MEP_INSN_SSUB; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 11 :
            if ((entire_insn & 0xf00fffff) == 0xf001000b)
              { itype = MEP_INSN_SSUBU; mep_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 16 : /* fall through */
          case 24 :
            if ((entire_insn & 0xf0ffff07) == 0xf0011000)
              { itype = MEP_INSN_CLIP; mep_extract_sfmt_clip (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 17 : /* fall through */
          case 25 :
            if ((entire_insn & 0xf0ffff07) == 0xf0011001)
              { itype = MEP_INSN_CLIPU; mep_extract_sfmt_clipu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 52 :
            if ((entire_insn & 0xf00fffff) == 0xf0013004)
              { itype = MEP_INSN_MADD; mep_extract_sfmt_madd (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 53 :
            if ((entire_insn & 0xf00fffff) == 0xf0013005)
              { itype = MEP_INSN_MADDU; mep_extract_sfmt_madd (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 54 :
            if ((entire_insn & 0xf00fffff) == 0xf0013006)
              { itype = MEP_INSN_MADDR; mep_extract_sfmt_maddr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 55 :
            if ((entire_insn & 0xf00fffff) == 0xf0013007)
              { itype = MEP_INSN_MADDRU; mep_extract_sfmt_maddr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 243 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf003)
          { itype = MEP_INSN_RI_24; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 244 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xf0040000)
              { itype = MEP_INSN_STCB; mep_extract_sfmt_stcb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf0ff0000) == 0xf0140000)
              { itype = MEP_INSN_LDCB; mep_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 245 :
        {
          unsigned int val = (((insn >> 10) & (31 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00fff00) == 0xf0050000)
              { itype = MEP_INSN_SBCPA; mep_extract_sfmt_sbcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf00fff00) == 0xf0050800)
              { itype = MEP_INSN_SBCPM0; mep_extract_sfmt_sbcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            if ((entire_insn & 0xf00fff00) == 0xf0050c00)
              { itype = MEP_INSN_SBCPM1; mep_extract_sfmt_sbcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 4 :
            if ((entire_insn & 0xf00fff01) == 0xf0051000)
              { itype = MEP_INSN_SHCPA; mep_extract_sfmt_shcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            if ((entire_insn & 0xf00fff01) == 0xf0051800)
              { itype = MEP_INSN_SHCPM0; mep_extract_sfmt_shcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            if ((entire_insn & 0xf00fff01) == 0xf0051c00)
              { itype = MEP_INSN_SHCPM1; mep_extract_sfmt_shcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            if ((entire_insn & 0xf00fff03) == 0xf0052000)
              { itype = MEP_INSN_SWCPA; mep_extract_sfmt_swcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 10 :
            if ((entire_insn & 0xf00fff03) == 0xf0052800)
              { itype = MEP_INSN_SWCPM0; mep_extract_sfmt_swcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 11 :
            if ((entire_insn & 0xf00fff03) == 0xf0052c00)
              { itype = MEP_INSN_SWCPM1; mep_extract_sfmt_swcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 12 :
            if ((entire_insn & 0xf00fff07) == 0xf0053000)
              { itype = MEP_INSN_SMCPA; mep_extract_sfmt_smcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 14 :
            if ((entire_insn & 0xf00fff07) == 0xf0053800)
              { itype = MEP_INSN_SMCPM0; mep_extract_sfmt_smcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 15 :
            if ((entire_insn & 0xf00fff07) == 0xf0053c00)
              { itype = MEP_INSN_SMCPM1; mep_extract_sfmt_smcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 16 :
            if ((entire_insn & 0xf00fff00) == 0xf0054000)
              { itype = MEP_INSN_LBCPA; mep_extract_sfmt_lbcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 18 :
            if ((entire_insn & 0xf00fff00) == 0xf0054800)
              { itype = MEP_INSN_LBCPM0; mep_extract_sfmt_lbcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 19 :
            if ((entire_insn & 0xf00fff00) == 0xf0054c00)
              { itype = MEP_INSN_LBCPM1; mep_extract_sfmt_lbcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 20 :
            if ((entire_insn & 0xf00fff01) == 0xf0055000)
              { itype = MEP_INSN_LHCPA; mep_extract_sfmt_lhcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 22 :
            if ((entire_insn & 0xf00fff01) == 0xf0055800)
              { itype = MEP_INSN_LHCPM0; mep_extract_sfmt_lhcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 23 :
            if ((entire_insn & 0xf00fff01) == 0xf0055c00)
              { itype = MEP_INSN_LHCPM1; mep_extract_sfmt_lhcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 24 :
            if ((entire_insn & 0xf00fff03) == 0xf0056000)
              { itype = MEP_INSN_LWCPA; mep_extract_sfmt_lwcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 26 :
            if ((entire_insn & 0xf00fff03) == 0xf0056800)
              { itype = MEP_INSN_LWCPM0; mep_extract_sfmt_lwcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 27 :
            if ((entire_insn & 0xf00fff03) == 0xf0056c00)
              { itype = MEP_INSN_LWCPM1; mep_extract_sfmt_lwcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 28 :
            if ((entire_insn & 0xf00fff07) == 0xf0057000)
              { itype = MEP_INSN_LMCPA; mep_extract_sfmt_lmcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 30 :
            if ((entire_insn & 0xf00fff07) == 0xf0057800)
              { itype = MEP_INSN_LMCPM0; mep_extract_sfmt_lmcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 31 :
            if ((entire_insn & 0xf00fff07) == 0xf0057c00)
              { itype = MEP_INSN_LMCPM1; mep_extract_sfmt_lmcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 246 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf006)
          { itype = MEP_INSN_RI_25; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 248 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf008)
          { itype = MEP_INSN_RI_26; mep_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 252 :
        if ((entire_insn & 0xf00f0000) == 0xf00c0000)
          { itype = MEP_INSN_SWCP16; mep_extract_sfmt_swcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 253 :
        if ((entire_insn & 0xf00f0000) == 0xf00d0000)
          { itype = MEP_INSN_LWCP16; mep_extract_sfmt_lwcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 254 :
        if ((entire_insn & 0xf00f0000) == 0xf00e0000)
          { itype = MEP_INSN_SMCP16; mep_extract_sfmt_smcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 255 :
        if ((entire_insn & 0xf00f0000) == 0xf00f0000)
          { itype = MEP_INSN_LMCP16; mep_extract_sfmt_lmcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      default : itype = MEP_INSN_X_INVALID; mep_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      }
    }

  }

  /* The instruction has been decoded and fields extracted.  */
  done:

  this->addr = pc;
  // FIXME: To be redone (to handle ISA variants).
  this->idesc = & mep_idesc::idesc_table[itype];
  // ??? record semantic handler?
  assert(this->idesc->sem_index == itype);
}

void
mep_extract_sfmt_empty (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_empty)\t"
        << endl;
    }

#undef FLD
}

void
mep_extract_sfmt_sb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sh (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rns) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sw (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lh (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rns) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lw (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lbu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnuc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnuc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lhu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnus) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnus) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sw_sp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw_sp.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_7u9a4) = f_7u9a4;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw_sp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rnl) = f_rn;
      FLD (in_sp) = 15;
    }
#undef FLD
}

void
mep_extract_sfmt_lw_sp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw_sp.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw_sp)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_sp) = 15;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sb_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9) = f_7u9;
  FLD (i_rn3c) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9:0x" << hex << f_7u9 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3c) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mep_extract_sfmt_sh_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9a2) = f_7u9a2;
  FLD (i_rn3s) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3s) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mep_extract_sfmt_sw_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw_tp.f
    UINT f_rn3;
    SI f_7u9a4;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9a4) = f_7u9a4;
  FLD (i_rn3l) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3l) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mep_extract_sfmt_lb_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9) = f_7u9;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3c) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb_tp)\t"
        << " f_7u9:0x" << hex << f_7u9 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3c) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_lh_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a2) = f_7u9a2;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3s) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh_tp)\t"
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3s) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_lw_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw_tp.f
    UINT f_rn3;
    SI f_7u9a4;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3l) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw_tp)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3l) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_lbu_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9) = f_7u9;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3uc) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu_tp)\t"
        << " f_7u9:0x" << hex << f_7u9 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3uc) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_lhu_tp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a2) = f_7u9a2;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3us) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu_tp)\t"
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3us) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_sb16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sh16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rns) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sw16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lb16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lh16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rns) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lw16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lbu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnuc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnuc) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lhu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnus) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnus) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sw24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw24.f
    UINT f_rn;
    UINT f_24u8a4n_lo;
    UINT f_24u8a4n_hi;
    UINT f_24u8a4n;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_24u8a4n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 6);
    f_24u8a4n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8a4n = ((((f_24u8a4n_hi) << (8))) | (((f_24u8a4n_lo) << (2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8a4n) = f_24u8a4n;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw24)\t"
        << " f_24u8a4n:0x" << hex << f_24u8a4n << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_lw24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw24.f
    UINT f_rn;
    UINT f_24u8a4n_lo;
    UINT f_24u8a4n_hi;
    UINT f_24u8a4n;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_24u8a4n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 6);
    f_24u8a4n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8a4n = ((((f_24u8a4n_hi) << (8))) | (((f_24u8a4n_lo) << (2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8a4n) = f_24u8a4n;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw24)\t"
        << " f_24u8a4n:0x" << hex << f_24u8a4n << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_extb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_extb)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_exth (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_exth)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_extub (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_extub)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_ssarb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ssarb.f
    UINT f_2u6;
    UINT f_rm;

    f_2u6 = EXTRACT_MSB0_UINT (insn, 16, 6, 2);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_2u6) = f_2u6;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ssarb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_2u6:0x" << hex << f_2u6 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_sar) = 2;
    }
#undef FLD
}

void
mep_extract_sfmt_mov (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sltu3x.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mov)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_movi8 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi8.f
    UINT f_rn;
    INT f_8s8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_8s8 = EXTRACT_MSB0_INT (insn, 16, 8, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s8) = f_8s8;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movi8)\t"
        << " f_8s8:0x" << hex << f_8s8 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_movi16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movi16)\t"
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_movu24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movu24.f
    UINT f_rn3;
    UINT f_24u8n_lo;
    UINT f_24u8n_hi;
    UINT f_24u8n;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 32, 5, 3);
    f_24u8n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 8);
    f_24u8n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8n = ((((f_24u8n_hi) << (8))) | (f_24u8n_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8n) = f_24u8n;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movu24)\t"
        << " f_24u8n:0x" << hex << f_24u8n << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn3) = f_rn3;
    }
#undef FLD
}

void
mep_extract_sfmt_movu16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sltu3x.f
    UINT f_rn;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movu16)\t"
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_add3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3.f
    UINT f_rn;
    UINT f_rm;
    UINT f_rl;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_rl = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_rl) = f_rl;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  FLD (i_rl) = & current_cpu->hardware.h_gpr[f_rl];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rl:0x" << hex << f_rl << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rl) = f_rl;
    }
#undef FLD
}

void
mep_extract_sfmt_add (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add.f
    UINT f_rn;
    INT f_6s8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_6s8 = EXTRACT_MSB0_INT (insn, 16, 8, 6);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_6s8) = f_6s8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_6s8:0x" << hex << f_6s8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_add3i (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3i.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3i)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_sp) = 15;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_advck3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_advck3.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_advck3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mep_extract_sfmt_sub (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sub)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_slt3i (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slt3i.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_slt3i)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mep_extract_sfmt_sl1ad3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_advck3.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sl1ad3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mep_extract_sfmt_add3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_slt3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_slt3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sltu3x (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sltu3x.f
    UINT f_rn;
    UINT f_rm;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sltu3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_or3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sltu3x.f
    UINT f_rn;
    UINT f_rm;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_or3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_srai (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_srai.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_srai)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_sll3 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slt3i.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sll3)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mep_extract_sfmt_fsft (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_fsft)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (in_sar) = 2;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_bra (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr12.f
    SI f_12s4a2;

    f_12s4a2 = ((((EXTRACT_MSB0_INT (insn, 16, 4, 11)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_12s4a2) = f_12s4a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bra)\t"
        << " f_12s4a2:0x" << hex << f_12s4a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_beqz (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beqz.f
    UINT f_rn;
    SI f_8s8a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_8s8a2 = ((((EXTRACT_MSB0_INT (insn, 16, 8, 7)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s8a2) = f_8s8a2;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beqz)\t"
        << " f_8s8a2:0x" << hex << f_8s8a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_beqi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beqi.f
    UINT f_rn;
    UINT f_4u8;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_4u8 = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rn) = f_rn;
  FLD (f_4u8) = f_4u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beqi)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_4u8:0x" << hex << f_4u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_beq (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_rn;
    UINT f_rm;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beq)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_bsr12 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr12.f
    SI f_12s4a2;

    f_12s4a2 = ((((EXTRACT_MSB0_INT (insn, 16, 4, 11)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_12s4a2) = f_12s4a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsr12)\t"
        << " f_12s4a2:0x" << hex << f_12s4a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mep_extract_sfmt_bsr24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr24.f
    UINT f_24s5a2n_lo;
    INT f_24s5a2n_hi;
    INT f_24s5a2n;

    f_24s5a2n_lo = EXTRACT_MSB0_UINT (insn, 32, 5, 7);
    f_24s5a2n_hi = EXTRACT_MSB0_INT (insn, 32, 16, 16);
  f_24s5a2n = ((((((f_24s5a2n_hi) << (8))) | (((f_24s5a2n_lo) << (1))))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_24s5a2n) = f_24s5a2n;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsr24)\t"
        << " f_24s5a2n:0x" << hex << f_24s5a2n << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mep_extract_sfmt_jmp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jsr.f
    UINT f_rm;

    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jmp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_jmp24 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jmp24.f
    UINT f_24u5a2n_lo;
    UINT f_24u5a2n_hi;
    UINT f_24u5a2n;

    f_24u5a2n_lo = EXTRACT_MSB0_UINT (insn, 32, 5, 7);
    f_24u5a2n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u5a2n = ((((f_24u5a2n_hi) << (8))) | (((f_24u5a2n_lo) << (1))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u5a2n) = f_24u5a2n;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jmp24)\t"
        << " f_24u5a2n:0x" << hex << f_24u5a2n << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_jsr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jsr.f
    UINT f_rm;

    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jsr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mep_extract_sfmt_ret (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ret)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lp) = 1;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_repeat (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_repeat.f
    UINT f_rn;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_repeat)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
      FLD (out_h_csr_SI_4) = 4;
      FLD (out_h_csr_SI_5) = 5;
      FLD (out_h_csr_SI_6) = 6;
    }
#undef FLD
}

void
mep_extract_sfmt_erepeat (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_repeat.f
    SI f_17s16a2;

    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_erepeat)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_h_csr_SI_4) = 4;
      FLD (out_h_csr_SI_5) = 5;
      FLD (out_h_csr_SI_6) = 6;
    }
#undef FLD
}

void
mep_extract_sfmt_stc_lp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stc_lp.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_lp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mep_extract_sfmt_stc_hi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_hi)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
    }
#undef FLD
}

void
mep_extract_sfmt_stc_lo (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_lo)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mep_extract_sfmt_stc (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stc.f
    UINT f_rn;
    UINT f_csrn_lo;
    UINT f_csrn_hi;
    UINT f_csrn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_csrn_lo = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_csrn_hi = EXTRACT_MSB0_UINT (insn, 16, 15, 1);
  f_csrn = ((((f_csrn_hi) << (4))) | (f_csrn_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_csrn) = f_csrn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_csrn:0x" << hex << f_csrn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_csrn) = f_csrn;
    }
#undef FLD
}

void
mep_extract_sfmt_ldc_lp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldc_lp.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_lp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lp) = 1;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_ldc_hi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_hi)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_ldc_lo (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_lo)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_ldc (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldc.f
    UINT f_rn;
    UINT f_csrn_lo;
    UINT f_csrn_hi;
    UINT f_csrn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_csrn_lo = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_csrn_hi = EXTRACT_MSB0_UINT (insn, 16, 15, 1);
  f_csrn = ((((f_csrn_hi) << (4))) | (f_csrn_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_csrn) = f_csrn;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc)\t"
        << " f_csrn:0x" << hex << f_csrn << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_csrn) = f_csrn;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_di (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_di.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_di)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_psw) = 16;
      FLD (out_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_reti (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_reti.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_reti)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_epc) = 19;
      FLD (in_npc) = 23;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_halt (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_di.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_halt)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_sleep (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sleep)\t"
        << endl;
    }

#undef FLD
}

void
mep_extract_sfmt_swi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swi.f
    UINT f_2u10;

    f_2u10 = EXTRACT_MSB0_UINT (insn, 16, 10, 2);

  /* Record the fields for the semantic handler.  */
  FLD (f_2u10) = f_2u10;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swi)\t"
        << " f_2u10:0x" << hex << f_2u10 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_exc) = 20;
      FLD (out_exc) = 20;
    }
#undef FLD
}

void
mep_extract_sfmt_break (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_break)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}

void
mep_extract_sfmt_stcb (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stcb.f
    UINT f_rn;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_16u16) = f_16u16;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stcb)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_bsetm (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_btstm.f
    UINT f_3u5;
    UINT f_rm;

    f_3u5 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_3u5) = f_3u5;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsetm)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_3u5:0x" << hex << f_3u5 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_btstm (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_btstm.f
    UINT f_3u5;
    UINT f_rm;

    f_3u5 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_3u5) = f_3u5;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_btstm)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_3u5:0x" << hex << f_3u5 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mep_extract_sfmt_tas (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_tas.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_tas)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_cache (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_tas.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_cache)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_mul (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mul)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mep_extract_sfmt_mulr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mulr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_madd (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_madd)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (in_lo) = 8;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mep_extract_sfmt_maddr (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_maddr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (in_lo) = 8;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_div (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_div)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mep_extract_sfmt_dret (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_dret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_dret)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_dbg) = 24;
      FLD (in_depc) = 25;
      FLD (out_dbg) = 24;
    }
#undef FLD
}

void
mep_extract_sfmt_dbreak (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_dret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_dbreak)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_dbg) = 24;
      FLD (out_dbg) = 24;
    }
#undef FLD
}

void
mep_extract_sfmt_ldz (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sltu3x.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldz)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_abs (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_abs)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_min (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_min)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_clip (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;
    UINT f_5u24;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_5u24 = EXTRACT_MSB0_UINT (insn, 32, 24, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_5u24) = f_5u24;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_clip)\t"
        << " f_5u24:0x" << hex << f_5u24 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_clipu (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;
    UINT f_5u24;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_5u24 = EXTRACT_MSB0_UINT (insn, 32, 24, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_5u24) = f_5u24;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_clipu)\t"
        << " f_5u24:0x" << hex << f_5u24 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mep_extract_sfmt_swcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcp)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcp)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_swcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpi)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpi)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpi)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcpi (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpi)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_swcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcp16)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcp16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcp16)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcp16 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcp16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_sbcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm1.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpa)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lbcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm1.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbcpa)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_shcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpa)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lhcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhcpa)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_swcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpa)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpa)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpa)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcpa (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpa)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_sbcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm0.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpm0)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lbcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm0.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbcpm0)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_shcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpm0)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lhcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhcpm0)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_swcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpm0)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpm0)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpm0)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcpm0 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpm0)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_sbcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm1.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpm1)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lbcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcpm1.f
    UINT f_crn;
    UINT f_rm;
    INT f_8s24;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24 = EXTRACT_MSB0_INT (insn, 32, 24, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24) = f_8s24;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbcpm1)\t"
        << " f_8s24:0x" << hex << f_8s24 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_shcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpm1)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lhcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_shcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a2;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a2 = ((EXTRACT_MSB0_INT (insn, 32, 24, 7)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a2) = f_8s24a2;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhcpm1)\t"
        << " f_8s24a2:0x" << hex << f_8s24a2 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_swcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpm1)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lwcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a4;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a4 = ((EXTRACT_MSB0_INT (insn, 32, 24, 6)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a4) = f_8s24a4;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpm1)\t"
        << " f_8s24a4:0x" << hex << f_8s24a4 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_smcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpm1)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_lmcpm1 (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_smcpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_8s24a8;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_8s24a8 = ((EXTRACT_MSB0_INT (insn, 32, 24, 5)) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s24a8) = f_8s24a8;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpm1)\t"
        << " f_8s24a8:0x" << hex << f_8s24a8 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mep_extract_sfmt_bcpeq (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_rm;
    SI f_17s16a2;

    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_17s16a2) = f_17s16a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bcpeq)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mep_extract_sfmt_synccp (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_synccp)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}

void
mep_extract_sfmt_sim_syscall (mep_scache* abuf, mep_basic_cpu* current_cpu, PCADDR pc, mep_insn_word base_insn, mep_insn_word entire_insn){
    mep_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sim_syscall.f
    UINT f_5;
    UINT f_6;
    UINT f_7;
    UINT f_11;
    UINT f_callnum;

    f_5 = EXTRACT_MSB0_UINT (insn, 16, 5, 1);
    f_6 = EXTRACT_MSB0_UINT (insn, 16, 6, 1);
    f_7 = EXTRACT_MSB0_UINT (insn, 16, 7, 1);
    f_11 = EXTRACT_MSB0_UINT (insn, 16, 11, 1);
  f_callnum = ((((f_5) << (3))) | (((((f_6) << (2))) | (((((f_7) << (1))) | (f_11))))));

  /* Record the fields for the semantic handler.  */
  FLD (f_callnum) = f_callnum;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sim_syscall)\t"
        << " f_callnum:0x" << hex << f_callnum << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}
