/* Generated by ./src/xlat/gen.sh from ./src/xlat/sigprocmaskcmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sigprocmaskcmds in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sigprocmaskcmds_xdata[] = {
#if defined(SIG_BLOCK) || (defined(HAVE_DECL_SIG_BLOCK) && HAVE_DECL_SIG_BLOCK)
  XLAT(SIG_BLOCK),
 #define XLAT_VAL_0 ((unsigned) (SIG_BLOCK))
 #define XLAT_STR_0 STRINGIFY(SIG_BLOCK)
#endif
#if defined(SIG_UNBLOCK) || (defined(HAVE_DECL_SIG_UNBLOCK) && HAVE_DECL_SIG_UNBLOCK)
  XLAT(SIG_UNBLOCK),
 #define XLAT_VAL_1 ((unsigned) (SIG_UNBLOCK))
 #define XLAT_STR_1 STRINGIFY(SIG_UNBLOCK)
#endif
#if defined(SIG_SETMASK) || (defined(HAVE_DECL_SIG_SETMASK) && HAVE_DECL_SIG_SETMASK)
  XLAT(SIG_SETMASK),
 #define XLAT_VAL_2 ((unsigned) (SIG_SETMASK))
 #define XLAT_STR_2 STRINGIFY(SIG_SETMASK)
#endif
#if defined(SIG_SETMASK32) || (defined(HAVE_DECL_SIG_SETMASK32) && HAVE_DECL_SIG_SETMASK32)
  XLAT(SIG_SETMASK32),
 #define XLAT_VAL_3 ((unsigned) (SIG_SETMASK32))
 #define XLAT_STR_3 STRINGIFY(SIG_SETMASK32)
#endif
};
static
const struct xlat sigprocmaskcmds[1] = { {
 .data = sigprocmaskcmds_xdata,
 .size = ARRAY_SIZE(sigprocmaskcmds_xdata),
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
