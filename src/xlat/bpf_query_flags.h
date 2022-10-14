/* Generated by ./src/xlat/gen.sh from ./src/xlat/bpf_query_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_QUERY_EFFECTIVE) || (defined(HAVE_DECL_BPF_F_QUERY_EFFECTIVE) && HAVE_DECL_BPF_F_QUERY_EFFECTIVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_QUERY_EFFECTIVE) == ((1U << 0)), "BPF_F_QUERY_EFFECTIVE != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_QUERY_EFFECTIVE (1U << 0)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_query_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data bpf_query_flags_xdata[] = {
 XLAT(BPF_F_QUERY_EFFECTIVE),
 #define XLAT_VAL_0 ((unsigned) (BPF_F_QUERY_EFFECTIVE))
 #define XLAT_STR_0 STRINGIFY(BPF_F_QUERY_EFFECTIVE)
};
static
const struct xlat bpf_query_flags[1] = { {
 .data = bpf_query_flags_xdata,
 .size = ARRAY_SIZE(bpf_query_flags_xdata),
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
