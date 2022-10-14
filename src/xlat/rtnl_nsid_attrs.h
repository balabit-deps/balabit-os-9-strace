/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_nsid_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NETNSA_NSID_NOT_ASSIGNED) || (defined(HAVE_DECL_NETNSA_NSID_NOT_ASSIGNED) && HAVE_DECL_NETNSA_NSID_NOT_ASSIGNED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_NSID_NOT_ASSIGNED) == (-1), "NETNSA_NSID_NOT_ASSIGNED != -1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_NSID_NOT_ASSIGNED -1
#endif
#if defined(NETNSA_NONE) || (defined(HAVE_DECL_NETNSA_NONE) && HAVE_DECL_NETNSA_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_NONE) == (0), "NETNSA_NONE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_NONE 0
#endif
#if defined(NETNSA_NSID) || (defined(HAVE_DECL_NETNSA_NSID) && HAVE_DECL_NETNSA_NSID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_NSID) == (1), "NETNSA_NSID != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_NSID 1
#endif
#if defined(NETNSA_PID) || (defined(HAVE_DECL_NETNSA_PID) && HAVE_DECL_NETNSA_PID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_PID) == (2), "NETNSA_PID != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_PID 2
#endif
#if defined(NETNSA_FD) || (defined(HAVE_DECL_NETNSA_FD) && HAVE_DECL_NETNSA_FD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_FD) == (3), "NETNSA_FD != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_FD 3
#endif
#if defined(NETNSA_TARGET_NSID) || (defined(HAVE_DECL_NETNSA_TARGET_NSID) && HAVE_DECL_NETNSA_TARGET_NSID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_TARGET_NSID) == (4), "NETNSA_TARGET_NSID != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_TARGET_NSID 4
#endif
#if defined(NETNSA_CURRENT_NSID) || (defined(HAVE_DECL_NETNSA_CURRENT_NSID) && HAVE_DECL_NETNSA_CURRENT_NSID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETNSA_CURRENT_NSID) == (5), "NETNSA_CURRENT_NSID != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETNSA_CURRENT_NSID 5
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_nsid_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_nsid_attrs_xdata[] = {
 XLAT(NETNSA_NSID_NOT_ASSIGNED),
 #define XLAT_VAL_0 ((unsigned) (NETNSA_NSID_NOT_ASSIGNED))
 #define XLAT_STR_0 STRINGIFY(NETNSA_NSID_NOT_ASSIGNED)
 XLAT(NETNSA_NONE),
 #define XLAT_VAL_1 ((unsigned) (NETNSA_NONE))
 #define XLAT_STR_1 STRINGIFY(NETNSA_NONE)
 XLAT(NETNSA_NSID),
 #define XLAT_VAL_2 ((unsigned) (NETNSA_NSID))
 #define XLAT_STR_2 STRINGIFY(NETNSA_NSID)
 XLAT(NETNSA_PID),
 #define XLAT_VAL_3 ((unsigned) (NETNSA_PID))
 #define XLAT_STR_3 STRINGIFY(NETNSA_PID)
 XLAT(NETNSA_FD),
 #define XLAT_VAL_4 ((unsigned) (NETNSA_FD))
 #define XLAT_STR_4 STRINGIFY(NETNSA_FD)
 XLAT(NETNSA_TARGET_NSID),
 #define XLAT_VAL_5 ((unsigned) (NETNSA_TARGET_NSID))
 #define XLAT_STR_5 STRINGIFY(NETNSA_TARGET_NSID)
 XLAT(NETNSA_CURRENT_NSID),
 #define XLAT_VAL_6 ((unsigned) (NETNSA_CURRENT_NSID))
 #define XLAT_STR_6 STRINGIFY(NETNSA_CURRENT_NSID)
};
static
const struct xlat rtnl_nsid_attrs[1] = { {
 .data = rtnl_nsid_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_nsid_attrs_xdata),
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
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
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
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
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
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
