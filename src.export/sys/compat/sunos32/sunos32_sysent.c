/* $NetBSD: sunos32_sysent.c,v 1.38 2018/01/06 16:41:23 kamil Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from;	NetBSD: syscalls.master,v 1.23 2017/12/19 08:24:41 kamil Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: sunos32_sysent.c,v 1.38 2018/01/06 16:41:23 kamil Exp $");

#if defined(_KERNEL_OPT)
#include "opt_sysv.h"
#include "opt_compat_sunos.h"
#endif
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/syscallargs.h>
#include <compat/sunos/sunos.h>
#include <compat/sunos/sunos_syscallargs.h>
#include <compat/netbsd32/netbsd32.h>
#include <compat/netbsd32/netbsd32_syscallargs.h>
#include <compat/sunos32/sunos32.h>
#include <compat/sunos32/sunos32_syscallargs.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register32_t))
#define	ns(type)	.sy_narg = n(type), .sy_argsize = s(type)

struct sysent sunos32_sysent[] = {
	{
		.sy_call = (sy_call_t *)sys_nosys
	},		/* 0 = syscall */
	{
		ns(struct netbsd32_exit_args),
		.sy_call = (sy_call_t *)netbsd32_exit
	},		/* 1 = netbsd32_exit */
	{
		.sy_call = (sy_call_t *)sys_fork
	},		/* 2 = fork */
	{
		ns(struct netbsd32_read_args),
		.sy_call = (sy_call_t *)netbsd32_read
	},		/* 3 = netbsd32_read */
	{
		ns(struct netbsd32_write_args),
		.sy_call = (sy_call_t *)netbsd32_write
	},		/* 4 = netbsd32_write */
	{
		ns(struct sunos32_sys_open_args),
		.sy_call = (sy_call_t *)sunos32_sys_open
	},		/* 5 = open */
	{
		ns(struct netbsd32_close_args),
		.sy_call = (sy_call_t *)netbsd32_close
	},		/* 6 = netbsd32_close */
	{
		ns(struct sunos32_sys_wait4_args),
		.sy_call = (sy_call_t *)sunos32_sys_wait4
	},		/* 7 = wait4 */
	{
		ns(struct sunos32_sys_creat_args),
		.sy_call = (sy_call_t *)sunos32_sys_creat
	},		/* 8 = creat */
	{
		ns(struct netbsd32_link_args),
		.sy_call = (sy_call_t *)netbsd32_link
	},		/* 9 = netbsd32_link */
	{
		ns(struct netbsd32_unlink_args),
		.sy_call = (sy_call_t *)netbsd32_unlink
	},		/* 10 = netbsd32_unlink */
	{
		ns(struct sunos32_sys_execv_args),
		.sy_call = (sy_call_t *)sunos32_sys_execv
	},		/* 11 = execv */
	{
		ns(struct netbsd32_chdir_args),
		.sy_call = (sy_call_t *)netbsd32_chdir
	},		/* 12 = netbsd32_chdir */
	{
		.sy_call = sys_nosys,
	},		/* 13 = filler */
	{
		ns(struct sunos32_sys_mknod_args),
		.sy_call = (sy_call_t *)sunos32_sys_mknod
	},		/* 14 = mknod */
	{
		ns(struct netbsd32_chmod_args),
		.sy_call = (sy_call_t *)netbsd32_chmod
	},		/* 15 = netbsd32_chmod */
	{
		ns(struct netbsd32_chown_args),
		.sy_call = (sy_call_t *)netbsd32_chown
	},		/* 16 = netbsd32_chown */
	{
		ns(struct netbsd32_break_args),
		.sy_call = (sy_call_t *)netbsd32_break
	},		/* 17 = netbsd32_break */
	{
		.sy_call = sys_nosys,
	},		/* 18 = filler */
	{
		ns(struct compat_43_netbsd32_olseek_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_olseek
	},		/* 19 = compat_43_netbsd32_olseek */
	{
		.sy_call = (sy_call_t *)sys_getpid_with_ppid
	},		/* 20 = getpid_with_ppid */
	{
		.sy_call = sys_nosys,
	},		/* 21 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 22 = filler */
	{
		ns(struct netbsd32_setuid_args),
		.sy_call = (sy_call_t *)netbsd32_setuid
	},		/* 23 = netbsd32_setuid */
	{
		.sy_call = (sy_call_t *)sys_getuid_with_euid
	},		/* 24 = getuid_with_euid */
	{
		ns(struct sunos32_sys_stime_args),
		.sy_call = (sy_call_t *)sunos32_sys_stime
	},		/* 25 = stime */
	{
		ns(struct sunos32_sys_ptrace_args),
		.sy_call = (sy_call_t *)sunos32_sys_ptrace
	},		/* 26 = ptrace */
	{
		.sy_call = sys_nosys,
	},		/* 27 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 28 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 29 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 30 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 31 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 32 = filler */
	{
		ns(struct sunos32_sys_access_args),
		.sy_call = (sy_call_t *)sunos32_sys_access
	},		/* 33 = access */
	{
		.sy_call = sys_nosys,
	},		/* 34 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 35 = filler */
	{
		.sy_call = (sy_call_t *)sys_sync
	},		/* 36 = sync */
	{
		ns(struct netbsd32_kill_args),
		.sy_call = (sy_call_t *)netbsd32_kill
	},		/* 37 = netbsd32_kill */
	{
		ns(struct sunos32_sys_stat_args),
		.sy_call = (sy_call_t *)sunos32_sys_stat
	},		/* 38 = stat */
	{
		.sy_call = sys_nosys,
	},		/* 39 = filler */
	{
		ns(struct sunos32_sys_lstat_args),
		.sy_call = (sy_call_t *)sunos32_sys_lstat
	},		/* 40 = lstat */
	{
		ns(struct netbsd32_dup_args),
		.sy_call = (sy_call_t *)netbsd32_dup
	},		/* 41 = netbsd32_dup */
	{
		.sy_call = (sy_call_t *)sys_pipe
	},		/* 42 = pipe */
	{
		.sy_call = sys_nosys,
	},		/* 43 = filler */
	{
		ns(struct netbsd32_profil_args),
		.sy_call = (sy_call_t *)netbsd32_profil
	},		/* 44 = netbsd32_profil */
	{
		.sy_call = sys_nosys,
	},		/* 45 = filler */
	{
		ns(struct netbsd32_setgid_args),
		.sy_call = (sy_call_t *)netbsd32_setgid
	},		/* 46 = netbsd32_setgid */
	{
		.sy_call = (sy_call_t *)sys_getgid_with_egid
	},		/* 47 = getgid_with_egid */
	{
		.sy_call = sys_nosys,
	},		/* 48 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 49 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 50 = filler */
	{
		ns(struct netbsd32_acct_args),
		.sy_call = (sy_call_t *)netbsd32_acct
	},		/* 51 = netbsd32_acct */
	{
		.sy_call = sys_nosys,
	},		/* 52 = filler */
	{
		ns(struct sunos32_sys_mctl_args),
		.sy_call = (sy_call_t *)sunos32_sys_mctl
	},		/* 53 = mctl */
	{
		ns(struct sunos32_sys_ioctl_args),
		.sy_call = (sy_call_t *)sunos32_sys_ioctl
	},		/* 54 = ioctl */
	{
		ns(struct sunos32_sys_reboot_args),
		.sy_call = (sy_call_t *)sunos32_sys_reboot
	},		/* 55 = reboot */
	{
		.sy_call = sys_nosys,
	},		/* 56 = filler */
	{
		ns(struct netbsd32_symlink_args),
		.sy_call = (sy_call_t *)netbsd32_symlink
	},		/* 57 = netbsd32_symlink */
	{
		ns(struct netbsd32_readlink_args),
		.sy_call = (sy_call_t *)netbsd32_readlink
	},		/* 58 = netbsd32_readlink */
	{
		ns(struct sunos32_sys_execve_args),
		.sy_call = (sy_call_t *)sunos32_sys_execve
	},		/* 59 = execve */
	{
		ns(struct netbsd32_umask_args),
		.sy_call = (sy_call_t *)netbsd32_umask
	},		/* 60 = netbsd32_umask */
	{
		ns(struct netbsd32_chroot_args),
		.sy_call = (sy_call_t *)netbsd32_chroot
	},		/* 61 = netbsd32_chroot */
	{
		ns(struct compat_43_netbsd32_fstat43_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_fstat43
	},		/* 62 = compat_43_netbsd32_fstat43 */
	{
		.sy_call = sys_nosys,
	},		/* 63 = filler */
	{
		.sy_call = (sy_call_t *)compat_43_sys_getpagesize
	},		/* 64 = ogetpagesize */
	{
		ns(struct sunos32_sys_omsync_args),
		.sy_call = (sy_call_t *)sunos32_sys_omsync
	},		/* 65 = omsync */
	{
		.sy_call = (sy_call_t *)sys_vfork
	},		/* 66 = vfork */
	{
		.sy_call = sys_nosys,
	},		/* 67 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 68 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 69 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 70 = filler */
	{
		ns(struct sunos32_sys_mmap_args),
		.sy_call = (sy_call_t *)sunos32_sys_mmap
	},		/* 71 = mmap */
	{
		ns(struct netbsd32_ovadvise_args),
		.sy_call = (sy_call_t *)netbsd32_ovadvise
	},		/* 72 = vadvise */
	{
		ns(struct netbsd32_munmap_args),
		.sy_call = (sy_call_t *)netbsd32_munmap
	},		/* 73 = netbsd32_munmap */
	{
		ns(struct netbsd32_mprotect_args),
		.sy_call = (sy_call_t *)netbsd32_mprotect
	},		/* 74 = netbsd32_mprotect */
	{
		ns(struct netbsd32_madvise_args),
		.sy_call = (sy_call_t *)netbsd32_madvise
	},		/* 75 = netbsd32_madvise */
	{
		.sy_call = (sy_call_t *)sunos32_sys_vhangup
	},		/* 76 = vhangup */
	{
		.sy_call = sys_nosys,
	},		/* 77 = filler */
	{
		ns(struct netbsd32_mincore_args),
		.sy_call = (sy_call_t *)netbsd32_mincore
	},		/* 78 = netbsd32_mincore */
	{
		ns(struct netbsd32_getgroups_args),
		.sy_call = (sy_call_t *)netbsd32_getgroups
	},		/* 79 = netbsd32_getgroups */
	{
		ns(struct netbsd32_setgroups_args),
		.sy_call = (sy_call_t *)netbsd32_setgroups
	},		/* 80 = netbsd32_setgroups */
	{
		.sy_call = (sy_call_t *)sys_getpgrp
	},		/* 81 = getpgrp */
	{
		ns(struct sunos32_sys_setpgrp_args),
		.sy_call = (sy_call_t *)sunos32_sys_setpgrp
	},		/* 82 = setpgrp */
	{
		ns(struct compat_50_netbsd32_setitimer_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_setitimer
	},		/* 83 = compat_50_netbsd32_setitimer */
	{
		.sy_call = sys_nosys,
	},		/* 84 = filler */
	{
		ns(struct compat_12_netbsd32_oswapon_args),
		.sy_call = (sy_call_t *)compat_12_netbsd32_oswapon
	},		/* 85 = compat_12_netbsd32_oswapon */
	{
		ns(struct compat_50_netbsd32_getitimer_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_getitimer
	},		/* 86 = compat_50_netbsd32_getitimer */
	{
		ns(struct compat_43_netbsd32_ogethostname_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_ogethostname
	},		/* 87 = compat_43_netbsd32_ogethostname */
	{
		ns(struct compat_43_netbsd32_osethostname_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_osethostname
	},		/* 88 = compat_43_netbsd32_osethostname */
	{
		.sy_call = (sy_call_t *)compat_43_sys_getdtablesize
	},		/* 89 = ogetdtablesize */
	{
		ns(struct netbsd32_dup2_args),
		.sy_call = (sy_call_t *)netbsd32_dup2
	},		/* 90 = netbsd32_dup2 */
	{
		.sy_call = sys_nosys,
	},		/* 91 = filler */
	{
		ns(struct sunos32_sys_fcntl_args),
		.sy_call = (sy_call_t *)sunos32_sys_fcntl
	},		/* 92 = fcntl */
	{
		ns(struct compat_50_netbsd32_select_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_select
	},		/* 93 = compat_50_netbsd32_select */
	{
		.sy_call = sys_nosys,
	},		/* 94 = filler */
	{
		ns(struct netbsd32_fsync_args),
		.sy_call = (sy_call_t *)netbsd32_fsync
	},		/* 95 = netbsd32_fsync */
	{
		ns(struct netbsd32_setpriority_args),
		.sy_call = (sy_call_t *)netbsd32_setpriority
	},		/* 96 = netbsd32_setpriority */
	{
		ns(struct sunos32_sys_socket_args),
		.sy_call = (sy_call_t *)sunos32_sys_socket
	},		/* 97 = socket */
	{
		ns(struct netbsd32_connect_args),
		.sy_call = (sy_call_t *)netbsd32_connect
	},		/* 98 = netbsd32_connect */
	{
		ns(struct compat_43_netbsd32_oaccept_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_oaccept
	},		/* 99 = compat_43_netbsd32_oaccept */
	{
		ns(struct netbsd32_getpriority_args),
		.sy_call = (sy_call_t *)netbsd32_getpriority
	},		/* 100 = netbsd32_getpriority */
	{
		ns(struct compat_43_netbsd32_osend_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_osend
	},		/* 101 = compat_43_netbsd32_osend */
	{
		ns(struct compat_43_netbsd32_orecv_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_orecv
	},		/* 102 = compat_43_netbsd32_orecv */
	{
		.sy_call = sys_nosys,
	},		/* 103 = filler */
	{
		ns(struct netbsd32_bind_args),
		.sy_call = (sy_call_t *)netbsd32_bind
	},		/* 104 = netbsd32_bind */
	{
		ns(struct sunos32_sys_setsockopt_args),
		.sy_call = (sy_call_t *)sunos32_sys_setsockopt
	},		/* 105 = setsockopt */
	{
		ns(struct netbsd32_listen_args),
		.sy_call = (sy_call_t *)netbsd32_listen
	},		/* 106 = netbsd32_listen */
	{
		.sy_call = sys_nosys,
	},		/* 107 = filler */
	{
		ns(struct sunos32_sys_sigvec_args),
		.sy_call = (sy_call_t *)sunos32_sys_sigvec
	},		/* 108 = sigvec */
	{
		ns(struct compat_43_netbsd32_sigblock_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_sigblock
	},		/* 109 = compat_43_netbsd32_sigblock */
	{
		ns(struct compat_43_netbsd32_sigsetmask_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_sigsetmask
	},		/* 110 = compat_43_netbsd32_sigsetmask */
	{
		ns(struct sunos32_sys_sigsuspend_args),
		.sy_call = (sy_call_t *)sunos32_sys_sigsuspend
	},		/* 111 = sigsuspend */
	{
		ns(struct compat_43_netbsd32_osigstack_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_osigstack
	},		/* 112 = compat_43_netbsd32_osigstack */
	{
		ns(struct compat_43_netbsd32_orecvmsg_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_orecvmsg
	},		/* 113 = compat_43_netbsd32_orecvmsg */
	{
		ns(struct compat_43_netbsd32_osendmsg_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_osendmsg
	},		/* 114 = compat_43_netbsd32_osendmsg */
	{
		.sy_call = sys_nosys,
	},		/* 115 = filler */
	{
		ns(struct compat_50_netbsd32_gettimeofday_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_gettimeofday
	},		/* 116 = compat_50_netbsd32_gettimeofday */
	{
		ns(struct compat_50_netbsd32_getrusage_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_getrusage
	},		/* 117 = compat_50_netbsd32_getrusage */
	{
		ns(struct netbsd32_getsockopt_args),
		.sy_call = (sy_call_t *)netbsd32_getsockopt
	},		/* 118 = netbsd32_getsockopt */
	{
		.sy_call = sys_nosys,
	},		/* 119 = filler */
	{
		ns(struct netbsd32_readv_args),
		.sy_call = (sy_call_t *)netbsd32_readv
	},		/* 120 = netbsd32_readv */
	{
		ns(struct netbsd32_writev_args),
		.sy_call = (sy_call_t *)netbsd32_writev
	},		/* 121 = netbsd32_writev */
	{
		ns(struct compat_50_netbsd32_settimeofday_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_settimeofday
	},		/* 122 = compat_50_netbsd32_settimeofday */
	{
		ns(struct netbsd32_fchown_args),
		.sy_call = (sy_call_t *)netbsd32_fchown
	},		/* 123 = netbsd32_fchown */
	{
		ns(struct netbsd32_fchmod_args),
		.sy_call = (sy_call_t *)netbsd32_fchmod
	},		/* 124 = netbsd32_fchmod */
	{
		ns(struct compat_43_netbsd32_orecvfrom_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_orecvfrom
	},		/* 125 = compat_43_netbsd32_orecvfrom */
	{
		ns(struct netbsd32_setreuid_args),
		.sy_call = (sy_call_t *)netbsd32_setreuid
	},		/* 126 = netbsd32_setreuid */
	{
		ns(struct netbsd32_setregid_args),
		.sy_call = (sy_call_t *)netbsd32_setregid
	},		/* 127 = netbsd32_setregid */
	{
		ns(struct netbsd32_rename_args),
		.sy_call = (sy_call_t *)netbsd32_rename
	},		/* 128 = netbsd32_rename */
	{
		ns(struct compat_43_netbsd32_otruncate_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_otruncate
	},		/* 129 = compat_43_netbsd32_otruncate */
	{
		ns(struct compat_43_netbsd32_oftruncate_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_oftruncate
	},		/* 130 = compat_43_netbsd32_oftruncate */
	{
		ns(struct netbsd32_flock_args),
		.sy_call = (sy_call_t *)netbsd32_flock
	},		/* 131 = netbsd32_flock */
	{
		.sy_call = sys_nosys,
	},		/* 132 = filler */
	{
		ns(struct netbsd32_sendto_args),
		.sy_call = (sy_call_t *)netbsd32_sendto
	},		/* 133 = netbsd32_sendto */
	{
		ns(struct netbsd32_shutdown_args),
		.sy_call = (sy_call_t *)netbsd32_shutdown
	},		/* 134 = netbsd32_shutdown */
	{
		ns(struct sunos32_sys_socketpair_args),
		.sy_call = (sy_call_t *)sunos32_sys_socketpair
	},		/* 135 = socketpair */
	{
		ns(struct netbsd32_mkdir_args),
		.sy_call = (sy_call_t *)netbsd32_mkdir
	},		/* 136 = netbsd32_mkdir */
	{
		ns(struct netbsd32_rmdir_args),
		.sy_call = (sy_call_t *)netbsd32_rmdir
	},		/* 137 = netbsd32_rmdir */
	{
		ns(struct compat_50_netbsd32_utimes_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_utimes
	},		/* 138 = compat_50_netbsd32_utimes */
	{
		ns(struct sunos32_sys_sigreturn_args),
		.sy_call = (sy_call_t *)sunos32_sys_sigreturn
	},		/* 139 = sigreturn */
	{
		ns(struct compat_50_netbsd32_adjtime_args),
		.sy_call = (sy_call_t *)compat_50_netbsd32_adjtime
	},		/* 140 = compat_50_netbsd32_adjtime */
	{
		ns(struct compat_43_netbsd32_ogetpeername_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_ogetpeername
	},		/* 141 = compat_43_netbsd32_ogetpeername */
	{
		.sy_call = (sy_call_t *)compat_43_sys_gethostid
	},		/* 142 = gethostid */
	{
		.sy_call = sys_nosys,
	},		/* 143 = filler */
	{
		ns(struct sunos32_sys_getrlimit_args),
		.sy_call = (sy_call_t *)sunos32_sys_getrlimit
	},		/* 144 = getrlimit */
	{
		ns(struct sunos32_sys_setrlimit_args),
		.sy_call = (sy_call_t *)sunos32_sys_setrlimit
	},		/* 145 = setrlimit */
	{
		ns(struct compat_43_netbsd32_killpg_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_killpg
	},		/* 146 = compat_43_netbsd32_killpg */
	{
		.sy_call = sys_nosys,
	},		/* 147 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 148 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 149 = filler */
	{
		ns(struct compat_43_netbsd32_ogetsockname_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_ogetsockname
	},		/* 150 = compat_43_netbsd32_ogetsockname */
	{
		.sy_call = sys_nosys,
	},		/* 151 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 152 = filler */
	{
		ns(struct netbsd32_poll_args),
		.sy_call = (sy_call_t *)netbsd32_poll
	},		/* 153 = netbsd32_poll */
	{
		.sy_call = sys_nosys,
	},		/* 154 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 155 = filler */
	{
		ns(struct compat_43_netbsd32_ogetdirentries_args),
		.sy_call = (sy_call_t *)compat_43_netbsd32_ogetdirentries
	},		/* 156 = compat_43_netbsd32_ogetdirentries */
	{
		ns(struct sunos32_sys_statfs_args),
		.sy_call = (sy_call_t *)sunos32_sys_statfs
	},		/* 157 = statfs */
	{
		ns(struct sunos32_sys_fstatfs_args),
		.sy_call = (sy_call_t *)sunos32_sys_fstatfs
	},		/* 158 = fstatfs */
	{
		ns(struct sunos32_sys_unmount_args),
		.sy_call = (sy_call_t *)sunos32_sys_unmount
	},		/* 159 = unmount */
	{
		.sy_call = sys_nosys,
	},		/* 160 = filler */
	{
		ns(struct compat_30_sys_getfh_args),
		.sy_call = (sy_call_t *)compat_30_sys_getfh
	},		/* 161 = getfh */
	{
		ns(struct compat_09_netbsd32_ogetdomainname_args),
		.sy_call = (sy_call_t *)compat_09_netbsd32_ogetdomainname
	},		/* 162 = compat_09_netbsd32_ogetdomainname */
	{
		ns(struct compat_09_netbsd32_osetdomainname_args),
		.sy_call = (sy_call_t *)compat_09_netbsd32_osetdomainname
	},		/* 163 = compat_09_netbsd32_osetdomainname */
	{
		.sy_call = sys_nosys,
	},		/* 164 = filler */
	{
		ns(struct sunos32_sys_quotactl_args),
		.sy_call = (sy_call_t *)sunos32_sys_quotactl
	},		/* 165 = quotactl */
	{
		ns(struct sunos32_sys_exportfs_args),
		.sy_call = (sy_call_t *)sunos32_sys_exportfs
	},		/* 166 = exportfs */
	{
		ns(struct sunos32_sys_mount_args),
		.sy_call = (sy_call_t *)sunos32_sys_mount
	},		/* 167 = mount */
	{
		ns(struct sunos32_sys_ustat_args),
		.sy_call = (sy_call_t *)sunos32_sys_ustat
	},		/* 168 = ustat */
#ifdef SYSVSEM
	{
		ns(struct compat_10_netbsd32_semsys_args),
		.sy_call = (sy_call_t *)compat_10_netbsd32_semsys
	},		/* 169 = osemsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 169 = filler */
#endif
#ifdef SYSVMSG
	{
		ns(struct compat_10_netbsd32_msgsys_args),
		.sy_call = (sy_call_t *)compat_10_netbsd32_msgsys
	},		/* 170 = omsgsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 170 = filler */
#endif
#ifdef SYSVSHM
	{
		ns(struct compat_10_netbsd32_shmsys_args),
		.sy_call = (sy_call_t *)compat_10_netbsd32_shmsys
	},		/* 171 = oshmsys */
#else
	{
		.sy_call = sys_nosys,
	},		/* 171 = filler */
#endif
	{
		ns(struct sunos32_sys_auditsys_args),
		.sy_call = (sy_call_t *)sunos32_sys_auditsys
	},		/* 172 = auditsys */
	{
		.sy_call = sys_nosys,
	},		/* 173 = filler */
	{
		ns(struct sunos32_sys_getdents_args),
		.sy_call = (sy_call_t *)sunos32_sys_getdents
	},		/* 174 = getdents */
	{
		.sy_call = (sy_call_t *)sys_setsid
	},		/* 175 = setsid */
	{
		ns(struct netbsd32_fchdir_args),
		.sy_call = (sy_call_t *)netbsd32_fchdir
	},		/* 176 = netbsd32_fchdir */
	{
		ns(struct netbsd32_fchroot_args),
		.sy_call = (sy_call_t *)netbsd32_fchroot
	},		/* 177 = netbsd32_fchroot */
	{
		.sy_call = sys_nosys,
	},		/* 178 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 179 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 180 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 181 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 182 = filler */
	{
		ns(struct sunos32_sys_sigpending_args),
		.sy_call = (sy_call_t *)sunos32_sys_sigpending
	},		/* 183 = sigpending */
	{
		.sy_call = sys_nosys,
	},		/* 184 = filler */
	{
		ns(struct netbsd32_setpgid_args),
		.sy_call = (sy_call_t *)netbsd32_setpgid
	},		/* 185 = netbsd32_setpgid */
	{
		ns(struct netbsd32_pathconf_args),
		.sy_call = (sy_call_t *)netbsd32_pathconf
	},		/* 186 = netbsd32_pathconf */
	{
		ns(struct netbsd32_fpathconf_args),
		.sy_call = (sy_call_t *)netbsd32_fpathconf
	},		/* 187 = netbsd32_fpathconf */
	{
		ns(struct sunos32_sys_sysconf_args),
		.sy_call = (sy_call_t *)sunos32_sys_sysconf
	},		/* 188 = sysconf */
	{
		ns(struct sunos32_sys_uname_args),
		.sy_call = (sy_call_t *)sunos32_sys_uname
	},		/* 189 = uname */
	{
		.sy_call = sys_nosys,
	},		/* 190 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 191 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 192 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 193 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 194 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 195 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 196 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 197 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 198 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 199 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 200 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 201 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 202 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 203 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 204 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 205 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 206 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 207 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 208 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 209 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 210 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 211 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 212 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 213 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 214 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 215 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 216 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 217 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 218 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 219 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 220 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 221 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 222 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 223 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 224 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 225 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 226 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 227 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 228 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 229 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 230 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 231 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 232 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 233 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 234 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 235 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 236 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 237 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 238 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 239 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 240 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 241 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 242 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 243 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 244 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 245 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 246 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 247 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 248 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 249 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 250 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 251 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 252 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 253 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 254 = filler */
	{
		.sy_call = sys_nosys,
	},		/* 255 = filler */
};