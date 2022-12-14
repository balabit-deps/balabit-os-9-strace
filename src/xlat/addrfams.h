/* Generated by ./src/xlat/gen.sh from ./src/xlat/addrfams.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AF_UNSPEC) || (defined(HAVE_DECL_AF_UNSPEC) && HAVE_DECL_AF_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_UNSPEC) == (0), "AF_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_UNSPEC 0
#endif
#if defined(AF_UNIX) || (defined(HAVE_DECL_AF_UNIX) && HAVE_DECL_AF_UNIX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_UNIX) == (1), "AF_UNIX != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_UNIX 1
#endif
#if defined(AF_INET) || (defined(HAVE_DECL_AF_INET) && HAVE_DECL_AF_INET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_INET) == (2), "AF_INET != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_INET 2
#endif
#if defined(AF_AX25) || (defined(HAVE_DECL_AF_AX25) && HAVE_DECL_AF_AX25)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_AX25) == (3), "AF_AX25 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_AX25 3
#endif
#if defined(AF_IPX) || (defined(HAVE_DECL_AF_IPX) && HAVE_DECL_AF_IPX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_IPX) == (4), "AF_IPX != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_IPX 4
#endif
#if defined(AF_APPLETALK) || (defined(HAVE_DECL_AF_APPLETALK) && HAVE_DECL_AF_APPLETALK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_APPLETALK) == (5), "AF_APPLETALK != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_APPLETALK 5
#endif
#if defined(AF_NETROM) || (defined(HAVE_DECL_AF_NETROM) && HAVE_DECL_AF_NETROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_NETROM) == (6), "AF_NETROM != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_NETROM 6
#endif
#if defined(AF_BRIDGE) || (defined(HAVE_DECL_AF_BRIDGE) && HAVE_DECL_AF_BRIDGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_BRIDGE) == (7), "AF_BRIDGE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_BRIDGE 7
#endif
#if defined(AF_ATMPVC) || (defined(HAVE_DECL_AF_ATMPVC) && HAVE_DECL_AF_ATMPVC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ATMPVC) == (8), "AF_ATMPVC != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ATMPVC 8
#endif
#if defined(AF_X25) || (defined(HAVE_DECL_AF_X25) && HAVE_DECL_AF_X25)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_X25) == (9), "AF_X25 != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_X25 9
#endif
#if defined(AF_INET6) || (defined(HAVE_DECL_AF_INET6) && HAVE_DECL_AF_INET6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_INET6) == (10), "AF_INET6 != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_INET6 10
#endif
#if defined(AF_ROSE) || (defined(HAVE_DECL_AF_ROSE) && HAVE_DECL_AF_ROSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ROSE) == (11), "AF_ROSE != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ROSE 11
#endif
#if defined(AF_DECnet) || (defined(HAVE_DECL_AF_DECnet) && HAVE_DECL_AF_DECnet)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_DECnet) == (12), "AF_DECnet != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_DECnet 12
#endif
#if defined(AF_NETBEUI) || (defined(HAVE_DECL_AF_NETBEUI) && HAVE_DECL_AF_NETBEUI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_NETBEUI) == (13), "AF_NETBEUI != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_NETBEUI 13
#endif
#if defined(AF_SECURITY) || (defined(HAVE_DECL_AF_SECURITY) && HAVE_DECL_AF_SECURITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_SECURITY) == (14), "AF_SECURITY != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_SECURITY 14
#endif
#if defined(AF_KEY) || (defined(HAVE_DECL_AF_KEY) && HAVE_DECL_AF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_KEY) == (15), "AF_KEY != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_KEY 15
#endif
#if defined(AF_NETLINK) || (defined(HAVE_DECL_AF_NETLINK) && HAVE_DECL_AF_NETLINK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_NETLINK) == (16), "AF_NETLINK != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_NETLINK 16
#endif
#if defined(AF_PACKET) || (defined(HAVE_DECL_AF_PACKET) && HAVE_DECL_AF_PACKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_PACKET) == (17), "AF_PACKET != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_PACKET 17
#endif
#if defined(AF_ASH) || (defined(HAVE_DECL_AF_ASH) && HAVE_DECL_AF_ASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ASH) == (18), "AF_ASH != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ASH 18
#endif
#if defined(AF_ECONET) || (defined(HAVE_DECL_AF_ECONET) && HAVE_DECL_AF_ECONET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ECONET) == (19), "AF_ECONET != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ECONET 19
#endif
#if defined(AF_ATMSVC) || (defined(HAVE_DECL_AF_ATMSVC) && HAVE_DECL_AF_ATMSVC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ATMSVC) == (20), "AF_ATMSVC != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ATMSVC 20
#endif
#if defined(AF_RDS) || (defined(HAVE_DECL_AF_RDS) && HAVE_DECL_AF_RDS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_RDS) == (21), "AF_RDS != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_RDS 21
#endif
#if defined(AF_SNA) || (defined(HAVE_DECL_AF_SNA) && HAVE_DECL_AF_SNA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_SNA) == (22), "AF_SNA != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_SNA 22
#endif
#if defined(AF_IRDA) || (defined(HAVE_DECL_AF_IRDA) && HAVE_DECL_AF_IRDA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_IRDA) == (23), "AF_IRDA != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_IRDA 23
#endif
#if defined(AF_PPPOX) || (defined(HAVE_DECL_AF_PPPOX) && HAVE_DECL_AF_PPPOX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_PPPOX) == (24), "AF_PPPOX != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_PPPOX 24
#endif
#if defined(AF_WANPIPE) || (defined(HAVE_DECL_AF_WANPIPE) && HAVE_DECL_AF_WANPIPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_WANPIPE) == (25), "AF_WANPIPE != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_WANPIPE 25
#endif
#if defined(AF_LLC) || (defined(HAVE_DECL_AF_LLC) && HAVE_DECL_AF_LLC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_LLC) == (26), "AF_LLC != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_LLC 26
#endif
#if defined(AF_IB) || (defined(HAVE_DECL_AF_IB) && HAVE_DECL_AF_IB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_IB) == (27), "AF_IB != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_IB 27
#endif
#if defined(AF_MPLS) || (defined(HAVE_DECL_AF_MPLS) && HAVE_DECL_AF_MPLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_MPLS) == (28), "AF_MPLS != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_MPLS 28
#endif
#if defined(AF_CAN) || (defined(HAVE_DECL_AF_CAN) && HAVE_DECL_AF_CAN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_CAN) == (29), "AF_CAN != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_CAN 29
#endif
#if defined(AF_TIPC) || (defined(HAVE_DECL_AF_TIPC) && HAVE_DECL_AF_TIPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_TIPC) == (30), "AF_TIPC != 30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_TIPC 30
#endif
#if defined(AF_BLUETOOTH) || (defined(HAVE_DECL_AF_BLUETOOTH) && HAVE_DECL_AF_BLUETOOTH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_BLUETOOTH) == (31), "AF_BLUETOOTH != 31");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_BLUETOOTH 31
#endif
#if defined(AF_IUCV) || (defined(HAVE_DECL_AF_IUCV) && HAVE_DECL_AF_IUCV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_IUCV) == (32), "AF_IUCV != 32");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_IUCV 32
#endif
#if defined(AF_RXRPC) || (defined(HAVE_DECL_AF_RXRPC) && HAVE_DECL_AF_RXRPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_RXRPC) == (33), "AF_RXRPC != 33");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_RXRPC 33
#endif
#if defined(AF_ISDN) || (defined(HAVE_DECL_AF_ISDN) && HAVE_DECL_AF_ISDN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ISDN) == (34), "AF_ISDN != 34");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ISDN 34
#endif
#if defined(AF_PHONET) || (defined(HAVE_DECL_AF_PHONET) && HAVE_DECL_AF_PHONET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_PHONET) == (35), "AF_PHONET != 35");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_PHONET 35
#endif
#if defined(AF_IEEE802154) || (defined(HAVE_DECL_AF_IEEE802154) && HAVE_DECL_AF_IEEE802154)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_IEEE802154) == (36), "AF_IEEE802154 != 36");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_IEEE802154 36
#endif
#if defined(AF_CAIF) || (defined(HAVE_DECL_AF_CAIF) && HAVE_DECL_AF_CAIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_CAIF) == (37), "AF_CAIF != 37");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_CAIF 37
#endif
#if defined(AF_ALG) || (defined(HAVE_DECL_AF_ALG) && HAVE_DECL_AF_ALG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_ALG) == (38), "AF_ALG != 38");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_ALG 38
#endif
#if defined(AF_NFC) || (defined(HAVE_DECL_AF_NFC) && HAVE_DECL_AF_NFC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_NFC) == (39), "AF_NFC != 39");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_NFC 39
#endif
#if defined(AF_VSOCK) || (defined(HAVE_DECL_AF_VSOCK) && HAVE_DECL_AF_VSOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_VSOCK) == (40), "AF_VSOCK != 40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_VSOCK 40
#endif
#if defined(AF_KCM) || (defined(HAVE_DECL_AF_KCM) && HAVE_DECL_AF_KCM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_KCM) == (41), "AF_KCM != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_KCM 41
#endif
#if defined(AF_QIPCRTR) || (defined(HAVE_DECL_AF_QIPCRTR) && HAVE_DECL_AF_QIPCRTR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_QIPCRTR) == (42), "AF_QIPCRTR != 42");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_QIPCRTR 42
#endif
#if defined(AF_SMC) || (defined(HAVE_DECL_AF_SMC) && HAVE_DECL_AF_SMC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_SMC) == (43), "AF_SMC != 43");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_SMC 43
#endif
#if defined(AF_XDP) || (defined(HAVE_DECL_AF_XDP) && HAVE_DECL_AF_XDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_XDP) == (44), "AF_XDP != 44");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_XDP 44
#endif
#if defined(AF_MCTP) || (defined(HAVE_DECL_AF_MCTP) && HAVE_DECL_AF_MCTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AF_MCTP) == (45), "AF_MCTP != 45");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AF_MCTP 45
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data addrfams_xdata[] = {
 [AF_UNSPEC] = XLAT(AF_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (AF_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(AF_UNSPEC)
 [AF_UNIX] = XLAT(AF_UNIX),
 #define XLAT_VAL_1 ((unsigned) (AF_UNIX))
 #define XLAT_STR_1 STRINGIFY(AF_UNIX)
 [AF_INET] = XLAT(AF_INET),
 #define XLAT_VAL_2 ((unsigned) (AF_INET))
 #define XLAT_STR_2 STRINGIFY(AF_INET)
 [AF_AX25] = XLAT(AF_AX25),
 #define XLAT_VAL_3 ((unsigned) (AF_AX25))
 #define XLAT_STR_3 STRINGIFY(AF_AX25)
 [AF_IPX] = XLAT(AF_IPX),
 #define XLAT_VAL_4 ((unsigned) (AF_IPX))
 #define XLAT_STR_4 STRINGIFY(AF_IPX)
 [AF_APPLETALK] = XLAT(AF_APPLETALK),
 #define XLAT_VAL_5 ((unsigned) (AF_APPLETALK))
 #define XLAT_STR_5 STRINGIFY(AF_APPLETALK)
 [AF_NETROM] = XLAT(AF_NETROM),
 #define XLAT_VAL_6 ((unsigned) (AF_NETROM))
 #define XLAT_STR_6 STRINGIFY(AF_NETROM)
 [AF_BRIDGE] = XLAT(AF_BRIDGE),
 #define XLAT_VAL_7 ((unsigned) (AF_BRIDGE))
 #define XLAT_STR_7 STRINGIFY(AF_BRIDGE)
 [AF_ATMPVC] = XLAT(AF_ATMPVC),
 #define XLAT_VAL_8 ((unsigned) (AF_ATMPVC))
 #define XLAT_STR_8 STRINGIFY(AF_ATMPVC)
 [AF_X25] = XLAT(AF_X25),
 #define XLAT_VAL_9 ((unsigned) (AF_X25))
 #define XLAT_STR_9 STRINGIFY(AF_X25)
 [AF_INET6] = XLAT(AF_INET6),
 #define XLAT_VAL_10 ((unsigned) (AF_INET6))
 #define XLAT_STR_10 STRINGIFY(AF_INET6)
 [AF_ROSE] = XLAT(AF_ROSE),
 #define XLAT_VAL_11 ((unsigned) (AF_ROSE))
 #define XLAT_STR_11 STRINGIFY(AF_ROSE)
 [AF_DECnet] = XLAT(AF_DECnet),
 #define XLAT_VAL_12 ((unsigned) (AF_DECnet))
 #define XLAT_STR_12 STRINGIFY(AF_DECnet)
 [AF_NETBEUI] = XLAT(AF_NETBEUI),
 #define XLAT_VAL_13 ((unsigned) (AF_NETBEUI))
 #define XLAT_STR_13 STRINGIFY(AF_NETBEUI)
 [AF_SECURITY] = XLAT(AF_SECURITY),
 #define XLAT_VAL_14 ((unsigned) (AF_SECURITY))
 #define XLAT_STR_14 STRINGIFY(AF_SECURITY)
 [AF_KEY] = XLAT(AF_KEY),
 #define XLAT_VAL_15 ((unsigned) (AF_KEY))
 #define XLAT_STR_15 STRINGIFY(AF_KEY)
 [AF_NETLINK] = XLAT(AF_NETLINK),
 #define XLAT_VAL_16 ((unsigned) (AF_NETLINK))
 #define XLAT_STR_16 STRINGIFY(AF_NETLINK)
 [AF_PACKET] = XLAT(AF_PACKET),
 #define XLAT_VAL_17 ((unsigned) (AF_PACKET))
 #define XLAT_STR_17 STRINGIFY(AF_PACKET)
 [AF_ASH] = XLAT(AF_ASH),
 #define XLAT_VAL_18 ((unsigned) (AF_ASH))
 #define XLAT_STR_18 STRINGIFY(AF_ASH)
 [AF_ECONET] = XLAT(AF_ECONET),
 #define XLAT_VAL_19 ((unsigned) (AF_ECONET))
 #define XLAT_STR_19 STRINGIFY(AF_ECONET)
 [AF_ATMSVC] = XLAT(AF_ATMSVC),
 #define XLAT_VAL_20 ((unsigned) (AF_ATMSVC))
 #define XLAT_STR_20 STRINGIFY(AF_ATMSVC)
 [AF_RDS] = XLAT(AF_RDS),
 #define XLAT_VAL_21 ((unsigned) (AF_RDS))
 #define XLAT_STR_21 STRINGIFY(AF_RDS)
 [AF_SNA] = XLAT(AF_SNA),
 #define XLAT_VAL_22 ((unsigned) (AF_SNA))
 #define XLAT_STR_22 STRINGIFY(AF_SNA)
 [AF_IRDA] = XLAT(AF_IRDA),
 #define XLAT_VAL_23 ((unsigned) (AF_IRDA))
 #define XLAT_STR_23 STRINGIFY(AF_IRDA)
 [AF_PPPOX] = XLAT(AF_PPPOX),
 #define XLAT_VAL_24 ((unsigned) (AF_PPPOX))
 #define XLAT_STR_24 STRINGIFY(AF_PPPOX)
 [AF_WANPIPE] = XLAT(AF_WANPIPE),
 #define XLAT_VAL_25 ((unsigned) (AF_WANPIPE))
 #define XLAT_STR_25 STRINGIFY(AF_WANPIPE)
 [AF_LLC] = XLAT(AF_LLC),
 #define XLAT_VAL_26 ((unsigned) (AF_LLC))
 #define XLAT_STR_26 STRINGIFY(AF_LLC)
 [AF_IB] = XLAT(AF_IB),
 #define XLAT_VAL_27 ((unsigned) (AF_IB))
 #define XLAT_STR_27 STRINGIFY(AF_IB)
 [AF_MPLS] = XLAT(AF_MPLS),
 #define XLAT_VAL_28 ((unsigned) (AF_MPLS))
 #define XLAT_STR_28 STRINGIFY(AF_MPLS)
 [AF_CAN] = XLAT(AF_CAN),
 #define XLAT_VAL_29 ((unsigned) (AF_CAN))
 #define XLAT_STR_29 STRINGIFY(AF_CAN)
 [AF_TIPC] = XLAT(AF_TIPC),
 #define XLAT_VAL_30 ((unsigned) (AF_TIPC))
 #define XLAT_STR_30 STRINGIFY(AF_TIPC)
 [AF_BLUETOOTH] = XLAT(AF_BLUETOOTH),
 #define XLAT_VAL_31 ((unsigned) (AF_BLUETOOTH))
 #define XLAT_STR_31 STRINGIFY(AF_BLUETOOTH)
 [AF_IUCV] = XLAT(AF_IUCV),
 #define XLAT_VAL_32 ((unsigned) (AF_IUCV))
 #define XLAT_STR_32 STRINGIFY(AF_IUCV)
 [AF_RXRPC] = XLAT(AF_RXRPC),
 #define XLAT_VAL_33 ((unsigned) (AF_RXRPC))
 #define XLAT_STR_33 STRINGIFY(AF_RXRPC)
 [AF_ISDN] = XLAT(AF_ISDN),
 #define XLAT_VAL_34 ((unsigned) (AF_ISDN))
 #define XLAT_STR_34 STRINGIFY(AF_ISDN)
 [AF_PHONET] = XLAT(AF_PHONET),
 #define XLAT_VAL_35 ((unsigned) (AF_PHONET))
 #define XLAT_STR_35 STRINGIFY(AF_PHONET)
 [AF_IEEE802154] = XLAT(AF_IEEE802154),
 #define XLAT_VAL_36 ((unsigned) (AF_IEEE802154))
 #define XLAT_STR_36 STRINGIFY(AF_IEEE802154)
 [AF_CAIF] = XLAT(AF_CAIF),
 #define XLAT_VAL_37 ((unsigned) (AF_CAIF))
 #define XLAT_STR_37 STRINGIFY(AF_CAIF)
 [AF_ALG] = XLAT(AF_ALG),
 #define XLAT_VAL_38 ((unsigned) (AF_ALG))
 #define XLAT_STR_38 STRINGIFY(AF_ALG)
 [AF_NFC] = XLAT(AF_NFC),
 #define XLAT_VAL_39 ((unsigned) (AF_NFC))
 #define XLAT_STR_39 STRINGIFY(AF_NFC)
 [AF_VSOCK] = XLAT(AF_VSOCK),
 #define XLAT_VAL_40 ((unsigned) (AF_VSOCK))
 #define XLAT_STR_40 STRINGIFY(AF_VSOCK)
 [AF_KCM] = XLAT(AF_KCM),
 #define XLAT_VAL_41 ((unsigned) (AF_KCM))
 #define XLAT_STR_41 STRINGIFY(AF_KCM)
 [AF_QIPCRTR] = XLAT(AF_QIPCRTR),
 #define XLAT_VAL_42 ((unsigned) (AF_QIPCRTR))
 #define XLAT_STR_42 STRINGIFY(AF_QIPCRTR)
 [AF_SMC] = XLAT(AF_SMC),
 #define XLAT_VAL_43 ((unsigned) (AF_SMC))
 #define XLAT_STR_43 STRINGIFY(AF_SMC)
 [AF_XDP] = XLAT(AF_XDP),
 #define XLAT_VAL_44 ((unsigned) (AF_XDP))
 #define XLAT_STR_44 STRINGIFY(AF_XDP)
 [AF_MCTP] = XLAT(AF_MCTP),
 #define XLAT_VAL_45 ((unsigned) (AF_MCTP))
 #define XLAT_STR_45 STRINGIFY(AF_MCTP)
};
const struct xlat addrfams[1] = { {
 .data = addrfams_xdata,
 .size = ARRAY_SIZE(addrfams_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
