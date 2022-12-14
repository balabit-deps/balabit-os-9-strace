/* Generated by ./src/xlat/gen.sh from ./src/xlat/lwtunnel_encap_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LWTUNNEL_ENCAP_NONE) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_NONE) && HAVE_DECL_LWTUNNEL_ENCAP_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_NONE) == (0), "LWTUNNEL_ENCAP_NONE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_NONE 0
#endif
#if defined(LWTUNNEL_ENCAP_MPLS) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_MPLS) && HAVE_DECL_LWTUNNEL_ENCAP_MPLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_MPLS) == (1), "LWTUNNEL_ENCAP_MPLS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_MPLS 1
#endif
#if defined(LWTUNNEL_ENCAP_IP) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_IP) && HAVE_DECL_LWTUNNEL_ENCAP_IP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_IP) == (2), "LWTUNNEL_ENCAP_IP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_IP 2
#endif
#if defined(LWTUNNEL_ENCAP_ILA) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_ILA) && HAVE_DECL_LWTUNNEL_ENCAP_ILA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_ILA) == (3), "LWTUNNEL_ENCAP_ILA != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_ILA 3
#endif
#if defined(LWTUNNEL_ENCAP_IP6) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_IP6) && HAVE_DECL_LWTUNNEL_ENCAP_IP6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_IP6) == (4), "LWTUNNEL_ENCAP_IP6 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_IP6 4
#endif
#if defined(LWTUNNEL_ENCAP_SEG6) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_SEG6) && HAVE_DECL_LWTUNNEL_ENCAP_SEG6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_SEG6) == (5), "LWTUNNEL_ENCAP_SEG6 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_SEG6 5
#endif
#if defined(LWTUNNEL_ENCAP_BPF) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_BPF) && HAVE_DECL_LWTUNNEL_ENCAP_BPF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_BPF) == (6), "LWTUNNEL_ENCAP_BPF != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_BPF 6
#endif
#if defined(LWTUNNEL_ENCAP_SEG6_LOCAL) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_SEG6_LOCAL) && HAVE_DECL_LWTUNNEL_ENCAP_SEG6_LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_SEG6_LOCAL) == (7), "LWTUNNEL_ENCAP_SEG6_LOCAL != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_SEG6_LOCAL 7
#endif
#if defined(LWTUNNEL_ENCAP_RPL) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_RPL) && HAVE_DECL_LWTUNNEL_ENCAP_RPL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_RPL) == (8), "LWTUNNEL_ENCAP_RPL != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_RPL 8
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat lwtunnel_encap_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data lwtunnel_encap_types_xdata[] = {
 [LWTUNNEL_ENCAP_NONE] = XLAT(LWTUNNEL_ENCAP_NONE),
 #define XLAT_VAL_0 ((unsigned) (LWTUNNEL_ENCAP_NONE))
 #define XLAT_STR_0 STRINGIFY(LWTUNNEL_ENCAP_NONE)
 [LWTUNNEL_ENCAP_MPLS] = XLAT(LWTUNNEL_ENCAP_MPLS),
 #define XLAT_VAL_1 ((unsigned) (LWTUNNEL_ENCAP_MPLS))
 #define XLAT_STR_1 STRINGIFY(LWTUNNEL_ENCAP_MPLS)
 [LWTUNNEL_ENCAP_IP] = XLAT(LWTUNNEL_ENCAP_IP),
 #define XLAT_VAL_2 ((unsigned) (LWTUNNEL_ENCAP_IP))
 #define XLAT_STR_2 STRINGIFY(LWTUNNEL_ENCAP_IP)
 [LWTUNNEL_ENCAP_ILA] = XLAT(LWTUNNEL_ENCAP_ILA),
 #define XLAT_VAL_3 ((unsigned) (LWTUNNEL_ENCAP_ILA))
 #define XLAT_STR_3 STRINGIFY(LWTUNNEL_ENCAP_ILA)
 [LWTUNNEL_ENCAP_IP6] = XLAT(LWTUNNEL_ENCAP_IP6),
 #define XLAT_VAL_4 ((unsigned) (LWTUNNEL_ENCAP_IP6))
 #define XLAT_STR_4 STRINGIFY(LWTUNNEL_ENCAP_IP6)
 [LWTUNNEL_ENCAP_SEG6] = XLAT(LWTUNNEL_ENCAP_SEG6),
 #define XLAT_VAL_5 ((unsigned) (LWTUNNEL_ENCAP_SEG6))
 #define XLAT_STR_5 STRINGIFY(LWTUNNEL_ENCAP_SEG6)
 [LWTUNNEL_ENCAP_BPF] = XLAT(LWTUNNEL_ENCAP_BPF),
 #define XLAT_VAL_6 ((unsigned) (LWTUNNEL_ENCAP_BPF))
 #define XLAT_STR_6 STRINGIFY(LWTUNNEL_ENCAP_BPF)
 [LWTUNNEL_ENCAP_SEG6_LOCAL] = XLAT(LWTUNNEL_ENCAP_SEG6_LOCAL),
 #define XLAT_VAL_7 ((unsigned) (LWTUNNEL_ENCAP_SEG6_LOCAL))
 #define XLAT_STR_7 STRINGIFY(LWTUNNEL_ENCAP_SEG6_LOCAL)
 [LWTUNNEL_ENCAP_RPL] = XLAT(LWTUNNEL_ENCAP_RPL),
 #define XLAT_VAL_8 ((unsigned) (LWTUNNEL_ENCAP_RPL))
 #define XLAT_STR_8 STRINGIFY(LWTUNNEL_ENCAP_RPL)
};
static
const struct xlat lwtunnel_encap_types[1] = { {
 .data = lwtunnel_encap_types_xdata,
 .size = ARRAY_SIZE(lwtunnel_encap_types_xdata),
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
