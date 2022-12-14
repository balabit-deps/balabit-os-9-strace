/* Generated by ./src/xlat/gen.sh from ./src/xlat/sfd_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SFD_CLOEXEC) || (defined(HAVE_DECL_SFD_CLOEXEC) && HAVE_DECL_SFD_CLOEXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SFD_CLOEXEC) == (O_CLOEXEC), "SFD_CLOEXEC != O_CLOEXEC");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SFD_CLOEXEC O_CLOEXEC
#endif
#if defined(SFD_NONBLOCK) || (defined(HAVE_DECL_SFD_NONBLOCK) && HAVE_DECL_SFD_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SFD_NONBLOCK) == (O_NONBLOCK), "SFD_NONBLOCK != O_NONBLOCK");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SFD_NONBLOCK O_NONBLOCK
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sfd_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sfd_flags_xdata[] = {
 XLAT(SFD_CLOEXEC),
 #define XLAT_VAL_0 ((unsigned) (SFD_CLOEXEC))
 #define XLAT_STR_0 STRINGIFY(SFD_CLOEXEC)
 XLAT(SFD_NONBLOCK),
 #define XLAT_VAL_1 ((unsigned) (SFD_NONBLOCK))
 #define XLAT_STR_1 STRINGIFY(SFD_NONBLOCK)
};
static
const struct xlat sfd_flags[1] = { {
 .data = sfd_flags_xdata,
 .size = ARRAY_SIZE(sfd_flags_xdata),
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
