/* Generated by ./src/xlat/gen.sh from ./src/xlat/kcmp_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kcmp_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data kcmp_types_xdata[] = {
 [KCMP_FILE] = XLAT(KCMP_FILE),
 #define XLAT_VAL_0 ((unsigned) (KCMP_FILE))
 #define XLAT_STR_0 STRINGIFY(KCMP_FILE)
 [KCMP_VM] = XLAT(KCMP_VM),
 #define XLAT_VAL_1 ((unsigned) (KCMP_VM))
 #define XLAT_STR_1 STRINGIFY(KCMP_VM)
 [KCMP_FILES] = XLAT(KCMP_FILES),
 #define XLAT_VAL_2 ((unsigned) (KCMP_FILES))
 #define XLAT_STR_2 STRINGIFY(KCMP_FILES)
 [KCMP_FS] = XLAT(KCMP_FS),
 #define XLAT_VAL_3 ((unsigned) (KCMP_FS))
 #define XLAT_STR_3 STRINGIFY(KCMP_FS)
 [KCMP_SIGHAND] = XLAT(KCMP_SIGHAND),
 #define XLAT_VAL_4 ((unsigned) (KCMP_SIGHAND))
 #define XLAT_STR_4 STRINGIFY(KCMP_SIGHAND)
 [KCMP_IO] = XLAT(KCMP_IO),
 #define XLAT_VAL_5 ((unsigned) (KCMP_IO))
 #define XLAT_STR_5 STRINGIFY(KCMP_IO)
 [KCMP_SYSVSEM] = XLAT(KCMP_SYSVSEM),
 #define XLAT_VAL_6 ((unsigned) (KCMP_SYSVSEM))
 #define XLAT_STR_6 STRINGIFY(KCMP_SYSVSEM)
 [KCMP_EPOLL_TFD] = XLAT(KCMP_EPOLL_TFD),
 #define XLAT_VAL_7 ((unsigned) (KCMP_EPOLL_TFD))
 #define XLAT_STR_7 STRINGIFY(KCMP_EPOLL_TFD)
};
static
const struct xlat kcmp_types[1] = { {
 .data = kcmp_types_xdata,
 .size = ARRAY_SIZE(kcmp_types_xdata),
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
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
