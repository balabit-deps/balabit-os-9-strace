/* Generated by ./src/xlat/gen.sh from ./src/xlat/baud_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat baud_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data baud_options_xdata[] = {
#if defined(B0) || (defined(HAVE_DECL_B0) && HAVE_DECL_B0)
  XLAT(B0),
 #define XLAT_VAL_0 ((unsigned) (B0))
 #define XLAT_STR_0 STRINGIFY(B0)
#endif
#if defined(B50) || (defined(HAVE_DECL_B50) && HAVE_DECL_B50)
  XLAT(B50),
 #define XLAT_VAL_1 ((unsigned) (B50))
 #define XLAT_STR_1 STRINGIFY(B50)
#endif
#if defined(B75) || (defined(HAVE_DECL_B75) && HAVE_DECL_B75)
  XLAT(B75),
 #define XLAT_VAL_2 ((unsigned) (B75))
 #define XLAT_STR_2 STRINGIFY(B75)
#endif
#if defined(B110) || (defined(HAVE_DECL_B110) && HAVE_DECL_B110)
  XLAT(B110),
 #define XLAT_VAL_3 ((unsigned) (B110))
 #define XLAT_STR_3 STRINGIFY(B110)
#endif
#if defined(B134) || (defined(HAVE_DECL_B134) && HAVE_DECL_B134)
  XLAT(B134),
 #define XLAT_VAL_4 ((unsigned) (B134))
 #define XLAT_STR_4 STRINGIFY(B134)
#endif
#if defined(B150) || (defined(HAVE_DECL_B150) && HAVE_DECL_B150)
  XLAT(B150),
 #define XLAT_VAL_5 ((unsigned) (B150))
 #define XLAT_STR_5 STRINGIFY(B150)
#endif
#if defined(B200) || (defined(HAVE_DECL_B200) && HAVE_DECL_B200)
  XLAT(B200),
 #define XLAT_VAL_6 ((unsigned) (B200))
 #define XLAT_STR_6 STRINGIFY(B200)
#endif
#if defined(B300) || (defined(HAVE_DECL_B300) && HAVE_DECL_B300)
  XLAT(B300),
 #define XLAT_VAL_7 ((unsigned) (B300))
 #define XLAT_STR_7 STRINGIFY(B300)
#endif
#if defined(B600) || (defined(HAVE_DECL_B600) && HAVE_DECL_B600)
  XLAT(B600),
 #define XLAT_VAL_8 ((unsigned) (B600))
 #define XLAT_STR_8 STRINGIFY(B600)
#endif
#if defined(B1200) || (defined(HAVE_DECL_B1200) && HAVE_DECL_B1200)
  XLAT(B1200),
 #define XLAT_VAL_9 ((unsigned) (B1200))
 #define XLAT_STR_9 STRINGIFY(B1200)
#endif
#if defined(B1800) || (defined(HAVE_DECL_B1800) && HAVE_DECL_B1800)
  XLAT(B1800),
 #define XLAT_VAL_10 ((unsigned) (B1800))
 #define XLAT_STR_10 STRINGIFY(B1800)
#endif
#if defined(B2400) || (defined(HAVE_DECL_B2400) && HAVE_DECL_B2400)
  XLAT(B2400),
 #define XLAT_VAL_11 ((unsigned) (B2400))
 #define XLAT_STR_11 STRINGIFY(B2400)
#endif
#if defined(B4800) || (defined(HAVE_DECL_B4800) && HAVE_DECL_B4800)
  XLAT(B4800),
 #define XLAT_VAL_12 ((unsigned) (B4800))
 #define XLAT_STR_12 STRINGIFY(B4800)
#endif
#if defined(B9600) || (defined(HAVE_DECL_B9600) && HAVE_DECL_B9600)
  XLAT(B9600),
 #define XLAT_VAL_13 ((unsigned) (B9600))
 #define XLAT_STR_13 STRINGIFY(B9600)
#endif
#if defined(B19200) || (defined(HAVE_DECL_B19200) && HAVE_DECL_B19200)
  XLAT(B19200),
 #define XLAT_VAL_14 ((unsigned) (B19200))
 #define XLAT_STR_14 STRINGIFY(B19200)
#endif
#if defined(B38400) || (defined(HAVE_DECL_B38400) && HAVE_DECL_B38400)
  XLAT(B38400),
 #define XLAT_VAL_15 ((unsigned) (B38400))
 #define XLAT_STR_15 STRINGIFY(B38400)
#endif
#if defined(B57600) || (defined(HAVE_DECL_B57600) && HAVE_DECL_B57600)
  XLAT(B57600),
 #define XLAT_VAL_16 ((unsigned) (B57600))
 #define XLAT_STR_16 STRINGIFY(B57600)
#endif
#if defined(B115200) || (defined(HAVE_DECL_B115200) && HAVE_DECL_B115200)
  XLAT(B115200),
 #define XLAT_VAL_17 ((unsigned) (B115200))
 #define XLAT_STR_17 STRINGIFY(B115200)
#endif
#if defined(B230400) || (defined(HAVE_DECL_B230400) && HAVE_DECL_B230400)
  XLAT(B230400),
 #define XLAT_VAL_18 ((unsigned) (B230400))
 #define XLAT_STR_18 STRINGIFY(B230400)
#endif
#if defined(B460800) || (defined(HAVE_DECL_B460800) && HAVE_DECL_B460800)
  XLAT(B460800),
 #define XLAT_VAL_19 ((unsigned) (B460800))
 #define XLAT_STR_19 STRINGIFY(B460800)
#endif
#if defined(B500000) || (defined(HAVE_DECL_B500000) && HAVE_DECL_B500000)
  XLAT(B500000),
 #define XLAT_VAL_20 ((unsigned) (B500000))
 #define XLAT_STR_20 STRINGIFY(B500000)
#endif
#if defined(B576000) || (defined(HAVE_DECL_B576000) && HAVE_DECL_B576000)
  XLAT(B576000),
 #define XLAT_VAL_21 ((unsigned) (B576000))
 #define XLAT_STR_21 STRINGIFY(B576000)
#endif
#if defined(B921600) || (defined(HAVE_DECL_B921600) && HAVE_DECL_B921600)
  XLAT(B921600),
 #define XLAT_VAL_22 ((unsigned) (B921600))
 #define XLAT_STR_22 STRINGIFY(B921600)
#endif
#if defined(B1000000) || (defined(HAVE_DECL_B1000000) && HAVE_DECL_B1000000)
  XLAT(B1000000),
 #define XLAT_VAL_23 ((unsigned) (B1000000))
 #define XLAT_STR_23 STRINGIFY(B1000000)
#endif
#if defined(B1152000) || (defined(HAVE_DECL_B1152000) && HAVE_DECL_B1152000)
  XLAT(B1152000),
 #define XLAT_VAL_24 ((unsigned) (B1152000))
 #define XLAT_STR_24 STRINGIFY(B1152000)
#endif
#if defined(B1500000) || (defined(HAVE_DECL_B1500000) && HAVE_DECL_B1500000)
  XLAT(B1500000),
 #define XLAT_VAL_25 ((unsigned) (B1500000))
 #define XLAT_STR_25 STRINGIFY(B1500000)
#endif
#if defined(B2000000) || (defined(HAVE_DECL_B2000000) && HAVE_DECL_B2000000)
  XLAT(B2000000),
 #define XLAT_VAL_26 ((unsigned) (B2000000))
 #define XLAT_STR_26 STRINGIFY(B2000000)
#endif
#if defined(B2500000) || (defined(HAVE_DECL_B2500000) && HAVE_DECL_B2500000)
  XLAT(B2500000),
 #define XLAT_VAL_27 ((unsigned) (B2500000))
 #define XLAT_STR_27 STRINGIFY(B2500000)
#endif
#if defined(B3000000) || (defined(HAVE_DECL_B3000000) && HAVE_DECL_B3000000)
  XLAT(B3000000),
 #define XLAT_VAL_28 ((unsigned) (B3000000))
 #define XLAT_STR_28 STRINGIFY(B3000000)
#endif
#if defined(B3500000) || (defined(HAVE_DECL_B3500000) && HAVE_DECL_B3500000)
  XLAT(B3500000),
 #define XLAT_VAL_29 ((unsigned) (B3500000))
 #define XLAT_STR_29 STRINGIFY(B3500000)
#endif
#if defined(B4000000) || (defined(HAVE_DECL_B4000000) && HAVE_DECL_B4000000)
  XLAT(B4000000),
 #define XLAT_VAL_30 ((unsigned) (B4000000))
 #define XLAT_STR_30 STRINGIFY(B4000000)
#endif
#if defined(EXTA) || (defined(HAVE_DECL_EXTA) && HAVE_DECL_EXTA)
  XLAT(EXTA),
 #define XLAT_VAL_31 ((unsigned) (EXTA))
 #define XLAT_STR_31 STRINGIFY(EXTA)
#endif
#if defined(EXTB) || (defined(HAVE_DECL_EXTB) && HAVE_DECL_EXTB)
  XLAT(EXTB),
 #define XLAT_VAL_32 ((unsigned) (EXTB))
 #define XLAT_STR_32 STRINGIFY(EXTB)
#endif
};
static
const struct xlat baud_options[1] = { {
 .data = baud_options_xdata,
 .size = ARRAY_SIZE(baud_options_xdata),
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
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
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
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
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
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
