/* Generated by ./src/xlat/gen.sh from ./src/xlat/delete_module_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat delete_module_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data delete_module_flags_xdata[] = {
#if defined(O_NONBLOCK) || (defined(HAVE_DECL_O_NONBLOCK) && HAVE_DECL_O_NONBLOCK)
  XLAT(O_NONBLOCK),
 #define XLAT_VAL_0 ((unsigned) (O_NONBLOCK))
 #define XLAT_STR_0 STRINGIFY(O_NONBLOCK)
#endif
#if defined(O_TRUNC) || (defined(HAVE_DECL_O_TRUNC) && HAVE_DECL_O_TRUNC)
  XLAT(O_TRUNC),
 #define XLAT_VAL_1 ((unsigned) (O_TRUNC))
 #define XLAT_STR_1 STRINGIFY(O_TRUNC)
#endif
};
static
const struct xlat delete_module_flags[1] = { {
 .data = delete_module_flags_xdata,
 .size = ARRAY_SIZE(delete_module_flags_xdata),
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
