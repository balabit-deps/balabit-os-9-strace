/* Generated by ./src/xlat/gen.sh from ./src/xlat/falloc_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat falloc_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data falloc_flags_xdata[] = {
 XLAT(FALLOC_FL_KEEP_SIZE),
 #define XLAT_VAL_0 ((unsigned) (FALLOC_FL_KEEP_SIZE))
 #define XLAT_STR_0 STRINGIFY(FALLOC_FL_KEEP_SIZE)
 XLAT(FALLOC_FL_PUNCH_HOLE),
 #define XLAT_VAL_1 ((unsigned) (FALLOC_FL_PUNCH_HOLE))
 #define XLAT_STR_1 STRINGIFY(FALLOC_FL_PUNCH_HOLE)
 XLAT(FALLOC_FL_NO_HIDE_STALE),
 #define XLAT_VAL_2 ((unsigned) (FALLOC_FL_NO_HIDE_STALE))
 #define XLAT_STR_2 STRINGIFY(FALLOC_FL_NO_HIDE_STALE)
 XLAT(FALLOC_FL_COLLAPSE_RANGE),
 #define XLAT_VAL_3 ((unsigned) (FALLOC_FL_COLLAPSE_RANGE))
 #define XLAT_STR_3 STRINGIFY(FALLOC_FL_COLLAPSE_RANGE)
 XLAT(FALLOC_FL_ZERO_RANGE),
 #define XLAT_VAL_4 ((unsigned) (FALLOC_FL_ZERO_RANGE))
 #define XLAT_STR_4 STRINGIFY(FALLOC_FL_ZERO_RANGE)
 XLAT(FALLOC_FL_INSERT_RANGE),
 #define XLAT_VAL_5 ((unsigned) (FALLOC_FL_INSERT_RANGE))
 #define XLAT_STR_5 STRINGIFY(FALLOC_FL_INSERT_RANGE)
 XLAT(FALLOC_FL_UNSHARE_RANGE),
 #define XLAT_VAL_6 ((unsigned) (FALLOC_FL_UNSHARE_RANGE))
 #define XLAT_STR_6 STRINGIFY(FALLOC_FL_UNSHARE_RANGE)
};
static
const struct xlat falloc_flags[1] = { {
 .data = falloc_flags_xdata,
 .size = ARRAY_SIZE(falloc_flags_xdata),
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
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
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
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
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
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
