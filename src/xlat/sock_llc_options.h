/* Generated by ./src/xlat/gen.sh from ./src/xlat/sock_llc_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LLC_OPT_UNKNOWN) || (defined(HAVE_DECL_LLC_OPT_UNKNOWN) && HAVE_DECL_LLC_OPT_UNKNOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_UNKNOWN) == (0), "LLC_OPT_UNKNOWN != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_UNKNOWN 0
#endif
#if defined(LLC_OPT_RETRY) || (defined(HAVE_DECL_LLC_OPT_RETRY) && HAVE_DECL_LLC_OPT_RETRY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_RETRY) == (1), "LLC_OPT_RETRY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_RETRY 1
#endif
#if defined(LLC_OPT_SIZE) || (defined(HAVE_DECL_LLC_OPT_SIZE) && HAVE_DECL_LLC_OPT_SIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_SIZE) == (2), "LLC_OPT_SIZE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_SIZE 2
#endif
#if defined(LLC_OPT_ACK_TMR_EXP) || (defined(HAVE_DECL_LLC_OPT_ACK_TMR_EXP) && HAVE_DECL_LLC_OPT_ACK_TMR_EXP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_ACK_TMR_EXP) == (3), "LLC_OPT_ACK_TMR_EXP != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_ACK_TMR_EXP 3
#endif
#if defined(LLC_OPT_P_TMR_EXP) || (defined(HAVE_DECL_LLC_OPT_P_TMR_EXP) && HAVE_DECL_LLC_OPT_P_TMR_EXP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_P_TMR_EXP) == (4), "LLC_OPT_P_TMR_EXP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_P_TMR_EXP 4
#endif
#if defined(LLC_OPT_REJ_TMR_EXP) || (defined(HAVE_DECL_LLC_OPT_REJ_TMR_EXP) && HAVE_DECL_LLC_OPT_REJ_TMR_EXP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_REJ_TMR_EXP) == (5), "LLC_OPT_REJ_TMR_EXP != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_REJ_TMR_EXP 5
#endif
#if defined(LLC_OPT_BUSY_TMR_EXP) || (defined(HAVE_DECL_LLC_OPT_BUSY_TMR_EXP) && HAVE_DECL_LLC_OPT_BUSY_TMR_EXP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_BUSY_TMR_EXP) == (6), "LLC_OPT_BUSY_TMR_EXP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_BUSY_TMR_EXP 6
#endif
#if defined(LLC_OPT_TX_WIN) || (defined(HAVE_DECL_LLC_OPT_TX_WIN) && HAVE_DECL_LLC_OPT_TX_WIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_TX_WIN) == (7), "LLC_OPT_TX_WIN != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_TX_WIN 7
#endif
#if defined(LLC_OPT_RX_WIN) || (defined(HAVE_DECL_LLC_OPT_RX_WIN) && HAVE_DECL_LLC_OPT_RX_WIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_RX_WIN) == (8), "LLC_OPT_RX_WIN != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_RX_WIN 8
#endif
#if defined(LLC_OPT_PKTINFO) || (defined(HAVE_DECL_LLC_OPT_PKTINFO) && HAVE_DECL_LLC_OPT_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LLC_OPT_PKTINFO) == (9), "LLC_OPT_PKTINFO != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LLC_OPT_PKTINFO 9
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_llc_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sock_llc_options_xdata[] = {
 [LLC_OPT_UNKNOWN] = XLAT(LLC_OPT_UNKNOWN),
 #define XLAT_VAL_0 ((unsigned) (LLC_OPT_UNKNOWN))
 #define XLAT_STR_0 STRINGIFY(LLC_OPT_UNKNOWN)
 [LLC_OPT_RETRY] = XLAT(LLC_OPT_RETRY),
 #define XLAT_VAL_1 ((unsigned) (LLC_OPT_RETRY))
 #define XLAT_STR_1 STRINGIFY(LLC_OPT_RETRY)
 [LLC_OPT_SIZE] = XLAT(LLC_OPT_SIZE),
 #define XLAT_VAL_2 ((unsigned) (LLC_OPT_SIZE))
 #define XLAT_STR_2 STRINGIFY(LLC_OPT_SIZE)
 [LLC_OPT_ACK_TMR_EXP] = XLAT(LLC_OPT_ACK_TMR_EXP),
 #define XLAT_VAL_3 ((unsigned) (LLC_OPT_ACK_TMR_EXP))
 #define XLAT_STR_3 STRINGIFY(LLC_OPT_ACK_TMR_EXP)
 [LLC_OPT_P_TMR_EXP] = XLAT(LLC_OPT_P_TMR_EXP),
 #define XLAT_VAL_4 ((unsigned) (LLC_OPT_P_TMR_EXP))
 #define XLAT_STR_4 STRINGIFY(LLC_OPT_P_TMR_EXP)
 [LLC_OPT_REJ_TMR_EXP] = XLAT(LLC_OPT_REJ_TMR_EXP),
 #define XLAT_VAL_5 ((unsigned) (LLC_OPT_REJ_TMR_EXP))
 #define XLAT_STR_5 STRINGIFY(LLC_OPT_REJ_TMR_EXP)
 [LLC_OPT_BUSY_TMR_EXP] = XLAT(LLC_OPT_BUSY_TMR_EXP),
 #define XLAT_VAL_6 ((unsigned) (LLC_OPT_BUSY_TMR_EXP))
 #define XLAT_STR_6 STRINGIFY(LLC_OPT_BUSY_TMR_EXP)
 [LLC_OPT_TX_WIN] = XLAT(LLC_OPT_TX_WIN),
 #define XLAT_VAL_7 ((unsigned) (LLC_OPT_TX_WIN))
 #define XLAT_STR_7 STRINGIFY(LLC_OPT_TX_WIN)
 [LLC_OPT_RX_WIN] = XLAT(LLC_OPT_RX_WIN),
 #define XLAT_VAL_8 ((unsigned) (LLC_OPT_RX_WIN))
 #define XLAT_STR_8 STRINGIFY(LLC_OPT_RX_WIN)
 [LLC_OPT_PKTINFO] = XLAT(LLC_OPT_PKTINFO),
 #define XLAT_VAL_9 ((unsigned) (LLC_OPT_PKTINFO))
 #define XLAT_STR_9 STRINGIFY(LLC_OPT_PKTINFO)
};
static
const struct xlat sock_llc_options[1] = { {
 .data = sock_llc_options_xdata,
 .size = ARRAY_SIZE(sock_llc_options_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
