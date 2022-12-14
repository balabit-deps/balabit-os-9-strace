/* Generated by ./src/xlat/gen.sh from ./src/xlat/modetypes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat modetypes in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data modetypes_xdata[] = {
#if defined(S_IFREG) || (defined(HAVE_DECL_S_IFREG) && HAVE_DECL_S_IFREG)
  XLAT(S_IFREG),
 #define XLAT_VAL_0 ((unsigned) (S_IFREG))
 #define XLAT_STR_0 STRINGIFY(S_IFREG)
#endif
#if defined(S_IFSOCK) || (defined(HAVE_DECL_S_IFSOCK) && HAVE_DECL_S_IFSOCK)
  XLAT(S_IFSOCK),
 #define XLAT_VAL_1 ((unsigned) (S_IFSOCK))
 #define XLAT_STR_1 STRINGIFY(S_IFSOCK)
#endif
#if defined(S_IFIFO) || (defined(HAVE_DECL_S_IFIFO) && HAVE_DECL_S_IFIFO)
  XLAT(S_IFIFO),
 #define XLAT_VAL_2 ((unsigned) (S_IFIFO))
 #define XLAT_STR_2 STRINGIFY(S_IFIFO)
#endif
#if defined(S_IFLNK) || (defined(HAVE_DECL_S_IFLNK) && HAVE_DECL_S_IFLNK)
  XLAT(S_IFLNK),
 #define XLAT_VAL_3 ((unsigned) (S_IFLNK))
 #define XLAT_STR_3 STRINGIFY(S_IFLNK)
#endif
#if defined(S_IFDIR) || (defined(HAVE_DECL_S_IFDIR) && HAVE_DECL_S_IFDIR)
  XLAT(S_IFDIR),
 #define XLAT_VAL_4 ((unsigned) (S_IFDIR))
 #define XLAT_STR_4 STRINGIFY(S_IFDIR)
#endif
#if defined(S_IFBLK) || (defined(HAVE_DECL_S_IFBLK) && HAVE_DECL_S_IFBLK)
  XLAT(S_IFBLK),
 #define XLAT_VAL_5 ((unsigned) (S_IFBLK))
 #define XLAT_STR_5 STRINGIFY(S_IFBLK)
#endif
#if defined(S_IFCHR) || (defined(HAVE_DECL_S_IFCHR) && HAVE_DECL_S_IFCHR)
  XLAT(S_IFCHR),
 #define XLAT_VAL_6 ((unsigned) (S_IFCHR))
 #define XLAT_STR_6 STRINGIFY(S_IFCHR)
#endif
};
static
const struct xlat modetypes[1] = { {
 .data = modetypes_xdata,
 .size = ARRAY_SIZE(modetypes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
