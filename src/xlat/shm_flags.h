/* Generated by ./src/xlat/gen.sh from ./src/xlat/shm_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SHM_RDONLY) || (defined(HAVE_DECL_SHM_RDONLY) && HAVE_DECL_SHM_RDONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_RDONLY) == (010000), "SHM_RDONLY != 010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_RDONLY 010000
#endif
#if defined(SHM_RND) || (defined(HAVE_DECL_SHM_RND) && HAVE_DECL_SHM_RND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_RND) == (020000), "SHM_RND != 020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_RND 020000
#endif
#if defined(SHM_REMAP) || (defined(HAVE_DECL_SHM_REMAP) && HAVE_DECL_SHM_REMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_REMAP) == (040000), "SHM_REMAP != 040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_REMAP 040000
#endif
#if defined(SHM_EXEC) || (defined(HAVE_DECL_SHM_EXEC) && HAVE_DECL_SHM_EXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_EXEC) == (0100000), "SHM_EXEC != 0100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_EXEC 0100000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat shm_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data shm_flags_xdata[] = {
 XLAT(SHM_RDONLY),
 #define XLAT_VAL_0 ((unsigned) (SHM_RDONLY))
 #define XLAT_STR_0 STRINGIFY(SHM_RDONLY)
 XLAT(SHM_RND),
 #define XLAT_VAL_1 ((unsigned) (SHM_RND))
 #define XLAT_STR_1 STRINGIFY(SHM_RND)
 XLAT(SHM_REMAP),
 #define XLAT_VAL_2 ((unsigned) (SHM_REMAP))
 #define XLAT_STR_2 STRINGIFY(SHM_REMAP)
 XLAT(SHM_EXEC),
 #define XLAT_VAL_3 ((unsigned) (SHM_EXEC))
 #define XLAT_STR_3 STRINGIFY(SHM_EXEC)
};
static
const struct xlat shm_flags[1] = { {
 .data = shm_flags_xdata,
 .size = ARRAY_SIZE(shm_flags_xdata),
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
