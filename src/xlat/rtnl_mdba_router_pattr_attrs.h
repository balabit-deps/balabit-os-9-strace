/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_mdba_router_pattr_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_mdba_router_pattr_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_mdba_router_pattr_attrs_xdata[] = {
 [MDBA_ROUTER_PATTR_UNSPEC] = XLAT(MDBA_ROUTER_PATTR_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (MDBA_ROUTER_PATTR_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(MDBA_ROUTER_PATTR_UNSPEC)
 [MDBA_ROUTER_PATTR_TIMER] = XLAT(MDBA_ROUTER_PATTR_TIMER),
 #define XLAT_VAL_1 ((unsigned) (MDBA_ROUTER_PATTR_TIMER))
 #define XLAT_STR_1 STRINGIFY(MDBA_ROUTER_PATTR_TIMER)
 [MDBA_ROUTER_PATTR_TYPE] = XLAT(MDBA_ROUTER_PATTR_TYPE),
 #define XLAT_VAL_2 ((unsigned) (MDBA_ROUTER_PATTR_TYPE))
 #define XLAT_STR_2 STRINGIFY(MDBA_ROUTER_PATTR_TYPE)
 [MDBA_ROUTER_PATTR_INET_TIMER] = XLAT(MDBA_ROUTER_PATTR_INET_TIMER),
 #define XLAT_VAL_3 ((unsigned) (MDBA_ROUTER_PATTR_INET_TIMER))
 #define XLAT_STR_3 STRINGIFY(MDBA_ROUTER_PATTR_INET_TIMER)
 [MDBA_ROUTER_PATTR_INET6_TIMER] = XLAT(MDBA_ROUTER_PATTR_INET6_TIMER),
 #define XLAT_VAL_4 ((unsigned) (MDBA_ROUTER_PATTR_INET6_TIMER))
 #define XLAT_STR_4 STRINGIFY(MDBA_ROUTER_PATTR_INET6_TIMER)
};
static
const struct xlat rtnl_mdba_router_pattr_attrs[1] = { {
 .data = rtnl_mdba_router_pattr_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_mdba_router_pattr_attrs_xdata),
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
