/* Generated by ./src/xlat/gen.sh from ./src/xlat/setsock_ip_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat setsock_ip_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data setsock_ip_options_xdata[] = {
/*
* Options specific to setsockopt(SOL_IP).
* Common {g,s}etsockopt(SOL_IP) options
* should be in sock_ip_options.in instead.
*/

#if defined(ARPT_SO_SET_REPLACE) || (defined(HAVE_DECL_ARPT_SO_SET_REPLACE) && HAVE_DECL_ARPT_SO_SET_REPLACE)
  XLAT(ARPT_SO_SET_REPLACE),
 #define XLAT_VAL_0 ((unsigned) (ARPT_SO_SET_REPLACE))
 #define XLAT_STR_0 STRINGIFY(ARPT_SO_SET_REPLACE)
#endif
#if defined(ARPT_SO_SET_ADD_COUNTERS) || (defined(HAVE_DECL_ARPT_SO_SET_ADD_COUNTERS) && HAVE_DECL_ARPT_SO_SET_ADD_COUNTERS)
  XLAT(ARPT_SO_SET_ADD_COUNTERS),
 #define XLAT_VAL_1 ((unsigned) (ARPT_SO_SET_ADD_COUNTERS))
 #define XLAT_STR_1 STRINGIFY(ARPT_SO_SET_ADD_COUNTERS)
#endif

#if defined(EBT_SO_SET_ENTRIES) || (defined(HAVE_DECL_EBT_SO_SET_ENTRIES) && HAVE_DECL_EBT_SO_SET_ENTRIES)
  XLAT(EBT_SO_SET_ENTRIES),
 #define XLAT_VAL_2 ((unsigned) (EBT_SO_SET_ENTRIES))
 #define XLAT_STR_2 STRINGIFY(EBT_SO_SET_ENTRIES)
#endif
#if defined(EBT_SO_SET_COUNTERS) || (defined(HAVE_DECL_EBT_SO_SET_COUNTERS) && HAVE_DECL_EBT_SO_SET_COUNTERS)
  XLAT(EBT_SO_SET_COUNTERS),
 #define XLAT_VAL_3 ((unsigned) (EBT_SO_SET_COUNTERS))
 #define XLAT_STR_3 STRINGIFY(EBT_SO_SET_COUNTERS)
#endif

#if defined(IP_VS_SO_SET_NONE) || (defined(HAVE_DECL_IP_VS_SO_SET_NONE) && HAVE_DECL_IP_VS_SO_SET_NONE)
  XLAT(IP_VS_SO_SET_NONE),
 #define XLAT_VAL_4 ((unsigned) (IP_VS_SO_SET_NONE))
 #define XLAT_STR_4 STRINGIFY(IP_VS_SO_SET_NONE)
#endif
#if defined(IP_VS_SO_SET_INSERT) || (defined(HAVE_DECL_IP_VS_SO_SET_INSERT) && HAVE_DECL_IP_VS_SO_SET_INSERT)
  XLAT(IP_VS_SO_SET_INSERT),
 #define XLAT_VAL_5 ((unsigned) (IP_VS_SO_SET_INSERT))
 #define XLAT_STR_5 STRINGIFY(IP_VS_SO_SET_INSERT)
#endif
#if defined(IP_VS_SO_SET_ADD) || (defined(HAVE_DECL_IP_VS_SO_SET_ADD) && HAVE_DECL_IP_VS_SO_SET_ADD)
  XLAT(IP_VS_SO_SET_ADD),
 #define XLAT_VAL_6 ((unsigned) (IP_VS_SO_SET_ADD))
 #define XLAT_STR_6 STRINGIFY(IP_VS_SO_SET_ADD)
#endif
#if defined(IP_VS_SO_SET_EDIT) || (defined(HAVE_DECL_IP_VS_SO_SET_EDIT) && HAVE_DECL_IP_VS_SO_SET_EDIT)
  XLAT(IP_VS_SO_SET_EDIT),
 #define XLAT_VAL_7 ((unsigned) (IP_VS_SO_SET_EDIT))
 #define XLAT_STR_7 STRINGIFY(IP_VS_SO_SET_EDIT)
#endif
#if defined(IP_VS_SO_SET_DEL) || (defined(HAVE_DECL_IP_VS_SO_SET_DEL) && HAVE_DECL_IP_VS_SO_SET_DEL)
  XLAT(IP_VS_SO_SET_DEL),
 #define XLAT_VAL_8 ((unsigned) (IP_VS_SO_SET_DEL))
 #define XLAT_STR_8 STRINGIFY(IP_VS_SO_SET_DEL)
#endif
#if defined(IP_VS_SO_SET_FLUSH) || (defined(HAVE_DECL_IP_VS_SO_SET_FLUSH) && HAVE_DECL_IP_VS_SO_SET_FLUSH)
  XLAT(IP_VS_SO_SET_FLUSH),
 #define XLAT_VAL_9 ((unsigned) (IP_VS_SO_SET_FLUSH))
 #define XLAT_STR_9 STRINGIFY(IP_VS_SO_SET_FLUSH)
#endif
#if defined(IP_VS_SO_SET_LIST) || (defined(HAVE_DECL_IP_VS_SO_SET_LIST) && HAVE_DECL_IP_VS_SO_SET_LIST)
  XLAT(IP_VS_SO_SET_LIST),
 #define XLAT_VAL_10 ((unsigned) (IP_VS_SO_SET_LIST))
 #define XLAT_STR_10 STRINGIFY(IP_VS_SO_SET_LIST)
