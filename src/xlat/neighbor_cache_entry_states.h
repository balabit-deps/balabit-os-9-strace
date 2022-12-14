/* Generated by ./src/xlat/gen.sh from ./src/xlat/neighbor_cache_entry_states.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat neighbor_cache_entry_states in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data neighbor_cache_entry_states_xdata[] = {
 XLAT(NUD_INCOMPLETE),
 #define XLAT_VAL_0 ((unsigned) (NUD_INCOMPLETE))
 #define XLAT_STR_0 STRINGIFY(NUD_INCOMPLETE)
 XLAT(NUD_REACHABLE),
 #define XLAT_VAL_1 ((unsigned) (NUD_REACHABLE))
 #define XLAT_STR_1 STRINGIFY(NUD_REACHABLE)
 XLAT(NUD_STALE),
 #define XLAT_VAL_2 ((unsigned) (NUD_STALE))
 #define XLAT_STR_2 STRINGIFY(NUD_STALE)
 XLAT(NUD_DELAY),
 #define XLAT_VAL_3 ((unsigned) (NUD_DELAY))
 #define XLAT_STR_3 STRINGIFY(NUD_DELAY)
 XLAT(NUD_PROBE),
 #define XLAT_VAL_4 ((unsigned) (NUD_PROBE))
 #define XLAT_STR_4 STRINGIFY(NUD_PROBE)
 XLAT(NUD_FAILED),
 #define XLAT_VAL_5 ((unsigned) (NUD_FAILED))
 #define XLAT_STR_5 STRINGIFY(NUD_FAILED)
 XLAT(NUD_NOARP),
 #define XLAT_VAL_6 ((unsigned) (NUD_NOARP))
 #define XLAT_STR_6 STRINGIFY(NUD_NOARP)
 XLAT(NUD_PERMANENT),
 #define XLAT_VAL_7 ((unsigned) (NUD_PERMANENT))
 #define XLAT_STR_7 STRINGIFY(NUD_PERMANENT)
 XLAT(NUD_NONE),
 #define XLAT_VAL_8 ((unsigned) (NUD_NONE))
 #define XLAT_STR_8 STRINGIFY(NUD_NONE)
};
static
const struct xlat neighbor_cache_entry_states[1] = { {
 .data = neighbor_cache_entry_states_xdata,
 .size = ARRAY_SIZE(neighbor_cache_entry_states_xdata),
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
