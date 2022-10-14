/* Generated by ./src/xlat/gen.sh from ./src/xlat/netlink_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data netlink_protocols_xdata[] = {
 [NETLINK_ROUTE] = XLAT(NETLINK_ROUTE),
 #define XLAT_VAL_0 ((unsigned) (NETLINK_ROUTE))
 #define XLAT_STR_0 STRINGIFY(NETLINK_ROUTE)
 [NETLINK_UNUSED] = XLAT(NETLINK_UNUSED),
 #define XLAT_VAL_1 ((unsigned) (NETLINK_UNUSED))
 #define XLAT_STR_1 STRINGIFY(NETLINK_UNUSED)
 [NETLINK_USERSOCK] = XLAT(NETLINK_USERSOCK),
 #define XLAT_VAL_2 ((unsigned) (NETLINK_USERSOCK))
 #define XLAT_STR_2 STRINGIFY(NETLINK_USERSOCK)
 [NETLINK_FIREWALL] = XLAT(NETLINK_FIREWALL),
 #define XLAT_VAL_3 ((unsigned) (NETLINK_FIREWALL))
 #define XLAT_STR_3 STRINGIFY(NETLINK_FIREWALL)
 [NETLINK_SOCK_DIAG] = XLAT(NETLINK_SOCK_DIAG),
 #define XLAT_VAL_4 ((unsigned) (NETLINK_SOCK_DIAG))
 #define XLAT_STR_4 STRINGIFY(NETLINK_SOCK_DIAG)
 [NETLINK_NFLOG] = XLAT(NETLINK_NFLOG),
 #define XLAT_VAL_5 ((unsigned) (NETLINK_NFLOG))
 #define XLAT_STR_5 STRINGIFY(NETLINK_NFLOG)
 [NETLINK_XFRM] = XLAT(NETLINK_XFRM),
 #define XLAT_VAL_6 ((unsigned) (NETLINK_XFRM))
 #define XLAT_STR_6 STRINGIFY(NETLINK_XFRM)
 [NETLINK_SELINUX] = XLAT(NETLINK_SELINUX),
 #define XLAT_VAL_7 ((unsigned) (NETLINK_SELINUX))
 #define XLAT_STR_7 STRINGIFY(NETLINK_SELINUX)
 [NETLINK_ISCSI] = XLAT(NETLINK_ISCSI),
 #define XLAT_VAL_8 ((unsigned) (NETLINK_ISCSI))
 #define XLAT_STR_8 STRINGIFY(NETLINK_ISCSI)
 [NETLINK_AUDIT] = XLAT(NETLINK_AUDIT),
 #define XLAT_VAL_9 ((unsigned) (NETLINK_AUDIT))
 #define XLAT_STR_9 STRINGIFY(NETLINK_AUDIT)
 [NETLINK_FIB_LOOKUP] = XLAT(NETLINK_FIB_LOOKUP),
 #define XLAT_VAL_10 ((unsigned) (NETLINK_FIB_LOOKUP))
 #define XLAT_STR_10 STRINGIFY(NETLINK_FIB_LOOKUP)
 [NETLINK_CONNECTOR] = XLAT(NETLINK_CONNECTOR),
 #define XLAT_VAL_11 ((unsigned) (NETLINK_CONNECTOR))
 #define XLAT_STR_11 STRINGIFY(NETLINK_CONNECTOR)
 [NETLINK_NETFILTER] = XLAT(NETLINK_NETFILTER),
 #define XLAT_VAL_12 ((unsigned) (NETLINK_NETFILTER))
 #define XLAT_STR_12 STRINGIFY(NETLINK_NETFILTER)
 [NETLINK_IP6_FW] = XLAT(NETLINK_IP6_FW),
 #define XLAT_VAL_13 ((unsigned) (NETLINK_IP6_FW))
 #define XLAT_STR_13 STRINGIFY(NETLINK_IP6_FW)
 [NETLINK_DNRTMSG] = XLAT(NETLINK_DNRTMSG),
 #define XLAT_VAL_14 ((unsigned) (NETLINK_DNRTMSG))
 #define XLAT_STR_14 STRINGIFY(NETLINK_DNRTMSG)
 [NETLINK_KOBJECT_UEVENT] = XLAT(NETLINK_KOBJECT_UEVENT),
 #define XLAT_VAL_15 ((unsigned) (NETLINK_KOBJECT_UEVENT))
 #define XLAT_STR_15 STRINGIFY(NETLINK_KOBJECT_UEVENT)
 [NETLINK_GENERIC] = XLAT(NETLINK_GENERIC),
 #define XLAT_VAL_16 ((unsigned) (NETLINK_GENERIC))
 #define XLAT_STR_16 STRINGIFY(NETLINK_GENERIC)
 [NETLINK_SCSITRANSPORT] = XLAT(NETLINK_SCSITRANSPORT),
 #define XLAT_VAL_17 ((unsigned) (NETLINK_SCSITRANSPORT))
 #define XLAT_STR_17 STRINGIFY(NETLINK_SCSITRANSPORT)
 [NETLINK_ECRYPTFS] = XLAT(NETLINK_ECRYPTFS),
 #define XLAT_VAL_18 ((unsigned) (NETLINK_ECRYPTFS))
 #define XLAT_STR_18 STRINGIFY(NETLINK_ECRYPTFS)
 [NETLINK_RDMA] = XLAT(NETLINK_RDMA),
 #define XLAT_VAL_19 ((unsigned) (NETLINK_RDMA))
 #define XLAT_STR_19 STRINGIFY(NETLINK_RDMA)
 [NETLINK_CRYPTO] = XLAT(NETLINK_CRYPTO),
 #define XLAT_VAL_20 ((unsigned) (NETLINK_CRYPTO))
 #define XLAT_STR_20 STRINGIFY(NETLINK_CRYPTO)
 [NETLINK_SMC] = XLAT(NETLINK_SMC),
 #define XLAT_VAL_21 ((unsigned) (NETLINK_SMC))
 #define XLAT_STR_21 STRINGIFY(NETLINK_SMC)
};
const struct xlat netlink_protocols[1] = { {
 .data = netlink_protocols_xdata,
 .size = ARRAY_SIZE(netlink_protocols_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
