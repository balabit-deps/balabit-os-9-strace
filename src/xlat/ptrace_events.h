/* Generated by ./src/xlat/gen.sh from ./src/xlat/ptrace_events.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ptrace_events in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data ptrace_events_xdata[] = {
#if defined(PTRACE_EVENT_FORK) || (defined(HAVE_DECL_PTRACE_EVENT_FORK) && HAVE_DECL_PTRACE_EVENT_FORK)
  XLAT(PTRACE_EVENT_FORK),
 #define XLAT_VAL_0 ((unsigned) (PTRACE_EVENT_FORK))
 #define XLAT_STR_0 STRINGIFY(PTRACE_EVENT_FORK)
#endif
#if defined(PTRACE_EVENT_VFORK) || (defined(HAVE_DECL_PTRACE_EVENT_VFORK) && HAVE_DECL_PTRACE_EVENT_VFORK)
  XLAT(PTRACE_EVENT_VFORK),
 #define XLAT_VAL_1 ((unsigned) (PTRACE_EVENT_VFORK))
 #define XLAT_STR_1 STRINGIFY(PTRACE_EVENT_VFORK)
#endif
#if defined(PTRACE_EVENT_CLONE) || (defined(HAVE_DECL_PTRACE_EVENT_CLONE) && HAVE_DECL_PTRACE_EVENT_CLONE)
  XLAT(PTRACE_EVENT_CLONE),
 #define XLAT_VAL_2 ((unsigned) (PTRACE_EVENT_CLONE))
 #define XLAT_STR_2 STRINGIFY(PTRACE_EVENT_CLONE)
#endif
#if defined(PTRACE_EVENT_EXEC) || (defined(HAVE_DECL_PTRACE_EVENT_EXEC) && HAVE_DECL_PTRACE_EVENT_EXEC)
  XLAT(PTRACE_EVENT_EXEC),
 #define XLAT_VAL_3 ((unsigned) (PTRACE_EVENT_EXEC))
 #define XLAT_STR_3 STRINGIFY(PTRACE_EVENT_EXEC)
#endif
#if defined(PTRACE_EVENT_VFORK_DONE) || (defined(HAVE_DECL_PTRACE_EVENT_VFORK_DONE) && HAVE_DECL_PTRACE_EVENT_VFORK_DONE)
  XLAT(PTRACE_EVENT_VFORK_DONE),
 #define XLAT_VAL_4 ((unsigned) (PTRACE_EVENT_VFORK_DONE))
 #define XLAT_STR_4 STRINGIFY(PTRACE_EVENT_VFORK_DONE)
#endif
#if defined(PTRACE_EVENT_EXIT) || (defined(HAVE_DECL_PTRACE_EVENT_EXIT) && HAVE_DECL_PTRACE_EVENT_EXIT)
  XLAT(PTRACE_EVENT_EXIT),
 #define XLAT_VAL_5 ((unsigned) (PTRACE_EVENT_EXIT))
 #define XLAT_STR_5 STRINGIFY(PTRACE_EVENT_EXIT)
#endif
#if defined(PTRACE_EVENT_SECCOMP) || (defined(HAVE_DECL_PTRACE_EVENT_SECCOMP) && HAVE_DECL_PTRACE_EVENT_SECCOMP)
  XLAT(PTRACE_EVENT_SECCOMP),
 #define XLAT_VAL_6 ((unsigned) (PTRACE_EVENT_SECCOMP))
 #define XLAT_STR_6 STRINGIFY(PTRACE_EVENT_SECCOMP)
#endif
#if defined(PTRACE_EVENT_STOP) || (defined(HAVE_DECL_PTRACE_EVENT_STOP) && HAVE_DECL_PTRACE_EVENT_STOP)
  XLAT(PTRACE_EVENT_STOP),
 #define XLAT_VAL_7 ((unsigned) (PTRACE_EVENT_STOP))
 #define XLAT_STR_7 STRINGIFY(PTRACE_EVENT_STOP)
#endif

#if defined(PTRACE_EVENT_MIGRATE) || (defined(HAVE_DECL_PTRACE_EVENT_MIGRATE) && HAVE_DECL_PTRACE_EVENT_MIGRATE)
  XLAT(PTRACE_EVENT_MIGRATE),
 #define XLAT_VAL_8 ((unsigned) (PTRACE_EVENT_MIGRATE))
 #define XLAT_STR_8 STRINGIFY(PTRACE_EVENT_MIGRATE)
#endif
};
static
const struct xlat ptrace_events[1] = { {
 .data = ptrace_events_xdata,
 .size = ARRAY_SIZE(ptrace_events_xdata),
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
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
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
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
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
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
