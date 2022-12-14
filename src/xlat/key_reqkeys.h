/* Generated by ./src/xlat/gen.sh from ./src/xlat/key_reqkeys.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat key_reqkeys in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data key_reqkeys_xdata[] = {
 XLAT_TYPE(int, KEY_REQKEY_DEFL_NO_CHANGE),
 #define XLAT_VAL_0 ((int) (KEY_REQKEY_DEFL_NO_CHANGE))
 #define XLAT_STR_0 STRINGIFY(KEY_REQKEY_DEFL_NO_CHANGE)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_DEFAULT),
 #define XLAT_VAL_1 ((int) (KEY_REQKEY_DEFL_DEFAULT))
 #define XLAT_STR_1 STRINGIFY(KEY_REQKEY_DEFL_DEFAULT)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_THREAD_KEYRING),
 #define XLAT_VAL_2 ((int) (KEY_REQKEY_DEFL_THREAD_KEYRING))
 #define XLAT_STR_2 STRINGIFY(KEY_REQKEY_DEFL_THREAD_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_PROCESS_KEYRING),
 #define XLAT_VAL_3 ((int) (KEY_REQKEY_DEFL_PROCESS_KEYRING))
 #define XLAT_STR_3 STRINGIFY(KEY_REQKEY_DEFL_PROCESS_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_SESSION_KEYRING),
 #define XLAT_VAL_4 ((int) (KEY_REQKEY_DEFL_SESSION_KEYRING))
 #define XLAT_STR_4 STRINGIFY(KEY_REQKEY_DEFL_SESSION_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_USER_KEYRING),
 #define XLAT_VAL_5 ((int) (KEY_REQKEY_DEFL_USER_KEYRING))
 #define XLAT_STR_5 STRINGIFY(KEY_REQKEY_DEFL_USER_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_USER_SESSION_KEYRING),
 #define XLAT_VAL_6 ((int) (KEY_REQKEY_DEFL_USER_SESSION_KEYRING))
 #define XLAT_STR_6 STRINGIFY(KEY_REQKEY_DEFL_USER_SESSION_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_GROUP_KEYRING),
 #define XLAT_VAL_7 ((int) (KEY_REQKEY_DEFL_GROUP_KEYRING))
 #define XLAT_STR_7 STRINGIFY(KEY_REQKEY_DEFL_GROUP_KEYRING)
 XLAT_TYPE(int, KEY_REQKEY_DEFL_REQUESTOR_KEYRING),
 #define XLAT_VAL_8 ((int) (KEY_REQKEY_DEFL_REQUESTOR_KEYRING))
 #define XLAT_STR_8 STRINGIFY(KEY_REQKEY_DEFL_REQUESTOR_KEYRING)
};
static
const struct xlat key_reqkeys[1] = { {
 .data = key_reqkeys_xdata,
 .size = ARRAY_SIZE(key_reqkeys_xdata),
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
