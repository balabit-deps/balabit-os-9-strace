/* Generated by ./src/xlat/gen.sh from ./src/xlat/nfc_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFC_SOCKPROTO_RAW) || (defined(HAVE_DECL_NFC_SOCKPROTO_RAW) && HAVE_DECL_NFC_SOCKPROTO_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFC_SOCKPROTO_RAW) == (0), "NFC_SOCKPROTO_RAW != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFC_SOCKPROTO_RAW 0
#endif
#if defined(NFC_SOCKPROTO_LLCP) || (defined(HAVE_DECL_NFC_SOCKPROTO_LLCP) && HAVE_DECL_NFC_SOCKPROTO_LLCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFC_SOCKPROTO_LLCP) == (1), "NFC_SOCKPROTO_LLCP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFC_SOCKPROTO_LLCP 1
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nfc_protocols in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data nfc_protocols_xdata[] = {
 [NFC_SOCKPROTO_RAW] = XLAT(NFC_SOCKPROTO_RAW),
 #define XLAT_VAL_0 ((unsigned) (NFC_SOCKPROTO_RAW))
 #define XLAT_STR_0 STRINGIFY(NFC_SOCKPROTO_RAW)
 [NFC_SOCKPROTO_LLCP] = XLAT(NFC_SOCKPROTO_LLCP),
 #define XLAT_VAL_1 ((unsigned) (NFC_SOCKPROTO_LLCP))
 #define XLAT_STR_1 STRINGIFY(NFC_SOCKPROTO_LLCP)
};
static
const struct xlat nfc_protocols[1] = { {
 .data = nfc_protocols_xdata,
 .size = ARRAY_SIZE(nfc_protocols_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
