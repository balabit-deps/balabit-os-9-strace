/* Generated by ./src/xlat/gen.sh from ./src/xlat/open_resolve_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat open_resolve_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data open_resolve_flags_xdata[] = {
 XLAT(RESOLVE_NO_XDEV),
 #define XLAT_VAL_0 ((unsigned) (RESOLVE_NO_XDEV))
 #define XLAT_STR_0 STRINGIFY(RESOLVE_NO_XDEV)
 XLAT(RESOLVE_NO_MAGICLINKS),
 #define XLAT_VAL_1 ((unsigned) (RESOLVE_NO_MAGICLINKS))
 #define XLAT_STR_1 STRINGIFY(RESOLVE_NO_MAGICLINKS)
 XLAT(RESOLVE_NO_SYMLINKS),
 #define XLAT_VAL_2 ((unsigned) (RESOLVE_NO_SYMLINKS))
 #define XLAT_STR_2 STRINGIFY(RESOLVE_NO_SYMLINKS)
 XLAT(RESOLVE_BENEATH),
 #define XLAT_VAL_3 ((unsigned) (RESOLVE_BENEATH))
 #define XLAT_STR_3 STRINGIFY(RESOLVE_BENEATH)
 XLAT(RESOLVE_IN_ROOT),
 #define XLAT_VAL_4 ((unsigned) (RESOLVE_IN_ROOT))
 #define XLAT_STR_4 STRINGIFY(RESOLVE_IN_ROOT)
 XLAT(RESOLVE_CACHED),
 #define XLAT_VAL_5 ((unsigned) (RESOLVE_CACHED))
 #define XLAT_STR_5 STRINGIFY(RESOLVE_CACHED)
};
static
const struct xlat open_resolve_flags[1] = { {
 .data = open_resolve_flags_xdata,
 .size = ARRAY_SIZE(open_resolve_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