#endif
#if defined(IP_VS_SO_SET_ADDDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_ADDDEST) && HAVE_DECL_IP_VS_SO_SET_ADDDEST)
  XLAT(IP_VS_SO_SET_ADDDEST),
 #define XLAT_VAL_11 ((unsigned) (IP_VS_SO_SET_ADDDEST))
 #define XLAT_STR_11 STRINGIFY(IP_VS_SO_SET_ADDDEST)
#endif
#if defined(IP_VS_SO_SET_DELDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_DELDEST) && HAVE_DECL_IP_VS_SO_SET_DELDEST)
  XLAT(IP_VS_SO_SET_DELDEST),
 #define XLAT_VAL_12 ((unsigned) (IP_VS_SO_SET_DELDEST))
 #define XLAT_STR_12 STRINGIFY(IP_VS_SO_SET_DELDEST)
#endif
#if defined(IP_VS_SO_SET_EDITDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_EDITDEST) && HAVE_DECL_IP_VS_SO_SET_EDITDEST)
  XLAT(IP_VS_SO_SET_EDITDEST),
 #define XLAT_VAL_13 ((unsigned) (IP_VS_SO_SET_EDITDEST))
 #define XLAT_STR_13 STRINGIFY(IP_VS_SO_SET_EDITDEST)
#endif
#if defined(IP_VS_SO_SET_TIMEOUT) || (defined(HAVE_DECL_IP_VS_SO_SET_TIMEOUT) && HAVE_DECL_IP_VS_SO_SET_TIMEOUT)
  XLAT(IP_VS_SO_SET_TIMEOUT),
 #define XLAT_VAL_14 ((unsigned) (IP_VS_SO_SET_TIMEOUT))
 #define XLAT_STR_14 STRINGIFY(IP_VS_SO_SET_TIMEOUT)
#endif
#if defined(IP_VS_SO_SET_STARTDAEMON) || (defined(HAVE_DECL_IP_VS_SO_SET_STARTDAEMON) && HAVE_DECL_IP_VS_SO_SET_STARTDAEMON)
  XLAT(IP_VS_SO_SET_STARTDAEMON),
 #define XLAT_VAL_15 ((unsigned) (IP_VS_SO_SET_STARTDAEMON))
 #define XLAT_STR_15 STRINGIFY(IP_VS_SO_SET_STARTDAEMON)
#endif
#if defined(IP_VS_SO_SET_STOPDAEMON) || (defined(HAVE_DECL_IP_VS_SO_SET_STOPDAEMON) && HAVE_DECL_IP_VS_SO_SET_STOPDAEMON)
  XLAT(IP_VS_SO_SET_STOPDAEMON),
 #define XLAT_VAL_16 ((unsigned) (IP_VS_SO_SET_STOPDAEMON))
 #define XLAT_STR_16 STRINGIFY(IP_VS_SO_SET_STOPDAEMON)
#endif
#if defined(IP_VS_SO_SET_RESTORE) || (defined(HAVE_DECL_IP_VS_SO_SET_RESTORE) && HAVE_DECL_IP_VS_SO_SET_RESTORE)
  XLAT(IP_VS_SO_SET_RESTORE),
 #define XLAT_VAL_17 ((unsigned) (IP_VS_SO_SET_RESTORE))
 #define XLAT_STR_17 STRINGIFY(IP_VS_SO_SET_RESTORE)
#endif
#if defined(IP_VS_SO_SET_SAVE) || (defined(HAVE_DECL_IP_VS_SO_SET_SAVE) && HAVE_DECL_IP_VS_SO_SET_SAVE)
  XLAT(IP_VS_SO_SET_SAVE),
 #define XLAT_VAL_18 ((unsigned) (IP_VS_SO_SET_SAVE))
 #define XLAT_STR_18 STRINGIFY(IP_VS_SO_SET_SAVE)
#endif
#if defined(IP_VS_SO_SET_ZERO) || (defined(HAVE_DECL_IP_VS_SO_SET_ZERO) && HAVE_DECL_IP_VS_SO_SET_ZERO)
  XLAT(IP_VS_SO_SET_ZERO),
 #define XLAT_VAL_19 ((unsigned) (IP_VS_SO_SET_ZERO))
 #define XLAT_STR_19 STRINGIFY(IP_VS_SO_SET_ZERO)
#endif

#if defined(IPT_SO_SET_REPLACE) || (defined(HAVE_DECL_IPT_SO_SET_REPLACE) && HAVE_DECL_IPT_SO_SET_REPLACE)
  XLAT(IPT_SO_SET_REPLACE),
 #define XLAT_VAL_20 ((unsigned) (IPT_SO_SET_REPLACE))
 #define XLAT_STR_20 STRINGIFY(IPT_SO_SET_REPLACE)
#endif
#if defined(IPT_SO_SET_ADD_COUNTERS) || (defined(HAVE_DECL_IPT_SO_SET_ADD_COUNTERS) && HAVE_DECL_IPT_SO_SET_ADD_COUNTERS)
  XLAT(IPT_SO_SET_ADD_COUNTERS),
 #define XLAT_VAL_21 ((unsigned) (IPT_SO_SET_ADD_COUNTERS))
 #define XLAT_STR_21 STRINGIFY(IPT_SO_SET_ADD_COUNTERS)
#endif
};
static
const struct xlat setsock_ip_options[1] = { {
 .data = setsock_ip_options_xdata,
 .size = ARRAY_SIZE(setsock_ip_options_xdata),
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
