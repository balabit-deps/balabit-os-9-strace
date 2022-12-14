/* Generated by ./src/xlat/gen.sh from ./src/xlat/gpio_event_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat gpio_event_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data gpio_event_flags_xdata[] = {
 XLAT(GPIOEVENT_REQUEST_BOTH_EDGES),
 #define XLAT_VAL_0 ((unsigned) (GPIOEVENT_REQUEST_BOTH_EDGES))
 #define XLAT_STR_0 STRINGIFY(GPIOEVENT_REQUEST_BOTH_EDGES)
 XLAT(GPIOEVENT_REQUEST_RISING_EDGE),
 #define XLAT_VAL_1 ((unsigned) (GPIOEVENT_REQUEST_RISING_EDGE))
 #define XLAT_STR_1 STRINGIFY(GPIOEVENT_REQUEST_RISING_EDGE)
 XLAT(GPIOEVENT_REQUEST_FALLING_EDGE),
 #define XLAT_VAL_2 ((unsigned) (GPIOEVENT_REQUEST_FALLING_EDGE))
 #define XLAT_STR_2 STRINGIFY(GPIOEVENT_REQUEST_FALLING_EDGE)
};
static
const struct xlat gpio_event_flags[1] = { {
 .data = gpio_event_flags_xdata,
 .size = ARRAY_SIZE(gpio_event_flags_xdata),
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
