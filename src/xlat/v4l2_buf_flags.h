/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_buf_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_buf_flags[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_buf_flags_xdata[] = {
 XLAT(V4L2_BUF_FLAG_MAPPED),
 #define XLAT_VAL_0 ((unsigned) (V4L2_BUF_FLAG_MAPPED))
 #define XLAT_STR_0 STRINGIFY(V4L2_BUF_FLAG_MAPPED)
 XLAT(V4L2_BUF_FLAG_QUEUED),
 #define XLAT_VAL_1 ((unsigned) (V4L2_BUF_FLAG_QUEUED))
 #define XLAT_STR_1 STRINGIFY(V4L2_BUF_FLAG_QUEUED)
 XLAT(V4L2_BUF_FLAG_DONE),
 #define XLAT_VAL_2 ((unsigned) (V4L2_BUF_FLAG_DONE))
 #define XLAT_STR_2 STRINGIFY(V4L2_BUF_FLAG_DONE)
 XLAT(V4L2_BUF_FLAG_KEYFRAME),
 #define XLAT_VAL_3 ((unsigned) (V4L2_BUF_FLAG_KEYFRAME))
 #define XLAT_STR_3 STRINGIFY(V4L2_BUF_FLAG_KEYFRAME)
 XLAT(V4L2_BUF_FLAG_PFRAME),
 #define XLAT_VAL_4 ((unsigned) (V4L2_BUF_FLAG_PFRAME))
 #define XLAT_STR_4 STRINGIFY(V4L2_BUF_FLAG_PFRAME)
 XLAT(V4L2_BUF_FLAG_BFRAME),
 #define XLAT_VAL_5 ((unsigned) (V4L2_BUF_FLAG_BFRAME))
 #define XLAT_STR_5 STRINGIFY(V4L2_BUF_FLAG_BFRAME)
 XLAT(V4L2_BUF_FLAG_ERROR),
 #define XLAT_VAL_6 ((unsigned) (V4L2_BUF_FLAG_ERROR))
 #define XLAT_STR_6 STRINGIFY(V4L2_BUF_FLAG_ERROR)
 XLAT(V4L2_BUF_FLAG_IN_REQUEST),
 #define XLAT_VAL_7 ((unsigned) (V4L2_BUF_FLAG_IN_REQUEST))
 #define XLAT_STR_7 STRINGIFY(V4L2_BUF_FLAG_IN_REQUEST)
 XLAT(V4L2_BUF_FLAG_TIMECODE),
 #define XLAT_VAL_8 ((unsigned) (V4L2_BUF_FLAG_TIMECODE))
 #define XLAT_STR_8 STRINGIFY(V4L2_BUF_FLAG_TIMECODE)
 XLAT(V4L2_BUF_FLAG_INPUT),
 #define XLAT_VAL_9 ((unsigned) (V4L2_BUF_FLAG_INPUT))
 #define XLAT_STR_9 STRINGIFY(V4L2_BUF_FLAG_INPUT)
 XLAT(V4L2_BUF_FLAG_PREPARED),
 #define XLAT_VAL_10 ((unsigned) (V4L2_BUF_FLAG_PREPARED))
 #define XLAT_STR_10 STRINGIFY(V4L2_BUF_FLAG_PREPARED)
 XLAT(V4L2_BUF_FLAG_NO_CACHE_INVALIDATE),
 #define XLAT_VAL_11 ((unsigned) (V4L2_BUF_FLAG_NO_CACHE_INVALIDATE))
 #define XLAT_STR_11 STRINGIFY(V4L2_BUF_FLAG_NO_CACHE_INVALIDATE)
 XLAT(V4L2_BUF_FLAG_NO_CACHE_CLEAN),
 #define XLAT_VAL_12 ((unsigned) (V4L2_BUF_FLAG_NO_CACHE_CLEAN))
 #define XLAT_STR_12 STRINGIFY(V4L2_BUF_FLAG_NO_CACHE_CLEAN)
 XLAT(V4L2_BUF_FLAG_LAST),
 #define XLAT_VAL_13 ((unsigned) (V4L2_BUF_FLAG_LAST))
 #define XLAT_STR_13 STRINGIFY(V4L2_BUF_FLAG_LAST)
 XLAT(V4L2_BUF_FLAG_REQUEST_FD),
 #define XLAT_VAL_14 ((unsigned) (V4L2_BUF_FLAG_REQUEST_FD))
 #define XLAT_STR_14 STRINGIFY(V4L2_BUF_FLAG_REQUEST_FD)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_buf_flags[1] = { {
 .data = v4l2_buf_flags_xdata,
 .size = ARRAY_SIZE(v4l2_buf_flags_xdata),
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
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
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
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
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
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
