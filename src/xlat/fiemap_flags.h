/* Generated by ./src/xlat/gen.sh from ./src/xlat/fiemap_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fiemap_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fiemap_flags_xdata[] = {
 XLAT(FIEMAP_FLAG_SYNC),
 #define XLAT_VAL_0 ((unsigned) (FIEMAP_FLAG_SYNC))
 #define XLAT_STR_0 STRINGIFY(FIEMAP_FLAG_SYNC)
 XLAT(FIEMAP_FLAG_XATTR),
 #define XLAT_VAL_1 ((unsigned) (FIEMAP_FLAG_XATTR))
 #define XLAT_STR_1 STRINGIFY(FIEMAP_FLAG_XATTR)
 XLAT(FIEMAP_FLAG_CACHE),
 #define XLAT_VAL_2 ((unsigned) (FIEMAP_FLAG_CACHE))
 #define XLAT_STR_2 STRINGIFY(FIEMAP_FLAG_CACHE)
};
static
const struct xlat fiemap_flags[1] = { {
 .data = fiemap_flags_xdata,
 .size = ARRAY_SIZE(fiemap_flags_xdata),
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
