/* Generated by ./src/xlat/gen.sh from ./src/xlat/ifstats_xstats_type_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINK_XSTATS_TYPE_UNSPEC) == (0), "LINK_XSTATS_TYPE_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINK_XSTATS_TYPE_BRIDGE) == (1), "LINK_XSTATS_TYPE_BRIDGE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINK_XSTATS_TYPE_BOND) == (2), "LINK_XSTATS_TYPE_BOND != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ifstats_xstats_type_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data ifstats_xstats_type_attrs_xdata[] = {
 [LINK_XSTATS_TYPE_UNSPEC] = XLAT(LINK_XSTATS_TYPE_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (LINK_XSTATS_TYPE_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(LINK_XSTATS_TYPE_UNSPEC)
 [LINK_XSTATS_TYPE_BRIDGE] = XLAT(LINK_XSTATS_TYPE_BRIDGE),
 #define XLAT_VAL_1 ((unsigned) (LINK_XSTATS_TYPE_BRIDGE))
 #define XLAT_STR_1 STRINGIFY(LINK_XSTATS_TYPE_BRIDGE)
 [LINK_XSTATS_TYPE_BOND] = XLAT(LINK_XSTATS_TYPE_BOND),
 #define XLAT_VAL_2 ((unsigned) (LINK_XSTATS_TYPE_BOND))
 #define XLAT_STR_2 STRINGIFY(LINK_XSTATS_TYPE_BOND)
};
static
const struct xlat ifstats_xstats_type_attrs[1] = { {
 .data = ifstats_xstats_type_attrs_xdata,
 .size = ARRAY_SIZE(ifstats_xstats_type_attrs_xdata),
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
