/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_buf_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_buf_types[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_buf_types_xdata[] = {
 [V4L2_BUF_TYPE_VIDEO_CAPTURE] = XLAT(V4L2_BUF_TYPE_VIDEO_CAPTURE),
 #define XLAT_VAL_0 ((unsigned) (V4L2_BUF_TYPE_VIDEO_CAPTURE))
 #define XLAT_STR_0 STRINGIFY(V4L2_BUF_TYPE_VIDEO_CAPTURE)
 [V4L2_BUF_TYPE_VIDEO_OUTPUT] = XLAT(V4L2_BUF_TYPE_VIDEO_OUTPUT),
 #define XLAT_VAL_1 ((unsigned) (V4L2_BUF_TYPE_VIDEO_OUTPUT))
 #define XLAT_STR_1 STRINGIFY(V4L2_BUF_TYPE_VIDEO_OUTPUT)
 [V4L2_BUF_TYPE_VIDEO_OVERLAY] = XLAT(V4L2_BUF_TYPE_VIDEO_OVERLAY),
 #define XLAT_VAL_2 ((unsigned) (V4L2_BUF_TYPE_VIDEO_OVERLAY))
 #define XLAT_STR_2 STRINGIFY(V4L2_BUF_TYPE_VIDEO_OVERLAY)
 [V4L2_BUF_TYPE_VBI_CAPTURE] = XLAT(V4L2_BUF_TYPE_VBI_CAPTURE),
 #define XLAT_VAL_3 ((unsigned) (V4L2_BUF_TYPE_VBI_CAPTURE))
 #define XLAT_STR_3 STRINGIFY(V4L2_BUF_TYPE_VBI_CAPTURE)
 [V4L2_BUF_TYPE_VBI_OUTPUT] = XLAT(V4L2_BUF_TYPE_VBI_OUTPUT),
 #define XLAT_VAL_4 ((unsigned) (V4L2_BUF_TYPE_VBI_OUTPUT))
 #define XLAT_STR_4 STRINGIFY(V4L2_BUF_TYPE_VBI_OUTPUT)
 [V4L2_BUF_TYPE_SLICED_VBI_CAPTURE] = XLAT(V4L2_BUF_TYPE_SLICED_VBI_CAPTURE),
 #define XLAT_VAL_5 ((unsigned) (V4L2_BUF_TYPE_SLICED_VBI_CAPTURE))
 #define XLAT_STR_5 STRINGIFY(V4L2_BUF_TYPE_SLICED_VBI_CAPTURE)
 [V4L2_BUF_TYPE_SLICED_VBI_OUTPUT] = XLAT(V4L2_BUF_TYPE_SLICED_VBI_OUTPUT),
 #define XLAT_VAL_6 ((unsigned) (V4L2_BUF_TYPE_SLICED_VBI_OUTPUT))
 #define XLAT_STR_6 STRINGIFY(V4L2_BUF_TYPE_SLICED_VBI_OUTPUT)
 [V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY] = XLAT(V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY),
 #define XLAT_VAL_7 ((unsigned) (V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY))
 #define XLAT_STR_7 STRINGIFY(V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY)
 [V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE] = XLAT(V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE),
 #define XLAT_VAL_8 ((unsigned) (V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE))
 #define XLAT_STR_8 STRINGIFY(V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE)
 [V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE] = XLAT(V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE),
 #define XLAT_VAL_9 ((unsigned) (V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE))
 #define XLAT_STR_9 STRINGIFY(V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE)
 [V4L2_BUF_TYPE_SDR_CAPTURE] = XLAT(V4L2_BUF_TYPE_SDR_CAPTURE),
 #define XLAT_VAL_10 ((unsigned) (V4L2_BUF_TYPE_SDR_CAPTURE))
 #define XLAT_STR_10 STRINGIFY(V4L2_BUF_TYPE_SDR_CAPTURE)
 [V4L2_BUF_TYPE_SDR_OUTPUT] = XLAT(V4L2_BUF_TYPE_SDR_OUTPUT),
 #define XLAT_VAL_11 ((unsigned) (V4L2_BUF_TYPE_SDR_OUTPUT))
 #define XLAT_STR_11 STRINGIFY(V4L2_BUF_TYPE_SDR_OUTPUT)
 [V4L2_BUF_TYPE_META_CAPTURE] = XLAT(V4L2_BUF_TYPE_META_CAPTURE),
 #define XLAT_VAL_12 ((unsigned) (V4L2_BUF_TYPE_META_CAPTURE))
 #define XLAT_STR_12 STRINGIFY(V4L2_BUF_TYPE_META_CAPTURE)
 [V4L2_BUF_TYPE_META_OUTPUT] = XLAT(V4L2_BUF_TYPE_META_OUTPUT),
 #define XLAT_VAL_13 ((unsigned) (V4L2_BUF_TYPE_META_OUTPUT))
 #define XLAT_STR_13 STRINGIFY(V4L2_BUF_TYPE_META_OUTPUT)

};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_buf_types[1] = { {
 .data = v4l2_buf_types_xdata,
 .size = ARRAY_SIZE(v4l2_buf_types_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
