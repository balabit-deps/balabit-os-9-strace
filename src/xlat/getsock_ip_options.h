/* Generated by ./src/xlat/gen.sh from ./src/xlat/getsock_ip_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat getsock_ip_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data getsock_ip_options_xdata[] = {
/*
* Options specific to getsockopt(SOL_IP).
* Common {g,s}etsockopt(SOL_IP) options
* should be in sock_ip_options.in instead.
*/

#if defined(ARPT_SO_GET_INFO) || (defined(HAVE_DECL_ARPT_SO_GET_INFO) && HAVE_DECL_ARPT_SO_GET_INFO)
  XLAT(ARPT_SO_GET_INFO),
 #define XLAT_VAL_0 ((unsigned) (ARPT_SO_GET_INFO))
 #define XLAT_STR_0 STRINGIFY(ARPT_SO_GET_INFO)
#endif
#if defined(ARPT_SO_GET_ENTRIES) || (defined(HAVE_DECL_ARPT_SO_GET_ENTRIES) && HAVE_DECL_ARPT_SO_GET_ENTRIES)
  XLAT(ARPT_SO_GET_ENTRIES),
 #define XLAT_VAL_1 ((unsigned) (ARPT_SO_GET_ENTRIES))
 #define XLAT_STR_1 STRINGIFY(ARPT_SO_GET_ENTRIES)
#endif
#if defined(ARPT_SO_GET_REVISION_MATCH) || (defined(HAVE_DECL_ARPT_SO_GET_REVISION_MATCH) && HAVE_DECL_ARPT_SO_GET_REVISION_MATCH)
  XLAT(ARPT_SO_GET_REVISION_MATCH),
 #define XLAT_VAL_2 ((unsigned) (ARPT_SO_GET_REVISION_MATCH))
 #define XLAT_STR_2 STRINGIFY(ARPT_SO_GET_REVISION_MATCH)
#endif
#if defined(ARPT_SO_GET_REVISION_TARGET) || (defined(HAVE_DECL_ARPT_SO_GET_REVISION_TARGET) && HAVE_DECL_ARPT_SO_GET_REVISION_TARGET)
  XLAT(ARPT_SO_GET_REVISION_TARGET),
 #define XLAT_VAL_3 ((unsigned) (ARPT_SO_GET_REVISION_TARGET))
 #define XLAT_STR_3 STRINGIFY(ARPT_SO_GET_REVISION_TARGET)
#endif

#if defined(EBT_SO_GET_INFO) || (defined(HAVE_DECL_EBT_SO_GET_INFO) && HAVE_DECL_EBT_SO_GET_INFO)
  XLAT(EBT_SO_GET_INFO),
 #define XLAT_VAL_4 ((unsigned) (EBT_SO_GET_INFO))
 #define XLAT_STR_4 STRINGIFY(EBT_SO_GET_INFO)
#endif
#if defined(EBT_SO_GET_ENTRIES) || (defined(HAVE_DECL_EBT_SO_GET_ENTRIES) && HAVE_DECL_EBT_SO_GET_ENTRIES)
  XLAT(EBT_SO_GET_ENTRIES),
 #define XLAT_VAL_5 ((unsigned) (EBT_SO_GET_ENTRIES))
 #define XLAT_STR_5 STRINGIFY(EBT_SO_GET_ENTRIES)
#endif
#if defined(EBT_SO_GET_INIT_INFO) || (defined(HAVE_DECL_EBT_SO_GET_INIT_INFO) && HAVE_DECL_EBT_SO_GET_INIT_INFO)
  XLAT(EBT_SO_GET_INIT_INFO),
 #define XLAT_VAL_6 ((unsigned) (EBT_SO_GET_INIT_INFO))
 #define XLAT_STR_6 STRINGIFY(EBT_SO_GET_INIT_INFO)
#endif
#if defined(EBT_SO_GET_INIT_ENTRIES) || (defined(HAVE_DECL_EBT_SO_GET_INIT_ENTRIES) && HAVE_DECL_EBT_SO_GET_INIT_ENTRIES)
  XLAT(EBT_SO_GET_INIT_ENTRIES),
 #define XLAT_VAL_7 ((unsigned) (EBT_SO_GET_INIT_ENTRIES))
 #define XLAT_STR_7 STRINGIFY(EBT_SO_GET_INIT_ENTRIES)
#endif

#if defined(IP_VS_SO_GET_VERSION) || (defined(HAVE_DECL_IP_VS_SO_GET_VERSION) && HAVE_DECL_IP_VS_SO_GET_VERSION)
  XLAT(IP_VS_SO_GET_VERSION),
 #define XLAT_VAL_8 ((unsigned) (IP_VS_SO_GET_VERSION))
 #define XLAT_STR_8 STRINGIFY(IP_VS_SO_GET_VERSION)
#endif
#if defined(IP_VS_SO_GET_INFO) || (defined(HAVE_DECL_IP_VS_SO_GET_INFO) && HAVE_DECL_IP_VS_SO_GET_INFO)
  XLAT(IP_VS_SO_GET_INFO),
 #define XLAT_VAL_9 ((unsigned) (IP_VS_SO_GET_INFO))
 #define XLAT_STR_9 STRINGIFY(IP_VS_SO_GET_INFO)
