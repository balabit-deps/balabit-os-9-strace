/* Generated by ./src/xlat/gen.sh from ./src/xlat/sa_handler_values.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sa_handler_values in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sa_handler_values_xdata[] = {
#if defined(SIG_ERR) || (defined(HAVE_DECL_SIG_ERR) && HAVE_DECL_SIG_ERR)
  XLAT_TYPE(unsigned long, SIG_ERR),
 #define XLAT_VAL_0 ((unsigned long) (SIG_ERR))
 #define XLAT_STR_0 STRINGIFY(SIG_ERR)
#endif
#if defined(SIG_DFL) || (defined(HAVE_DECL_SIG_DFL) && HAVE_DECL_SIG_DFL)
  XLAT_TYPE(unsigned long, SIG_DFL),
 #define XLAT_VAL_1 ((unsigned long) (SIG_DFL))
 #define XLAT_STR_1 STRINGIFY(SIG_DFL)
#endif
#if defined(SIG_IGN) || (defined(HAVE_DECL_SIG_IGN) && HAVE_DECL_SIG_IGN)
  XLAT_TYPE(unsigned long, SIG_IGN),
 #define XLAT_VAL_2 ((unsigned long) (SIG_IGN))
 #define XLAT_STR_2 STRINGIFY(SIG_IGN)
#endif
};
static
const struct xlat sa_handler_values[1] = { {
 .data = sa_handler_values_xdata,
 .size = ARRAY_SIZE(sa_handler_values_xdata),
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
