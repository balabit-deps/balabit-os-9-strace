/* Generated by ./src/xlat/gen.sh from ./src/xlat/if_dqinfo_valid.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IIF_BGRACE) || (defined(HAVE_DECL_IIF_BGRACE) && HAVE_DECL_IIF_BGRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IIF_BGRACE) == ((1 << 0)), "IIF_BGRACE != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IIF_BGRACE (1 << 0)
#endif
#if defined(IIF_IGRACE) || (defined(HAVE_DECL_IIF_IGRACE) && HAVE_DECL_IIF_IGRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IIF_IGRACE) == ((1 << 1)), "IIF_IGRACE != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IIF_IGRACE (1 << 1)
#endif
#if defined(IIF_FLAGS) || (defined(HAVE_DECL_IIF_FLAGS) && HAVE_DECL_IIF_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IIF_FLAGS) == ((1 << 2)), "IIF_FLAGS != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IIF_FLAGS (1 << 2)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat if_dqinfo_valid in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data if_dqinfo_valid_xdata[] = {
 XLAT(IIF_BGRACE),
 #define XLAT_VAL_0 ((unsigned) (IIF_BGRACE))
 #define XLAT_STR_0 STRINGIFY(IIF_BGRACE)
 XLAT(IIF_IGRACE),
 #define XLAT_VAL_1 ((unsigned) (IIF_IGRACE))
 #define XLAT_STR_1 STRINGIFY(IIF_IGRACE)
 XLAT(IIF_FLAGS),
 #define XLAT_VAL_2 ((unsigned) (IIF_FLAGS))
 #define XLAT_STR_2 STRINGIFY(IIF_FLAGS)
};
static
const struct xlat if_dqinfo_valid[1] = { {
 .data = if_dqinfo_valid_xdata,
 .size = ARRAY_SIZE(if_dqinfo_valid_xdata),
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
