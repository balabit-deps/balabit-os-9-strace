/* Generated by ./src/xlat/gen.sh from ./src/xlat/mmap_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MAP_SHARED) || (defined(HAVE_DECL_MAP_SHARED) && HAVE_DECL_MAP_SHARED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_SHARED) == (0x1), "MAP_SHARED != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_SHARED 0x1
#endif
#if defined(MAP_PRIVATE) || (defined(HAVE_DECL_MAP_PRIVATE) && HAVE_DECL_MAP_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_PRIVATE) == (0x2), "MAP_PRIVATE != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_PRIVATE 0x2
#endif
#if defined(MAP_SHARED_VALIDATE) || (defined(HAVE_DECL_MAP_SHARED_VALIDATE) && HAVE_DECL_MAP_SHARED_VALIDATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_SHARED_VALIDATE) == (0x3), "MAP_SHARED_VALIDATE != 0x3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_SHARED_VALIDATE 0x3
#endif
#if defined __hppa__
#if defined(MAP_FIXED) || (defined(HAVE_DECL_MAP_FIXED) && HAVE_DECL_MAP_FIXED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FIXED) == (0x4), "MAP_FIXED != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FIXED 0x4
#endif
#elif defined __alpha__
#if defined(MAP_FIXED) || (defined(HAVE_DECL_MAP_FIXED) && HAVE_DECL_MAP_FIXED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FIXED) == (0x100), "MAP_FIXED != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FIXED 0x100
#endif
#else
#if defined(MAP_FIXED) || (defined(HAVE_DECL_MAP_FIXED) && HAVE_DECL_MAP_FIXED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FIXED) == (0x10), "MAP_FIXED != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FIXED 0x10
#endif
#endif
#if defined __alpha__ || defined __hppa__
#if defined(MAP_ANONYMOUS) || (defined(HAVE_DECL_MAP_ANONYMOUS) && HAVE_DECL_MAP_ANONYMOUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_ANONYMOUS) == (0x10), "MAP_ANONYMOUS != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_ANONYMOUS 0x10
#endif
#elif defined __mips__ || defined __xtensa__
#if defined(MAP_ANONYMOUS) || (defined(HAVE_DECL_MAP_ANONYMOUS) && HAVE_DECL_MAP_ANONYMOUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_ANONYMOUS) == (0x800), "MAP_ANONYMOUS != 0x800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_ANONYMOUS 0x800
#endif
#else
#if defined(MAP_ANONYMOUS) || (defined(HAVE_DECL_MAP_ANONYMOUS) && HAVE_DECL_MAP_ANONYMOUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_ANONYMOUS) == (0x20), "MAP_ANONYMOUS != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_ANONYMOUS 0x20
#endif
#endif
#if defined __x86_64__ || defined __i386__
#if defined(MAP_32BIT) || (defined(HAVE_DECL_MAP_32BIT) && HAVE_DECL_MAP_32BIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_32BIT) == (0x40), "MAP_32BIT != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_32BIT 0x40
#endif
#else
#endif
#if defined MAP_RENAME && MAP_RENAME == MAP_ANONYMOUS
# ifndef STRACE_WORKAROUND_FOR_MAP_RENAME
#  define STRACE_WORKAROUND_FOR_MAP_RENAME
#  undef MAP_RENAME
# endif
#endif
#if defined __mips__ || defined __xtensa__
#if defined(MAP_RENAME) || (defined(HAVE_DECL_MAP_RENAME) && HAVE_DECL_MAP_RENAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_RENAME) == (0x20), "MAP_RENAME != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_RENAME 0x20
#endif
#else
#endif
#if defined __powerpc__ || defined __sparc__
#if defined(MAP_NORESERVE) || (defined(HAVE_DECL_MAP_NORESERVE) && HAVE_DECL_MAP_NORESERVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NORESERVE) == (0x40), "MAP_NORESERVE != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NORESERVE 0x40
#endif
#elif defined __mips__ || defined __xtensa__
#if defined(MAP_NORESERVE) || (defined(HAVE_DECL_MAP_NORESERVE) && HAVE_DECL_MAP_NORESERVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NORESERVE) == (0x400), "MAP_NORESERVE != 0x400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NORESERVE 0x400
#endif
#elif defined __alpha__
#if defined(MAP_NORESERVE) || (defined(HAVE_DECL_MAP_NORESERVE) && HAVE_DECL_MAP_NORESERVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NORESERVE) == (0x10000), "MAP_NORESERVE != 0x10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NORESERVE 0x10000
#endif
#else
#if defined(MAP_NORESERVE) || (defined(HAVE_DECL_MAP_NORESERVE) && HAVE_DECL_MAP_NORESERVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NORESERVE) == (0x4000), "MAP_NORESERVE != 0x4000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NORESERVE 0x4000
#endif
#endif
#if defined __hppa__ || defined __mips__ || defined __xtensa__
#if defined(MAP_POPULATE) || (defined(HAVE_DECL_MAP_POPULATE) && HAVE_DECL_MAP_POPULATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_POPULATE) == (0x10000), "MAP_POPULATE != 0x10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_POPULATE 0x10000
#endif
#elif defined __alpha__
#if defined(MAP_POPULATE) || (defined(HAVE_DECL_MAP_POPULATE) && HAVE_DECL_MAP_POPULATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_POPULATE) == (0x20000), "MAP_POPULATE != 0x20000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_POPULATE 0x20000
#endif
#else
#if defined(MAP_POPULATE) || (defined(HAVE_DECL_MAP_POPULATE) && HAVE_DECL_MAP_POPULATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_POPULATE) == (0x8000), "MAP_POPULATE != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_POPULATE 0x8000
#endif
#endif
#if defined __hppa__ || defined __mips__ || defined __xtensa__
#if defined(MAP_NONBLOCK) || (defined(HAVE_DECL_MAP_NONBLOCK) && HAVE_DECL_MAP_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NONBLOCK) == (0x20000), "MAP_NONBLOCK != 0x20000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NONBLOCK 0x20000
#endif
#elif defined __alpha__
#if defined(MAP_NONBLOCK) || (defined(HAVE_DECL_MAP_NONBLOCK) && HAVE_DECL_MAP_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NONBLOCK) == (0x40000), "MAP_NONBLOCK != 0x40000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NONBLOCK 0x40000
#endif
#else
#if defined(MAP_NONBLOCK) || (defined(HAVE_DECL_MAP_NONBLOCK) && HAVE_DECL_MAP_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_NONBLOCK) == (0x10000), "MAP_NONBLOCK != 0x10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_NONBLOCK 0x10000
#endif
#endif
#if defined __sparc__
#if defined(_MAP_NEW) || (defined(HAVE_DECL__MAP_NEW) && HAVE_DECL__MAP_NEW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((_MAP_NEW) == (0x80000000), "_MAP_NEW != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define _MAP_NEW 0x80000000
#endif
#else
#endif
#if defined __sparc__
#if defined(MAP_GROWSDOWN) || (defined(HAVE_DECL_MAP_GROWSDOWN) && HAVE_DECL_MAP_GROWSDOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_GROWSDOWN) == (0x200), "MAP_GROWSDOWN != 0x200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_GROWSDOWN 0x200
#endif
#elif defined __alpha__ || defined __mips__ || defined __xtensa__
#if defined(MAP_GROWSDOWN) || (defined(HAVE_DECL_MAP_GROWSDOWN) && HAVE_DECL_MAP_GROWSDOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_GROWSDOWN) == (0x1000), "MAP_GROWSDOWN != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_GROWSDOWN 0x1000
#endif
#elif defined __hppa__
#if defined(MAP_GROWSDOWN) || (defined(HAVE_DECL_MAP_GROWSDOWN) && HAVE_DECL_MAP_GROWSDOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_GROWSDOWN) == (0x8000), "MAP_GROWSDOWN != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_GROWSDOWN 0x8000
#endif
#else
#if defined(MAP_GROWSDOWN) || (defined(HAVE_DECL_MAP_GROWSDOWN) && HAVE_DECL_MAP_GROWSDOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_GROWSDOWN) == (0x100), "MAP_GROWSDOWN != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_GROWSDOWN 0x100
#endif
#endif
#if defined __ia64__
#if defined(MAP_GROWSUP) || (defined(HAVE_DECL_MAP_GROWSUP) && HAVE_DECL_MAP_GROWSUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_GROWSUP) == (0x200), "MAP_GROWSUP != 0x200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_GROWSUP 0x200
#endif
#else
#endif
#if defined __alpha__ || defined __mips__ || defined __xtensa__
#if defined(MAP_DENYWRITE) || (defined(HAVE_DECL_MAP_DENYWRITE) && HAVE_DECL_MAP_DENYWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_DENYWRITE) == (0x2000), "MAP_DENYWRITE != 0x2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_DENYWRITE 0x2000
#endif
#else
#if defined(MAP_DENYWRITE) || (defined(HAVE_DECL_MAP_DENYWRITE) && HAVE_DECL_MAP_DENYWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_DENYWRITE) == (0x800), "MAP_DENYWRITE != 0x800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_DENYWRITE 0x800
#endif
#endif
#if defined __alpha__ || defined __mips__ || defined __xtensa__
#if defined(MAP_EXECUTABLE) || (defined(HAVE_DECL_MAP_EXECUTABLE) && HAVE_DECL_MAP_EXECUTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_EXECUTABLE) == (0x4000), "MAP_EXECUTABLE != 0x4000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_EXECUTABLE 0x4000
#endif
#else
#if defined(MAP_EXECUTABLE) || (defined(HAVE_DECL_MAP_EXECUTABLE) && HAVE_DECL_MAP_EXECUTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_EXECUTABLE) == (0x1000), "MAP_EXECUTABLE != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_EXECUTABLE 0x1000
#endif
#endif
#if defined __sparc__
#if defined(MAP_INHERIT) || (defined(HAVE_DECL_MAP_INHERIT) && HAVE_DECL_MAP_INHERIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_INHERIT) == (0x80), "MAP_INHERIT != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_INHERIT 0x80
#endif
#else
#endif
#if defined __alpha__
#if defined(_MAP_INHERIT) || (defined(HAVE_DECL__MAP_INHERIT) && HAVE_DECL__MAP_INHERIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((_MAP_INHERIT) == (0x400), "_MAP_INHERIT != 0x400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define _MAP_INHERIT 0x400
#endif
#else
#endif
#if defined(MAP_FILE) || (defined(HAVE_DECL_MAP_FILE) && HAVE_DECL_MAP_FILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FILE) == (0), "MAP_FILE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FILE 0
#endif
#if defined __powerpc__
#if defined(MAP_LOCKED) || (defined(HAVE_DECL_MAP_LOCKED) && HAVE_DECL_MAP_LOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_LOCKED) == (0x80), "MAP_LOCKED != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_LOCKED 0x80
#endif
#elif defined __sparc__
#if defined(MAP_LOCKED) || (defined(HAVE_DECL_MAP_LOCKED) && HAVE_DECL_MAP_LOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_LOCKED) == (0x100), "MAP_LOCKED != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_LOCKED 0x100
#endif
#elif defined __alpha__ || defined __mips__ || defined __xtensa__
#if defined(MAP_LOCKED) || (defined(HAVE_DECL_MAP_LOCKED) && HAVE_DECL_MAP_LOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_LOCKED) == (0x8000), "MAP_LOCKED != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_LOCKED 0x8000
#endif
#else
#if defined(MAP_LOCKED) || (defined(HAVE_DECL_MAP_LOCKED) && HAVE_DECL_MAP_LOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_LOCKED) == (0x2000), "MAP_LOCKED != 0x2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_LOCKED 0x2000
#endif
#endif
#if defined __alpha__
#if defined(_MAP_HASSEMAPHORE) || (defined(HAVE_DECL__MAP_HASSEMAPHORE) && HAVE_DECL__MAP_HASSEMAPHORE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((_MAP_HASSEMAPHORE) == (0x200), "_MAP_HASSEMAPHORE != 0x200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define _MAP_HASSEMAPHORE 0x200
#endif
#else
#endif
#if defined __hppa__ || defined __mips__ || defined __xtensa__
#if defined(MAP_STACK) || (defined(HAVE_DECL_MAP_STACK) && HAVE_DECL_MAP_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_STACK) == (0x40000), "MAP_STACK != 0x40000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_STACK 0x40000
#endif
#elif defined __alpha__
#if defined(MAP_STACK) || (defined(HAVE_DECL_MAP_STACK) && HAVE_DECL_MAP_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_STACK) == (0x80000), "MAP_STACK != 0x80000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_STACK 0x80000
#endif
#else
#if defined(MAP_STACK) || (defined(HAVE_DECL_MAP_STACK) && HAVE_DECL_MAP_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_STACK) == (0x20000), "MAP_STACK != 0x20000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_STACK 0x20000
#endif
#endif
#if defined __hppa__ || defined __mips__ || defined __xtensa__
#if defined(MAP_HUGETLB) || (defined(HAVE_DECL_MAP_HUGETLB) && HAVE_DECL_MAP_HUGETLB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_HUGETLB) == (0x80000), "MAP_HUGETLB != 0x80000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_HUGETLB 0x80000
#endif
#elif defined __alpha__
#if defined(MAP_HUGETLB) || (defined(HAVE_DECL_MAP_HUGETLB) && HAVE_DECL_MAP_HUGETLB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_HUGETLB) == (0x100000), "MAP_HUGETLB != 0x100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_HUGETLB 0x100000
#endif
#else
#if defined(MAP_HUGETLB) || (defined(HAVE_DECL_MAP_HUGETLB) && HAVE_DECL_MAP_HUGETLB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_HUGETLB) == (0x40000), "MAP_HUGETLB != 0x40000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_HUGETLB 0x40000
#endif
#endif
#if defined(MAP_SYNC) || (defined(HAVE_DECL_MAP_SYNC) && HAVE_DECL_MAP_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_SYNC) == (0x80000), "MAP_SYNC != 0x80000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_SYNC 0x80000
#endif
#if defined MAP_UNINITIALIZED && MAP_UNINITIALIZED == 0
# ifndef STRACE_WORKAROUND_FOR_MAP_UNINITIALIZED
#  define STRACE_WORKAROUND_FOR_MAP_UNINITIALIZED
#  undef MAP_UNINITIALIZED
# endif
#endif
#if defined(MAP_UNINITIALIZED) || (defined(HAVE_DECL_MAP_UNINITIALIZED) && HAVE_DECL_MAP_UNINITIALIZED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_UNINITIALIZED) == (0x4000000), "MAP_UNINITIALIZED != 0x4000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_UNINITIALIZED 0x4000000
#endif
#if defined __alpha__
#if defined(MAP_FIXED_NOREPLACE) || (defined(HAVE_DECL_MAP_FIXED_NOREPLACE) && HAVE_DECL_MAP_FIXED_NOREPLACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FIXED_NOREPLACE) == (0x200000), "MAP_FIXED_NOREPLACE != 0x200000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FIXED_NOREPLACE 0x200000
#endif
#else
#if defined(MAP_FIXED_NOREPLACE) || (defined(HAVE_DECL_MAP_FIXED_NOREPLACE) && HAVE_DECL_MAP_FIXED_NOREPLACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_FIXED_NOREPLACE) == (0x100000), "MAP_FIXED_NOREPLACE != 0x100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_FIXED_NOREPLACE 0x100000
#endif
#endif
#if defined __mips__ || defined __xtensa__
#if defined(MAP_AUTOGROW) || (defined(HAVE_DECL_MAP_AUTOGROW) && HAVE_DECL_MAP_AUTOGROW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_AUTOGROW) == (0x40), "MAP_AUTOGROW != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_AUTOGROW 0x40
#endif
#else
#endif
#if defined __mips__ || defined __xtensa__
#if defined(MAP_AUTORSRV) || (defined(HAVE_DECL_MAP_AUTORSRV) && HAVE_DECL_MAP_AUTORSRV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_AUTORSRV) == (0x100), "MAP_AUTORSRV != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_AUTORSRV 0x100
#endif
#else
#endif
#if defined __mips__ || defined __xtensa__
#if defined(MAP_LOCAL) || (defined(HAVE_DECL_MAP_LOCAL) && HAVE_DECL_MAP_LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MAP_LOCAL) == (0x80), "MAP_LOCAL != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MAP_LOCAL 0x80
#endif
#else
#endif
#if defined __alpha__
#if defined(_MAP_UNALIGNED) || (defined(HAVE_DECL__MAP_UNALIGNED) && HAVE_DECL__MAP_UNALIGNED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((_MAP_UNALIGNED) == (0x800), "_MAP_UNALIGNED != 0x800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define _MAP_UNALIGNED 0x800
#endif
#else
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mmap_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data mmap_flags_xdata[] = {


 XLAT(MAP_SHARED),
 #define XLAT_VAL_0 ((unsigned) (MAP_SHARED))
 #define XLAT_STR_0 STRINGIFY(MAP_SHARED)

 XLAT(MAP_PRIVATE),
 #define XLAT_VAL_1 ((unsigned) (MAP_PRIVATE))
 #define XLAT_STR_1 STRINGIFY(MAP_PRIVATE)

 XLAT(MAP_SHARED_VALIDATE),
 #define XLAT_VAL_2 ((unsigned) (MAP_SHARED_VALIDATE))
 #define XLAT_STR_2 STRINGIFY(MAP_SHARED_VALIDATE)

#if defined __hppa__
 XLAT(MAP_FIXED),
 #define XLAT_VAL_3 ((unsigned) (MAP_FIXED))
 #define XLAT_STR_3 STRINGIFY(MAP_FIXED)
#elif defined __alpha__
 XLAT(MAP_FIXED),
 #define XLAT_VAL_4 ((unsigned) (MAP_FIXED))
 #define XLAT_STR_4 STRINGIFY(MAP_FIXED)
#else
 XLAT(MAP_FIXED),
 #define XLAT_VAL_5 ((unsigned) (MAP_FIXED))
 #define XLAT_STR_5 STRINGIFY(MAP_FIXED)
#endif

#if defined __alpha__ || defined __hppa__
 XLAT(MAP_ANONYMOUS),
 #define XLAT_VAL_6 ((unsigned) (MAP_ANONYMOUS))
 #define XLAT_STR_6 STRINGIFY(MAP_ANONYMOUS)
#elif defined __mips__ || defined __xtensa__
 XLAT(MAP_ANONYMOUS),
 #define XLAT_VAL_7 ((unsigned) (MAP_ANONYMOUS))
 #define XLAT_STR_7 STRINGIFY(MAP_ANONYMOUS)
#else
 XLAT(MAP_ANONYMOUS),
 #define XLAT_VAL_8 ((unsigned) (MAP_ANONYMOUS))
 #define XLAT_STR_8 STRINGIFY(MAP_ANONYMOUS)
#endif

#if defined __x86_64__ || defined __i386__
 XLAT(MAP_32BIT),
 #define XLAT_VAL_9 ((unsigned) (MAP_32BIT))
 #define XLAT_STR_9 STRINGIFY(MAP_32BIT)
#else
#if defined(MAP_32BIT) || (defined(HAVE_DECL_MAP_32BIT) && HAVE_DECL_MAP_32BIT)
  XLAT(MAP_32BIT),
 #define XLAT_VAL_10 ((unsigned) (MAP_32BIT))
 #define XLAT_STR_10 STRINGIFY(MAP_32BIT)
#endif
#endif

#if defined MAP_RENAME && MAP_RENAME == MAP_ANONYMOUS
# ifndef STRACE_WORKAROUND_FOR_MAP_RENAME
#  define STRACE_WORKAROUND_FOR_MAP_RENAME


#  undef MAP_RENAME
# endif
#endif

#if defined __mips__ || defined __xtensa__
 XLAT(MAP_RENAME),
 #define XLAT_VAL_11 ((unsigned) (MAP_RENAME))
 #define XLAT_STR_11 STRINGIFY(MAP_RENAME)
#else
#if defined(MAP_RENAME) || (defined(HAVE_DECL_MAP_RENAME) && HAVE_DECL_MAP_RENAME)
  XLAT(MAP_RENAME),
 #define XLAT_VAL_12 ((unsigned) (MAP_RENAME))
 #define XLAT_STR_12 STRINGIFY(MAP_RENAME)
#endif
#endif

#if defined __powerpc__ || defined __sparc__
 XLAT(MAP_NORESERVE),
 #define XLAT_VAL_13 ((unsigned) (MAP_NORESERVE))
 #define XLAT_STR_13 STRINGIFY(MAP_NORESERVE)
#elif defined __mips__ || defined __xtensa__
 XLAT(MAP_NORESERVE),
 #define XLAT_VAL_14 ((unsigned) (MAP_NORESERVE))
 #define XLAT_STR_14 STRINGIFY(MAP_NORESERVE)
#elif defined __alpha__
 XLAT(MAP_NORESERVE),
 #define XLAT_VAL_15 ((unsigned) (MAP_NORESERVE))
 #define XLAT_STR_15 STRINGIFY(MAP_NORESERVE)
#else
 XLAT(MAP_NORESERVE),
 #define XLAT_VAL_16 ((unsigned) (MAP_NORESERVE))
 #define XLAT_STR_16 STRINGIFY(MAP_NORESERVE)
#endif

#if defined __hppa__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_POPULATE),
 #define XLAT_VAL_17 ((unsigned) (MAP_POPULATE))
 #define XLAT_STR_17 STRINGIFY(MAP_POPULATE)
#elif defined __alpha__
 XLAT(MAP_POPULATE),
 #define XLAT_VAL_18 ((unsigned) (MAP_POPULATE))
 #define XLAT_STR_18 STRINGIFY(MAP_POPULATE)
#else
 XLAT(MAP_POPULATE),
 #define XLAT_VAL_19 ((unsigned) (MAP_POPULATE))
 #define XLAT_STR_19 STRINGIFY(MAP_POPULATE)
#endif

#if defined __hppa__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_NONBLOCK),
 #define XLAT_VAL_20 ((unsigned) (MAP_NONBLOCK))
 #define XLAT_STR_20 STRINGIFY(MAP_NONBLOCK)
#elif defined __alpha__
 XLAT(MAP_NONBLOCK),
 #define XLAT_VAL_21 ((unsigned) (MAP_NONBLOCK))
 #define XLAT_STR_21 STRINGIFY(MAP_NONBLOCK)
#else
 XLAT(MAP_NONBLOCK),
 #define XLAT_VAL_22 ((unsigned) (MAP_NONBLOCK))
 #define XLAT_STR_22 STRINGIFY(MAP_NONBLOCK)
#endif

#if defined __sparc__
 XLAT(_MAP_NEW),
 #define XLAT_VAL_23 ((unsigned) (_MAP_NEW))
 #define XLAT_STR_23 STRINGIFY(_MAP_NEW)
#else
#if defined(_MAP_NEW) || (defined(HAVE_DECL__MAP_NEW) && HAVE_DECL__MAP_NEW)
  XLAT(_MAP_NEW),
 #define XLAT_VAL_24 ((unsigned) (_MAP_NEW))
 #define XLAT_STR_24 STRINGIFY(_MAP_NEW)
#endif
#endif

#if defined __sparc__
 XLAT(MAP_GROWSDOWN),
 #define XLAT_VAL_25 ((unsigned) (MAP_GROWSDOWN))
 #define XLAT_STR_25 STRINGIFY(MAP_GROWSDOWN)
#elif defined __alpha__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_GROWSDOWN),
 #define XLAT_VAL_26 ((unsigned) (MAP_GROWSDOWN))
 #define XLAT_STR_26 STRINGIFY(MAP_GROWSDOWN)
#elif defined __hppa__
 XLAT(MAP_GROWSDOWN),
 #define XLAT_VAL_27 ((unsigned) (MAP_GROWSDOWN))
 #define XLAT_STR_27 STRINGIFY(MAP_GROWSDOWN)
#else
 XLAT(MAP_GROWSDOWN),
 #define XLAT_VAL_28 ((unsigned) (MAP_GROWSDOWN))
 #define XLAT_STR_28 STRINGIFY(MAP_GROWSDOWN)
#endif

#if defined __ia64__
 XLAT(MAP_GROWSUP),
 #define XLAT_VAL_29 ((unsigned) (MAP_GROWSUP))
 #define XLAT_STR_29 STRINGIFY(MAP_GROWSUP)
#else
#if defined(MAP_GROWSUP) || (defined(HAVE_DECL_MAP_GROWSUP) && HAVE_DECL_MAP_GROWSUP)
  XLAT(MAP_GROWSUP),
 #define XLAT_VAL_30 ((unsigned) (MAP_GROWSUP))
 #define XLAT_STR_30 STRINGIFY(MAP_GROWSUP)
#endif
#endif

#if defined __alpha__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_DENYWRITE),
 #define XLAT_VAL_31 ((unsigned) (MAP_DENYWRITE))
 #define XLAT_STR_31 STRINGIFY(MAP_DENYWRITE)
#else
 XLAT(MAP_DENYWRITE),
 #define XLAT_VAL_32 ((unsigned) (MAP_DENYWRITE))
 #define XLAT_STR_32 STRINGIFY(MAP_DENYWRITE)
#endif

#if defined __alpha__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_EXECUTABLE),
 #define XLAT_VAL_33 ((unsigned) (MAP_EXECUTABLE))
 #define XLAT_STR_33 STRINGIFY(MAP_EXECUTABLE)
#else
 XLAT(MAP_EXECUTABLE),
 #define XLAT_VAL_34 ((unsigned) (MAP_EXECUTABLE))
 #define XLAT_STR_34 STRINGIFY(MAP_EXECUTABLE)
#endif

#if defined __sparc__
 XLAT(MAP_INHERIT),
 #define XLAT_VAL_35 ((unsigned) (MAP_INHERIT))
 #define XLAT_STR_35 STRINGIFY(MAP_INHERIT)
#else
#if defined(MAP_INHERIT) || (defined(HAVE_DECL_MAP_INHERIT) && HAVE_DECL_MAP_INHERIT)
  XLAT(MAP_INHERIT),
 #define XLAT_VAL_36 ((unsigned) (MAP_INHERIT))
 #define XLAT_STR_36 STRINGIFY(MAP_INHERIT)
#endif
#endif

#if defined __alpha__
 XLAT(_MAP_INHERIT),
 #define XLAT_VAL_37 ((unsigned) (_MAP_INHERIT))
 #define XLAT_STR_37 STRINGIFY(_MAP_INHERIT)
#else
#if defined(_MAP_INHERIT) || (defined(HAVE_DECL__MAP_INHERIT) && HAVE_DECL__MAP_INHERIT)
  XLAT(_MAP_INHERIT),
 #define XLAT_VAL_38 ((unsigned) (_MAP_INHERIT))
 #define XLAT_STR_38 STRINGIFY(_MAP_INHERIT)
#endif
#endif

 XLAT(MAP_FILE),
 #define XLAT_VAL_39 ((unsigned) (MAP_FILE))
 #define XLAT_STR_39 STRINGIFY(MAP_FILE)

#if defined __powerpc__
 XLAT(MAP_LOCKED),
 #define XLAT_VAL_40 ((unsigned) (MAP_LOCKED))
 #define XLAT_STR_40 STRINGIFY(MAP_LOCKED)
#elif defined __sparc__
 XLAT(MAP_LOCKED),
 #define XLAT_VAL_41 ((unsigned) (MAP_LOCKED))
 #define XLAT_STR_41 STRINGIFY(MAP_LOCKED)
#elif defined __alpha__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_LOCKED),
 #define XLAT_VAL_42 ((unsigned) (MAP_LOCKED))
 #define XLAT_STR_42 STRINGIFY(MAP_LOCKED)
#else
 XLAT(MAP_LOCKED),
 #define XLAT_VAL_43 ((unsigned) (MAP_LOCKED))
 #define XLAT_STR_43 STRINGIFY(MAP_LOCKED)
#endif

#if defined __alpha__
 XLAT(_MAP_HASSEMAPHORE),
 #define XLAT_VAL_44 ((unsigned) (_MAP_HASSEMAPHORE))
 #define XLAT_STR_44 STRINGIFY(_MAP_HASSEMAPHORE)
#else
#if defined(_MAP_HASSEMAPHORE) || (defined(HAVE_DECL__MAP_HASSEMAPHORE) && HAVE_DECL__MAP_HASSEMAPHORE)
  XLAT(_MAP_HASSEMAPHORE),
 #define XLAT_VAL_45 ((unsigned) (_MAP_HASSEMAPHORE))
 #define XLAT_STR_45 STRINGIFY(_MAP_HASSEMAPHORE)
#endif
#endif

#if defined __hppa__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_STACK),
 #define XLAT_VAL_46 ((unsigned) (MAP_STACK))
 #define XLAT_STR_46 STRINGIFY(MAP_STACK)
#elif defined __alpha__
 XLAT(MAP_STACK),
 #define XLAT_VAL_47 ((unsigned) (MAP_STACK))
 #define XLAT_STR_47 STRINGIFY(MAP_STACK)
#else
 XLAT(MAP_STACK),
 #define XLAT_VAL_48 ((unsigned) (MAP_STACK))
 #define XLAT_STR_48 STRINGIFY(MAP_STACK)
#endif

#if defined __hppa__ || defined __mips__ || defined __xtensa__
 XLAT(MAP_HUGETLB),
 #define XLAT_VAL_49 ((unsigned) (MAP_HUGETLB))
 #define XLAT_STR_49 STRINGIFY(MAP_HUGETLB)
#elif defined __alpha__
 XLAT(MAP_HUGETLB),
 #define XLAT_VAL_50 ((unsigned) (MAP_HUGETLB))
 #define XLAT_STR_50 STRINGIFY(MAP_HUGETLB)
#else
 XLAT(MAP_HUGETLB),
 #define XLAT_VAL_51 ((unsigned) (MAP_HUGETLB))
 #define XLAT_STR_51 STRINGIFY(MAP_HUGETLB)
#endif

 XLAT(MAP_SYNC),
 #define XLAT_VAL_52 ((unsigned) (MAP_SYNC))
 #define XLAT_STR_52 STRINGIFY(MAP_SYNC)

#if defined MAP_UNINITIALIZED && MAP_UNINITIALIZED == 0


# ifndef STRACE_WORKAROUND_FOR_MAP_UNINITIALIZED
#  define STRACE_WORKAROUND_FOR_MAP_UNINITIALIZED
#  undef MAP_UNINITIALIZED
# endif
#endif
 XLAT(MAP_UNINITIALIZED),
 #define XLAT_VAL_53 ((unsigned) (MAP_UNINITIALIZED))
 #define XLAT_STR_53 STRINGIFY(MAP_UNINITIALIZED)

#if defined __alpha__
 XLAT(MAP_FIXED_NOREPLACE),
 #define XLAT_VAL_54 ((unsigned) (MAP_FIXED_NOREPLACE))
 #define XLAT_STR_54 STRINGIFY(MAP_FIXED_NOREPLACE)
#else
 XLAT(MAP_FIXED_NOREPLACE),
 #define XLAT_VAL_55 ((unsigned) (MAP_FIXED_NOREPLACE))
 #define XLAT_STR_55 STRINGIFY(MAP_FIXED_NOREPLACE)
#endif

#if defined __mips__ || defined __xtensa__
 XLAT(MAP_AUTOGROW),
 #define XLAT_VAL_56 ((unsigned) (MAP_AUTOGROW))
 #define XLAT_STR_56 STRINGIFY(MAP_AUTOGROW)
#else
#if defined(MAP_AUTOGROW) || (defined(HAVE_DECL_MAP_AUTOGROW) && HAVE_DECL_MAP_AUTOGROW)
  XLAT(MAP_AUTOGROW),
 #define XLAT_VAL_57 ((unsigned) (MAP_AUTOGROW))
 #define XLAT_STR_57 STRINGIFY(MAP_AUTOGROW)
#endif
#endif

#if defined __mips__ || defined __xtensa__
 XLAT(MAP_AUTORSRV),
 #define XLAT_VAL_58 ((unsigned) (MAP_AUTORSRV))
 #define XLAT_STR_58 STRINGIFY(MAP_AUTORSRV)
#else
#if defined(MAP_AUTORSRV) || (defined(HAVE_DECL_MAP_AUTORSRV) && HAVE_DECL_MAP_AUTORSRV)
  XLAT(MAP_AUTORSRV),
 #define XLAT_VAL_59 ((unsigned) (MAP_AUTORSRV))
 #define XLAT_STR_59 STRINGIFY(MAP_AUTORSRV)
#endif
#endif

#if defined __mips__ || defined __xtensa__
 XLAT(MAP_LOCAL),
 #define XLAT_VAL_60 ((unsigned) (MAP_LOCAL))
 #define XLAT_STR_60 STRINGIFY(MAP_LOCAL)
#else
#if defined(MAP_LOCAL) || (defined(HAVE_DECL_MAP_LOCAL) && HAVE_DECL_MAP_LOCAL)
  XLAT(MAP_LOCAL),
 #define XLAT_VAL_61 ((unsigned) (MAP_LOCAL))
 #define XLAT_STR_61 STRINGIFY(MAP_LOCAL)
#endif
#endif

#if defined __alpha__
 XLAT(_MAP_UNALIGNED),
 #define XLAT_VAL_62 ((unsigned) (_MAP_UNALIGNED))
 #define XLAT_STR_62 STRINGIFY(_MAP_UNALIGNED)
#else
#if defined(_MAP_UNALIGNED) || (defined(HAVE_DECL__MAP_UNALIGNED) && HAVE_DECL__MAP_UNALIGNED)
  XLAT(_MAP_UNALIGNED),
 #define XLAT_VAL_63 ((unsigned) (_MAP_UNALIGNED))
 #define XLAT_STR_63 STRINGIFY(_MAP_UNALIGNED)
#endif
#endif
};
static
const struct xlat mmap_flags[1] = { {
 .data = mmap_flags_xdata,
 .size = ARRAY_SIZE(mmap_flags_xdata),
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
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
#  endif
#  ifdef XLAT_VAL_35
  | XLAT_VAL_35
#  endif
#  ifdef XLAT_VAL_36
  | XLAT_VAL_36
#  endif
#  ifdef XLAT_VAL_37
  | XLAT_VAL_37
#  endif
#  ifdef XLAT_VAL_38
  | XLAT_VAL_38
#  endif
#  ifdef XLAT_VAL_39
  | XLAT_VAL_39
#  endif
#  ifdef XLAT_VAL_40
  | XLAT_VAL_40
#  endif
#  ifdef XLAT_VAL_41
  | XLAT_VAL_41
#  endif
#  ifdef XLAT_VAL_42
  | XLAT_VAL_42
#  endif
#  ifdef XLAT_VAL_43
  | XLAT_VAL_43
#  endif
#  ifdef XLAT_VAL_44
  | XLAT_VAL_44
#  endif
#  ifdef XLAT_VAL_45
  | XLAT_VAL_45
#  endif
#  ifdef XLAT_VAL_46
  | XLAT_VAL_46
#  endif
#  ifdef XLAT_VAL_47
  | XLAT_VAL_47
#  endif
#  ifdef XLAT_VAL_48
  | XLAT_VAL_48
#  endif
#  ifdef XLAT_VAL_49
  | XLAT_VAL_49
#  endif
#  ifdef XLAT_VAL_50
  | XLAT_VAL_50
#  endif
#  ifdef XLAT_VAL_51
  | XLAT_VAL_51
#  endif
#  ifdef XLAT_VAL_52
  | XLAT_VAL_52
#  endif
#  ifdef XLAT_VAL_53
  | XLAT_VAL_53
#  endif
#  ifdef XLAT_VAL_54
  | XLAT_VAL_54
#  endif
#  ifdef XLAT_VAL_55
  | XLAT_VAL_55
#  endif
#  ifdef XLAT_VAL_56
  | XLAT_VAL_56
#  endif
#  ifdef XLAT_VAL_57
  | XLAT_VAL_57
#  endif
#  ifdef XLAT_VAL_58
  | XLAT_VAL_58
#  endif
#  ifdef XLAT_VAL_59
  | XLAT_VAL_59
#  endif
#  ifdef XLAT_VAL_60
  | XLAT_VAL_60
#  endif
#  ifdef XLAT_VAL_61
  | XLAT_VAL_61
#  endif
#  ifdef XLAT_VAL_62
  | XLAT_VAL_62
#  endif
#  ifdef XLAT_VAL_63
  | XLAT_VAL_63
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
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
#  endif
#  ifdef XLAT_STR_35
  + sizeof(XLAT_STR_35)
#  endif
#  ifdef XLAT_STR_36
  + sizeof(XLAT_STR_36)
#  endif
#  ifdef XLAT_STR_37
  + sizeof(XLAT_STR_37)
#  endif
#  ifdef XLAT_STR_38
  + sizeof(XLAT_STR_38)
#  endif
#  ifdef XLAT_STR_39
  + sizeof(XLAT_STR_39)
#  endif
#  ifdef XLAT_STR_40
  + sizeof(XLAT_STR_40)
#  endif
#  ifdef XLAT_STR_41
  + sizeof(XLAT_STR_41)
#  endif
#  ifdef XLAT_STR_42
  + sizeof(XLAT_STR_42)
#  endif
#  ifdef XLAT_STR_43
  + sizeof(XLAT_STR_43)
#  endif
#  ifdef XLAT_STR_44
  + sizeof(XLAT_STR_44)
#  endif
#  ifdef XLAT_STR_45
  + sizeof(XLAT_STR_45)
#  endif
#  ifdef XLAT_STR_46
  + sizeof(XLAT_STR_46)
#  endif
#  ifdef XLAT_STR_47
  + sizeof(XLAT_STR_47)
#  endif
#  ifdef XLAT_STR_48
  + sizeof(XLAT_STR_48)
#  endif
#  ifdef XLAT_STR_49
  + sizeof(XLAT_STR_49)
#  endif
#  ifdef XLAT_STR_50
  + sizeof(XLAT_STR_50)
#  endif
#  ifdef XLAT_STR_51
  + sizeof(XLAT_STR_51)
#  endif
#  ifdef XLAT_STR_52
  + sizeof(XLAT_STR_52)
#  endif
#  ifdef XLAT_STR_53
  + sizeof(XLAT_STR_53)
#  endif
#  ifdef XLAT_STR_54
  + sizeof(XLAT_STR_54)
#  endif
#  ifdef XLAT_STR_55
  + sizeof(XLAT_STR_55)
#  endif
#  ifdef XLAT_STR_56
  + sizeof(XLAT_STR_56)
#  endif
#  ifdef XLAT_STR_57
  + sizeof(XLAT_STR_57)
#  endif
#  ifdef XLAT_STR_58
  + sizeof(XLAT_STR_58)
#  endif
#  ifdef XLAT_STR_59
  + sizeof(XLAT_STR_59)
#  endif
#  ifdef XLAT_STR_60
  + sizeof(XLAT_STR_60)
#  endif
#  ifdef XLAT_STR_61
  + sizeof(XLAT_STR_61)
#  endif
#  ifdef XLAT_STR_62
  + sizeof(XLAT_STR_62)
#  endif
#  ifdef XLAT_STR_63
  + sizeof(XLAT_STR_63)
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
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
#  undef XLAT_STR_35
#  undef XLAT_VAL_35
#  undef XLAT_STR_36
#  undef XLAT_VAL_36
#  undef XLAT_STR_37
#  undef XLAT_VAL_37
#  undef XLAT_STR_38
#  undef XLAT_VAL_38
#  undef XLAT_STR_39
#  undef XLAT_VAL_39
#  undef XLAT_STR_40
#  undef XLAT_VAL_40
#  undef XLAT_STR_41
#  undef XLAT_VAL_41
#  undef XLAT_STR_42
#  undef XLAT_VAL_42
#  undef XLAT_STR_43
#  undef XLAT_VAL_43
#  undef XLAT_STR_44
#  undef XLAT_VAL_44
#  undef XLAT_STR_45
#  undef XLAT_VAL_45
#  undef XLAT_STR_46
#  undef XLAT_VAL_46
#  undef XLAT_STR_47
#  undef XLAT_VAL_47
#  undef XLAT_STR_48
#  undef XLAT_VAL_48
#  undef XLAT_STR_49
#  undef XLAT_VAL_49
#  undef XLAT_STR_50
#  undef XLAT_VAL_50
#  undef XLAT_STR_51
#  undef XLAT_VAL_51
#  undef XLAT_STR_52
#  undef XLAT_VAL_52
#  undef XLAT_STR_53
#  undef XLAT_VAL_53
#  undef XLAT_STR_54
#  undef XLAT_VAL_54
#  undef XLAT_STR_55
#  undef XLAT_VAL_55
#  undef XLAT_STR_56
#  undef XLAT_VAL_56
#  undef XLAT_STR_57
#  undef XLAT_VAL_57
#  undef XLAT_STR_58
#  undef XLAT_VAL_58
#  undef XLAT_STR_59
#  undef XLAT_VAL_59
#  undef XLAT_STR_60
#  undef XLAT_VAL_60
#  undef XLAT_STR_61
#  undef XLAT_VAL_61
#  undef XLAT_STR_62
#  undef XLAT_VAL_62
#  undef XLAT_STR_63
#  undef XLAT_VAL_63
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
