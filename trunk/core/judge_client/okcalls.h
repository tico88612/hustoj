/*
 * Copyright 2008 sempr <iamsempr@gmail.com>
 *
 * This file is part of HUSTOJ.
 *
 * HUSTOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * HUSTOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HUSTOJ. if not, see <http://www.gnu.org/licenses/>.
 */
#include <sys/syscall.h>
#ifdef __i386


int LANG_JV[256]={SYS_fcntl64,SYS_getdents64 , SYS_ugetrlimit, SYS_rt_sigprocmask, SYS_futex, SYS_read, SYS_mmap2, SYS_stat64, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_readlink, SYS_munmap, SYS_close, SYS_uname, SYS_clone, SYS_uname, SYS_mprotect, SYS_rt_sigaction, SYS_sigprocmask, SYS_getrlimit, SYS_fstat64, SYS_getuid32, SYS_getgid32, SYS_geteuid32, SYS_getegid32, SYS_set_thread_area, SYS_set_tid_address, SYS_set_robust_list, SYS_exit_group, 0};
int LANG_JC[256]={-1,         -1,              -1,            -1,                 -1,        -1,       -1,        -1,         -1,       -1,        2,          -1,         -1,      -1,           -1,         -1,        -1,        1,         -1,        -1,           -1,               -1,              -1,            -1,          -1,           -1,           -1,            -1,            -1,                  -1,                  -1,                  -1,              0};

int LANG_CV[256]={SYS_read, SYS_uname, SYS_write, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_munmap, SYS_mprotect, SYS_mmap2, SYS_fstat64, SYS_set_thread_area, 252,0};
int LANG_CC[256]={-1,       -1,        -1,        -1,       -1,        1,          -1,         -1,      -1,         -1,           -1,        -1,          -1,                  2,0};

int LANG_PV[256]={SYS_open, SYS_set_thread_area, SYS_brk, SYS_read, SYS_uname, SYS_write, SYS_execve, SYS_ioctl, SYS_readlink, SYS_mmap, SYS_rt_sigaction, SYS_getrlimit, 252,191,0};
int LANG_PC[256]={-1,       -1,                  -1,      -1,       -1,        -1,        1,          -1,        -1,           -1,       -1,               -1,            2,-1,0};

int LANG_RV[256]={126,SYS_access,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fstat64,SYS_futex,SYS_getegid32,SYS_geteuid32,SYS_getgid32,SYS_getrlimit,SYS_gettimeofday,SYS_getuid32,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_uname,SYS_write,191,195,120,7,0};

int LANG_RC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_BV[256]={158,117,60,39,102,191,183,SYS_access,SYS_brk,SYS_close,SYS_dup2,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_getegid32,SYS_geteuid32,SYS_getgid32,SYS_getpgrp,SYS_getpid,SYS_getppid,SYS_getrlimit,SYS_gettimeofday,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_thread_area,SYS_stat64,SYS_time,SYS_uname,SYS_write};
int LANG_BC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_YV[256]={158,117,60,39,102,191,SYS_access,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_futex,SYS_getcwd,SYS_getdents64,SYS_getegid32,SYS_geteuid32,SYS_getgid32,SYS_getrlimit,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_lstat64,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_stat64,SYS_uname,SYS_write};
int LANG_YC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};


int LANG_PHV[256]={78,158,117,60,39,102,191,SYS_access,SYS_brk,SYS_clone,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_futex,SYS_getcwd,SYS_getdents64,SYS_getrlimit,SYS_gettimeofday,SYS_ioctl,SYS__llseek,SYS_lstat64,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_stat64,SYS_time,SYS_uname,SYS_write,0};
int LANG_PHC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_PLV[256]={78,158,117,60,39,102,191,SYS_access,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_futex,SYS_getegid32,SYS_geteuid32,SYS_getgid32,SYS_getrlimit,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_stat64,SYS_time,SYS_uname,SYS_write,0};
int LANG_PLC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_CSV[256]={158,117,60,39,102,191,SYS_access,SYS_brk,SYS_chmod,SYS_clock_getres,SYS_clock_gettime,SYS_clone,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_ftruncate64,SYS_futex,SYS_getcwd,SYS_getdents64,SYS_geteuid32,SYS_getpid,SYS_getppid,SYS_getrlimit,SYS_gettimeofday,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_lstat64,SYS_mmap2,SYS_mprotect,SYS_mremap,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_sched_getaffinity,SYS_sched_getparam,SYS_sched_get_priority_max,SYS_sched_get_priority_min,SYS_sched_getscheduler,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_sigaltstack,SYS_stat64,SYS_statfs,SYS_tgkill,SYS_time,SYS_uname,SYS_unlink,SYS_write,0};
int LANG_CSC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};



