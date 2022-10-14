/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ifla_vf_stats_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_RX_PACKETS) == (0), "IFLA_VF_STATS_RX_PACKETS != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_TX_PACKETS) == (1), "IFLA_VF_STATS_TX_PACKETS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_RX_BYTES) == (2), "IFLA_VF_STATS_RX_BYTES != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_TX_BYTES) == (3), "IFLA_VF_STATS_TX_BYTES != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_BROADCAST) == (4), "IFLA_VF_STATS_BROADCAST != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_MULTICAST) == (5), "IFLA_VF_STATS_MULTICAST != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_PAD) == (6), "IFLA_VF_STATS_PAD != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_RX_DROPPED) == (7), "IFLA_VF_STATS_RX_DROPPED != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_VF_STATS_TX_DROPPED) == (8), "IFLA_VF_STATS_TX_DROPPED != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_vf_stats_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ifla_vf_stats_attrs_xdata[] = {
 [IFLA_VF_STATS_RX_PACKETS] = XLAT(IFLA_VF_STATS_RX_PACKETS),
 #define XLAT_VAL_0 ((unsigned) (IFLA_VF_STATS_RX_PACKETS))
 #define XLAT_STR_0 STRINGIFY(IFLA_VF_STATS_RX_PACKETS)
 [IFLA_VF_STATS_TX_PACKETS] = XLAT(IFLA_VF_STATS_TX_PACKETS),
 #define XLAT_VAL_1 ((unsigned) (IFLA_VF_STATS_TX_PACKETS))
 #define XLAT_STR_1 STRINGIFY(IFLA_VF_STATS_TX_PACKETS)
 [IFLA_VF_STATS_RX_BYTES] = XLAT(IFLA_VF_STATS_RX_BYTES),
 #define XLAT_VAL_2 ((unsigned) (IFLA_VF_STATS_RX_BYTES))
 #define XLAT_STR_2 STRINGIFY(IFLA_VF_STATS_RX_BYTES)
 [IFLA_VF_STATS_TX_BYTES] = XLAT(IFLA_VF_STATS_TX_BYTES),
 #define XLAT_VAL_3 ((unsigned) (IFLA_VF_STATS_TX_BYTES))
 #define XLAT_STR_3 STRINGIFY(IFLA_VF_STATS_TX_BYTES)
 [IFLA_VF_STATS_BROADCAST] = XLAT(IFLA_VF_STATS_BROADCAST),
 #define XLAT_VAL_4 ((unsigned) (IFLA_VF_STATS_BROADCAST))
 #define XLAT_STR_4 STRINGIFY(IFLA_VF_STATS_BROADCAST)
 [IFLA_VF_STATS_MULTICAST] = XLAT(IFLA_VF_STATS_MULTICAST),
 #define XLAT_VAL_5 ((unsigned) (IFLA_VF_STATS_MULTICAST))
 #define XLAT_STR_5 STRINGIFY(IFLA_VF_STATS_MULTICAST)
 [IFLA_VF_STATS_PAD] = XLAT(IFLA_VF_STATS_PAD),
 #define XLAT_VAL_6 ((unsigned) (IFLA_VF_STATS_PAD))
 #define XLAT_STR_6 STRINGIFY(IFLA_VF_STATS_PAD)
 [IFLA_VF_STATS_RX_DROPPED] = XLAT(IFLA_VF_STATS_RX_DROPPED),
 #define XLAT_VAL_7 ((unsigned) (IFLA_VF_STATS_RX_DROPPED))
 #define XLAT_STR_7 STRINGIFY(IFLA_VF_STATS_RX_DROPPED)
 [IFLA_VF_STATS_TX_DROPPED] = XLAT(IFLA_VF_STATS_TX_DROPPED),
 #define XLAT_VAL_8 ((unsigned) (IFLA_VF_STATS_TX_DROPPED))
 #define XLAT_STR_8 STRINGIFY(IFLA_VF_STATS_TX_DROPPED)
};
static
const struct xlat rtnl_ifla_vf_stats_attrs[1] = { {
 .data = rtnl_ifla_vf_stats_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_vf_stats_attrs_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
