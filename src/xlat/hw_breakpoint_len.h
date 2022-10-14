/* Generated by ./src/xlat/gen.sh from ./src/xlat/hw_breakpoint_len.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(HW_BREAKPOINT_LEN_1) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_1) && HAVE_DECL_HW_BREAKPOINT_LEN_1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_LEN_1) == (1), "HW_BREAKPOINT_LEN_1 != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_LEN_1 1
#endif
#if defined(HW_BREAKPOINT_LEN_2) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_2) && HAVE_DECL_HW_BREAKPOINT_LEN_2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_LEN_2) == (2), "HW_BREAKPOINT_LEN_2 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_LEN_2 2
#endif
#if defined(HW_BREAKPOINT_LEN_4) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_4) && HAVE_DECL_HW_BREAKPOINT_LEN_4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_LEN_4) == (4), "HW_BREAKPOINT_LEN_4 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_LEN_4 4
#endif
#if defined(HW_BREAKPOINT_LEN_8) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_8) && HAVE_DECL_HW_BREAKPOINT_LEN_8)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_LEN_8) == (8), "HW_BREAKPOINT_LEN_8 != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_LEN_8 8
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat hw_breakpoint_len in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data hw_breakpoint_len_xdata[] = {
 XLAT(HW_BREAKPOINT_LEN_1),
 #define XLAT_VAL_0 ((unsigned) (HW_BREAKPOINT_LEN_1))
 #define XLAT_STR_0 STRINGIFY(HW_BREAKPOINT_LEN_1)
 XLAT(HW_BREAKPOINT_LEN_2),
 #define XLAT_VAL_1 ((unsigned) (HW_BREAKPOINT_LEN_2))
 #define XLAT_STR_1 STRINGIFY(HW_BREAKPOINT_LEN_2)
 XLAT(HW_BREAKPOINT_LEN_4),
 #define XLAT_VAL_2 ((unsigned) (HW_BREAKPOINT_LEN_4))
 #define XLAT_STR_2 STRINGIFY(HW_BREAKPOINT_LEN_4)
 XLAT(HW_BREAKPOINT_LEN_8),
 #define XLAT_VAL_3 ((unsigned) (HW_BREAKPOINT_LEN_8))
 #define XLAT_STR_3 STRINGIFY(HW_BREAKPOINT_LEN_8)
};
static
const struct xlat hw_breakpoint_len[1] = { {
 .data = hw_breakpoint_len_xdata,
 .size = ARRAY_SIZE(hw_breakpoint_len_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
