/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tca_stab_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_tca_stab_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_tca_stab_attrs_xdata[] = {
 [TCA_STAB_UNSPEC] = XLAT(TCA_STAB_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (TCA_STAB_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(TCA_STAB_UNSPEC)
 [TCA_STAB_BASE] = XLAT(TCA_STAB_BASE),
 #define XLAT_VAL_1 ((unsigned) (TCA_STAB_BASE))
 #define XLAT_STR_1 STRINGIFY(TCA_STAB_BASE)
 [TCA_STAB_DATA] = XLAT(TCA_STAB_DATA),
 #define XLAT_VAL_2 ((unsigned) (TCA_STAB_DATA))
 #define XLAT_STR_2 STRINGIFY(TCA_STAB_DATA)
};
static
const struct xlat rtnl_tca_stab_attrs[1] = { {
 .data = rtnl_tca_stab_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_tca_stab_attrs_xdata),
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
