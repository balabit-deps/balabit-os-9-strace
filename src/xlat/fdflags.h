/* Generated by ./src/xlat/gen.sh from ./src/xlat/fdflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fdflags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fdflags_xdata[] = {
 XLAT(FD_CLOEXEC),
 #define XLAT_VAL_0 ((unsigned) (FD_CLOEXEC))
 #define XLAT_STR_0 STRINGIFY(FD_CLOEXEC)
};
static
const struct xlat fdflags[1] = { {
 .data = fdflags_xdata,
 .size = ARRAY_SIZE(fdflags_xdata),
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
