/* Generated by ./src/xlat/gen.sh from ./src/xlat/btrfs_send_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_send_flags[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data btrfs_send_flags_xdata[] = {
 XLAT(BTRFS_SEND_FLAG_NO_FILE_DATA),
 #define XLAT_VAL_0 ((unsigned) (BTRFS_SEND_FLAG_NO_FILE_DATA))
 #define XLAT_STR_0 STRINGIFY(BTRFS_SEND_FLAG_NO_FILE_DATA)
 XLAT(BTRFS_SEND_FLAG_OMIT_STREAM_HEADER),
 #define XLAT_VAL_1 ((unsigned) (BTRFS_SEND_FLAG_OMIT_STREAM_HEADER))
 #define XLAT_STR_1 STRINGIFY(BTRFS_SEND_FLAG_OMIT_STREAM_HEADER)
 XLAT(BTRFS_SEND_FLAG_OMIT_END_CMD),
 #define XLAT_VAL_2 ((unsigned) (BTRFS_SEND_FLAG_OMIT_END_CMD))
 #define XLAT_STR_2 STRINGIFY(BTRFS_SEND_FLAG_OMIT_END_CMD)
 XLAT(BTRFS_SEND_FLAG_VERSION),
 #define XLAT_VAL_3 ((unsigned) (BTRFS_SEND_FLAG_VERSION))
 #define XLAT_STR_3 STRINGIFY(BTRFS_SEND_FLAG_VERSION)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_send_flags[1] = { {
 .data = btrfs_send_flags_xdata,
 .size = ARRAY_SIZE(btrfs_send_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
