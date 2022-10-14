/* Generated by ./src/xlat/gen.sh from ./src/xlat/perf_hw_cache_op_result_id.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_COUNT_HW_CACHE_RESULT_ACCESS) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_ACCESS) && HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_ACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_COUNT_HW_CACHE_RESULT_ACCESS) == (0), "PERF_COUNT_HW_CACHE_RESULT_ACCESS != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_COUNT_HW_CACHE_RESULT_ACCESS 0
#endif
#if defined(PERF_COUNT_HW_CACHE_RESULT_ACCESS) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_ACCESS) && HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_ACCESS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (PERF_COUNT_HW_CACHE_RESULT_ACCESS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: PERF_COUNT_HW_CACHE_RESULT_ACCESS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (PERF_COUNT_HW_CACHE_RESULT_ACCESS)
#endif
#if defined(PERF_COUNT_HW_CACHE_RESULT_MISS) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_MISS) && HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_MISS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_COUNT_HW_CACHE_RESULT_MISS) == (1), "PERF_COUNT_HW_CACHE_RESULT_MISS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_COUNT_HW_CACHE_RESULT_MISS 1
#endif
#if defined(PERF_COUNT_HW_CACHE_RESULT_MISS) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_MISS) && HAVE_DECL_PERF_COUNT_HW_CACHE_RESULT_MISS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (PERF_COUNT_HW_CACHE_RESULT_MISS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: PERF_COUNT_HW_CACHE_RESULT_MISS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (PERF_COUNT_HW_CACHE_RESULT_MISS)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat perf_hw_cache_op_result_id in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data perf_hw_cache_op_result_id_xdata[] = {
 XLAT(PERF_COUNT_HW_CACHE_RESULT_ACCESS),
 #define XLAT_VAL_0 ((unsigned) (PERF_COUNT_HW_CACHE_RESULT_ACCESS))
 #define XLAT_STR_0 STRINGIFY(PERF_COUNT_HW_CACHE_RESULT_ACCESS)
 XLAT(PERF_COUNT_HW_CACHE_RESULT_MISS),
 #define XLAT_VAL_1 ((unsigned) (PERF_COUNT_HW_CACHE_RESULT_MISS))
 #define XLAT_STR_1 STRINGIFY(PERF_COUNT_HW_CACHE_RESULT_MISS)
};
static
const struct xlat perf_hw_cache_op_result_id[1] = { {
 .data = perf_hw_cache_op_result_id_xdata,
 .size = ARRAY_SIZE(perf_hw_cache_op_result_id_xdata),
 .type = XT_SORTED,
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
