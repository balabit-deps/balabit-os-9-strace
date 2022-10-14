/* Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_root.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CTL_KERN) || (defined(HAVE_DECL_CTL_KERN) && HAVE_DECL_CTL_KERN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_KERN) == (1), "CTL_KERN != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_KERN 1
#endif
#if defined(CTL_KERN) || (defined(HAVE_DECL_CTL_KERN) && HAVE_DECL_CTL_KERN)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_KERN)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_KERN"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_KERN)
#endif
#if defined(CTL_VM) || (defined(HAVE_DECL_CTL_VM) && HAVE_DECL_CTL_VM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_VM) == (2), "CTL_VM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_VM 2
#endif
#if defined(CTL_VM) || (defined(HAVE_DECL_CTL_VM) && HAVE_DECL_CTL_VM)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_VM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_VM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_VM)
#endif
#if defined(CTL_NET) || (defined(HAVE_DECL_CTL_NET) && HAVE_DECL_CTL_NET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_NET) == (3), "CTL_NET != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_NET 3
#endif
#if defined(CTL_NET) || (defined(HAVE_DECL_CTL_NET) && HAVE_DECL_CTL_NET)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_NET)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_NET"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_NET)
#endif
#if defined(CTL_PROC) || (defined(HAVE_DECL_CTL_PROC) && HAVE_DECL_CTL_PROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_PROC) == (4), "CTL_PROC != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_PROC 4
#endif
#if defined(CTL_PROC) || (defined(HAVE_DECL_CTL_PROC) && HAVE_DECL_CTL_PROC)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_PROC)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_PROC"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_PROC)
#endif
#if defined(CTL_FS) || (defined(HAVE_DECL_CTL_FS) && HAVE_DECL_CTL_FS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_FS) == (5), "CTL_FS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_FS 5
#endif
#if defined(CTL_FS) || (defined(HAVE_DECL_CTL_FS) && HAVE_DECL_CTL_FS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_FS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_FS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_FS)
#endif
#if defined(CTL_DEBUG) || (defined(HAVE_DECL_CTL_DEBUG) && HAVE_DECL_CTL_DEBUG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_DEBUG) == (6), "CTL_DEBUG != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_DEBUG 6
#endif
#if defined(CTL_DEBUG) || (defined(HAVE_DECL_CTL_DEBUG) && HAVE_DECL_CTL_DEBUG)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_DEBUG)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_DEBUG"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_DEBUG)
#endif
#if defined(CTL_DEV) || (defined(HAVE_DECL_CTL_DEV) && HAVE_DECL_CTL_DEV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_DEV) == (7), "CTL_DEV != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_DEV 7
#endif
#if defined(CTL_DEV) || (defined(HAVE_DECL_CTL_DEV) && HAVE_DECL_CTL_DEV)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_DEV)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_DEV"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_DEV)
#endif
#if defined(CTL_BUS) || (defined(HAVE_DECL_CTL_BUS) && HAVE_DECL_CTL_BUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_BUS) == (8), "CTL_BUS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_BUS 8
#endif
#if defined(CTL_BUS) || (defined(HAVE_DECL_CTL_BUS) && HAVE_DECL_CTL_BUS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_BUS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_BUS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_BUS)
#endif
#if defined(CTL_ABI) || (defined(HAVE_DECL_CTL_ABI) && HAVE_DECL_CTL_ABI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_ABI) == (9), "CTL_ABI != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_ABI 9
#endif
#if defined(CTL_ABI) || (defined(HAVE_DECL_CTL_ABI) && HAVE_DECL_CTL_ABI)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_ABI)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_ABI"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_ABI)
#endif
#if defined(CTL_CPU) || (defined(HAVE_DECL_CTL_CPU) && HAVE_DECL_CTL_CPU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_CPU) == (10), "CTL_CPU != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_CPU 10
#endif
#if defined(CTL_CPU) || (defined(HAVE_DECL_CTL_CPU) && HAVE_DECL_CTL_CPU)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_CPU)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_CPU"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_CPU)
#endif
#if defined(CTL_INOTIFY) || (defined(HAVE_DECL_CTL_INOTIFY) && HAVE_DECL_CTL_INOTIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_INOTIFY) == (11), "CTL_INOTIFY != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_INOTIFY 11
#endif
#if defined(CTL_INOTIFY) || (defined(HAVE_DECL_CTL_INOTIFY) && HAVE_DECL_CTL_INOTIFY)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_INOTIFY)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_INOTIFY"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_INOTIFY)
#endif
#if defined(CTL_ARLAN) || (defined(HAVE_DECL_CTL_ARLAN) && HAVE_DECL_CTL_ARLAN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_ARLAN) == (254), "CTL_ARLAN != 254");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_ARLAN 254
#endif
#if defined(CTL_ARLAN) || (defined(HAVE_DECL_CTL_ARLAN) && HAVE_DECL_CTL_ARLAN)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_ARLAN)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_ARLAN"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_ARLAN)
#endif
#if defined(CTL_APPLDATA) || (defined(HAVE_DECL_CTL_APPLDATA) && HAVE_DECL_CTL_APPLDATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_APPLDATA) == (2120), "CTL_APPLDATA != 2120");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_APPLDATA 2120
#endif
#if defined(CTL_APPLDATA) || (defined(HAVE_DECL_CTL_APPLDATA) && HAVE_DECL_CTL_APPLDATA)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_APPLDATA)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_APPLDATA"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_APPLDATA)
#endif
#if defined(CTL_S390DBF) || (defined(HAVE_DECL_CTL_S390DBF) && HAVE_DECL_CTL_S390DBF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_S390DBF) == (5677), "CTL_S390DBF != 5677");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_S390DBF 5677
#endif
#if defined(CTL_S390DBF) || (defined(HAVE_DECL_CTL_S390DBF) && HAVE_DECL_CTL_S390DBF)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_S390DBF)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_S390DBF"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_S390DBF)
#endif
#if defined(CTL_SUNRPC) || (defined(HAVE_DECL_CTL_SUNRPC) && HAVE_DECL_CTL_SUNRPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_SUNRPC) == (7249), "CTL_SUNRPC != 7249");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_SUNRPC 7249
#endif
#if defined(CTL_SUNRPC) || (defined(HAVE_DECL_CTL_SUNRPC) && HAVE_DECL_CTL_SUNRPC)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_SUNRPC)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_SUNRPC"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_SUNRPC)
#endif
#if defined(CTL_FRV) || (defined(HAVE_DECL_CTL_FRV) && HAVE_DECL_CTL_FRV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_FRV) == (9898), "CTL_FRV != 9898");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_FRV 9898
#endif
#if defined(CTL_FRV) || (defined(HAVE_DECL_CTL_FRV) && HAVE_DECL_CTL_FRV)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_FRV)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_FRV"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_FRV)
#endif
#if defined(CTL_PM) || (defined(HAVE_DECL_CTL_PM) && HAVE_DECL_CTL_PM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CTL_PM) == (9899), "CTL_PM != 9899");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CTL_PM 9899
#endif
#if defined(CTL_PM) || (defined(HAVE_DECL_CTL_PM) && HAVE_DECL_CTL_PM)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (CTL_PM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: CTL_PM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (CTL_PM)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_root in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sysctl_root_xdata[] = {

 XLAT(CTL_KERN),
 #define XLAT_VAL_0 ((unsigned) (CTL_KERN))
 #define XLAT_STR_0 STRINGIFY(CTL_KERN)
 XLAT(CTL_VM),
 #define XLAT_VAL_1 ((unsigned) (CTL_VM))
 #define XLAT_STR_1 STRINGIFY(CTL_VM)
 XLAT(CTL_NET),
 #define XLAT_VAL_2 ((unsigned) (CTL_NET))
 #define XLAT_STR_2 STRINGIFY(CTL_NET)


 XLAT(CTL_PROC),
 #define XLAT_VAL_3 ((unsigned) (CTL_PROC))
 #define XLAT_STR_3 STRINGIFY(CTL_PROC)
 XLAT(CTL_FS),
 #define XLAT_VAL_4 ((unsigned) (CTL_FS))
 #define XLAT_STR_4 STRINGIFY(CTL_FS)
 XLAT(CTL_DEBUG),
 #define XLAT_VAL_5 ((unsigned) (CTL_DEBUG))
 #define XLAT_STR_5 STRINGIFY(CTL_DEBUG)
 XLAT(CTL_DEV),
 #define XLAT_VAL_6 ((unsigned) (CTL_DEV))
 #define XLAT_STR_6 STRINGIFY(CTL_DEV)

 XLAT(CTL_BUS),
 #define XLAT_VAL_7 ((unsigned) (CTL_BUS))
 #define XLAT_STR_7 STRINGIFY(CTL_BUS)

 XLAT(CTL_ABI),
 #define XLAT_VAL_8 ((unsigned) (CTL_ABI))
 #define XLAT_STR_8 STRINGIFY(CTL_ABI)

 XLAT(CTL_CPU),
 #define XLAT_VAL_9 ((unsigned) (CTL_CPU))
 #define XLAT_STR_9 STRINGIFY(CTL_CPU)


 XLAT(CTL_INOTIFY),
 #define XLAT_VAL_10 ((unsigned) (CTL_INOTIFY))
 #define XLAT_STR_10 STRINGIFY(CTL_INOTIFY)


 XLAT(CTL_ARLAN),
 #define XLAT_VAL_11 ((unsigned) (CTL_ARLAN))
 #define XLAT_STR_11 STRINGIFY(CTL_ARLAN)



 XLAT(CTL_APPLDATA),
 #define XLAT_VAL_12 ((unsigned) (CTL_APPLDATA))
 #define XLAT_STR_12 STRINGIFY(CTL_APPLDATA)


 XLAT(CTL_S390DBF),
 #define XLAT_VAL_13 ((unsigned) (CTL_S390DBF))
 #define XLAT_STR_13 STRINGIFY(CTL_S390DBF)


 XLAT(CTL_SUNRPC),
 #define XLAT_VAL_14 ((unsigned) (CTL_SUNRPC))
 #define XLAT_STR_14 STRINGIFY(CTL_SUNRPC)


 XLAT(CTL_FRV),
 #define XLAT_VAL_15 ((unsigned) (CTL_FRV))
 #define XLAT_STR_15 STRINGIFY(CTL_FRV)


 XLAT(CTL_PM),
 #define XLAT_VAL_16 ((unsigned) (CTL_PM))
 #define XLAT_STR_16 STRINGIFY(CTL_PM)
};
static
const struct xlat sysctl_root[1] = { {
 .data = sysctl_root_xdata,
 .size = ARRAY_SIZE(sysctl_root_xdata),
 .type = XT_SORTED,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
