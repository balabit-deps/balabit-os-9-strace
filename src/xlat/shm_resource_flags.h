/* Generated by ./src/xlat/gen.sh from ./src/xlat/shm_resource_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IPC_CREAT) || (defined(HAVE_DECL_IPC_CREAT) && HAVE_DECL_IPC_CREAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_CREAT) == (01000), "IPC_CREAT != 01000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_CREAT 01000
#endif
#if defined(IPC_EXCL) || (defined(HAVE_DECL_IPC_EXCL) && HAVE_DECL_IPC_EXCL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_EXCL) == (02000), "IPC_EXCL != 02000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_EXCL 02000
#endif
#if defined(SHM_HUGETLB) || (defined(HAVE_DECL_SHM_HUGETLB) && HAVE_DECL_SHM_HUGETLB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_HUGETLB) == (04000), "SHM_HUGETLB != 04000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_HUGETLB 04000
#endif
#if defined(SHM_NORESERVE) || (defined(HAVE_DECL_SHM_NORESERVE) && HAVE_DECL_SHM_NORESERVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_NORESERVE) == (010000), "SHM_NORESERVE != 010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_NORESERVE 010000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat shm_resource_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data shm_resource_flags_xdata[] = {
 XLAT(IPC_CREAT),
 #define XLAT_VAL_0 ((unsigned) (IPC_CREAT))
 #define XLAT_STR_0 STRINGIFY(IPC_CREAT)
 XLAT(IPC_EXCL),
 #define XLAT_VAL_1 ((unsigned) (IPC_EXCL))
 #define XLAT_STR_1 STRINGIFY(IPC_EXCL)
 XLAT(SHM_HUGETLB),
 #define XLAT_VAL_2 ((unsigned) (SHM_HUGETLB))
 #define XLAT_STR_2 STRINGIFY(SHM_HUGETLB)
 XLAT(SHM_NORESERVE),
 #define XLAT_VAL_3 ((unsigned) (SHM_NORESERVE))
 #define XLAT_STR_3 STRINGIFY(SHM_NORESERVE)
};
static
const struct xlat shm_resource_flags[1] = { {
 .data = shm_resource_flags_xdata,
 .size = ARRAY_SIZE(shm_resource_flags_xdata),
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
