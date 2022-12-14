/* Generated by ./src/xlat/gen.sh from ./src/xlat/riscv_flush_icache_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SYS_RISCV_FLUSH_ICACHE_LOCAL) || (defined(HAVE_DECL_SYS_RISCV_FLUSH_ICACHE_LOCAL) && HAVE_DECL_SYS_RISCV_FLUSH_ICACHE_LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SYS_RISCV_FLUSH_ICACHE_LOCAL) == (1), "SYS_RISCV_FLUSH_ICACHE_LOCAL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SYS_RISCV_FLUSH_ICACHE_LOCAL 1
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat riscv_flush_icache_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data riscv_flush_icache_flags_xdata[] = {
 XLAT(SYS_RISCV_FLUSH_ICACHE_LOCAL),
 #define XLAT_VAL_0 ((unsigned) (SYS_RISCV_FLUSH_ICACHE_LOCAL))
 #define XLAT_STR_0 STRINGIFY(SYS_RISCV_FLUSH_ICACHE_LOCAL)
};
static
const struct xlat riscv_flush_icache_flags[1] = { {
 .data = riscv_flush_icache_flags_xdata,
 .size = ARRAY_SIZE(riscv_flush_icache_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
