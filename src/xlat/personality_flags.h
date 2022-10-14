/* Generated by ./src/xlat/gen.sh from ./src/xlat/personality_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(UNAME26) || (defined(HAVE_DECL_UNAME26) && HAVE_DECL_UNAME26)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UNAME26) == (0x0020000), "UNAME26 != 0x0020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UNAME26 0x0020000
#endif
#if defined(ADDR_NO_RANDOMIZE) || (defined(HAVE_DECL_ADDR_NO_RANDOMIZE) && HAVE_DECL_ADDR_NO_RANDOMIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ADDR_NO_RANDOMIZE) == (0x0040000), "ADDR_NO_RANDOMIZE != 0x0040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ADDR_NO_RANDOMIZE 0x0040000
#endif
#if defined(FDPIC_FUNCPTRS) || (defined(HAVE_DECL_FDPIC_FUNCPTRS) && HAVE_DECL_FDPIC_FUNCPTRS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FDPIC_FUNCPTRS) == (0x0080000), "FDPIC_FUNCPTRS != 0x0080000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FDPIC_FUNCPTRS 0x0080000
#endif
#if defined(MMAP_PAGE_ZERO) || (defined(HAVE_DECL_MMAP_PAGE_ZERO) && HAVE_DECL_MMAP_PAGE_ZERO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MMAP_PAGE_ZERO) == (0x0100000), "MMAP_PAGE_ZERO != 0x0100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MMAP_PAGE_ZERO 0x0100000
#endif
#if defined(ADDR_COMPAT_LAYOUT) || (defined(HAVE_DECL_ADDR_COMPAT_LAYOUT) && HAVE_DECL_ADDR_COMPAT_LAYOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ADDR_COMPAT_LAYOUT) == (0x0200000), "ADDR_COMPAT_LAYOUT != 0x0200000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ADDR_COMPAT_LAYOUT 0x0200000
#endif
#if defined(READ_IMPLIES_EXEC) || (defined(HAVE_DECL_READ_IMPLIES_EXEC) && HAVE_DECL_READ_IMPLIES_EXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((READ_IMPLIES_EXEC) == (0x0400000), "READ_IMPLIES_EXEC != 0x0400000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define READ_IMPLIES_EXEC 0x0400000
#endif
#if defined(ADDR_LIMIT_32BIT) || (defined(HAVE_DECL_ADDR_LIMIT_32BIT) && HAVE_DECL_ADDR_LIMIT_32BIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ADDR_LIMIT_32BIT) == (0x0800000), "ADDR_LIMIT_32BIT != 0x0800000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ADDR_LIMIT_32BIT 0x0800000
#endif
#if defined(SHORT_INODE) || (defined(HAVE_DECL_SHORT_INODE) && HAVE_DECL_SHORT_INODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHORT_INODE) == (0x1000000), "SHORT_INODE != 0x1000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHORT_INODE 0x1000000
#endif
#if defined(WHOLE_SECONDS) || (defined(HAVE_DECL_WHOLE_SECONDS) && HAVE_DECL_WHOLE_SECONDS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WHOLE_SECONDS) == (0x2000000), "WHOLE_SECONDS != 0x2000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WHOLE_SECONDS 0x2000000
#endif
#if defined(STICKY_TIMEOUTS) || (defined(HAVE_DECL_STICKY_TIMEOUTS) && HAVE_DECL_STICKY_TIMEOUTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STICKY_TIMEOUTS) == (0x4000000), "STICKY_TIMEOUTS != 0x4000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STICKY_TIMEOUTS 0x4000000
#endif
#if defined(ADDR_LIMIT_3GB) || (defined(HAVE_DECL_ADDR_LIMIT_3GB) && HAVE_DECL_ADDR_LIMIT_3GB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ADDR_LIMIT_3GB) == (0x8000000), "ADDR_LIMIT_3GB != 0x8000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ADDR_LIMIT_3GB 0x8000000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat personality_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data personality_flags_xdata[] = {
 XLAT(UNAME26),
 #define XLAT_VAL_0 ((unsigned) (UNAME26))
 #define XLAT_STR_0 STRINGIFY(UNAME26)
 XLAT(ADDR_NO_RANDOMIZE),
 #define XLAT_VAL_1 ((unsigned) (ADDR_NO_RANDOMIZE))
 #define XLAT_STR_1 STRINGIFY(ADDR_NO_RANDOMIZE)
 XLAT(FDPIC_FUNCPTRS),
 #define XLAT_VAL_2 ((unsigned) (FDPIC_FUNCPTRS))
 #define XLAT_STR_2 STRINGIFY(FDPIC_FUNCPTRS)
 XLAT(MMAP_PAGE_ZERO),
 #define XLAT_VAL_3 ((unsigned) (MMAP_PAGE_ZERO))
 #define XLAT_STR_3 STRINGIFY(MMAP_PAGE_ZERO)
 XLAT(ADDR_COMPAT_LAYOUT),
 #define XLAT_VAL_4 ((unsigned) (ADDR_COMPAT_LAYOUT))
 #define XLAT_STR_4 STRINGIFY(ADDR_COMPAT_LAYOUT)
 XLAT(READ_IMPLIES_EXEC),
 #define XLAT_VAL_5 ((unsigned) (READ_IMPLIES_EXEC))
 #define XLAT_STR_5 STRINGIFY(READ_IMPLIES_EXEC)
 XLAT(ADDR_LIMIT_32BIT),
 #define XLAT_VAL_6 ((unsigned) (ADDR_LIMIT_32BIT))
 #define XLAT_STR_6 STRINGIFY(ADDR_LIMIT_32BIT)
 XLAT(SHORT_INODE),
 #define XLAT_VAL_7 ((unsigned) (SHORT_INODE))
 #define XLAT_STR_7 STRINGIFY(SHORT_INODE)
 XLAT(WHOLE_SECONDS),
 #define XLAT_VAL_8 ((unsigned) (WHOLE_SECONDS))
 #define XLAT_STR_8 STRINGIFY(WHOLE_SECONDS)
 XLAT(STICKY_TIMEOUTS),
 #define XLAT_VAL_9 ((unsigned) (STICKY_TIMEOUTS))
 #define XLAT_STR_9 STRINGIFY(STICKY_TIMEOUTS)
 XLAT(ADDR_LIMIT_3GB),
 #define XLAT_VAL_10 ((unsigned) (ADDR_LIMIT_3GB))
 #define XLAT_STR_10 STRINGIFY(ADDR_LIMIT_3GB)
};
static
const struct xlat personality_flags[1] = { {
 .data = personality_flags_xdata,
 .size = ARRAY_SIZE(personality_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
