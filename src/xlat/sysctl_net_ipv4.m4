dnl Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_ipv4.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_sysctl_net_ipv4],[
AC_CHECK_DECLS(m4_normalize([
NET_IPV4_FORWARD,
NET_IPV4_DYNADDR,
NET_IPV4_CONF,
NET_IPV4_NEIGH,
NET_IPV4_ROUTE,
NET_IPV4_FIB_HASH,
NET_IPV4_NETFILTER,
NET_IPV4_TCP_TIMESTAMPS,
NET_IPV4_TCP_WINDOW_SCALING,
NET_IPV4_TCP_SACK,
NET_IPV4_TCP_RETRANS_COLLAPSE,
NET_IPV4_DEFAULT_TTL,
NET_IPV4_AUTOCONFIG,
NET_IPV4_NO_PMTU_DISC,
NET_IPV4_TCP_SYN_RETRIES,
NET_IPV4_IPFRAG_HIGH_THRESH,
NET_IPV4_IPFRAG_LOW_THRESH,
NET_IPV4_IPFRAG_TIME,
NET_IPV4_TCP_MAX_KA_PROBES,
NET_IPV4_TCP_KEEPALIVE_TIME,
NET_IPV4_TCP_KEEPALIVE_PROBES,
NET_IPV4_TCP_RETRIES1,
NET_IPV4_TCP_RETRIES2,
NET_IPV4_TCP_FIN_TIMEOUT,
NET_IPV4_IP_MASQ_DEBUG,
NET_TCP_SYNCOOKIES,
NET_TCP_STDURG,
NET_TCP_RFC1337,
NET_TCP_SYN_TAILDROP,
NET_TCP_MAX_SYN_BACKLOG,
NET_IPV4_LOCAL_PORT_RANGE,
NET_IPV4_ICMP_ECHO_IGNORE_ALL,
NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS,
NET_IPV4_ICMP_SOURCEQUENCH_RATE,
NET_IPV4_ICMP_DESTUNREACH_RATE,
NET_IPV4_ICMP_TIMEEXCEED_RATE,
NET_IPV4_ICMP_PARAMPROB_RATE,
NET_IPV4_ICMP_ECHOREPLY_RATE,
NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES,
NET_IPV4_IGMP_MAX_MEMBERSHIPS,
NET_TCP_TW_RECYCLE,
NET_IPV4_ALWAYS_DEFRAG,
NET_IPV4_TCP_KEEPALIVE_INTVL,
NET_IPV4_INET_PEER_THRESHOLD,
NET_IPV4_INET_PEER_MINTTL,
NET_IPV4_INET_PEER_MAXTTL,
NET_IPV4_INET_PEER_GC_MINTIME,
NET_IPV4_INET_PEER_GC_MAXTIME,
NET_TCP_ORPHAN_RETRIES,
NET_TCP_ABORT_ON_OVERFLOW,
NET_TCP_SYNACK_RETRIES,
NET_TCP_MAX_ORPHANS,
NET_TCP_MAX_TW_BUCKETS,
NET_TCP_FACK,
NET_TCP_REORDERING,
NET_TCP_ECN,
NET_TCP_DSACK,
NET_TCP_MEM,
NET_TCP_WMEM,
NET_TCP_RMEM,
NET_TCP_APP_WIN,
NET_TCP_ADV_WIN_SCALE,
NET_IPV4_NONLOCAL_BIND,
NET_IPV4_ICMP_RATELIMIT,
NET_IPV4_ICMP_RATEMASK,
NET_TCP_TW_REUSE,
NET_TCP_FRTO,
NET_TCP_LOW_LATENCY,
NET_IPV4_IPFRAG_SECRET_INTERVAL,
NET_TCP_WESTWOOD,
NET_IPV4_IGMP_MAX_MSF,
NET_TCP_NO_METRICS_SAVE,
NET_TCP_VEGAS,
NET_TCP_VEGAS_ALPHA,
NET_TCP_VEGAS_BETA,
NET_TCP_VEGAS_GAMMA,
NET_TCP_BIC,
NET_TCP_BIC_FAST_CONVERGENCE,
NET_TCP_BIC_LOW_WINDOW,
NET_TCP_DEFAULT_WIN_SCALE,
NET_TCP_MODERATE_RCVBUF,
NET_TCP_TSO_WIN_DIVISOR,
NET_TCP_BIC_BETA,
NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR,
NET_TCP_CONG_CONTROL,
NET_TCP_ABC,
NET_IPV4_IPFRAG_MAX_DIST,
NET_TCP_MTU_PROBING,
NET_TCP_BASE_MSS,
NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS,
NET_TCP_DMA_COPYBREAK,
NET_TCP_SLOW_START_AFTER_IDLE,
NET_CIPSOV4_CACHE_ENABLE,
NET_CIPSOV4_CACHE_BUCKET_SIZE,
NET_CIPSOV4_RBM_OPTFMT,
NET_CIPSOV4_RBM_STRICTVALID,
NET_TCP_AVAIL_CONG_CONTROL,
NET_TCP_ALLOWED_CONG_CONTROL,
NET_TCP_MAX_SSTHRESH,
NET_TCP_FRTO_RESPONSE
]),,, [
#include <sys/types.h>
#include <linux/sysctl.h>
])])])
