/* Generated by ./src/xlat/gen.sh from ./src/xlat/evdev_misc.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_misc in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data evdev_misc_xdata[] = {
 [MSC_SERIAL] = XLAT(MSC_SERIAL),
 #define XLAT_VAL_0 ((unsigned) (MSC_SERIAL))
 #define XLAT_STR_0 STRINGIFY(MSC_SERIAL)
 [MSC_PULSELED] = XLAT(MSC_PULSELED),
 #define XLAT_VAL_1 ((unsigned) (MSC_PULSELED))
 #define XLAT_STR_1 STRINGIFY(MSC_PULSELED)
 [MSC_GESTURE] = XLAT(MSC_GESTURE),
 #define XLAT_VAL_2 ((unsigned) (MSC_GESTURE))
 #define XLAT_STR_2 STRINGIFY(MSC_GESTURE)
 [MSC_RAW] = XLAT(MSC_RAW),
 #define XLAT_VAL_3 ((unsigned) (MSC_RAW))
 #define XLAT_STR_3 STRINGIFY(MSC_RAW)
 [MSC_SCAN] = XLAT(MSC_SCAN),
 #define XLAT_VAL_4 ((unsigned) (MSC_SCAN))
 #define XLAT_STR_4 STRINGIFY(MSC_SCAN)
 [MSC_TIMESTAMP] = XLAT(MSC_TIMESTAMP),
 #define XLAT_VAL_5 ((unsigned) (MSC_TIMESTAMP))
 #define XLAT_STR_5 STRINGIFY(MSC_TIMESTAMP)
};
static
const struct xlat evdev_misc[1] = { {
 .data = evdev_misc_xdata,
 .size = ARRAY_SIZE(evdev_misc_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
