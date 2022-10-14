/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_family.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTNL_FAMILY_IPMR) == (128), "RTNL_FAMILY_IPMR != 128");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTNL_FAMILY_IP6MR) == (129), "RTNL_FAMILY_IP6MR != 129");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_family in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_family_xdata[] = {
 XLAT(RTNL_FAMILY_IPMR),
 #define XLAT_VAL_0 ((unsigned) (RTNL_FAMILY_IPMR))
 #define XLAT_STR_0 STRINGIFY(RTNL_FAMILY_IPMR)
 XLAT(RTNL_FAMILY_IP6MR),
 #define XLAT_VAL_1 ((unsigned) (RTNL_FAMILY_IP6MR))
 #define XLAT_STR_1 STRINGIFY(RTNL_FAMILY_IP6MR)
};
static
const struct xlat rtnl_family[1] = { {
 .data = rtnl_family_xdata,
 .size = ARRAY_SIZE(rtnl_family_xdata),
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