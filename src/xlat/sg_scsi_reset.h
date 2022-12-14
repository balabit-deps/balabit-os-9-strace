/* Generated by ./src/xlat/gen.sh from ./src/xlat/sg_scsi_reset.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SG_SCSI_RESET_NOTHING) || (defined(HAVE_DECL_SG_SCSI_RESET_NOTHING) && HAVE_DECL_SG_SCSI_RESET_NOTHING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_NOTHING) == (0), "SG_SCSI_RESET_NOTHING != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_NOTHING 0
#endif
#if defined(SG_SCSI_RESET_DEVICE) || (defined(HAVE_DECL_SG_SCSI_RESET_DEVICE) && HAVE_DECL_SG_SCSI_RESET_DEVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_DEVICE) == (1), "SG_SCSI_RESET_DEVICE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_DEVICE 1
#endif
#if defined(SG_SCSI_RESET_BUS) || (defined(HAVE_DECL_SG_SCSI_RESET_BUS) && HAVE_DECL_SG_SCSI_RESET_BUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_BUS) == (2), "SG_SCSI_RESET_BUS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_BUS 2
#endif
#if defined(SG_SCSI_RESET_HOST) || (defined(HAVE_DECL_SG_SCSI_RESET_HOST) && HAVE_DECL_SG_SCSI_RESET_HOST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_HOST) == (3), "SG_SCSI_RESET_HOST != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_HOST 3
#endif
#if defined(SG_SCSI_RESET_TARGET) || (defined(HAVE_DECL_SG_SCSI_RESET_TARGET) && HAVE_DECL_SG_SCSI_RESET_TARGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_TARGET) == (4), "SG_SCSI_RESET_TARGET != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_TARGET 4
#endif
#if defined(SG_SCSI_RESET_NO_ESCALATE) || (defined(HAVE_DECL_SG_SCSI_RESET_NO_ESCALATE) && HAVE_DECL_SG_SCSI_RESET_NO_ESCALATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_NO_ESCALATE) == (0x100), "SG_SCSI_RESET_NO_ESCALATE != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_NO_ESCALATE 0x100
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sg_scsi_reset in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sg_scsi_reset_xdata[] = {
 XLAT(SG_SCSI_RESET_NOTHING),
 #define XLAT_VAL_0 ((unsigned) (SG_SCSI_RESET_NOTHING))
 #define XLAT_STR_0 STRINGIFY(SG_SCSI_RESET_NOTHING)
 XLAT(SG_SCSI_RESET_DEVICE),
 #define XLAT_VAL_1 ((unsigned) (SG_SCSI_RESET_DEVICE))
 #define XLAT_STR_1 STRINGIFY(SG_SCSI_RESET_DEVICE)
 XLAT(SG_SCSI_RESET_BUS),
 #define XLAT_VAL_2 ((unsigned) (SG_SCSI_RESET_BUS))
 #define XLAT_STR_2 STRINGIFY(SG_SCSI_RESET_BUS)
 XLAT(SG_SCSI_RESET_HOST),
 #define XLAT_VAL_3 ((unsigned) (SG_SCSI_RESET_HOST))
 #define XLAT_STR_3 STRINGIFY(SG_SCSI_RESET_HOST)
 XLAT(SG_SCSI_RESET_TARGET),
 #define XLAT_VAL_4 ((unsigned) (SG_SCSI_RESET_TARGET))
 #define XLAT_STR_4 STRINGIFY(SG_SCSI_RESET_TARGET)
 XLAT(SG_SCSI_RESET_NO_ESCALATE),
 #define XLAT_VAL_5 ((unsigned) (SG_SCSI_RESET_NO_ESCALATE))
 #define XLAT_STR_5 STRINGIFY(SG_SCSI_RESET_NO_ESCALATE)
};
static
const struct xlat sg_scsi_reset[1] = { {
 .data = sg_scsi_reset_xdata,
 .size = ARRAY_SIZE(sg_scsi_reset_xdata),
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
