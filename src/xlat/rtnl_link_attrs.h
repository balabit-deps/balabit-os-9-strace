/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_link_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_link_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_link_attrs_xdata[] = {
 [IFLA_UNSPEC] = XLAT(IFLA_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_UNSPEC)
 [IFLA_ADDRESS] = XLAT(IFLA_ADDRESS),
 #define XLAT_VAL_1 ((unsigned) (IFLA_ADDRESS))
 #define XLAT_STR_1 STRINGIFY(IFLA_ADDRESS)
 [IFLA_BROADCAST] = XLAT(IFLA_BROADCAST),
 #define XLAT_VAL_2 ((unsigned) (IFLA_BROADCAST))
 #define XLAT_STR_2 STRINGIFY(IFLA_BROADCAST)
 [IFLA_IFNAME] = XLAT(IFLA_IFNAME),
 #define XLAT_VAL_3 ((unsigned) (IFLA_IFNAME))
 #define XLAT_STR_3 STRINGIFY(IFLA_IFNAME)
 [IFLA_MTU] = XLAT(IFLA_MTU),
 #define XLAT_VAL_4 ((unsigned) (IFLA_MTU))
 #define XLAT_STR_4 STRINGIFY(IFLA_MTU)
 [IFLA_LINK] = XLAT(IFLA_LINK),
 #define XLAT_VAL_5 ((unsigned) (IFLA_LINK))
 #define XLAT_STR_5 STRINGIFY(IFLA_LINK)
 [IFLA_QDISC] = XLAT(IFLA_QDISC),
 #define XLAT_VAL_6 ((unsigned) (IFLA_QDISC))
 #define XLAT_STR_6 STRINGIFY(IFLA_QDISC)
 [IFLA_STATS] = XLAT(IFLA_STATS),
 #define XLAT_VAL_7 ((unsigned) (IFLA_STATS))
 #define XLAT_STR_7 STRINGIFY(IFLA_STATS)
 [IFLA_COST] = XLAT(IFLA_COST),
 #define XLAT_VAL_8 ((unsigned) (IFLA_COST))
 #define XLAT_STR_8 STRINGIFY(IFLA_COST)
 [IFLA_PRIORITY] = XLAT(IFLA_PRIORITY),
 #define XLAT_VAL_9 ((unsigned) (IFLA_PRIORITY))
 #define XLAT_STR_9 STRINGIFY(IFLA_PRIORITY)
 [IFLA_MASTER] = XLAT(IFLA_MASTER),
 #define XLAT_VAL_10 ((unsigned) (IFLA_MASTER))
 #define XLAT_STR_10 STRINGIFY(IFLA_MASTER)
 [IFLA_WIRELESS] = XLAT(IFLA_WIRELESS),
 #define XLAT_VAL_11 ((unsigned) (IFLA_WIRELESS))
 #define XLAT_STR_11 STRINGIFY(IFLA_WIRELESS)
 [IFLA_PROTINFO] = XLAT(IFLA_PROTINFO),
 #define XLAT_VAL_12 ((unsigned) (IFLA_PROTINFO))
 #define XLAT_STR_12 STRINGIFY(IFLA_PROTINFO)
 [IFLA_TXQLEN] = XLAT(IFLA_TXQLEN),
 #define XLAT_VAL_13 ((unsigned) (IFLA_TXQLEN))
 #define XLAT_STR_13 STRINGIFY(IFLA_TXQLEN)
 [IFLA_MAP] = XLAT(IFLA_MAP),
 #define XLAT_VAL_14 ((unsigned) (IFLA_MAP))
 #define XLAT_STR_14 STRINGIFY(IFLA_MAP)
 [IFLA_WEIGHT] = XLAT(IFLA_WEIGHT),
 #define XLAT_VAL_15 ((unsigned) (IFLA_WEIGHT))
 #define XLAT_STR_15 STRINGIFY(IFLA_WEIGHT)
 [IFLA_OPERSTATE] = XLAT(IFLA_OPERSTATE),
 #define XLAT_VAL_16 ((unsigned) (IFLA_OPERSTATE))
 #define XLAT_STR_16 STRINGIFY(IFLA_OPERSTATE)
 [IFLA_LINKMODE] = XLAT(IFLA_LINKMODE),
 #define XLAT_VAL_17 ((unsigned) (IFLA_LINKMODE))
 #define XLAT_STR_17 STRINGIFY(IFLA_LINKMODE)
 [IFLA_LINKINFO] = XLAT(IFLA_LINKINFO),
 #define XLAT_VAL_18 ((unsigned) (IFLA_LINKINFO))
 #define XLAT_STR_18 STRINGIFY(IFLA_LINKINFO)
 [IFLA_NET_NS_PID] = XLAT(IFLA_NET_NS_PID),
 #define XLAT_VAL_19 ((unsigned) (IFLA_NET_NS_PID))
 #define XLAT_STR_19 STRINGIFY(IFLA_NET_NS_PID)
 [IFLA_IFALIAS] = XLAT(IFLA_IFALIAS),
 #define XLAT_VAL_20 ((unsigned) (IFLA_IFALIAS))
 #define XLAT_STR_20 STRINGIFY(IFLA_IFALIAS)
 [IFLA_NUM_VF] = XLAT(IFLA_NUM_VF),
 #define XLAT_VAL_21 ((unsigned) (IFLA_NUM_VF))
 #define XLAT_STR_21 STRINGIFY(IFLA_NUM_VF)
 [IFLA_VFINFO_LIST] = XLAT(IFLA_VFINFO_LIST),
 #define XLAT_VAL_22 ((unsigned) (IFLA_VFINFO_LIST))
 #define XLAT_STR_22 STRINGIFY(IFLA_VFINFO_LIST)
 [IFLA_STATS64] = XLAT(IFLA_STATS64),
 #define XLAT_VAL_23 ((unsigned) (IFLA_STATS64))
 #define XLAT_STR_23 STRINGIFY(IFLA_STATS64)
 [IFLA_VF_PORTS] = XLAT(IFLA_VF_PORTS),
 #define XLAT_VAL_24 ((unsigned) (IFLA_VF_PORTS))
 #define XLAT_STR_24 STRINGIFY(IFLA_VF_PORTS)
 [IFLA_PORT_SELF] = XLAT(IFLA_PORT_SELF),
 #define XLAT_VAL_25 ((unsigned) (IFLA_PORT_SELF))
 #define XLAT_STR_25 STRINGIFY(IFLA_PORT_SELF)
 [IFLA_AF_SPEC] = XLAT(IFLA_AF_SPEC),
 #define XLAT_VAL_26 ((unsigned) (IFLA_AF_SPEC))
 #define XLAT_STR_26 STRINGIFY(IFLA_AF_SPEC)
 [IFLA_GROUP] = XLAT(IFLA_GROUP),
 #define XLAT_VAL_27 ((unsigned) (IFLA_GROUP))
 #define XLAT_STR_27 STRINGIFY(IFLA_GROUP)
 [IFLA_NET_NS_FD] = XLAT(IFLA_NET_NS_FD),
 #define XLAT_VAL_28 ((unsigned) (IFLA_NET_NS_FD))
 #define XLAT_STR_28 STRINGIFY(IFLA_NET_NS_FD)
 [IFLA_EXT_MASK] = XLAT(IFLA_EXT_MASK),
 #define XLAT_VAL_29 ((unsigned) (IFLA_EXT_MASK))
 #define XLAT_STR_29 STRINGIFY(IFLA_EXT_MASK)
 [IFLA_PROMISCUITY] = XLAT(IFLA_PROMISCUITY),
 #define XLAT_VAL_30 ((unsigned) (IFLA_PROMISCUITY))
 #define XLAT_STR_30 STRINGIFY(IFLA_PROMISCUITY)
 [IFLA_NUM_TX_QUEUES] = XLAT(IFLA_NUM_TX_QUEUES),
 #define XLAT_VAL_31 ((unsigned) (IFLA_NUM_TX_QUEUES))
 #define XLAT_STR_31 STRINGIFY(IFLA_NUM_TX_QUEUES)
 [IFLA_NUM_RX_QUEUES] = XLAT(IFLA_NUM_RX_QUEUES),
 #define XLAT_VAL_32 ((unsigned) (IFLA_NUM_RX_QUEUES))
 #define XLAT_STR_32 STRINGIFY(IFLA_NUM_RX_QUEUES)
 [IFLA_CARRIER] = XLAT(IFLA_CARRIER),
 #define XLAT_VAL_33 ((unsigned) (IFLA_CARRIER))
 #define XLAT_STR_33 STRINGIFY(IFLA_CARRIER)
 [IFLA_PHYS_PORT_ID] = XLAT(IFLA_PHYS_PORT_ID),
 #define XLAT_VAL_34 ((unsigned) (IFLA_PHYS_PORT_ID))
 #define XLAT_STR_34 STRINGIFY(IFLA_PHYS_PORT_ID)
 [IFLA_CARRIER_CHANGES] = XLAT(IFLA_CARRIER_CHANGES),
 #define XLAT_VAL_35 ((unsigned) (IFLA_CARRIER_CHANGES))
 #define XLAT_STR_35 STRINGIFY(IFLA_CARRIER_CHANGES)
 [IFLA_PHYS_SWITCH_ID] = XLAT(IFLA_PHYS_SWITCH_ID),
 #define XLAT_VAL_36 ((unsigned) (IFLA_PHYS_SWITCH_ID))
 #define XLAT_STR_36 STRINGIFY(IFLA_PHYS_SWITCH_ID)
 [IFLA_LINK_NETNSID] = XLAT(IFLA_LINK_NETNSID),
 #define XLAT_VAL_37 ((unsigned) (IFLA_LINK_NETNSID))
 #define XLAT_STR_37 STRINGIFY(IFLA_LINK_NETNSID)
 [IFLA_PHYS_PORT_NAME] = XLAT(IFLA_PHYS_PORT_NAME),
 #define XLAT_VAL_38 ((unsigned) (IFLA_PHYS_PORT_NAME))
 #define XLAT_STR_38 STRINGIFY(IFLA_PHYS_PORT_NAME)
 [IFLA_PROTO_DOWN] = XLAT(IFLA_PROTO_DOWN),
 #define XLAT_VAL_39 ((unsigned) (IFLA_PROTO_DOWN))
 #define XLAT_STR_39 STRINGIFY(IFLA_PROTO_DOWN)
 [IFLA_GSO_MAX_SEGS] = XLAT(IFLA_GSO_MAX_SEGS),
 #define XLAT_VAL_40 ((unsigned) (IFLA_GSO_MAX_SEGS))
 #define XLAT_STR_40 STRINGIFY(IFLA_GSO_MAX_SEGS)
 [IFLA_GSO_MAX_SIZE] = XLAT(IFLA_GSO_MAX_SIZE),
 #define XLAT_VAL_41 ((unsigned) (IFLA_GSO_MAX_SIZE))
 #define XLAT_STR_41 STRINGIFY(IFLA_GSO_MAX_SIZE)
 [IFLA_PAD] = XLAT(IFLA_PAD),
 #define XLAT_VAL_42 ((unsigned) (IFLA_PAD))
 #define XLAT_STR_42 STRINGIFY(IFLA_PAD)
 [IFLA_XDP] = XLAT(IFLA_XDP),
 #define XLAT_VAL_43 ((unsigned) (IFLA_XDP))
 #define XLAT_STR_43 STRINGIFY(IFLA_XDP)
 [IFLA_EVENT] = XLAT(IFLA_EVENT),
 #define XLAT_VAL_44 ((unsigned) (IFLA_EVENT))
 #define XLAT_STR_44 STRINGIFY(IFLA_EVENT)
 [IFLA_NEW_NETNSID] = XLAT(IFLA_NEW_NETNSID),
 #define XLAT_VAL_45 ((unsigned) (IFLA_NEW_NETNSID))
 #define XLAT_STR_45 STRINGIFY(IFLA_NEW_NETNSID)
 [IFLA_IF_NETNSID] = XLAT(IFLA_IF_NETNSID),
 #define XLAT_VAL_46 ((unsigned) (IFLA_IF_NETNSID))
 #define XLAT_STR_46 STRINGIFY(IFLA_IF_NETNSID)
 [IFLA_CARRIER_UP_COUNT] = XLAT(IFLA_CARRIER_UP_COUNT),
 #define XLAT_VAL_47 ((unsigned) (IFLA_CARRIER_UP_COUNT))
 #define XLAT_STR_47 STRINGIFY(IFLA_CARRIER_UP_COUNT)
 [IFLA_CARRIER_DOWN_COUNT] = XLAT(IFLA_CARRIER_DOWN_COUNT),
 #define XLAT_VAL_48 ((unsigned) (IFLA_CARRIER_DOWN_COUNT))
 #define XLAT_STR_48 STRINGIFY(IFLA_CARRIER_DOWN_COUNT)
 [IFLA_NEW_IFINDEX] = XLAT(IFLA_NEW_IFINDEX),
 #define XLAT_VAL_49 ((unsigned) (IFLA_NEW_IFINDEX))
 #define XLAT_STR_49 STRINGIFY(IFLA_NEW_IFINDEX)
 [IFLA_MIN_MTU] = XLAT(IFLA_MIN_MTU),
 #define XLAT_VAL_50 ((unsigned) (IFLA_MIN_MTU))
 #define XLAT_STR_50 STRINGIFY(IFLA_MIN_MTU)
 [IFLA_MAX_MTU] = XLAT(IFLA_MAX_MTU),
 #define XLAT_VAL_51 ((unsigned) (IFLA_MAX_MTU))
 #define XLAT_STR_51 STRINGIFY(IFLA_MAX_MTU)
 [IFLA_PROP_LIST] = XLAT(IFLA_PROP_LIST),
 #define XLAT_VAL_52 ((unsigned) (IFLA_PROP_LIST))
 #define XLAT_STR_52 STRINGIFY(IFLA_PROP_LIST)
 [IFLA_ALT_IFNAME] = XLAT(IFLA_ALT_IFNAME),
 #define XLAT_VAL_53 ((unsigned) (IFLA_ALT_IFNAME))
 #define XLAT_STR_53 STRINGIFY(IFLA_ALT_IFNAME)
 [IFLA_PERM_ADDRESS] = XLAT(IFLA_PERM_ADDRESS),
 #define XLAT_VAL_54 ((unsigned) (IFLA_PERM_ADDRESS))
 #define XLAT_STR_54 STRINGIFY(IFLA_PERM_ADDRESS)
 [IFLA_PROTO_DOWN_REASON] = XLAT(IFLA_PROTO_DOWN_REASON),
 #define XLAT_VAL_55 ((unsigned) (IFLA_PROTO_DOWN_REASON))
 #define XLAT_STR_55 STRINGIFY(IFLA_PROTO_DOWN_REASON)
 [IFLA_PARENT_DEV_NAME] = XLAT(IFLA_PARENT_DEV_NAME),
 #define XLAT_VAL_56 ((unsigned) (IFLA_PARENT_DEV_NAME))
 #define XLAT_STR_56 STRINGIFY(IFLA_PARENT_DEV_NAME)
 [IFLA_PARENT_DEV_BUS_NAME] = XLAT(IFLA_PARENT_DEV_BUS_NAME),
 #define XLAT_VAL_57 ((unsigned) (IFLA_PARENT_DEV_BUS_NAME))
 #define XLAT_STR_57 STRINGIFY(IFLA_PARENT_DEV_BUS_NAME)
};
static
const struct xlat rtnl_link_attrs[1] = { {
 .data = rtnl_link_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_link_attrs_xdata),
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
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
#  endif
#  ifdef XLAT_VAL_35
  | XLAT_VAL_35
#  endif
#  ifdef XLAT_VAL_36
  | XLAT_VAL_36
#  endif
#  ifdef XLAT_VAL_37
  | XLAT_VAL_37
#  endif
#  ifdef XLAT_VAL_38
  | XLAT_VAL_38
#  endif
#  ifdef XLAT_VAL_39
  | XLAT_VAL_39
#  endif
#  ifdef XLAT_VAL_40
  | XLAT_VAL_40
#  endif
#  ifdef XLAT_VAL_41
  | XLAT_VAL_41
#  endif
#  ifdef XLAT_VAL_42
  | XLAT_VAL_42
#  endif
#  ifdef XLAT_VAL_43
  | XLAT_VAL_43
#  endif
#  ifdef XLAT_VAL_44
  | XLAT_VAL_44
#  endif
#  ifdef XLAT_VAL_45
  | XLAT_VAL_45
#  endif
#  ifdef XLAT_VAL_46
  | XLAT_VAL_46
#  endif
#  ifdef XLAT_VAL_47
  | XLAT_VAL_47
#  endif
#  ifdef XLAT_VAL_48
  | XLAT_VAL_48
#  endif
#  ifdef XLAT_VAL_49
  | XLAT_VAL_49
#  endif
#  ifdef XLAT_VAL_50
  | XLAT_VAL_50
#  endif
#  ifdef XLAT_VAL_51
  | XLAT_VAL_51
#  endif
#  ifdef XLAT_VAL_52
  | XLAT_VAL_52
#  endif
#  ifdef XLAT_VAL_53
  | XLAT_VAL_53
#  endif
#  ifdef XLAT_VAL_54
  | XLAT_VAL_54
#  endif
#  ifdef XLAT_VAL_55
  | XLAT_VAL_55
#  endif
#  ifdef XLAT_VAL_56
  | XLAT_VAL_56
#  endif
#  ifdef XLAT_VAL_57
  | XLAT_VAL_57
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
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
#  endif
#  ifdef XLAT_STR_35
  + sizeof(XLAT_STR_35)
#  endif
#  ifdef XLAT_STR_36
  + sizeof(XLAT_STR_36)
#  endif
#  ifdef XLAT_STR_37
  + sizeof(XLAT_STR_37)
#  endif
#  ifdef XLAT_STR_38
  + sizeof(XLAT_STR_38)
#  endif
#  ifdef XLAT_STR_39
  + sizeof(XLAT_STR_39)
#  endif
#  ifdef XLAT_STR_40
  + sizeof(XLAT_STR_40)
#  endif
#  ifdef XLAT_STR_41
  + sizeof(XLAT_STR_41)
#  endif
#  ifdef XLAT_STR_42
  + sizeof(XLAT_STR_42)
#  endif
#  ifdef XLAT_STR_43
  + sizeof(XLAT_STR_43)
#  endif
#  ifdef XLAT_STR_44
  + sizeof(XLAT_STR_44)
#  endif
#  ifdef XLAT_STR_45
  + sizeof(XLAT_STR_45)
#  endif
#  ifdef XLAT_STR_46
  + sizeof(XLAT_STR_46)
#  endif
#  ifdef XLAT_STR_47
  + sizeof(XLAT_STR_47)
#  endif
#  ifdef XLAT_STR_48
  + sizeof(XLAT_STR_48)
#  endif
#  ifdef XLAT_STR_49
  + sizeof(XLAT_STR_49)
#  endif
#  ifdef XLAT_STR_50
  + sizeof(XLAT_STR_50)
#  endif
#  ifdef XLAT_STR_51
  + sizeof(XLAT_STR_51)
#  endif
#  ifdef XLAT_STR_52
  + sizeof(XLAT_STR_52)
#  endif
#  ifdef XLAT_STR_53
  + sizeof(XLAT_STR_53)
#  endif
#  ifdef XLAT_STR_54
  + sizeof(XLAT_STR_54)
#  endif
#  ifdef XLAT_STR_55
  + sizeof(XLAT_STR_55)
#  endif
#  ifdef XLAT_STR_56
  + sizeof(XLAT_STR_56)
#  endif
#  ifdef XLAT_STR_57
  + sizeof(XLAT_STR_57)
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
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
#  undef XLAT_STR_35
#  undef XLAT_VAL_35
#  undef XLAT_STR_36
#  undef XLAT_VAL_36
#  undef XLAT_STR_37
#  undef XLAT_VAL_37
#  undef XLAT_STR_38
#  undef XLAT_VAL_38
#  undef XLAT_STR_39
#  undef XLAT_VAL_39
#  undef XLAT_STR_40
#  undef XLAT_VAL_40
#  undef XLAT_STR_41
#  undef XLAT_VAL_41
#  undef XLAT_STR_42
#  undef XLAT_VAL_42
#  undef XLAT_STR_43
#  undef XLAT_VAL_43
#  undef XLAT_STR_44
#  undef XLAT_VAL_44
#  undef XLAT_STR_45
#  undef XLAT_VAL_45
#  undef XLAT_STR_46
#  undef XLAT_VAL_46
#  undef XLAT_STR_47
#  undef XLAT_VAL_47
#  undef XLAT_STR_48
#  undef XLAT_VAL_48
#  undef XLAT_STR_49
#  undef XLAT_VAL_49
#  undef XLAT_STR_50
#  undef XLAT_VAL_50
#  undef XLAT_STR_51
#  undef XLAT_VAL_51
#  undef XLAT_STR_52
#  undef XLAT_VAL_52
#  undef XLAT_STR_53
#  undef XLAT_VAL_53
#  undef XLAT_STR_54
#  undef XLAT_VAL_54
#  undef XLAT_STR_55
#  undef XLAT_VAL_55
#  undef XLAT_STR_56
#  undef XLAT_VAL_56
#  undef XLAT_STR_57
#  undef XLAT_VAL_57
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
