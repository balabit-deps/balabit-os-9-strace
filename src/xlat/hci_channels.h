/* Generated by ./src/xlat/gen.sh from ./src/xlat/hci_channels.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(HCI_CHANNEL_RAW) || (defined(HAVE_DECL_HCI_CHANNEL_RAW) && HAVE_DECL_HCI_CHANNEL_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HCI_CHANNEL_RAW) == (0), "HCI_CHANNEL_RAW != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HCI_CHANNEL_RAW 0
#endif
#if defined(HCI_CHANNEL_USER) || (defined(HAVE_DECL_HCI_CHANNEL_USER) && HAVE_DECL_HCI_CHANNEL_USER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HCI_CHANNEL_USER) == (1), "HCI_CHANNEL_USER != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HCI_CHANNEL_USER 1
#endif
#if defined(HCI_CHANNEL_MONITOR) || (defined(HAVE_DECL_HCI_CHANNEL_MONITOR) && HAVE_DECL_HCI_CHANNEL_MONITOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HCI_CHANNEL_MONITOR) == (2), "HCI_CHANNEL_MONITOR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HCI_CHANNEL_MONITOR 2
#endif
#if defined(HCI_CHANNEL_CONTROL) || (defined(HAVE_DECL_HCI_CHANNEL_CONTROL) && HAVE_DECL_HCI_CHANNEL_CONTROL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HCI_CHANNEL_CONTROL) == (3), "HCI_CHANNEL_CONTROL != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HCI_CHANNEL_CONTROL 3
#endif
#if defined(HCI_CHANNEL_LOGGING) || (defined(HAVE_DECL_HCI_CHANNEL_LOGGING) && HAVE_DECL_HCI_CHANNEL_LOGGING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HCI_CHANNEL_LOGGING) == (4), "HCI_CHANNEL_LOGGING != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HCI_CHANNEL_LOGGING 4
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat hci_channels in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data hci_channels_xdata[] = {
 [HCI_CHANNEL_RAW] = XLAT(HCI_CHANNEL_RAW),
 #define XLAT_VAL_0 ((unsigned) (HCI_CHANNEL_RAW))
 #define XLAT_STR_0 STRINGIFY(HCI_CHANNEL_RAW)
 [HCI_CHANNEL_USER] = XLAT(HCI_CHANNEL_USER),
 #define XLAT_VAL_1 ((unsigned) (HCI_CHANNEL_USER))
 #define XLAT_STR_1 STRINGIFY(HCI_CHANNEL_USER)
 [HCI_CHANNEL_MONITOR] = XLAT(HCI_CHANNEL_MONITOR),
 #define XLAT_VAL_2 ((unsigned) (HCI_CHANNEL_MONITOR))
 #define XLAT_STR_2 STRINGIFY(HCI_CHANNEL_MONITOR)
 [HCI_CHANNEL_CONTROL] = XLAT(HCI_CHANNEL_CONTROL),
 #define XLAT_VAL_3 ((unsigned) (HCI_CHANNEL_CONTROL))
 #define XLAT_STR_3 STRINGIFY(HCI_CHANNEL_CONTROL)
 [HCI_CHANNEL_LOGGING] = XLAT(HCI_CHANNEL_LOGGING),
 #define XLAT_VAL_4 ((unsigned) (HCI_CHANNEL_LOGGING))
 #define XLAT_STR_4 STRINGIFY(HCI_CHANNEL_LOGGING)
};
static
const struct xlat hci_channels[1] = { {
 .data = hci_channels_xdata,
 .size = ARRAY_SIZE(hci_channels_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
