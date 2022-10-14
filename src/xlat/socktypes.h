/* Generated by ./src/xlat/gen.sh from ./src/xlat/socktypes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#ifdef __mips__
#if defined(SOCK_DGRAM) || (defined(HAVE_DECL_SOCK_DGRAM) && HAVE_DECL_SOCK_DGRAM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_DGRAM) == (1), "SOCK_DGRAM != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_DGRAM 1
#endif
#if defined(SOCK_STREAM) || (defined(HAVE_DECL_SOCK_STREAM) && HAVE_DECL_SOCK_STREAM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_STREAM) == (2), "SOCK_STREAM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_STREAM 2
#endif
#else
#if defined(SOCK_STREAM) || (defined(HAVE_DECL_SOCK_STREAM) && HAVE_DECL_SOCK_STREAM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_STREAM) == (1), "SOCK_STREAM != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_STREAM 1
#endif
#if defined(SOCK_DGRAM) || (defined(HAVE_DECL_SOCK_DGRAM) && HAVE_DECL_SOCK_DGRAM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_DGRAM) == (2), "SOCK_DGRAM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_DGRAM 2
#endif
#endif
#if defined(SOCK_RAW) || (defined(HAVE_DECL_SOCK_RAW) && HAVE_DECL_SOCK_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_RAW) == (3), "SOCK_RAW != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_RAW 3
#endif
#if defined(SOCK_RDM) || (defined(HAVE_DECL_SOCK_RDM) && HAVE_DECL_SOCK_RDM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_RDM) == (4), "SOCK_RDM != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_RDM 4
#endif
#if defined(SOCK_SEQPACKET) || (defined(HAVE_DECL_SOCK_SEQPACKET) && HAVE_DECL_SOCK_SEQPACKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_SEQPACKET) == (5), "SOCK_SEQPACKET != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_SEQPACKET 5
#endif
#if defined(SOCK_DCCP) || (defined(HAVE_DECL_SOCK_DCCP) && HAVE_DECL_SOCK_DCCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_DCCP) == (6), "SOCK_DCCP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_DCCP 6
#endif
#if defined(SOCK_PACKET) || (defined(HAVE_DECL_SOCK_PACKET) && HAVE_DECL_SOCK_PACKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_PACKET) == (10), "SOCK_PACKET != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_PACKET 10
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data socktypes_xdata[] = {
#ifdef __mips__
 XLAT(SOCK_DGRAM),
 #define XLAT_VAL_0 ((unsigned) (SOCK_DGRAM))
 #define XLAT_STR_0 STRINGIFY(SOCK_DGRAM)
 XLAT(SOCK_STREAM),
 #define XLAT_VAL_1 ((unsigned) (SOCK_STREAM))
 #define XLAT_STR_1 STRINGIFY(SOCK_STREAM)
#else
 XLAT(SOCK_STREAM),
 #define XLAT_VAL_2 ((unsigned) (SOCK_STREAM))
 #define XLAT_STR_2 STRINGIFY(SOCK_STREAM)
 XLAT(SOCK_DGRAM),
 #define XLAT_VAL_3 ((unsigned) (SOCK_DGRAM))
 #define XLAT_STR_3 STRINGIFY(SOCK_DGRAM)
#endif
 XLAT(SOCK_RAW),
 #define XLAT_VAL_4 ((unsigned) (SOCK_RAW))
 #define XLAT_STR_4 STRINGIFY(SOCK_RAW)
 XLAT(SOCK_RDM),
 #define XLAT_VAL_5 ((unsigned) (SOCK_RDM))
 #define XLAT_STR_5 STRINGIFY(SOCK_RDM)
 XLAT(SOCK_SEQPACKET),
 #define XLAT_VAL_6 ((unsigned) (SOCK_SEQPACKET))
 #define XLAT_STR_6 STRINGIFY(SOCK_SEQPACKET)
 XLAT(SOCK_DCCP),
 #define XLAT_VAL_7 ((unsigned) (SOCK_DCCP))
 #define XLAT_STR_7 STRINGIFY(SOCK_DCCP)
 XLAT(SOCK_PACKET),
 #define XLAT_VAL_8 ((unsigned) (SOCK_PACKET))
 #define XLAT_STR_8 STRINGIFY(SOCK_PACKET)
};
const struct xlat socktypes[1] = { {
 .data = socktypes_xdata,
 .size = ARRAY_SIZE(socktypes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
