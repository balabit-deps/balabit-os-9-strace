/* Generated by ./src/xlat/gen.sh from ./src/xlat/get_mempolicy_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MPOL_F_NODE) || (defined(HAVE_DECL_MPOL_F_NODE) && HAVE_DECL_MPOL_F_NODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_F_NODE) == (1), "MPOL_F_NODE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_F_NODE 1
#endif
#if defined(MPOL_F_ADDR) || (defined(HAVE_DECL_MPOL_F_ADDR) && HAVE_DECL_MPOL_F_ADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_F_ADDR) == (2), "MPOL_F_ADDR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_F_ADDR 2
#endif
#if defined(MPOL_F_MEMS_ALLOWED) || (defined(HAVE_DECL_MPOL_F_MEMS_ALLOWED) && HAVE_DECL_MPOL_F_MEMS_ALLOWED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_F_MEMS_ALLOWED) == (4), "MPOL_F_MEMS_ALLOWED != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_F_MEMS_ALLOWED 4
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat get_mempolicy_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data get_mempolicy_flags_xdata[] = {
 XLAT(MPOL_F_NODE),
 #define XLAT_VAL_0 ((unsigned) (MPOL_F_NODE))
 #define XLAT_STR_0 STRINGIFY(MPOL_F_NODE)
 XLAT(MPOL_F_ADDR),
 #define XLAT_VAL_1 ((unsigned) (MPOL_F_ADDR))
 #define XLAT_STR_1 STRINGIFY(MPOL_F_ADDR)
 XLAT(MPOL_F_MEMS_ALLOWED),
 #define XLAT_VAL_2 ((unsigned) (MPOL_F_MEMS_ALLOWED))
 #define XLAT_STR_2 STRINGIFY(MPOL_F_MEMS_ALLOWED)
};
static
const struct xlat get_mempolicy_flags[1] = { {
 .data = get_mempolicy_flags_xdata,
 .size = ARRAY_SIZE(get_mempolicy_flags_xdata),
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
