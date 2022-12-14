dnl Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_ipv4_conf.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_sysctl_net_ipv4_conf],[
AC_CHECK_DECLS(m4_normalize([
NET_IPV4_CONF_FORWARDING,
NET_IPV4_CONF_MC_FORWARDING,
NET_IPV4_CONF_PROXY_ARP,
NET_IPV4_CONF_ACCEPT_REDIRECTS,
NET_IPV4_CONF_SECURE_REDIRECTS,
NET_IPV4_CONF_SEND_REDIRECTS,
NET_IPV4_CONF_SHARED_MEDIA,
NET_IPV4_CONF_RP_FILTER,
NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE,
NET_IPV4_CONF_BOOTP_RELAY,
NET_IPV4_CONF_LOG_MARTIANS,
NET_IPV4_CONF_TAG,
NET_IPV4_CONF_ARPFILTER,
NET_IPV4_CONF_MEDIUM_ID,
NET_IPV4_CONF_NOXFRM,
NET_IPV4_CONF_NOPOLICY,
NET_IPV4_CONF_FORCE_IGMP_VERSION,
NET_IPV4_CONF_ARP_ANNOUNCE,
NET_IPV4_CONF_ARP_IGNORE,
NET_IPV4_CONF_PROMOTE_SECONDARIES,
NET_IPV4_CONF_ARP_ACCEPT,
NET_IPV4_CONF_ARP_NOTIFY,
NET_IPV4_CONF_ACCEPT_LOCAL,
NET_IPV4_CONF_SRC_VMARK,
NET_IPV4_CONF_PROXY_ARP_PVLAN
]),,, [
#include <sys/types.h>
#include <linux/sysctl.h>
])])])