#else

  
int LANG_JV[256]={SYS_fcntl,SYS_getdents64 , SYS_getrlimit, SYS_rt_sigprocmask, SYS_futex, SYS_read, SYS_mmap, SYS_stat, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_readlink, SYS_munmap, SYS_close, SYS_uname, SYS_clone, SYS_uname, SYS_mprotect, SYS_rt_sigaction, SYS_getrlimit, SYS_fstat, SYS_getuid, SYS_getgid, SYS_geteuid, SYS_getegid, SYS_set_thread_area, SYS_set_tid_address, SYS_set_robust_list, SYS_exit_group,158, 0};
int LANG_JC[256]={-1,         -1,              -1,            -1,                 -1,        -1,       -1,        -1,         -1,       -1,        2,          -1,         -1,      -1,           -1,         -1,        -1,        1,         -1,        -1,           -1,                             -1,            -1,          -1,           -1,           -1,            -1,            -1,                  -1,                  -1,                  -1,-1,              0};

int LANG_CV[256]={SYS_read, SYS_uname, SYS_write, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_munmap, SYS_mprotect, SYS_mmap, SYS_fstat, SYS_set_thread_area, 252,SYS_arch_prctl,231,0};
int LANG_CC[256]={-1,       -1,        -1,        -1,       -1,        -1,          -1,         -1,      -1,         -1,           -1,        -1,          -1,                  2,-1,-1,0};

int LANG_PV[256]={SYS_open, SYS_set_thread_area, SYS_brk, SYS_read, SYS_uname, SYS_write, SYS_execve, SYS_ioctl, SYS_readlink, SYS_mmap, SYS_rt_sigaction, SYS_getrlimit, 252,191,158,231,SYS_close,SYS_exit_group,SYS_munmap,SYS_time,4,0};
int LANG_PC[256]={-1,       -1,                  -1,      -1,       -1,        -1,        1,          -1,        -1,           -1,       -1,               -1,            2,-1,-1,-1,-1,-1,-1,-1,-1,0};
//disable Ruby Bash Python on 64bits , so it compile and work with others, at least.
int LANG_RV[256]={126,SYS_access,SYS_arch_prctl,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fstat,SYS_futex,SYS_getegid,SYS_geteuid,SYS_getgid,SYS_getuid,SYS_getrlimit,SYS_mmap,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_tid_address,SYS_write,0};
int LANG_RC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_BV[256]={158,117,60,39,102,191,183,SYS_access,SYS_arch_prctl,SYS_brk,SYS_close,SYS_dup2,SYS_execve,SYS_exit_group,SYS_fcntl,SYS_fstat,SYS_getegid,SYS_geteuid,SYS_getgid,SYS_getpgrp,SYS_getpid,SYS_getppid,SYS_getrlimit,SYS_getuid,SYS_ioctl,SYS_lseek,SYS_mmap,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_stat,SYS_uname,SYS_write,14,0};
int LANG_BC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_YV[256]={158,117,60,39,102,191,SYS_access,SYS_arch_prctl,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl,SYS_fstat,SYS_futex,SYS_getcwd,SYS_getdents,SYS_getegid,SYS_geteuid,SYS_getgid,SYS_getrlimit,SYS_getuid,SYS_ioctl,SYS_lseek,SYS_lstat,SYS_mmap,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_tid_address,SYS_stat,SYS_write,0};
int LANG_YC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};


int LANG_PHV[256]={78,158,117,60,39,102,191,SYS_access,SYS_brk,SYS_clone,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_futex,SYS_getcwd,SYS_getdents64,SYS_getrlimit,SYS_gettimeofday,SYS_ioctl,SYS__llseek,SYS_lstat64,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_stat64,SYS_time,SYS_uname,SYS_write,0};
int LANG_PHC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_PLV[256]={78,158,117,60,39,102,191,SYS_access,SYS_brk,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_futex,SYS_getegid32,SYS_geteuid32,SYS_getgid32,SYS_getrlimit,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_mmap2,SYS_mprotect,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_stat64,SYS_time,SYS_uname,SYS_write,0};
int LANG_PLC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};

int LANG_CSV[256]={158,117,60,39,102,191,SYS_access,SYS_brk,SYS_chmod,SYS_clock_getres,SYS_clock_gettime,SYS_clone,SYS_close,SYS_execve,SYS_exit_group,SYS_fcntl64,SYS_fstat64,SYS_ftruncate64,SYS_futex,SYS_getcwd,SYS_getdents64,SYS_geteuid32,SYS_getpid,SYS_getppid,SYS_getrlimit,SYS_gettimeofday,SYS_getuid32,SYS_ioctl,SYS__llseek,SYS_lstat64,SYS_mmap2,SYS_mprotect,SYS_mremap,SYS_munmap,SYS_open,SYS_read,SYS_readlink,SYS_rt_sigaction,SYS_rt_sigprocmask,SYS_sched_getaffinity,SYS_sched_getparam,SYS_sched_get_priority_max,SYS_sched_get_priority_min,SYS_sched_getscheduler,SYS_set_robust_list,SYS_set_thread_area,SYS_set_tid_address,SYS_sigaltstack,SYS_stat64,SYS_statfs,SYS_tgkill,SYS_time,SYS_uname,SYS_unlink,SYS_write,0};
int LANG_CSC[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0};


#endif
