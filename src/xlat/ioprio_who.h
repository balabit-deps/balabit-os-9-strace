/* Generated by ./src/xlat/gen.sh from ./src/xlat/ioprio_who.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IOPRIO_WHO_PROCESS) || (defined(HAVE_DECL_IOPRIO_WHO_PROCESS) && HAVE_DECL_IOPRIO_WHO_PROCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOPRIO_WHO_PROCESS) == (1), "IOPRIO_WHO_PROCESS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOPRIO_WHO_PROCESS 1
#endif
#if defined(IOPRIO_WHO_PGRP) || (defined(HAVE_DECL_IOPRIO_WHO_PGRP) && HAVE_DECL_IOPRIO_WHO_PGRP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOPRIO_WHO_PGRP) == (2), "IOPRIO_WHO_PGRP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOPRIO_WHO_PGRP 2
#endif
#if defined(IOPRIO_WHO_USER) || (defined(HAVE_DECL_IOPRIO_WHO_USER) && HAVE_DECL_IOPRIO_WHO_USER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOPRIO_WHO_USER) == (3), "IOPRIO_WHO_USER != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOPRIO_WHO_USER 3
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ioprio_who in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data ioprio_who_xdata[] = {
 [IOPRIO_WHO_PROCESS] = XLAT(IOPRIO_WHO_PROCESS),
 #define XLAT_VAL_0 ((unsigned) (IOPRIO_WHO_PROCESS))
 #define XLAT_STR_0 STRINGIFY(IOPRIO_WHO_PROCESS)
 [IOPRIO_WHO_PGRP] = XLAT(IOPRIO_WHO_PGRP),
 #define XLAT_VAL_1 ((unsigned) (IOPRIO_WHO_PGRP))
 #define XLAT_STR_1 STRINGIFY(IOPRIO_WHO_PGRP)
 [IOPRIO_WHO_USER] = XLAT(IOPRIO_WHO_USER),
 #define XLAT_VAL_2 ((unsigned) (IOPRIO_WHO_USER))
 #define XLAT_STR_2 STRINGIFY(IOPRIO_WHO_USER)
};
static
const struct xlat ioprio_who[1] = { {
 .data = ioprio_who_xdata,
 .size = ARRAY_SIZE(ioprio_who_xdata),
 .type = XT_INDEXED,
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
