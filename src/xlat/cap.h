/* Generated by ./src/xlat/gen.sh from ./src/xlat/cap.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat cap in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data cap_xdata[] = {
 [CAP_CHOWN] = XLAT(CAP_CHOWN),
 #define XLAT_VAL_0 ((unsigned) (CAP_CHOWN))
 #define XLAT_STR_0 STRINGIFY(CAP_CHOWN)
 [CAP_DAC_OVERRIDE] = XLAT(CAP_DAC_OVERRIDE),
 #define XLAT_VAL_1 ((unsigned) (CAP_DAC_OVERRIDE))
 #define XLAT_STR_1 STRINGIFY(CAP_DAC_OVERRIDE)
 [CAP_DAC_READ_SEARCH] = XLAT(CAP_DAC_READ_SEARCH),
 #define XLAT_VAL_2 ((unsigned) (CAP_DAC_READ_SEARCH))
 #define XLAT_STR_2 STRINGIFY(CAP_DAC_READ_SEARCH)
 [CAP_FOWNER] = XLAT(CAP_FOWNER),
 #define XLAT_VAL_3 ((unsigned) (CAP_FOWNER))
 #define XLAT_STR_3 STRINGIFY(CAP_FOWNER)
 [CAP_FSETID] = XLAT(CAP_FSETID),
 #define XLAT_VAL_4 ((unsigned) (CAP_FSETID))
 #define XLAT_STR_4 STRINGIFY(CAP_FSETID)
 [CAP_KILL] = XLAT(CAP_KILL),
 #define XLAT_VAL_5 ((unsigned) (CAP_KILL))
 #define XLAT_STR_5 STRINGIFY(CAP_KILL)
 [CAP_SETGID] = XLAT(CAP_SETGID),
 #define XLAT_VAL_6 ((unsigned) (CAP_SETGID))
 #define XLAT_STR_6 STRINGIFY(CAP_SETGID)
 [CAP_SETUID] = XLAT(CAP_SETUID),
 #define XLAT_VAL_7 ((unsigned) (CAP_SETUID))
 #define XLAT_STR_7 STRINGIFY(CAP_SETUID)
 [CAP_SETPCAP] = XLAT(CAP_SETPCAP),
 #define XLAT_VAL_8 ((unsigned) (CAP_SETPCAP))
 #define XLAT_STR_8 STRINGIFY(CAP_SETPCAP)
 [CAP_LINUX_IMMUTABLE] = XLAT(CAP_LINUX_IMMUTABLE),
 #define XLAT_VAL_9 ((unsigned) (CAP_LINUX_IMMUTABLE))
 #define XLAT_STR_9 STRINGIFY(CAP_LINUX_IMMUTABLE)
 [CAP_NET_BIND_SERVICE] = XLAT(CAP_NET_BIND_SERVICE),
 #define XLAT_VAL_10 ((unsigned) (CAP_NET_BIND_SERVICE))
 #define XLAT_STR_10 STRINGIFY(CAP_NET_BIND_SERVICE)
 [CAP_NET_BROADCAST] = XLAT(CAP_NET_BROADCAST),
 #define XLAT_VAL_11 ((unsigned) (CAP_NET_BROADCAST))
 #define XLAT_STR_11 STRINGIFY(CAP_NET_BROADCAST)
 [CAP_NET_ADMIN] = XLAT(CAP_NET_ADMIN),
 #define XLAT_VAL_12 ((unsigned) (CAP_NET_ADMIN))
 #define XLAT_STR_12 STRINGIFY(CAP_NET_ADMIN)
 [CAP_NET_RAW] = XLAT(CAP_NET_RAW),
 #define XLAT_VAL_13 ((unsigned) (CAP_NET_RAW))
 #define XLAT_STR_13 STRINGIFY(CAP_NET_RAW)
 [CAP_IPC_LOCK] = XLAT(CAP_IPC_LOCK),
 #define XLAT_VAL_14 ((unsigned) (CAP_IPC_LOCK))
 #define XLAT_STR_14 STRINGIFY(CAP_IPC_LOCK)
 [CAP_IPC_OWNER] = XLAT(CAP_IPC_OWNER),
 #define XLAT_VAL_15 ((unsigned) (CAP_IPC_OWNER))
 #define XLAT_STR_15 STRINGIFY(CAP_IPC_OWNER)
 [CAP_SYS_MODULE] = XLAT(CAP_SYS_MODULE),
 #define XLAT_VAL_16 ((unsigned) (CAP_SYS_MODULE))
 #define XLAT_STR_16 STRINGIFY(CAP_SYS_MODULE)
 [CAP_SYS_RAWIO] = XLAT(CAP_SYS_RAWIO),
 #define XLAT_VAL_17 ((unsigned) (CAP_SYS_RAWIO))
 #define XLAT_STR_17 STRINGIFY(CAP_SYS_RAWIO)
 [CAP_SYS_CHROOT] = XLAT(CAP_SYS_CHROOT),
 #define XLAT_VAL_18 ((unsigned) (CAP_SYS_CHROOT))
 #define XLAT_STR_18 STRINGIFY(CAP_SYS_CHROOT)
 [CAP_SYS_PTRACE] = XLAT(CAP_SYS_PTRACE),
 #define XLAT_VAL_19 ((unsigned) (CAP_SYS_PTRACE))
 #define XLAT_STR_19 STRINGIFY(CAP_SYS_PTRACE)
 [CAP_SYS_PACCT] = XLAT(CAP_SYS_PACCT),
 #define XLAT_VAL_20 ((unsigned) (CAP_SYS_PACCT))
 #define XLAT_STR_20 STRINGIFY(CAP_SYS_PACCT)
 [CAP_SYS_ADMIN] = XLAT(CAP_SYS_ADMIN),
 #define XLAT_VAL_21 ((unsigned) (CAP_SYS_ADMIN))
 #define XLAT_STR_21 STRINGIFY(CAP_SYS_ADMIN)
 [CAP_SYS_BOOT] = XLAT(CAP_SYS_BOOT),
 #define XLAT_VAL_22 ((unsigned) (CAP_SYS_BOOT))
 #define XLAT_STR_22 STRINGIFY(CAP_SYS_BOOT)
 [CAP_SYS_NICE] = XLAT(CAP_SYS_NICE),
 #define XLAT_VAL_23 ((unsigned) (CAP_SYS_NICE))
 #define XLAT_STR_23 STRINGIFY(CAP_SYS_NICE)
 [CAP_SYS_RESOURCE] = XLAT(CAP_SYS_RESOURCE),
 #define XLAT_VAL_24 ((unsigned) (CAP_SYS_RESOURCE))
 #define XLAT_STR_24 STRINGIFY(CAP_SYS_RESOURCE)
 [CAP_SYS_TIME] = XLAT(CAP_SYS_TIME),
 #define XLAT_VAL_25 ((unsigned) (CAP_SYS_TIME))
 #define XLAT_STR_25 STRINGIFY(CAP_SYS_TIME)
 [CAP_SYS_TTY_CONFIG] = XLAT(CAP_SYS_TTY_CONFIG),
 #define XLAT_VAL_26 ((unsigned) (CAP_SYS_TTY_CONFIG))
 #define XLAT_STR_26 STRINGIFY(CAP_SYS_TTY_CONFIG)
 [CAP_MKNOD] = XLAT(CAP_MKNOD),
 #define XLAT_VAL_27 ((unsigned) (CAP_MKNOD))
 #define XLAT_STR_27 STRINGIFY(CAP_MKNOD)
 [CAP_LEASE] = XLAT(CAP_LEASE),
 #define XLAT_VAL_28 ((unsigned) (CAP_LEASE))
 #define XLAT_STR_28 STRINGIFY(CAP_LEASE)
 [CAP_AUDIT_WRITE] = XLAT(CAP_AUDIT_WRITE),
 #define XLAT_VAL_29 ((unsigned) (CAP_AUDIT_WRITE))
 #define XLAT_STR_29 STRINGIFY(CAP_AUDIT_WRITE)
 [CAP_AUDIT_CONTROL] = XLAT(CAP_AUDIT_CONTROL),
 #define XLAT_VAL_30 ((unsigned) (CAP_AUDIT_CONTROL))
 #define XLAT_STR_30 STRINGIFY(CAP_AUDIT_CONTROL)
 [CAP_SETFCAP] = XLAT(CAP_SETFCAP),
 #define XLAT_VAL_31 ((unsigned) (CAP_SETFCAP))
 #define XLAT_STR_31 STRINGIFY(CAP_SETFCAP)
 [CAP_MAC_OVERRIDE] = XLAT(CAP_MAC_OVERRIDE),
 #define XLAT_VAL_32 ((unsigned) (CAP_MAC_OVERRIDE))
 #define XLAT_STR_32 STRINGIFY(CAP_MAC_OVERRIDE)
 [CAP_MAC_ADMIN] = XLAT(CAP_MAC_ADMIN),
 #define XLAT_VAL_33 ((unsigned) (CAP_MAC_ADMIN))
 #define XLAT_STR_33 STRINGIFY(CAP_MAC_ADMIN)
 [CAP_SYSLOG] = XLAT(CAP_SYSLOG),
 #define XLAT_VAL_34 ((unsigned) (CAP_SYSLOG))
 #define XLAT_STR_34 STRINGIFY(CAP_SYSLOG)
 [CAP_WAKE_ALARM] = XLAT(CAP_WAKE_ALARM),
 #define XLAT_VAL_35 ((unsigned) (CAP_WAKE_ALARM))
 #define XLAT_STR_35 STRINGIFY(CAP_WAKE_ALARM)
 [CAP_BLOCK_SUSPEND] = XLAT(CAP_BLOCK_SUSPEND),
 #define XLAT_VAL_36 ((unsigned) (CAP_BLOCK_SUSPEND))
 #define XLAT_STR_36 STRINGIFY(CAP_BLOCK_SUSPEND)
 [CAP_AUDIT_READ] = XLAT(CAP_AUDIT_READ),
 #define XLAT_VAL_37 ((unsigned) (CAP_AUDIT_READ))
 #define XLAT_STR_37 STRINGIFY(CAP_AUDIT_READ)
 [CAP_PERFMON] = XLAT(CAP_PERFMON),
 #define XLAT_VAL_38 ((unsigned) (CAP_PERFMON))
 #define XLAT_STR_38 STRINGIFY(CAP_PERFMON)
 [CAP_BPF] = XLAT(CAP_BPF),
 #define XLAT_VAL_39 ((unsigned) (CAP_BPF))
 #define XLAT_STR_39 STRINGIFY(CAP_BPF)
 [CAP_CHECKPOINT_RESTORE] = XLAT(CAP_CHECKPOINT_RESTORE),
 #define XLAT_VAL_40 ((unsigned) (CAP_CHECKPOINT_RESTORE))
 #define XLAT_STR_40 STRINGIFY(CAP_CHECKPOINT_RESTORE)
};
static
const struct xlat cap[1] = { {
 .data = cap_xdata,
 .size = ARRAY_SIZE(cap_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
