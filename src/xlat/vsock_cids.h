/* Generated by ./src/xlat/gen.sh from ./src/xlat/vsock_cids.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((VMADDR_CID_HYPERVISOR) == (0), "VMADDR_CID_HYPERVISOR != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((VMADDR_CID_LOCAL) == (1), "VMADDR_CID_LOCAL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((VMADDR_CID_HOST) == (2), "VMADDR_CID_HOST != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((VMADDR_CID_ANY) == (0xffffffff), "VMADDR_CID_ANY != 0xffffffff");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat vsock_cids in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data vsock_cids_xdata[] = {
 XLAT(VMADDR_CID_HYPERVISOR),
 #define XLAT_VAL_0 ((unsigned) (VMADDR_CID_HYPERVISOR))
 #define XLAT_STR_0 STRINGIFY(VMADDR_CID_HYPERVISOR)
 XLAT(VMADDR_CID_LOCAL),
 #define XLAT_VAL_1 ((unsigned) (VMADDR_CID_LOCAL))
 #define XLAT_STR_1 STRINGIFY(VMADDR_CID_LOCAL)
 XLAT(VMADDR_CID_HOST),
 #define XLAT_VAL_2 ((unsigned) (VMADDR_CID_HOST))
 #define XLAT_STR_2 STRINGIFY(VMADDR_CID_HOST)
 XLAT(VMADDR_CID_ANY),
 #define XLAT_VAL_3 ((unsigned) (VMADDR_CID_ANY))
 #define XLAT_STR_3 STRINGIFY(VMADDR_CID_ANY)
};
static
const struct xlat vsock_cids[1] = { {
 .data = vsock_cids_xdata,
 .size = ARRAY_SIZE(vsock_cids_xdata),
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