#endif
#if defined(IP_VS_SO_GET_SERVICES) || (defined(HAVE_DECL_IP_VS_SO_GET_SERVICES) && HAVE_DECL_IP_VS_SO_GET_SERVICES)
  XLAT(IP_VS_SO_GET_SERVICES),
 #define XLAT_VAL_10 ((unsigned) (IP_VS_SO_GET_SERVICES))
 #define XLAT_STR_10 STRINGIFY(IP_VS_SO_GET_SERVICES)
#endif
#if defined(IP_VS_SO_GET_SERVICE) || (defined(HAVE_DECL_IP_VS_SO_GET_SERVICE) && HAVE_DECL_IP_VS_SO_GET_SERVICE)
  XLAT(IP_VS_SO_GET_SERVICE),
 #define XLAT_VAL_11 ((unsigned) (IP_VS_SO_GET_SERVICE))
 #define XLAT_STR_11 STRINGIFY(IP_VS_SO_GET_SERVICE)
#endif
#if defined(IP_VS_SO_GET_DESTS) || (defined(HAVE_DECL_IP_VS_SO_GET_DESTS) && HAVE_DECL_IP_VS_SO_GET_DESTS)
  XLAT(IP_VS_SO_GET_DESTS),
 #define XLAT_VAL_12 ((unsigned) (IP_VS_SO_GET_DESTS))
 #define XLAT_STR_12 STRINGIFY(IP_VS_SO_GET_DESTS)
#endif
#if defined(IP_VS_SO_GET_DEST) || (defined(HAVE_DECL_IP_VS_SO_GET_DEST) && HAVE_DECL_IP_VS_SO_GET_DEST)
  XLAT(IP_VS_SO_GET_DEST),
 #define XLAT_VAL_13 ((unsigned) (IP_VS_SO_GET_DEST))
 #define XLAT_STR_13 STRINGIFY(IP_VS_SO_GET_DEST)
#endif
#if defined(IP_VS_SO_GET_TIMEOUT) || (defined(HAVE_DECL_IP_VS_SO_GET_TIMEOUT) && HAVE_DECL_IP_VS_SO_GET_TIMEOUT)
  XLAT(IP_VS_SO_GET_TIMEOUT),
 #define XLAT_VAL_14 ((unsigned) (IP_VS_SO_GET_TIMEOUT))
 #define XLAT_STR_14 STRINGIFY(IP_VS_SO_GET_TIMEOUT)
#endif
#if defined(IP_VS_SO_GET_DAEMON) || (defined(HAVE_DECL_IP_VS_SO_GET_DAEMON) && HAVE_DECL_IP_VS_SO_GET_DAEMON)
  XLAT(IP_VS_SO_GET_DAEMON),
 #define XLAT_VAL_15 ((unsigned) (IP_VS_SO_GET_DAEMON))
 #define XLAT_STR_15 STRINGIFY(IP_VS_SO_GET_DAEMON)
#endif

#if defined(IPT_SO_GET_INFO) || (defined(HAVE_DECL_IPT_SO_GET_INFO) && HAVE_DECL_IPT_SO_GET_INFO)
  XLAT(IPT_SO_GET_INFO),
 #define XLAT_VAL_16 ((unsigned) (IPT_SO_GET_INFO))
 #define XLAT_STR_16 STRINGIFY(IPT_SO_GET_INFO)
#endif
#if defined(IPT_SO_GET_ENTRIES) || (defined(HAVE_DECL_IPT_SO_GET_ENTRIES) && HAVE_DECL_IPT_SO_GET_ENTRIES)
  XLAT(IPT_SO_GET_ENTRIES),
 #define XLAT_VAL_17 ((unsigned) (IPT_SO_GET_ENTRIES))
 #define XLAT_STR_17 STRINGIFY(IPT_SO_GET_ENTRIES)
#endif
#if defined(IPT_SO_GET_REVISION_MATCH) || (defined(HAVE_DECL_IPT_SO_GET_REVISION_MATCH) && HAVE_DECL_IPT_SO_GET_REVISION_MATCH)
  XLAT(IPT_SO_GET_REVISION_MATCH),
 #define XLAT_VAL_18 ((unsigned) (IPT_SO_GET_REVISION_MATCH))
 #define XLAT_STR_18 STRINGIFY(IPT_SO_GET_REVISION_MATCH)
#endif
#if defined(IPT_SO_GET_REVISION_TARGET) || (defined(HAVE_DECL_IPT_SO_GET_REVISION_TARGET) && HAVE_DECL_IPT_SO_GET_REVISION_TARGET)
  XLAT(IPT_SO_GET_REVISION_TARGET),
 #define XLAT_VAL_19 ((unsigned) (IPT_SO_GET_REVISION_TARGET))
 #define XLAT_STR_19 STRINGIFY(IPT_SO_GET_REVISION_TARGET)
#endif
};
static
const struct xlat getsock_ip_options[1] = { {
 .data = getsock_ip_options_xdata,
 .size = ARRAY_SIZE(getsock_ip_options_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
