/* Generated by ./src/xlat/gen.sh from ./src/xlat/uffd_copy_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uffd_copy_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data uffd_copy_flags_xdata[] = {
 XLAT_TYPE(uint64_t, UFFDIO_COPY_MODE_DONTWAKE),
 #define XLAT_VAL_0 ((uint64_t) (UFFDIO_COPY_MODE_DONTWAKE))
 #define XLAT_STR_0 STRINGIFY(UFFDIO_COPY_MODE_DONTWAKE)
 XLAT_TYPE(uint64_t, UFFDIO_COPY_MODE_WP),
 #define XLAT_VAL_1 ((uint64_t) (UFFDIO_COPY_MODE_WP))
 #define XLAT_STR_1 STRINGIFY(UFFDIO_COPY_MODE_WP)
};
static
const struct xlat uffd_copy_flags[1] = { {
 .data = uffd_copy_flags_xdata,
 .size = ARRAY_SIZE(uffd_copy_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
