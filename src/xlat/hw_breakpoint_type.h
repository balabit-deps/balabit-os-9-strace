/* Generated by ./src/xlat/gen.sh from ./src/xlat/hw_breakpoint_type.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(HW_BREAKPOINT_EMPTY) || (defined(HAVE_DECL_HW_BREAKPOINT_EMPTY) && HAVE_DECL_HW_BREAKPOINT_EMPTY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_EMPTY) == (0), "HW_BREAKPOINT_EMPTY != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_EMPTY 0
#endif
#if defined(HW_BREAKPOINT_EMPTY) || (defined(HAVE_DECL_HW_BREAKPOINT_EMPTY) && HAVE_DECL_HW_BREAKPOINT_EMPTY)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (HW_BREAKPOINT_EMPTY)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: HW_BREAKPOINT_EMPTY"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (HW_BREAKPOINT_EMPTY)
#endif
#if defined(HW_BREAKPOINT_R) || (defined(HAVE_DECL_HW_BREAKPOINT_R) && HAVE_DECL_HW_BREAKPOINT_R)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_R) == (1), "HW_BREAKPOINT_R != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_R 1
#endif
#if defined(HW_BREAKPOINT_R) || (defined(HAVE_DECL_HW_BREAKPOINT_R) && HAVE_DECL_HW_BREAKPOINT_R)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (HW_BREAKPOINT_R)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: HW_BREAKPOINT_R"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (HW_BREAKPOINT_R)
#endif
#if defined(HW_BREAKPOINT_W) || (defined(HAVE_DECL_HW_BREAKPOINT_W) && HAVE_DECL_HW_BREAKPOINT_W)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_W) == (2), "HW_BREAKPOINT_W != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_W 2
#endif
#if defined(HW_BREAKPOINT_W) || (defined(HAVE_DECL_HW_BREAKPOINT_W) && HAVE_DECL_HW_BREAKPOINT_W)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (HW_BREAKPOINT_W)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: HW_BREAKPOINT_W"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (HW_BREAKPOINT_W)
#endif
#if defined(HW_BREAKPOINT_RW) || (defined(HAVE_DECL_HW_BREAKPOINT_RW) && HAVE_DECL_HW_BREAKPOINT_RW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_RW) == (3), "HW_BREAKPOINT_RW != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_RW 3
#endif
#if defined(HW_BREAKPOINT_RW) || (defined(HAVE_DECL_HW_BREAKPOINT_RW) && HAVE_DECL_HW_BREAKPOINT_RW)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (HW_BREAKPOINT_RW)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: HW_BREAKPOINT_RW"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (HW_BREAKPOINT_RW)
#endif
#if defined(HW_BREAKPOINT_X) || (defined(HAVE_DECL_HW_BREAKPOINT_X) && HAVE_DECL_HW_BREAKPOINT_X)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((HW_BREAKPOINT_X) == (4), "HW_BREAKPOINT_X != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define HW_BREAKPOINT_X 4
#endif
#if defined(HW_BREAKPOINT_X) || (defined(HAVE_DECL_HW_BREAKPOINT_X) && HAVE_DECL_HW_BREAKPOINT_X)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (HW_BREAKPOINT_X)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: HW_BREAKPOINT_X"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (HW_BREAKPOINT_X)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat hw_breakpoint_type in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data hw_breakpoint_type_xdata[] = {
 XLAT(HW_BREAKPOINT_EMPTY),
 #define XLAT_VAL_0 ((unsigned) (HW_BREAKPOINT_EMPTY))
 #define XLAT_STR_0 STRINGIFY(HW_BREAKPOINT_EMPTY)
 XLAT(HW_BREAKPOINT_R),
 #define XLAT_VAL_1 ((unsigned) (HW_BREAKPOINT_R))
 #define XLAT_STR_1 STRINGIFY(HW_BREAKPOINT_R)
 XLAT(HW_BREAKPOINT_W),
 #define XLAT_VAL_2 ((unsigned) (HW_BREAKPOINT_W))
 #define XLAT_STR_2 STRINGIFY(HW_BREAKPOINT_W)
 XLAT(HW_BREAKPOINT_RW),
 #define XLAT_VAL_3 ((unsigned) (HW_BREAKPOINT_RW))
 #define XLAT_STR_3 STRINGIFY(HW_BREAKPOINT_RW)
 XLAT(HW_BREAKPOINT_X),
 #define XLAT_VAL_4 ((unsigned) (HW_BREAKPOINT_X))
 #define XLAT_STR_4 STRINGIFY(HW_BREAKPOINT_X)
};
static
const struct xlat hw_breakpoint_type[1] = { {
 .data = hw_breakpoint_type_xdata,
 .size = ARRAY_SIZE(hw_breakpoint_type_xdata),
 .type = XT_SORTED,
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
