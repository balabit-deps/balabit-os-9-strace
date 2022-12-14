/* Generated by ./src/xlat/gen.sh from ./src/xlat/kd_led_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LED_SCR) || (defined(HAVE_DECL_LED_SCR) && HAVE_DECL_LED_SCR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_SCR) == (0x1), "LED_SCR != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_SCR 0x1
#endif
#if defined(LED_NUM) || (defined(HAVE_DECL_LED_NUM) && HAVE_DECL_LED_NUM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_NUM) == (0x2), "LED_NUM != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_NUM 0x2
#endif
#if defined(LED_CAP) || (defined(HAVE_DECL_LED_CAP) && HAVE_DECL_LED_CAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LED_CAP) == (0x4), "LED_CAP != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LED_CAP 0x4
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kd_led_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data kd_led_flags_xdata[] = {
 XLAT(LED_SCR),
 #define XLAT_VAL_0 ((unsigned) (LED_SCR))
 #define XLAT_STR_0 STRINGIFY(LED_SCR)
 XLAT(LED_NUM),
 #define XLAT_VAL_1 ((unsigned) (LED_NUM))
 #define XLAT_STR_1 STRINGIFY(LED_NUM)
 XLAT(LED_CAP),
 #define XLAT_VAL_2 ((unsigned) (LED_CAP))
 #define XLAT_STR_2 STRINGIFY(LED_CAP)
};
static
const struct xlat kd_led_flags[1] = { {
 .data = kd_led_flags_xdata,
 .size = ARRAY_SIZE(kd_led_flags_xdata),
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
