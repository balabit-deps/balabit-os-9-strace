/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ifla_af_spec_bridge_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_FLAGS) == (0), "IFLA_BRIDGE_FLAGS != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_MODE) == (1), "IFLA_BRIDGE_MODE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_VLAN_INFO) == (2), "IFLA_BRIDGE_VLAN_INFO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_VLAN_TUNNEL_INFO) == (3), "IFLA_BRIDGE_VLAN_TUNNEL_INFO != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_MRP) == (4), "IFLA_BRIDGE_MRP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BRIDGE_CFM) == (5), "IFLA_BRIDGE_CFM != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_af_spec_bridge_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ifla_af_spec_bridge_attrs_xdata[] = {
 [IFLA_BRIDGE_FLAGS] = XLAT(IFLA_BRIDGE_FLAGS),
 #define XLAT_VAL_0 ((unsigned) (IFLA_BRIDGE_FLAGS))
 #define XLAT_STR_0 STRINGIFY(IFLA_BRIDGE_FLAGS)
 [IFLA_BRIDGE_MODE] = XLAT(IFLA_BRIDGE_MODE),
 #define XLAT_VAL_1 ((unsigned) (IFLA_BRIDGE_MODE))
 #define XLAT_STR_1 STRINGIFY(IFLA_BRIDGE_MODE)
 [IFLA_BRIDGE_VLAN_INFO] = XLAT(IFLA_BRIDGE_VLAN_INFO),
 #define XLAT_VAL_2 ((unsigned) (IFLA_BRIDGE_VLAN_INFO))
 #define XLAT_STR_2 STRINGIFY(IFLA_BRIDGE_VLAN_INFO)
 [IFLA_BRIDGE_VLAN_TUNNEL_INFO] = XLAT(IFLA_BRIDGE_VLAN_TUNNEL_INFO),
 #define XLAT_VAL_3 ((unsigned) (IFLA_BRIDGE_VLAN_TUNNEL_INFO))
 #define XLAT_STR_3 STRINGIFY(IFLA_BRIDGE_VLAN_TUNNEL_INFO)
 [IFLA_BRIDGE_MRP] = XLAT(IFLA_BRIDGE_MRP),
 #define XLAT_VAL_4 ((unsigned) (IFLA_BRIDGE_MRP))
 #define XLAT_STR_4 STRINGIFY(IFLA_BRIDGE_MRP)
 [IFLA_BRIDGE_CFM] = XLAT(IFLA_BRIDGE_CFM),
 #define XLAT_VAL_5 ((unsigned) (IFLA_BRIDGE_CFM))
 #define XLAT_STR_5 STRINGIFY(IFLA_BRIDGE_CFM)
};
static
const struct xlat rtnl_ifla_af_spec_bridge_attrs[1] = { {
 .data = rtnl_ifla_af_spec_bridge_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_af_spec_bridge_attrs_xdata),
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
