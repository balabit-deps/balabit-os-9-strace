/* Generated by ./src/xlat/gen.sh from ./src/xlat/sync_file_range_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SYNC_FILE_RANGE_WAIT_BEFORE) == (1), "SYNC_FILE_RANGE_WAIT_BEFORE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SYNC_FILE_RANGE_WRITE) == (2), "SYNC_FILE_RANGE_WRITE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SYNC_FILE_RANGE_WAIT_AFTER) == (4), "SYNC_FILE_RANGE_WAIT_AFTER != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sync_file_range_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sync_file_range_flags_xdata[] = {
 XLAT(SYNC_FILE_RANGE_WAIT_BEFORE),
 #define XLAT_VAL_0 ((unsigned) (SYNC_FILE_RANGE_WAIT_BEFORE))
 #define XLAT_STR_0 STRINGIFY(SYNC_FILE_RANGE_WAIT_BEFORE)
 XLAT(SYNC_FILE_RANGE_WRITE),
 #define XLAT_VAL_1 ((unsigned) (SYNC_FILE_RANGE_WRITE))
 #define XLAT_STR_1 STRINGIFY(SYNC_FILE_RANGE_WRITE)
 XLAT(SYNC_FILE_RANGE_WAIT_AFTER),
 #define XLAT_VAL_2 ((unsigned) (SYNC_FILE_RANGE_WAIT_AFTER))
 #define XLAT_STR_2 STRINGIFY(SYNC_FILE_RANGE_WAIT_AFTER)
};
static
const struct xlat sync_file_range_flags[1] = { {
 .data = sync_file_range_flags_xdata,
 .size = ARRAY_SIZE(sync_file_range_flags_xdata),
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
