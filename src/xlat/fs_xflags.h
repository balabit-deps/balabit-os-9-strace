/* Generated by ./src/xlat/gen.sh from ./src/xlat/fs_xflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fs_xflags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fs_xflags_xdata[] = {
 XLAT(FS_XFLAG_REALTIME),
 #define XLAT_VAL_0 ((unsigned) (FS_XFLAG_REALTIME))
 #define XLAT_STR_0 STRINGIFY(FS_XFLAG_REALTIME)
 XLAT(FS_XFLAG_PREALLOC),
 #define XLAT_VAL_1 ((unsigned) (FS_XFLAG_PREALLOC))
 #define XLAT_STR_1 STRINGIFY(FS_XFLAG_PREALLOC)
 XLAT(FS_XFLAG_IMMUTABLE),
 #define XLAT_VAL_2 ((unsigned) (FS_XFLAG_IMMUTABLE))
 #define XLAT_STR_2 STRINGIFY(FS_XFLAG_IMMUTABLE)
 XLAT(FS_XFLAG_APPEND),
 #define XLAT_VAL_3 ((unsigned) (FS_XFLAG_APPEND))
 #define XLAT_STR_3 STRINGIFY(FS_XFLAG_APPEND)
 XLAT(FS_XFLAG_SYNC),
 #define XLAT_VAL_4 ((unsigned) (FS_XFLAG_SYNC))
 #define XLAT_STR_4 STRINGIFY(FS_XFLAG_SYNC)
 XLAT(FS_XFLAG_NOATIME),
 #define XLAT_VAL_5 ((unsigned) (FS_XFLAG_NOATIME))
 #define XLAT_STR_5 STRINGIFY(FS_XFLAG_NOATIME)
 XLAT(FS_XFLAG_NODUMP),
 #define XLAT_VAL_6 ((unsigned) (FS_XFLAG_NODUMP))
 #define XLAT_STR_6 STRINGIFY(FS_XFLAG_NODUMP)
 XLAT(FS_XFLAG_RTINHERIT),
 #define XLAT_VAL_7 ((unsigned) (FS_XFLAG_RTINHERIT))
 #define XLAT_STR_7 STRINGIFY(FS_XFLAG_RTINHERIT)
 XLAT(FS_XFLAG_PROJINHERIT),
 #define XLAT_VAL_8 ((unsigned) (FS_XFLAG_PROJINHERIT))
 #define XLAT_STR_8 STRINGIFY(FS_XFLAG_PROJINHERIT)
 XLAT(FS_XFLAG_NOSYMLINKS),
 #define XLAT_VAL_9 ((unsigned) (FS_XFLAG_NOSYMLINKS))
 #define XLAT_STR_9 STRINGIFY(FS_XFLAG_NOSYMLINKS)
 XLAT(FS_XFLAG_EXTSIZE),
 #define XLAT_VAL_10 ((unsigned) (FS_XFLAG_EXTSIZE))
 #define XLAT_STR_10 STRINGIFY(FS_XFLAG_EXTSIZE)
 XLAT(FS_XFLAG_EXTSZINHERIT),
 #define XLAT_VAL_11 ((unsigned) (FS_XFLAG_EXTSZINHERIT))
 #define XLAT_STR_11 STRINGIFY(FS_XFLAG_EXTSZINHERIT)
 XLAT(FS_XFLAG_NODEFRAG),
 #define XLAT_VAL_12 ((unsigned) (FS_XFLAG_NODEFRAG))
 #define XLAT_STR_12 STRINGIFY(FS_XFLAG_NODEFRAG)
 XLAT(FS_XFLAG_FILESTREAM),
 #define XLAT_VAL_13 ((unsigned) (FS_XFLAG_FILESTREAM))
 #define XLAT_STR_13 STRINGIFY(FS_XFLAG_FILESTREAM)
 XLAT(FS_XFLAG_DAX),
 #define XLAT_VAL_14 ((unsigned) (FS_XFLAG_DAX))
 #define XLAT_STR_14 STRINGIFY(FS_XFLAG_DAX)
 XLAT(FS_XFLAG_COWEXTSIZE),
 #define XLAT_VAL_15 ((unsigned) (FS_XFLAG_COWEXTSIZE))
 #define XLAT_STR_15 STRINGIFY(FS_XFLAG_COWEXTSIZE)
 XLAT(FS_XFLAG_HASATTR),
 #define XLAT_VAL_16 ((unsigned) (FS_XFLAG_HASATTR))
 #define XLAT_STR_16 STRINGIFY(FS_XFLAG_HASATTR)
};
static
const struct xlat fs_xflags[1] = { {
 .data = fs_xflags_xdata,
 .size = ARRAY_SIZE(fs_xflags_xdata),
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
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
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
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
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
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
