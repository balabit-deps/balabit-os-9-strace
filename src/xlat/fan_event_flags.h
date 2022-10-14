/* Generated by ./src/xlat/gen.sh from ./src/xlat/fan_event_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_ACCESS) || (defined(HAVE_DECL_FAN_ACCESS) && HAVE_DECL_FAN_ACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ACCESS) == (0x00000001), "FAN_ACCESS != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ACCESS 0x00000001
#endif
#if defined(FAN_MODIFY) || (defined(HAVE_DECL_FAN_MODIFY) && HAVE_DECL_FAN_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MODIFY) == (0x00000002), "FAN_MODIFY != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MODIFY 0x00000002
#endif
#if defined(FAN_ATTRIB) || (defined(HAVE_DECL_FAN_ATTRIB) && HAVE_DECL_FAN_ATTRIB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ATTRIB) == (0x00000004), "FAN_ATTRIB != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ATTRIB 0x00000004
#endif
#if defined(FAN_CLOSE_WRITE) || (defined(HAVE_DECL_FAN_CLOSE_WRITE) && HAVE_DECL_FAN_CLOSE_WRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLOSE_WRITE) == (0x00000008), "FAN_CLOSE_WRITE != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLOSE_WRITE 0x00000008
#endif
#if defined(FAN_CLOSE_NOWRITE) || (defined(HAVE_DECL_FAN_CLOSE_NOWRITE) && HAVE_DECL_FAN_CLOSE_NOWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLOSE_NOWRITE) == (0x00000010), "FAN_CLOSE_NOWRITE != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLOSE_NOWRITE 0x00000010
#endif
#if defined(FAN_OPEN) || (defined(HAVE_DECL_FAN_OPEN) && HAVE_DECL_FAN_OPEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN) == (0x00000020), "FAN_OPEN != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN 0x00000020
#endif
#if defined(FAN_MOVED_FROM) || (defined(HAVE_DECL_FAN_MOVED_FROM) && HAVE_DECL_FAN_MOVED_FROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVED_FROM) == (0x00000040), "FAN_MOVED_FROM != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVED_FROM 0x00000040
#endif
#if defined(FAN_MOVED_TO) || (defined(HAVE_DECL_FAN_MOVED_TO) && HAVE_DECL_FAN_MOVED_TO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVED_TO) == (0x00000080), "FAN_MOVED_TO != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVED_TO 0x00000080
#endif
#if defined(FAN_CREATE) || (defined(HAVE_DECL_FAN_CREATE) && HAVE_DECL_FAN_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CREATE) == (0x00000100), "FAN_CREATE != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CREATE 0x00000100
#endif
#if defined(FAN_DELETE) || (defined(HAVE_DECL_FAN_DELETE) && HAVE_DECL_FAN_DELETE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_DELETE) == (0x00000200), "FAN_DELETE != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_DELETE 0x00000200
#endif
#if defined(FAN_DELETE_SELF) || (defined(HAVE_DECL_FAN_DELETE_SELF) && HAVE_DECL_FAN_DELETE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_DELETE_SELF) == (0x00000400), "FAN_DELETE_SELF != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_DELETE_SELF 0x00000400
#endif
#if defined(FAN_MOVE_SELF) || (defined(HAVE_DECL_FAN_MOVE_SELF) && HAVE_DECL_FAN_MOVE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVE_SELF) == (0x00000800), "FAN_MOVE_SELF != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVE_SELF 0x00000800
#endif
#if defined(FAN_OPEN_EXEC) || (defined(HAVE_DECL_FAN_OPEN_EXEC) && HAVE_DECL_FAN_OPEN_EXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_EXEC) == (0x00001000), "FAN_OPEN_EXEC != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_EXEC 0x00001000
#endif
#if defined(FAN_Q_OVERFLOW) || (defined(HAVE_DECL_FAN_Q_OVERFLOW) && HAVE_DECL_FAN_Q_OVERFLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_Q_OVERFLOW) == (0x00004000), "FAN_Q_OVERFLOW != 0x00004000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_Q_OVERFLOW 0x00004000
#endif
#if defined(FAN_FS_ERROR) || (defined(HAVE_DECL_FAN_FS_ERROR) && HAVE_DECL_FAN_FS_ERROR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_FS_ERROR) == (0x00008000), "FAN_FS_ERROR != 0x00008000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_FS_ERROR 0x00008000
#endif
#if defined(FAN_OPEN_PERM) || (defined(HAVE_DECL_FAN_OPEN_PERM) && HAVE_DECL_FAN_OPEN_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_PERM) == (0x00010000), "FAN_OPEN_PERM != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_PERM 0x00010000
#endif
#if defined(FAN_ACCESS_PERM) || (defined(HAVE_DECL_FAN_ACCESS_PERM) && HAVE_DECL_FAN_ACCESS_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ACCESS_PERM) == (0x00020000), "FAN_ACCESS_PERM != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ACCESS_PERM 0x00020000
#endif
#if defined(FAN_OPEN_EXEC_PERM) || (defined(HAVE_DECL_FAN_OPEN_EXEC_PERM) && HAVE_DECL_FAN_OPEN_EXEC_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_EXEC_PERM) == (0x00040000), "FAN_OPEN_EXEC_PERM != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_EXEC_PERM 0x00040000
#endif
#if defined(FAN_DIR_MODIFY) || (defined(HAVE_DECL_FAN_DIR_MODIFY) && HAVE_DECL_FAN_DIR_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_DIR_MODIFY) == (0x00080000), "FAN_DIR_MODIFY != 0x00080000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_DIR_MODIFY 0x00080000
#endif
#if defined(FAN_ONDIR) || (defined(HAVE_DECL_FAN_ONDIR) && HAVE_DECL_FAN_ONDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ONDIR) == (0x40000000), "FAN_ONDIR != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ONDIR 0x40000000
#endif
#if defined(FAN_EVENT_ON_CHILD) || (defined(HAVE_DECL_FAN_EVENT_ON_CHILD) && HAVE_DECL_FAN_EVENT_ON_CHILD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_EVENT_ON_CHILD) == (0x08000000), "FAN_EVENT_ON_CHILD != 0x08000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_EVENT_ON_CHILD 0x08000000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_event_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fan_event_flags_xdata[] = {
 XLAT(FAN_ACCESS),
 #define XLAT_VAL_0 ((unsigned) (FAN_ACCESS))
 #define XLAT_STR_0 STRINGIFY(FAN_ACCESS)
 XLAT(FAN_MODIFY),
 #define XLAT_VAL_1 ((unsigned) (FAN_MODIFY))
 #define XLAT_STR_1 STRINGIFY(FAN_MODIFY)
 XLAT(FAN_ATTRIB),
 #define XLAT_VAL_2 ((unsigned) (FAN_ATTRIB))
 #define XLAT_STR_2 STRINGIFY(FAN_ATTRIB)
 XLAT(FAN_CLOSE_WRITE),
 #define XLAT_VAL_3 ((unsigned) (FAN_CLOSE_WRITE))
 #define XLAT_STR_3 STRINGIFY(FAN_CLOSE_WRITE)
 XLAT(FAN_CLOSE_NOWRITE),
 #define XLAT_VAL_4 ((unsigned) (FAN_CLOSE_NOWRITE))
 #define XLAT_STR_4 STRINGIFY(FAN_CLOSE_NOWRITE)
 XLAT(FAN_OPEN),
 #define XLAT_VAL_5 ((unsigned) (FAN_OPEN))
 #define XLAT_STR_5 STRINGIFY(FAN_OPEN)
 XLAT(FAN_MOVED_FROM),
 #define XLAT_VAL_6 ((unsigned) (FAN_MOVED_FROM))
 #define XLAT_STR_6 STRINGIFY(FAN_MOVED_FROM)
 XLAT(FAN_MOVED_TO),
 #define XLAT_VAL_7 ((unsigned) (FAN_MOVED_TO))
 #define XLAT_STR_7 STRINGIFY(FAN_MOVED_TO)
 XLAT(FAN_CREATE),
 #define XLAT_VAL_8 ((unsigned) (FAN_CREATE))
 #define XLAT_STR_8 STRINGIFY(FAN_CREATE)
 XLAT(FAN_DELETE),
 #define XLAT_VAL_9 ((unsigned) (FAN_DELETE))
 #define XLAT_STR_9 STRINGIFY(FAN_DELETE)
 XLAT(FAN_DELETE_SELF),
 #define XLAT_VAL_10 ((unsigned) (FAN_DELETE_SELF))
 #define XLAT_STR_10 STRINGIFY(FAN_DELETE_SELF)
 XLAT(FAN_MOVE_SELF),
 #define XLAT_VAL_11 ((unsigned) (FAN_MOVE_SELF))
 #define XLAT_STR_11 STRINGIFY(FAN_MOVE_SELF)
 XLAT(FAN_OPEN_EXEC),
 #define XLAT_VAL_12 ((unsigned) (FAN_OPEN_EXEC))
 #define XLAT_STR_12 STRINGIFY(FAN_OPEN_EXEC)
 XLAT(FAN_Q_OVERFLOW),
 #define XLAT_VAL_13 ((unsigned) (FAN_Q_OVERFLOW))
 #define XLAT_STR_13 STRINGIFY(FAN_Q_OVERFLOW)
 XLAT(FAN_FS_ERROR),
 #define XLAT_VAL_14 ((unsigned) (FAN_FS_ERROR))
 #define XLAT_STR_14 STRINGIFY(FAN_FS_ERROR)
 XLAT(FAN_OPEN_PERM),
 #define XLAT_VAL_15 ((unsigned) (FAN_OPEN_PERM))
 #define XLAT_STR_15 STRINGIFY(FAN_OPEN_PERM)
 XLAT(FAN_ACCESS_PERM),
 #define XLAT_VAL_16 ((unsigned) (FAN_ACCESS_PERM))
 #define XLAT_STR_16 STRINGIFY(FAN_ACCESS_PERM)
 XLAT(FAN_OPEN_EXEC_PERM),
 #define XLAT_VAL_17 ((unsigned) (FAN_OPEN_EXEC_PERM))
 #define XLAT_STR_17 STRINGIFY(FAN_OPEN_EXEC_PERM)
 XLAT(FAN_DIR_MODIFY),
 #define XLAT_VAL_18 ((unsigned) (FAN_DIR_MODIFY))
 #define XLAT_STR_18 STRINGIFY(FAN_DIR_MODIFY)
 XLAT(FAN_ONDIR),
 #define XLAT_VAL_19 ((unsigned) (FAN_ONDIR))
 #define XLAT_STR_19 STRINGIFY(FAN_ONDIR)
 XLAT(FAN_EVENT_ON_CHILD),
 #define XLAT_VAL_20 ((unsigned) (FAN_EVENT_ON_CHILD))
 #define XLAT_STR_20 STRINGIFY(FAN_EVENT_ON_CHILD)
};
static
const struct xlat fan_event_flags[1] = { {
 .data = fan_event_flags_xdata,
 .size = ARRAY_SIZE(fan_event_flags_xdata),
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
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
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
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
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
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
