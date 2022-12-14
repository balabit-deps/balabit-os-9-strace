/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_sched_core_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_sched_core_cmds in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pr_sched_core_cmds_xdata[] = {
 XLAT(PR_SCHED_CORE_GET),
 #define XLAT_VAL_0 ((unsigned) (PR_SCHED_CORE_GET))
 #define XLAT_STR_0 STRINGIFY(PR_SCHED_CORE_GET)
 XLAT(PR_SCHED_CORE_CREATE),
 #define XLAT_VAL_1 ((unsigned) (PR_SCHED_CORE_CREATE))
 #define XLAT_STR_1 STRINGIFY(PR_SCHED_CORE_CREATE)
 XLAT(PR_SCHED_CORE_SHARE_TO),
 #define XLAT_VAL_2 ((unsigned) (PR_SCHED_CORE_SHARE_TO))
 #define XLAT_STR_2 STRINGIFY(PR_SCHED_CORE_SHARE_TO)
 XLAT(PR_SCHED_CORE_SHARE_FROM),
 #define XLAT_VAL_3 ((unsigned) (PR_SCHED_CORE_SHARE_FROM))
 #define XLAT_STR_3 STRINGIFY(PR_SCHED_CORE_SHARE_FROM)
};
static
const struct xlat pr_sched_core_cmds[1] = { {
 .data = pr_sched_core_cmds_xdata,
 .size = ARRAY_SIZE(pr_sched_core_cmds_xdata),
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
