/* Generated by ./src/xlat/gen.sh from ./src/xlat/uring_restriction_opcodes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_restriction_opcodes in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data uring_restriction_opcodes_xdata[] = {
 [IORING_RESTRICTION_REGISTER_OP] = XLAT(IORING_RESTRICTION_REGISTER_OP),
 #define XLAT_VAL_0 ((unsigned) (IORING_RESTRICTION_REGISTER_OP))
 #define XLAT_STR_0 STRINGIFY(IORING_RESTRICTION_REGISTER_OP)
 [IORING_RESTRICTION_SQE_OP] = XLAT(IORING_RESTRICTION_SQE_OP),
 #define XLAT_VAL_1 ((unsigned) (IORING_RESTRICTION_SQE_OP))
 #define XLAT_STR_1 STRINGIFY(IORING_RESTRICTION_SQE_OP)
 [IORING_RESTRICTION_SQE_FLAGS_ALLOWED] = XLAT(IORING_RESTRICTION_SQE_FLAGS_ALLOWED),
 #define XLAT_VAL_2 ((unsigned) (IORING_RESTRICTION_SQE_FLAGS_ALLOWED))
 #define XLAT_STR_2 STRINGIFY(IORING_RESTRICTION_SQE_FLAGS_ALLOWED)
 [IORING_RESTRICTION_SQE_FLAGS_REQUIRED] = XLAT(IORING_RESTRICTION_SQE_FLAGS_REQUIRED),
 #define XLAT_VAL_3 ((unsigned) (IORING_RESTRICTION_SQE_FLAGS_REQUIRED))
 #define XLAT_STR_3 STRINGIFY(IORING_RESTRICTION_SQE_FLAGS_REQUIRED)
};
static
const struct xlat uring_restriction_opcodes[1] = { {
 .data = uring_restriction_opcodes_xdata,
 .size = ARRAY_SIZE(uring_restriction_opcodes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
