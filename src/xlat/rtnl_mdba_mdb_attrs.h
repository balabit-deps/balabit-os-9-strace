/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_mdba_mdb_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_mdba_mdb_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_mdba_mdb_attrs_xdata[] = {
 [MDBA_MDB_UNSPEC] = XLAT(MDBA_MDB_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (MDBA_MDB_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(MDBA_MDB_UNSPEC)
 [MDBA_MDB_ENTRY] = XLAT(MDBA_MDB_ENTRY),
 #define XLAT_VAL_1 ((unsigned) (MDBA_MDB_ENTRY))
 #define XLAT_STR_1 STRINGIFY(MDBA_MDB_ENTRY)
};
static
const struct xlat rtnl_mdba_mdb_attrs[1] = { {
 .data = rtnl_mdba_mdb_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_mdba_mdb_attrs_xdata),
 .type = XT_INDEXED,
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
