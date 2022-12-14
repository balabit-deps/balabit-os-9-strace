/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_unalign_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_UNALIGN_NOPRINT) || (defined(HAVE_DECL_PR_UNALIGN_NOPRINT) && HAVE_DECL_PR_UNALIGN_NOPRINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_UNALIGN_NOPRINT) == (1), "PR_UNALIGN_NOPRINT != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_UNALIGN_NOPRINT 1
#endif
#if defined(PR_UNALIGN_SIGBUS) || (defined(HAVE_DECL_PR_UNALIGN_SIGBUS) && HAVE_DECL_PR_UNALIGN_SIGBUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_UNALIGN_SIGBUS) == (2), "PR_UNALIGN_SIGBUS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_UNALIGN_SIGBUS 2
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_unalign_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pr_unalign_flags_xdata[] = {
 XLAT(PR_UNALIGN_NOPRINT),
 #define XLAT_VAL_0 ((unsigned) (PR_UNALIGN_NOPRINT))
 #define XLAT_STR_0 STRINGIFY(PR_UNALIGN_NOPRINT)
 XLAT(PR_UNALIGN_SIGBUS),
 #define XLAT_VAL_1 ((unsigned) (PR_UNALIGN_SIGBUS))
 #define XLAT_STR_1 STRINGIFY(PR_UNALIGN_SIGBUS)
};
static
const struct xlat pr_unalign_flags[1] = { {
 .data = pr_unalign_flags_xdata,
 .size = ARRAY_SIZE(pr_unalign_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
