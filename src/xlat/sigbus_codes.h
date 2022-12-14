/* Generated by ./src/xlat/gen.sh from ./src/xlat/sigbus_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BUS_ADRALN) || (defined(HAVE_DECL_BUS_ADRALN) && HAVE_DECL_BUS_ADRALN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_ADRALN) == (1), "BUS_ADRALN != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_ADRALN 1
#endif
#if defined(BUS_ADRERR) || (defined(HAVE_DECL_BUS_ADRERR) && HAVE_DECL_BUS_ADRERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_ADRERR) == (2), "BUS_ADRERR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_ADRERR 2
#endif
#if defined(BUS_OBJERR) || (defined(HAVE_DECL_BUS_OBJERR) && HAVE_DECL_BUS_OBJERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_OBJERR) == (3), "BUS_OBJERR != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_OBJERR 3
#endif
#if defined(BUS_MCEERR_AR) || (defined(HAVE_DECL_BUS_MCEERR_AR) && HAVE_DECL_BUS_MCEERR_AR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_MCEERR_AR) == (4), "BUS_MCEERR_AR != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_MCEERR_AR 4
#endif
#if defined(BUS_MCEERR_AO) || (defined(HAVE_DECL_BUS_MCEERR_AO) && HAVE_DECL_BUS_MCEERR_AO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_MCEERR_AO) == (5), "BUS_MCEERR_AO != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_MCEERR_AO 5
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigbus_codes[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sigbus_codes_xdata[] = {
 XLAT(BUS_ADRALN),
 #define XLAT_VAL_0 ((unsigned) (BUS_ADRALN))
 #define XLAT_STR_0 STRINGIFY(BUS_ADRALN)
 XLAT(BUS_ADRERR),
 #define XLAT_VAL_1 ((unsigned) (BUS_ADRERR))
 #define XLAT_STR_1 STRINGIFY(BUS_ADRERR)
 XLAT(BUS_OBJERR),
 #define XLAT_VAL_2 ((unsigned) (BUS_OBJERR))
 #define XLAT_STR_2 STRINGIFY(BUS_OBJERR)
#if defined(BUS_OPFETCH) || (defined(HAVE_DECL_BUS_OPFETCH) && HAVE_DECL_BUS_OPFETCH)
  XLAT(BUS_OPFETCH),
 #define XLAT_VAL_3 ((unsigned) (BUS_OPFETCH))
 #define XLAT_STR_3 STRINGIFY(BUS_OPFETCH)
#endif
 XLAT(BUS_MCEERR_AR),
 #define XLAT_VAL_4 ((unsigned) (BUS_MCEERR_AR))
 #define XLAT_STR_4 STRINGIFY(BUS_MCEERR_AR)
 XLAT(BUS_MCEERR_AO),
 #define XLAT_VAL_5 ((unsigned) (BUS_MCEERR_AO))
 #define XLAT_STR_5 STRINGIFY(BUS_MCEERR_AO)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigbus_codes[1] = { {
 .data = sigbus_codes_xdata,
 .size = ARRAY_SIZE(sigbus_codes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
