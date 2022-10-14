/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ifla_vfinfo_list_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_INFO_UNSPEC) == (0), "IFLA_VF_INFO_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_INFO) == (1), "IFLA_VF_INFO != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_vfinfo_list_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ifla_vfinfo_list_attrs_xdata[] = {
 [IFLA_VF_INFO_UNSPEC] = XLAT(IFLA_VF_INFO_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_VF_INFO_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_VF_INFO_UNSPEC)
 [IFLA_VF_INFO] = XLAT(IFLA_VF_INFO),
 #define XLAT_VAL_1 ((unsigned) (IFLA_VF_INFO))
 #define XLAT_STR_1 STRINGIFY(IFLA_VF_INFO)
};
static
const struct xlat rtnl_ifla_vfinfo_list_attrs[1] = { {
 .data = rtnl_ifla_vfinfo_list_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_vfinfo_list_attrs_xdata),
 .type = XT_INDEXED,
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