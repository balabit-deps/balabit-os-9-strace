/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_sud_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_sud_cmds in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pr_sud_cmds_xdata[] = {
 [PR_SYS_DISPATCH_OFF] = XLAT(PR_SYS_DISPATCH_OFF),
 #define XLAT_VAL_0 ((unsigned) (PR_SYS_DISPATCH_OFF))
 #define XLAT_STR_0 STRINGIFY(PR_SYS_DISPATCH_OFF)
 [PR_SYS_DISPATCH_ON] = XLAT(PR_SYS_DISPATCH_ON),
 #define XLAT_VAL_1 ((unsigned) (PR_SYS_DISPATCH_ON))
 #define XLAT_STR_1 STRINGIFY(PR_SYS_DISPATCH_ON)
};
static
const struct xlat pr_sud_cmds[1] = { {
 .data = pr_sud_cmds_xdata,
 .size = ARRAY_SIZE(pr_sud_cmds_xdata),
 .type = XT_INDEXED,
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
