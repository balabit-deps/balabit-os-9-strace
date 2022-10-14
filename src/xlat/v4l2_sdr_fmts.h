/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_sdr_fmts.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_PCU20BE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_PCU20BE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_PCU20BE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_RU12LE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_RU12LE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_RU12LE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_CS14LE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_CS14LE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_CS14LE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_PCU16BE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_PCU16BE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_PCU16BE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_CU16LE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_CU16LE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_CU16LE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_CS8)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_CS8"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_CS8)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_CU8)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_CU8"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_CU8)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (V4L2_SDR_FMT_PCU18BE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: V4L2_SDR_FMT_PCU18BE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (V4L2_SDR_FMT_PCU18BE)
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_sdr_fmts[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_sdr_fmts_xdata[] = {
 XLAT(V4L2_SDR_FMT_PCU20BE),
 #define XLAT_VAL_0 ((unsigned) (V4L2_SDR_FMT_PCU20BE))
 #define XLAT_STR_0 STRINGIFY(V4L2_SDR_FMT_PCU20BE)
 XLAT(V4L2_SDR_FMT_RU12LE),
 #define XLAT_VAL_1 ((unsigned) (V4L2_SDR_FMT_RU12LE))
 #define XLAT_STR_1 STRINGIFY(V4L2_SDR_FMT_RU12LE)
 XLAT(V4L2_SDR_FMT_CS14LE),
 #define XLAT_VAL_2 ((unsigned) (V4L2_SDR_FMT_CS14LE))
 #define XLAT_STR_2 STRINGIFY(V4L2_SDR_FMT_CS14LE)
 XLAT(V4L2_SDR_FMT_PCU16BE),
 #define XLAT_VAL_3 ((unsigned) (V4L2_SDR_FMT_PCU16BE))
 #define XLAT_STR_3 STRINGIFY(V4L2_SDR_FMT_PCU16BE)
 XLAT(V4L2_SDR_FMT_CU16LE),
 #define XLAT_VAL_4 ((unsigned) (V4L2_SDR_FMT_CU16LE))
 #define XLAT_STR_4 STRINGIFY(V4L2_SDR_FMT_CU16LE)
 XLAT(V4L2_SDR_FMT_CS8),
 #define XLAT_VAL_5 ((unsigned) (V4L2_SDR_FMT_CS8))
 #define XLAT_STR_5 STRINGIFY(V4L2_SDR_FMT_CS8)
 XLAT(V4L2_SDR_FMT_CU8),
 #define XLAT_VAL_6 ((unsigned) (V4L2_SDR_FMT_CU8))
 #define XLAT_STR_6 STRINGIFY(V4L2_SDR_FMT_CU8)
 XLAT(V4L2_SDR_FMT_PCU18BE),
 #define XLAT_VAL_7 ((unsigned) (V4L2_SDR_FMT_PCU18BE))
 #define XLAT_STR_7 STRINGIFY(V4L2_SDR_FMT_PCU18BE)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_sdr_fmts[1] = { {
 .data = v4l2_sdr_fmts_xdata,
 .size = ARRAY_SIZE(v4l2_sdr_fmts_xdata),
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
