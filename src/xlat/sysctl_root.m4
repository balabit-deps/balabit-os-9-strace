dnl Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_root.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_sysctl_root],[
AC_CHECK_DECLS(m4_normalize([
CTL_KERN,
CTL_VM,
CTL_NET,
CTL_PROC,
CTL_FS,
CTL_DEBUG,
CTL_DEV,
CTL_BUS,
CTL_ABI,
CTL_CPU,
CTL_INOTIFY,
CTL_ARLAN,
CTL_APPLDATA,
CTL_S390DBF,
CTL_SUNRPC,
CTL_FRV,
CTL_PM
]),,, [
#include <sys/types.h>
#include <linux/sysctl.h>
])])])