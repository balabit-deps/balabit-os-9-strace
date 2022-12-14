/* Generated by ./src/xlat/gen.sh from ./src/xlat/fs_ioc_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fs_ioc_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fs_ioc_flags_xdata[] = {
 XLAT(FS_SECRM_FL),
 #define XLAT_VAL_0 ((unsigned) (FS_SECRM_FL))
 #define XLAT_STR_0 STRINGIFY(FS_SECRM_FL)
 XLAT(FS_UNRM_FL),
 #define XLAT_VAL_1 ((unsigned) (FS_UNRM_FL))
 #define XLAT_STR_1 STRINGIFY(FS_UNRM_FL)
 XLAT(FS_COMPR_FL),
 #define XLAT_VAL_2 ((unsigned) (FS_COMPR_FL))
 #define XLAT_STR_2 STRINGIFY(FS_COMPR_FL)
 XLAT(FS_SYNC_FL),
 #define XLAT_VAL_3 ((unsigned) (FS_SYNC_FL))
 #define XLAT_STR_3 STRINGIFY(FS_SYNC_FL)
 XLAT(FS_IMMUTABLE_FL),
 #define XLAT_VAL_4 ((unsigned) (FS_IMMUTABLE_FL))
 #define XLAT_STR_4 STRINGIFY(FS_IMMUTABLE_FL)
 XLAT(FS_APPEND_FL),
 #define XLAT_VAL_5 ((unsigned) (FS_APPEND_FL))
 #define XLAT_STR_5 STRINGIFY(FS_APPEND_FL)
 XLAT(FS_NODUMP_FL),
 #define XLAT_VAL_6 ((unsigned) (FS_NODUMP_FL))
 #define XLAT_STR_6 STRINGIFY(FS_NODUMP_FL)
 XLAT(FS_NOATIME_FL),
 #define XLAT_VAL_7 ((unsigned) (FS_NOATIME_FL))
 #define XLAT_STR_7 STRINGIFY(FS_NOATIME_FL)
 XLAT(FS_DIRTY_FL),
 #define XLAT_VAL_8 ((unsigned) (FS_DIRTY_FL))
 #define XLAT_STR_8 STRINGIFY(FS_DIRTY_FL)
 XLAT(FS_COMPRBLK_FL),
 #define XLAT_VAL_9 ((unsigned) (FS_COMPRBLK_FL))
 #define XLAT_STR_9 STRINGIFY(FS_COMPRBLK_FL)
 XLAT(FS_NOCOMP_FL),
 #define XLAT_VAL_10 ((unsigned) (FS_NOCOMP_FL))
 #define XLAT_STR_10 STRINGIFY(FS_NOCOMP_FL)
 XLAT(FS_ENCRYPT_FL),
 #define XLAT_VAL_11 ((unsigned) (FS_ENCRYPT_FL))
 #define XLAT_STR_11 STRINGIFY(FS_ENCRYPT_FL)
 XLAT(FS_INDEX_FL),
 #define XLAT_VAL_12 ((unsigned) (FS_INDEX_FL))
 #define XLAT_STR_12 STRINGIFY(FS_INDEX_FL)
 XLAT(FS_IMAGIC_FL),
 #define XLAT_VAL_13 ((unsigned) (FS_IMAGIC_FL))
 #define XLAT_STR_13 STRINGIFY(FS_IMAGIC_FL)
 XLAT(FS_JOURNAL_DATA_FL),
 #define XLAT_VAL_14 ((unsigned) (FS_JOURNAL_DATA_FL))
 #define XLAT_STR_14 STRINGIFY(FS_JOURNAL_DATA_FL)
 XLAT(FS_NOTAIL_FL),
 #define XLAT_VAL_15 ((unsigned) (FS_NOTAIL_FL))
 #define XLAT_STR_15 STRINGIFY(FS_NOTAIL_FL)
 XLAT(FS_DIRSYNC_FL),
 #define XLAT_VAL_16 ((unsigned) (FS_DIRSYNC_FL))
 #define XLAT_STR_16 STRINGIFY(FS_DIRSYNC_FL)
 XLAT(FS_TOPDIR_FL),
 #define XLAT_VAL_17 ((unsigned) (FS_TOPDIR_FL))
 #define XLAT_STR_17 STRINGIFY(FS_TOPDIR_FL)
 XLAT(FS_HUGE_FILE_FL),
 #define XLAT_VAL_18 ((unsigned) (FS_HUGE_FILE_FL))
 #define XLAT_STR_18 STRINGIFY(FS_HUGE_FILE_FL)
 XLAT(FS_EXTENT_FL),
 #define XLAT_VAL_19 ((unsigned) (FS_EXTENT_FL))
 #define XLAT_STR_19 STRINGIFY(FS_EXTENT_FL)
 XLAT(FS_VERITY_FL),
 #define XLAT_VAL_20 ((unsigned) (FS_VERITY_FL))
 #define XLAT_STR_20 STRINGIFY(FS_VERITY_FL)
 XLAT(FS_EA_INODE_FL),
 #define XLAT_VAL_21 ((unsigned) (FS_EA_INODE_FL))
 #define XLAT_STR_21 STRINGIFY(FS_EA_INODE_FL)
 XLAT(FS_EOFBLOCKS_FL),
 #define XLAT_VAL_22 ((unsigned) (FS_EOFBLOCKS_FL))
 #define XLAT_STR_22 STRINGIFY(FS_EOFBLOCKS_FL)
 XLAT(FS_NOCOW_FL),
 #define XLAT_VAL_23 ((unsigned) (FS_NOCOW_FL))
 #define XLAT_STR_23 STRINGIFY(FS_NOCOW_FL)
 XLAT(FS_DAX_FL),
 #define XLAT_VAL_24 ((unsigned) (FS_DAX_FL))
 #define XLAT_STR_24 STRINGIFY(FS_DAX_FL)
 XLAT(FS_INLINE_DATA_FL),
 #define XLAT_VAL_25 ((unsigned) (FS_INLINE_DATA_FL))
 #define XLAT_STR_25 STRINGIFY(FS_INLINE_DATA_FL)
 XLAT(FS_PROJINHERIT_FL),
 #define XLAT_VAL_26 ((unsigned) (FS_PROJINHERIT_FL))
 #define XLAT_STR_26 STRINGIFY(FS_PROJINHERIT_FL)
 XLAT(FS_CASEFOLD_FL),
 #define XLAT_VAL_27 ((unsigned) (FS_CASEFOLD_FL))
 #define XLAT_STR_27 STRINGIFY(FS_CASEFOLD_FL)
 XLAT(FS_RESERVED_FL),
 #define XLAT_VAL_28 ((unsigned) (FS_RESERVED_FL))
 #define XLAT_STR_28 STRINGIFY(FS_RESERVED_FL)
};
static
const struct xlat fs_ioc_flags[1] = { {
 .data = fs_ioc_flags_xdata,
 .size = ARRAY_SIZE(fs_ioc_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
