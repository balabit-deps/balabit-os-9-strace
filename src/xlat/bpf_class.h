/* Generated by ./src/xlat/gen.sh from ./src/xlat/bpf_class.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_LD) || (defined(HAVE_DECL_BPF_LD) && HAVE_DECL_BPF_LD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LD) == (0x0), "BPF_LD != 0x0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LD 0x0
#endif
#if defined(BPF_LDX) || (defined(HAVE_DECL_BPF_LDX) && HAVE_DECL_BPF_LDX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LDX) == (0x1), "BPF_LDX != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LDX 0x1
#endif
#if defined(BPF_ST) || (defined(HAVE_DECL_BPF_ST) && HAVE_DECL_BPF_ST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ST) == (0x2), "BPF_ST != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ST 0x2
#endif
#if defined(BPF_STX) || (defined(HAVE_DECL_BPF_STX) && HAVE_DECL_BPF_STX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_STX) == (0x3), "BPF_STX != 0x3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_STX 0x3
#endif
#if defined(BPF_ALU) || (defined(HAVE_DECL_BPF_ALU) && HAVE_DECL_BPF_ALU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ALU) == (0x4), "BPF_ALU != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ALU 0x4
#endif
#if defined(BPF_JMP) || (defined(HAVE_DECL_BPF_JMP) && HAVE_DECL_BPF_JMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JMP) == (0x5), "BPF_JMP != 0x5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JMP 0x5
#endif
#if defined(BPF_RET) || (defined(HAVE_DECL_BPF_RET) && HAVE_DECL_BPF_RET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_RET) == (0x6), "BPF_RET != 0x6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_RET 0x6
#endif
#if defined(BPF_MISC) || (defined(HAVE_DECL_BPF_MISC) && HAVE_DECL_BPF_MISC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MISC) == (0x7), "BPF_MISC != 0x7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MISC 0x7
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_class in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data bpf_class_xdata[] = {
 [BPF_LD] = XLAT(BPF_LD),
 #define XLAT_VAL_0 ((unsigned) (BPF_LD))
 #define XLAT_STR_0 STRINGIFY(BPF_LD)
 [BPF_LDX] = XLAT(BPF_LDX),
 #define XLAT_VAL_1 ((unsigned) (BPF_LDX))
 #define XLAT_STR_1 STRINGIFY(BPF_LDX)
 [BPF_ST] = XLAT(BPF_ST),
 #define XLAT_VAL_2 ((unsigned) (BPF_ST))
 #define XLAT_STR_2 STRINGIFY(BPF_ST)
 [BPF_STX] = XLAT(BPF_STX),
 #define XLAT_VAL_3 ((unsigned) (BPF_STX))
 #define XLAT_STR_3 STRINGIFY(BPF_STX)
 [BPF_ALU] = XLAT(BPF_ALU),
 #define XLAT_VAL_4 ((unsigned) (BPF_ALU))
 #define XLAT_STR_4 STRINGIFY(BPF_ALU)
 [BPF_JMP] = XLAT(BPF_JMP),
 #define XLAT_VAL_5 ((unsigned) (BPF_JMP))
 #define XLAT_STR_5 STRINGIFY(BPF_JMP)
 [BPF_RET] = XLAT(BPF_RET),
 #define XLAT_VAL_6 ((unsigned) (BPF_RET))
 #define XLAT_STR_6 STRINGIFY(BPF_RET)
 [BPF_MISC] = XLAT(BPF_MISC),
 #define XLAT_VAL_7 ((unsigned) (BPF_MISC))
 #define XLAT_STR_7 STRINGIFY(BPF_MISC)
};
static
const struct xlat bpf_class[1] = { {
 .data = bpf_class_xdata,
 .size = ARRAY_SIZE(bpf_class_xdata),
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
