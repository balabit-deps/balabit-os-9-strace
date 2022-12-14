/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ifla_vf_info_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_UNSPEC) == (0), "IFLA_VF_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_MAC) == (1), "IFLA_VF_MAC != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_VLAN) == (2), "IFLA_VF_VLAN != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_TX_RATE) == (3), "IFLA_VF_TX_RATE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_SPOOFCHK) == (4), "IFLA_VF_SPOOFCHK != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_LINK_STATE) == (5), "IFLA_VF_LINK_STATE != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_RATE) == (6), "IFLA_VF_RATE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_RSS_QUERY_EN) == (7), "IFLA_VF_RSS_QUERY_EN != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS) == (8), "IFLA_VF_STATS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_TRUST) == (9), "IFLA_VF_TRUST != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_IB_NODE_GUID) == (10), "IFLA_VF_IB_NODE_GUID != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_IB_PORT_GUID) == (11), "IFLA_VF_IB_PORT_GUID != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_VLAN_LIST) == (12), "IFLA_VF_VLAN_LIST != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_BROADCAST) == (13), "IFLA_VF_BROADCAST != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_vf_info_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ifla_vf_info_attrs_xdata[] = {
 [IFLA_VF_UNSPEC] = XLAT(IFLA_VF_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_VF_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_VF_UNSPEC)
 [IFLA_VF_MAC] = XLAT(IFLA_VF_MAC),
 #define XLAT_VAL_1 ((unsigned) (IFLA_VF_MAC))
 #define XLAT_STR_1 STRINGIFY(IFLA_VF_MAC)
 [IFLA_VF_VLAN] = XLAT(IFLA_VF_VLAN),
 #define XLAT_VAL_2 ((unsigned) (IFLA_VF_VLAN))
 #define XLAT_STR_2 STRINGIFY(IFLA_VF_VLAN)
 [IFLA_VF_TX_RATE] = XLAT(IFLA_VF_TX_RATE),
 #define XLAT_VAL_3 ((unsigned) (IFLA_VF_TX_RATE))
 #define XLAT_STR_3 STRINGIFY(IFLA_VF_TX_RATE)
 [IFLA_VF_SPOOFCHK] = XLAT(IFLA_VF_SPOOFCHK),
 #define XLAT_VAL_4 ((unsigned) (IFLA_VF_SPOOFCHK))
 #define XLAT_STR_4 STRINGIFY(IFLA_VF_SPOOFCHK)
 [IFLA_VF_LINK_STATE] = XLAT(IFLA_VF_LINK_STATE),
 #define XLAT_VAL_5 ((unsigned) (IFLA_VF_LINK_STATE))
 #define XLAT_STR_5 STRINGIFY(IFLA_VF_LINK_STATE)
 [IFLA_VF_RATE] = XLAT(IFLA_VF_RATE),
 #define XLAT_VAL_6 ((unsigned) (IFLA_VF_RATE))
 #define XLAT_STR_6 STRINGIFY(IFLA_VF_RATE)
 [IFLA_VF_RSS_QUERY_EN] = XLAT(IFLA_VF_RSS_QUERY_EN),
 #define XLAT_VAL_7 ((unsigned) (IFLA_VF_RSS_QUERY_EN))
 #define XLAT_STR_7 STRINGIFY(IFLA_VF_RSS_QUERY_EN)
 [IFLA_VF_STATS] = XLAT(IFLA_VF_STATS),
 #define XLAT_VAL_8 ((unsigned) (IFLA_VF_STATS))
 #define XLAT_STR_8 STRINGIFY(IFLA_VF_STATS)
 [IFLA_VF_TRUST] = XLAT(IFLA_VF_TRUST),
 #define XLAT_VAL_9 ((unsigned) (IFLA_VF_TRUST))
 #define XLAT_STR_9 STRINGIFY(IFLA_VF_TRUST)
 [IFLA_VF_IB_NODE_GUID] = XLAT(IFLA_VF_IB_NODE_GUID),
 #define XLAT_VAL_10 ((unsigned) (IFLA_VF_IB_NODE_GUID))
 #define XLAT_STR_10 STRINGIFY(IFLA_VF_IB_NODE_GUID)
 [IFLA_VF_IB_PORT_GUID] = XLAT(IFLA_VF_IB_PORT_GUID),
 #define XLAT_VAL_11 ((unsigned) (IFLA_VF_IB_PORT_GUID))
 #define XLAT_STR_11 STRINGIFY(IFLA_VF_IB_PORT_GUID)
 [IFLA_VF_VLAN_LIST] = XLAT(IFLA_VF_VLAN_LIST),
 #define XLAT_VAL_12 ((unsigned) (IFLA_VF_VLAN_LIST))
 #define XLAT_STR_12 STRINGIFY(IFLA_VF_VLAN_LIST)
 [IFLA_VF_BROADCAST] = XLAT(IFLA_VF_BROADCAST),
 #define XLAT_VAL_13 ((unsigned) (IFLA_VF_BROADCAST))
 #define XLAT_STR_13 STRINGIFY(IFLA_VF_BROADCAST)
};
static
const struct xlat rtnl_ifla_vf_info_attrs[1] = { {
 .data = rtnl_ifla_vf_info_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_vf_info_attrs_xdata),
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
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
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
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
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
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
