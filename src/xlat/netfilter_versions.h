/* Generated by ./src/xlat/gen.sh from ./src/xlat/netfilter_versions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netfilter_versions in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data netfilter_versions_xdata[] = {
 [NFNETLINK_V0] = XLAT(NFNETLINK_V0),
 #define XLAT_VAL_0 ((unsigned) (NFNETLINK_V0))
 #define XLAT_STR_0 STRINGIFY(NFNETLINK_V0)
};
static
const struct xlat netfilter_versions[1] = { {
 .data = netfilter_versions_xdata,
 .size = ARRAY_SIZE(netfilter_versions_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
