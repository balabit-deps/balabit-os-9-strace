/* Generated by ./src/xlat/gen.sh from ./src/xlat/epollflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(EPOLL_CLOEXEC) || (defined(HAVE_DECL_EPOLL_CLOEXEC) && HAVE_DECL_EPOLL_CLOEXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLL_CLOEXEC) == (O_CLOEXEC), "EPOLL_CLOEXEC != O_CLOEXEC");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLL_CLOEXEC O_CLOEXEC
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat epollflags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data epollflags_xdata[] = {
 XLAT(EPOLL_CLOEXEC),
 #define XLAT_VAL_0 ((unsigned) (EPOLL_CLOEXEC))
 #define XLAT_STR_0 STRINGIFY(EPOLL_CLOEXEC)
};
static
const struct xlat epollflags[1] = { {
 .data = epollflags_xdata,
 .size = ARRAY_SIZE(epollflags_xdata),
 .type = XT_NORMAL,
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
