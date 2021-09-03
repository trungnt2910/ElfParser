# 1 "dl-tls.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "../include/stdc-predef.h" 1
# 1 "<command-line>" 2
# 1 "/home/trung/CodingProjects/build-glibc-2.33/libc-modules.h" 1
# 1 "<command-line>" 2
# 1 "./../include/libc-symbols.h" 1
# 85 "./../include/libc-symbols.h"
# 1 "/home/trung/CodingProjects/build-glibc-2.33/config.h" 1
# 86 "./../include/libc-symbols.h" 2
# 891 "./../include/libc-symbols.h"
# 1 "../sysdeps/i386/symbol-hacks.h" 1
# 19 "../sysdeps/i386/symbol-hacks.h"
# 1 "../sysdeps/wordsize-32/divdi3-symbol-hacks.h" 1
# 27 "../sysdeps/wordsize-32/divdi3-symbol-hacks.h"
asm ("__divdi3 = __divdi3_internal");
asm ("__udivdi3 = __udivdi3_internal");
asm ("__moddi3 = __moddi3_internal");
asm ("__umoddi3 = __umoddi3_internal");
# 20 "../sysdeps/i386/symbol-hacks.h" 2

# 1 "../sysdeps/generic/symbol-hacks.h" 1



asm ("memmove = __GI_memmove");
asm ("memset = __GI_memset");
asm ("memcpy = __GI_memcpy");
# 22 "../sysdeps/i386/symbol-hacks.h" 2
# 892 "./../include/libc-symbols.h" 2
# 1 "<command-line>" 2
# 1 "dl-tls.c"
# 19 "dl-tls.c"
# 1 "../include/assert.h" 1
# 1 "../assert/assert.h" 1
# 35 "../assert/assert.h"
# 1 "../include/features.h" 1
# 473 "../include/features.h"
# 1 "../include/sys/cdefs.h" 1


# 1 "../misc/sys/cdefs.h" 1
# 462 "../misc/sys/cdefs.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 463 "../misc/sys/cdefs.h" 2
# 1 "../sysdeps/ieee754/ldbl-96/bits/long-double.h" 1
# 464 "../misc/sys/cdefs.h" 2
# 4 "../include/sys/cdefs.h" 2
# 12 "../include/sys/cdefs.h"
extern void __chk_fail (void) __attribute__ ((__noreturn__));
extern __typeof (__chk_fail) __chk_fail __asm__ ("" "__GI___chk_fail") __attribute__ ((visibility ("hidden")));

# 474 "../include/features.h" 2
# 497 "../include/features.h"
# 1 "../include/gnu/stubs.h" 1
# 498 "../include/features.h" 2
# 36 "../assert/assert.h" 2
# 64 "../assert/assert.h"



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



# 2 "../include/assert.h" 2





extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line,
      const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_fail_base (const char *fmt, const char *assertion,
    const char *file, unsigned int line,
    const char *function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__)) __attribute__ ((visibility ("hidden")));


extern __typeof (__assert_fail) __assert_fail __asm__ ("" "__GI___assert_fail") __attribute__ ((visibility ("hidden")));
extern __typeof (__assert_perror_fail) __assert_perror_fail __asm__ ("" "__GI___assert_perror_fail") __attribute__ ((visibility ("hidden")));
# 20 "dl-tls.c" 2
# 1 "../include/errno.h" 1

# 1 "../stdlib/errno.h" 1
# 28 "../stdlib/errno.h"
# 1 "../sysdeps/unix/sysv/linux/bits/errno.h" 1
# 26 "../sysdeps/unix/sysv/linux/bits/errno.h"
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/i386-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/i386-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "../sysdeps/unix/sysv/linux/bits/errno.h" 2
# 29 "../stdlib/errno.h" 2








extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "../bits/types/error_t.h" 1
# 22 "../bits/types/error_t.h"
typedef int error_t;
# 49 "../stdlib/errno.h" 2




# 3 "../include/errno.h" 2
# 31 "../include/errno.h"
extern __thread int __libc_errno __attribute__ ((tls_model ("initial-exec")));





extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__))



;
extern __typeof (__errno_location) __errno_location __asm__ ("" "__GI___errno_location") __attribute__ ((visibility ("hidden")));
# 21 "dl-tls.c" 2
# 1 "../include/libintl.h" 1

# 1 "../intl/libintl.h" 1
# 34 "../intl/libintl.h"





extern char *gettext (const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname,
   const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
     const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
         unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname, const char *__msgid1,
   const char *__msgid2, unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname, const char *__msgid1,
    const char *__msgid2, unsigned long int __n,
    int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname) __attribute__ ((__nothrow__ ));



extern char *bindtextdomain (const char *__domainname,
        const char *__dirname) __attribute__ ((__nothrow__ ));



extern char *bind_textdomain_codeset (const char *__domainname,
          const char *__codeset) __attribute__ ((__nothrow__ ));







# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 101 "../intl/libintl.h" 2


# 1 "../include/locale.h" 1

# 1 "../locale/locale.h" 1
# 28 "../locale/locale.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 29 "../locale/locale.h" 2
# 1 "../include/bits/locale.h" 1
# 1 "../locale/bits/locale.h" 1
# 2 "../include/bits/locale.h" 2
# 30 "../locale/locale.h" 2


# 51 "../locale/locale.h"
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "../locale/locale.h"
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ ));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ ));
# 135 "../locale/locale.h"
# 1 "../include/bits/types/locale_t.h" 1
# 1 "../locale/bits/types/locale_t.h" 1
# 22 "../locale/bits/types/locale_t.h"
# 1 "../include/bits/types/__locale_t.h" 1
# 1 "../locale/bits/types/__locale_t.h" 1
# 28 "../locale/bits/types/__locale_t.h"
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 2 "../include/bits/types/__locale_t.h" 2
# 23 "../locale/bits/types/locale_t.h" 2

typedef __locale_t locale_t;
# 2 "../include/bits/types/locale_t.h" 2
# 136 "../locale/locale.h" 2





extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ ));
# 176 "../locale/locale.h"
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ ));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ ));








# 3 "../include/locale.h" 2


extern __typeof (uselocale) __uselocale;

extern __typeof (setlocale) setlocale __asm__ ("" "__GI_setlocale") __attribute__ ((visibility ("hidden")));
extern __typeof (__uselocale) __uselocale __asm__ ("" "__GI___uselocale") __attribute__ ((visibility ("hidden")));




extern struct loaded_l10nfile *_nl_locale_file_list[] __attribute__ ((visibility ("hidden")));


extern const struct __locale_struct _nl_C_locobj __attribute__ ((visibility ("hidden")));



extern struct lconv *__localeconv (void);


extern const char *__current_locale_name (int category) __attribute__ ((visibility ("hidden")));
# 104 "../intl/libintl.h" 2
# 121 "../intl/libintl.h"

# 3 "../include/libintl.h" 2






extern char *__gettext (const char *__msgid)
     __attribute__ ((__format_arg__ (1)));
extern char *__dgettext (const char *__domainname,
    const char *__msgid)
     __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
     const char *__msgid, int __category)
     __attribute__ ((__format_arg__ (2)));
extern __typeof (__dcgettext) __dcgettext __asm__ ("" "__GI___dcgettext") __attribute__ ((visibility ("hidden")));

extern char *__ngettext (const char *__msgid1, const char *__msgid2,
    unsigned long int __n)
     __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
extern char *__dngettext (const char *__domainname,
     const char *__msgid1, const char *__msgid2,
     unsigned long int __n)
     __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
extern char *__dcngettext (const char *__domainname,
      const char *__msgid1, const char *__msgid2,
      unsigned long int __n, int __category)
     __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));

extern char *__textdomain (const char *__domainname);
extern char *__bindtextdomain (const char *__domainname,
          const char *__dirname);
extern char *__bind_textdomain_codeset (const char *__domainname,
     const char *__codeset);

extern const char _libc_intl_domainname[];
extern __typeof (_libc_intl_domainname) _libc_intl_domainname __asm__ ("" "__GI__libc_intl_domainname") __attribute__ ((visibility ("hidden")));
# 22 "dl-tls.c" 2
# 1 "../include/signal.h" 1

# 1 "../signal/signal.h" 1
# 27 "../signal/signal.h"


# 1 "../include/bits/types.h" 1
# 1 "../posix/bits/types.h" 1
# 27 "../posix/bits/types.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 28 "../posix/bits/types.h" 2
# 1 "../sysdeps/unix/sysv/linux/x86/bits/timesize.h" 1
# 29 "../posix/bits/types.h" 2


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;



typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;






__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;







__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
# 141 "../posix/bits/types.h"
# 1 "../sysdeps/unix/sysv/linux/x86/bits/typesizes.h" 1
# 142 "../posix/bits/types.h" 2
# 1 "../bits/time64.h" 1
# 143 "../posix/bits/types.h" 2


__extension__ typedef __uint64_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __uint64_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __int64_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __uint64_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef __int64_t __suseconds64_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __int64_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __uint64_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __uint64_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;







__extension__ typedef __int64_t __time64_t;
# 2 "../include/bits/types.h" 2
# 30 "../signal/signal.h" 2
# 1 "../bits/signum-generic.h" 1
# 76 "../bits/signum-generic.h"
# 1 "../sysdeps/unix/sysv/linux/bits/signum-arch.h" 1
# 77 "../bits/signum-generic.h" 2
# 31 "../signal/signal.h" 2

# 1 "../include/bits/types/sig_atomic_t.h" 1
# 1 "../signal/bits/types/sig_atomic_t.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../signal/bits/types/sig_atomic_t.h" 2



typedef __sig_atomic_t sig_atomic_t;
# 2 "../include/bits/types/sig_atomic_t.h" 2
# 33 "../signal/signal.h" 2


# 1 "../include/bits/types/sigset_t.h" 1
# 1 "../signal/bits/types/sigset_t.h" 1



# 1 "../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h" 1




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "../signal/bits/types/sigset_t.h" 2


typedef __sigset_t sigset_t;
# 2 "../include/bits/types/sigset_t.h" 2
# 36 "../signal/signal.h" 2




typedef __pid_t pid_t;





typedef __uid_t uid_t;






# 1 "../include/bits/types/struct_timespec.h" 1
# 1 "../time/bits/types/struct_timespec.h" 1




# 1 "../include/bits/types.h" 1
# 6 "../time/bits/types/struct_timespec.h" 2
# 1 "../include/bits/endian.h" 1
# 1 "../string/bits/endian.h" 1
# 35 "../string/bits/endian.h"
# 1 "../sysdeps/x86/bits/endianness.h" 1
# 36 "../string/bits/endian.h" 2
# 2 "../include/bits/endian.h" 2
# 7 "../time/bits/types/struct_timespec.h" 2



struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "../time/bits/types/struct_timespec.h"
};
# 2 "../include/bits/types/struct_timespec.h" 2
# 54 "../signal/signal.h" 2



# 1 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h" 1



# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 5 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h" 2
# 1 "../include/bits/types.h" 1
# 6 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h" 2
# 1 "../include/bits/types/__sigval_t.h" 1
# 1 "../signal/bits/types/__sigval_t.h" 1
# 24 "../signal/bits/types/__sigval_t.h"
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 2 "../include/bits/types/__sigval_t.h" 2
# 7 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h" 2
# 16 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h"
# 1 "../sysdeps/unix/sysv/linux/x86/bits/siginfo-arch.h" 1
# 17 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h" 2
# 36 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h"
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;
# 51 "../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h"
    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "../signal/signal.h" 2
# 1 "../sysdeps/unix/sysv/linux/bits/siginfo-consts.h" 1
# 35 "../sysdeps/unix/sysv/linux/bits/siginfo-consts.h"
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,

  SI_TKILL,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 66 "../sysdeps/unix/sysv/linux/bits/siginfo-consts.h"
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK,

  ILL_BADIADDR

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB,

  FPE_FLTUNK = 14,

  FPE_CONDTRAP

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR,

  SEGV_ACCADI,

  SEGV_ADIDERR,

  SEGV_ADIPERR,

  SEGV_MTEAERR,

  SEGV_MTESERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE,

  TRAP_BRANCH,

  TRAP_HWBKPT,

  TRAP_UNK

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};





# 1 "../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h" 1
# 214 "../sysdeps/unix/sysv/linux/bits/siginfo-consts.h" 2
# 59 "../signal/signal.h" 2



# 1 "../include/bits/types/sigval_t.h" 1
# 1 "../signal/bits/types/sigval_t.h" 1



# 1 "../include/bits/types/__sigval_t.h" 1
# 5 "../signal/bits/types/sigval_t.h" 2
# 16 "../signal/bits/types/sigval_t.h"
typedef __sigval_t sigval_t;
# 2 "../include/bits/types/sigval_t.h" 2
# 63 "../signal/signal.h" 2



# 1 "../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h" 1



# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 5 "../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h" 2
# 1 "../include/bits/types.h" 1
# 6 "../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h" 2
# 1 "../include/bits/types/__sigval_t.h" 1
# 7 "../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h" 2
# 17 "../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h"
typedef union pthread_attr_t pthread_attr_t;




typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "../signal/signal.h" 2
# 1 "../sysdeps/unix/sysv/linux/bits/sigevent-consts.h" 1
# 27 "../sysdeps/unix/sysv/linux/bits/sigevent-consts.h"
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "../signal/signal.h" 2




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));






extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
# 112 "../signal/signal.h"
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ ));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ ));



extern int raise (int __sig) __attribute__ ((__nothrow__ ));



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ ));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 151 "../signal/signal.h"
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__ ("Use the sigsuspend function instead")));
# 173 "../signal/signal.h"
extern int sigblock (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
# 188 "../signal/signal.h"
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ )) ;


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ )) ;


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) ;


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) ;


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ )) ;



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ )) ;


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ )) ;


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ )) ;




# 1 "../sysdeps/unix/sysv/linux/bits/sigaction.h" 1
# 27 "../sysdeps/unix/sysv/linux/bits/sigaction.h"
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 230 "../signal/signal.h" 2


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ ));






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ ));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ )) ;







extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     ;







extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) ;






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ ));







# 1 "../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h" 1
# 25 "../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h"
# 1 "../include/bits/types.h" 1
# 26 "../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h" 2





struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};





struct _fpstate
{

  __uint32_t cw;
  __uint32_t sw;
  __uint32_t tag;
  __uint32_t ipoff;
  __uint32_t cssel;
  __uint32_t dataoff;
  __uint32_t datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  __uint32_t _fxsr_env[6];
  __uint32_t mxcsr;
  __uint32_t __glibc_reserved1;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t __glibc_reserved2[56];
};
# 95 "../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h"
struct sigcontext
{
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate * fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
# 177 "../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h"
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 289 "../signal/signal.h" 2


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ ));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4

# 209 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef unsigned int size_t;
# 299 "../signal/signal.h" 2

# 1 "../sysdeps/unix/sysv/linux/bits/types/stack_t.h" 1
# 23 "../sysdeps/unix/sysv/linux/bits/types/stack_t.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 24 "../sysdeps/unix/sysv/linux/bits/types/stack_t.h" 2



# 26 "../sysdeps/unix/sysv/linux/bits/types/stack_t.h"
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 301 "../signal/signal.h" 2


# 1 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h" 1
# 23 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h"
# 1 "../include/bits/types.h" 1
# 24 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h" 2
# 1 "../include/bits/types/sigset_t.h" 1
# 25 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h" 2
# 156 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h"
typedef int greg_t;
# 165 "../sysdeps/unix/sysv/linux/x86/sys/ucontext.h"
typedef greg_t gregset_t[19];



enum
{
  REG_GS = 0,

  REG_FS,

  REG_ES,

  REG_DS,

  REG_EDI,

  REG_ESI,

  REG_EBP,

  REG_ESP,

  REG_EBX,

  REG_EDX,

  REG_ECX,

  REG_EAX,

  REG_TRAPNO,

  REG_ERR,

  REG_EIP,

  REG_CS,

  REG_EFL,

  REG_UESP,

  REG_SS

};



struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    unsigned long int __ssp[4];
  } ucontext_t;
# 304 "../signal/signal.h" 2







extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ ))
  __attribute__ ((__deprecated__ ("Use sigaction with SA_RESTART instead")));

# 1 "../sysdeps/unix/sysv/linux/bits/sigstack.h" 1
# 315 "../signal/signal.h" 2
# 1 "../sysdeps/unix/sysv/linux/bits/ss_flags.h" 1
# 27 "../sysdeps/unix/sysv/linux/bits/ss_flags.h"
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 316 "../signal/signal.h" 2



extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ ));




# 1 "../include/bits/types/struct_sigstack.h" 1
# 1 "../signal/bits/types/struct_sigstack.h" 1
# 23 "../signal/bits/types/struct_sigstack.h"
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 2 "../include/bits/types/struct_sigstack.h" 2
# 326 "../signal/signal.h" 2







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));






extern int sighold (int __sig) __attribute__ ((__nothrow__ ))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ ))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ ))
  __attribute__ ((__deprecated__ ("Use the signal function instead")));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ ))
  __attribute__ ((__deprecated__ ("Use the signal and sigprocmask functions instead")))
                                                        ;





# 1 "../sysdeps/nptl/bits/pthreadtypes.h" 1
# 23 "../sysdeps/nptl/bits/pthreadtypes.h"
# 1 "../sysdeps/nptl/bits/thread-shared-types.h" 1
# 44 "../sysdeps/nptl/bits/thread-shared-types.h"
# 1 "../sysdeps/x86/nptl/bits/pthreadtypes-arch.h" 1
# 21 "../sysdeps/x86/nptl/bits/pthreadtypes-arch.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 22 "../sysdeps/x86/nptl/bits/pthreadtypes-arch.h" 2
# 45 "../sysdeps/nptl/bits/thread-shared-types.h" 2




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "../sysdeps/nptl/bits/thread-shared-types.h"
# 1 "../sysdeps/x86/nptl/bits/struct_mutex.h" 1
# 22 "../sysdeps/x86/nptl/bits/struct_mutex.h"
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;





  int __kind;






  unsigned int __nusers;
  __extension__ union
  {
    struct
    {
      short __espins;
      short __eelision;


    } __elision_data;
    __pthread_slist_t __list;
  };


};
# 75 "../sysdeps/nptl/bits/thread-shared-types.h" 2
# 87 "../sysdeps/nptl/bits/thread-shared-types.h"
# 1 "../sysdeps/x86/nptl/bits/struct_rwlock.h" 1
# 23 "../sysdeps/x86/nptl/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
# 49 "../sysdeps/x86/nptl/bits/struct_rwlock.h"
  unsigned char __flags;
  unsigned char __shared;
  signed char __rwelision;
  unsigned char __pad2;
  int __cur_writer;

};
# 88 "../sysdeps/nptl/bits/thread-shared-types.h" 2




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "../sysdeps/nptl/bits/pthreadtypes.h" 2



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};






typedef union
{
  struct __pthread_mutex_s __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 362 "../signal/signal.h" 2
# 1 "../sysdeps/pthread/bits/sigthread.h" 1
# 31 "../sysdeps/pthread/bits/sigthread.h"
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ ));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ ));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ ));
# 363 "../signal/signal.h" 2






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ ));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ ));





# 1 "../sysdeps/unix/sysv/linux/bits/signal_ext.h" 1
# 29 "../sysdeps/unix/sysv/linux/bits/signal_ext.h"
extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);
# 378 "../signal/signal.h" 2


# 3 "../include/signal.h" 2


# 1 "../sysdeps/unix/sysv/linux/sigsetops.h" 1
# 22 "../sysdeps/unix/sysv/linux/sigsetops.h"
# 1 "../include/signal.h" 1
# 23 "../sysdeps/unix/sysv/linux/sigsetops.h" 2
# 1 "../include/limits.h" 1
# 26 "../include/limits.h"
# 1 "../bits/libc-header-start.h" 1
# 27 "../include/limits.h" 2
# 124 "../include/limits.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h" 1 3 4
# 125 "../include/limits.h" 2
# 195 "../include/limits.h"
# 1 "../include/bits/posix1_lim.h" 1
# 1 "../posix/bits/posix1_lim.h" 1
# 27 "../posix/bits/posix1_lim.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 28 "../posix/bits/posix1_lim.h" 2
# 161 "../posix/bits/posix1_lim.h"
# 1 "../sysdeps/unix/sysv/linux/bits/local_lim.h" 1
# 38 "../sysdeps/unix/sysv/linux/bits/local_lim.h"
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "../sysdeps/unix/sysv/linux/bits/local_lim.h" 2
# 162 "../posix/bits/posix1_lim.h" 2
# 2 "../include/bits/posix1_lim.h" 2
# 196 "../include/limits.h" 2



# 1 "../include/bits/posix2_lim.h" 1
# 1 "../posix/bits/posix2_lim.h" 1
# 2 "../include/bits/posix2_lim.h" 2
# 200 "../include/limits.h" 2



# 1 "../include/bits/xopen_lim.h" 1
# 64 "../include/bits/xopen_lim.h"
# 1 "../sysdeps/unix/sysv/linux/bits/uio_lim.h" 1
# 65 "../include/bits/xopen_lim.h" 2
# 204 "../include/limits.h" 2
# 24 "../sysdeps/unix/sysv/linux/sigsetops.h" 2
# 1 "../include/libc-pointer-arith.h" 1
# 22 "../include/libc-pointer-arith.h"
# 1 "../include/stdint.h" 1
# 1 "../stdlib/stdint.h" 1
# 26 "../stdlib/stdint.h"
# 1 "../bits/libc-header-start.h" 1
# 27 "../stdlib/stdint.h" 2
# 1 "../include/bits/types.h" 1
# 28 "../stdlib/stdint.h" 2
# 1 "../bits/wchar.h" 1
# 29 "../stdlib/stdint.h" 2
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 30 "../stdlib/stdint.h" 2




# 1 "../bits/stdint-intn.h" 1
# 22 "../bits/stdint-intn.h"
# 1 "../include/bits/types.h" 1
# 23 "../bits/stdint-intn.h" 2

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "../stdlib/stdint.h" 2


# 1 "../bits/stdint-uintn.h" 1
# 22 "../bits/stdint-uintn.h"
# 1 "../include/bits/types.h" 1
# 23 "../bits/stdint-uintn.h" 2

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "../stdlib/stdint.h" 2





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 93 "../stdlib/stdint.h"
typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 2 "../include/stdint.h" 2
# 23 "../include/libc-pointer-arith.h" 2
# 25 "../sysdeps/unix/sysv/linux/sigsetops.h" 2






static inline unsigned long int
__sigword (int sig)
{
  return (sig - 1) / 32;
}





_Static_assert (((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32) <= (1024 / (8 * sizeof (unsigned long int))),
  "__NSIG_WORDS > _SIGSET_WORDS");






static inline void
__sigemptyset (sigset_t *set)
{
  int cnt = ((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32);
  while (--cnt >= 0)
   set->__val[cnt] = 0;
}

static inline void
__sigfillset (sigset_t *set)
{
  int cnt = ((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32);
  while (--cnt >= 0)
   set->__val[cnt] = ~0UL;
}

static inline int
__sigisemptyset (const sigset_t *set)
{
  int cnt = ((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32);
  int ret = set->__val[--cnt];
  while (ret == 0 && --cnt >= 0)
    ret = set->__val[cnt];
  return ret == 0;
}

static inline void
__sigandset (sigset_t *dest, const sigset_t *left, const sigset_t *right)
{
  int cnt = ((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32);
  while (--cnt >= 0)
    dest->__val[cnt] = left->__val[cnt] & right->__val[cnt];
}

static inline void
__sigorset (sigset_t *dest, const sigset_t *left, const sigset_t *right)
{
  int cnt = ((((((64 + 1) - 1)) + (32) - 1) & -((__typeof__ ((((64 + 1) - 1)) + (32) - 1)) ((32)))) / 32);
  while (--cnt >= 0)
    dest->__val[cnt] = left->__val[cnt] | right->__val[cnt];
}

static inline int
__sigismember (const sigset_t *set, int sig)
{
  unsigned long int mask = (1UL << (((sig) - 1) % 32));
  unsigned long int word = __sigword (sig);
  return set->__val[word] & mask ? 1 : 0;
}

static inline void
__sigaddset (sigset_t *set, int sig)
{
  unsigned long int mask = (1UL << (((sig) - 1) % 32));
  unsigned long int word = __sigword (sig);
  set->__val[word] |= mask;
}

static inline void
__sigdelset (sigset_t *set, int sig)
{
  unsigned long int mask = (1UL << (((sig) - 1) % 32));
  unsigned long int word = __sigword (sig);
  set->__val[word] &= ~mask;
}
# 6 "../include/signal.h" 2

extern __typeof (sigemptyset) sigemptyset __asm__ ("" "__GI_sigemptyset") __attribute__ ((visibility ("hidden")));
extern __typeof (sigfillset) sigfillset __asm__ ("" "__GI_sigfillset") __attribute__ ((visibility ("hidden")));
extern __typeof (sigaddset) sigaddset __asm__ ("" "__GI_sigaddset") __attribute__ ((visibility ("hidden")));
extern __typeof (sigdelset) sigdelset __asm__ ("" "__GI_sigdelset") __attribute__ ((visibility ("hidden")));
extern __typeof (sigismember) sigismember __asm__ ("" "__GI_sigismember") __attribute__ ((visibility ("hidden")));
extern int __sigpause (int sig_or_mask, int is_sig);
extern __typeof (__sigpause) __sigpause __asm__ ("" "__GI___sigpause") __attribute__ ((visibility ("hidden")));
extern __typeof (raise) raise __asm__ ("" "__GI_raise") __attribute__ ((visibility ("hidden")));
extern __typeof (__libc_current_sigrtmin) __libc_current_sigrtmin __asm__ ("" "__GI___libc_current_sigrtmin") __attribute__ ((visibility ("hidden")));
extern __typeof (__libc_current_sigrtmax) __libc_current_sigrtmax __asm__ ("" "__GI___libc_current_sigrtmax") __attribute__ ((visibility ("hidden")));
extern const char * const __sys_siglist[(64 + 1)];
extern __typeof (__sys_siglist) __sys_siglist __asm__ ("" "__GI___sys_siglist") __attribute__ ((visibility ("hidden")));
extern const char * const __sys_sigabbrev[(64 + 1)];
extern __typeof (__sys_sigabbrev) __sys_sigabbrev __asm__ ("" "__GI___sys_sigabbrev") __attribute__ ((visibility ("hidden")));


extern __sighandler_t __bsd_signal (int __sig, __sighandler_t __handler);
extern int __kill (__pid_t __pid, int __sig);
extern __typeof (__kill) __kill __asm__ ("" "__GI___kill") __attribute__ ((visibility ("hidden")));
extern int __sigaction (int __sig, const struct sigaction *__restrict __act,
   struct sigaction *__restrict __oact);
extern __typeof (__sigaction) __sigaction __asm__ ("" "__GI___sigaction") __attribute__ ((visibility ("hidden")));
extern int __sigblock (int __mask);
extern __typeof (__sigblock) __sigblock __asm__ ("" "__GI___sigblock") __attribute__ ((visibility ("hidden")));
extern int __sigsetmask (int __mask);
extern int __sigprocmask (int __how,
     const sigset_t *__set, sigset_t *__oset);
extern __typeof (__sigprocmask) __sigprocmask __asm__ ("" "__GI___sigprocmask") __attribute__ ((visibility ("hidden")));
extern int __sigsuspend (const sigset_t *__set);
extern __typeof (__sigsuspend) __sigsuspend __asm__ ("" "__GI___sigsuspend") __attribute__ ((visibility ("hidden")));
extern int __sigwait (const sigset_t *__set, int *__sig);
extern __typeof (__sigwait) __sigwait __asm__ ("" "__GI___sigwait") __attribute__ ((visibility ("hidden")));
extern int __sigwaitinfo (const sigset_t *__set, siginfo_t *__info);
extern __typeof (__sigwaitinfo) __sigwaitinfo __asm__ ("" "__GI___sigwaitinfo") __attribute__ ((visibility ("hidden")));



# 1 "../include/struct___timespec64.h" 1






# 1 "../include/endian.h" 1
# 1 "../string/endian.h" 1
# 24 "../string/endian.h"
# 1 "../include/bits/endian.h" 1
# 25 "../string/endian.h" 2
# 35 "../string/endian.h"
# 1 "../bits/byteswap.h" 1
# 27 "../bits/byteswap.h"
# 1 "../include/bits/types.h" 1
# 28 "../bits/byteswap.h" 2





static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "../bits/byteswap.h"
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "../string/endian.h" 2
# 1 "../bits/uintn-identity.h" 1
# 26 "../bits/uintn-identity.h"
# 1 "../include/bits/types.h" 1
# 27 "../bits/uintn-identity.h" 2





static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "../string/endian.h" 2
# 2 "../include/endian.h" 2
# 8 "../include/struct___timespec64.h" 2







struct __timespec64
{
  __time64_t tv_sec;




  __int32_t tv_nsec;
  __int32_t :32;

};
# 45 "../include/signal.h" 2
extern int __sigtimedwait64 (const sigset_t *__set, siginfo_t *__info,
        const struct __timespec64 *__timeout);
extern __typeof (__sigtimedwait64) __sigtimedwait64 __asm__ ("" "__GI___sigtimedwait64") __attribute__ ((visibility ("hidden")));

extern int __sigtimedwait (const sigset_t *__set, siginfo_t *__info,
      const struct timespec *__timeout);
extern __typeof (__sigtimedwait) __sigtimedwait __asm__ ("" "__GI___sigtimedwait") __attribute__ ((visibility ("hidden")));
extern int __sigqueue (__pid_t __pid, int __sig,
         const union sigval __val);

extern int __sigreturn (struct sigcontext *__scp);

extern int __sigaltstack (const stack_t *__ss,
     stack_t *__oss);
extern __typeof (__sigaltstack) __sigaltstack __asm__ ("" "__GI___sigaltstack") __attribute__ ((visibility ("hidden")));
extern int __libc_sigaction (int sig, const struct sigaction *act,
        struct sigaction *oact);
extern __typeof (__libc_sigaction) __libc_sigaction __asm__ ("" "__GI___libc_sigaction") __attribute__ ((visibility ("hidden")));

extern int __default_sigpause (int mask);
extern int __xpg_sigpause (int sig);


extern int __libc_allocate_rtsig (int __high);
# 23 "dl-tls.c" 2
# 1 "../include/stdlib.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef long int wchar_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));






  __float128 __max_align_f128 __attribute__((__aligned__(__alignof(__float128))));

} max_align_t;
# 5 "../include/stdlib.h" 2



# 1 "../sysdeps/x86/bits/floatn.h" 1
# 119 "../sysdeps/x86/bits/floatn.h"
# 1 "../bits/floatn-common.h" 1
# 24 "../bits/floatn-common.h"
# 1 "../sysdeps/ieee754/ldbl-96/bits/long-double.h" 1
# 25 "../bits/floatn-common.h" 2
# 120 "../sysdeps/x86/bits/floatn.h" 2
# 9 "../include/stdlib.h" 2






# 1 "../stdlib/stdlib.h" 1
# 25 "../stdlib/stdlib.h"
# 1 "../bits/libc-header-start.h" 1
# 26 "../stdlib/stdlib.h" 2





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 32 "../stdlib/stdlib.h" 2







# 1 "../sysdeps/unix/sysv/linux/bits/waitflags.h" 1
# 40 "../stdlib/stdlib.h" 2
# 1 "../bits/waitstatus.h" 1
# 41 "../stdlib/stdlib.h" 2
# 58 "../stdlib/stdlib.h"

# 58 "../stdlib/stdlib.h"
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "../stdlib/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;
# 140 "../stdlib/stdlib.h"
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) ;
# 176 "../stdlib/stdlib.h"
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) ;




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ )) ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ )) ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ )) ;
# 232 "../stdlib/stdlib.h"
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ )) ;



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ )) ;



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ )) ;



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ )) ;



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ )) ;
# 272 "../stdlib/stdlib.h"
# 1 "../include/bits/types/locale_t.h" 1
# 273 "../stdlib/stdlib.h" 2

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ )) ;

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ )) ;

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ )) ;

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ )) ;

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ )) ;

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ )) ;

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ )) ;
# 316 "../stdlib/stdlib.h"
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ )) ;



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ )) ;



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ )) ;



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ )) ;



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ )) ;
# 360 "../stdlib/stdlib.h"
extern __inline int
__attribute__ ((__nothrow__ )) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) 
# 363 "../stdlib/stdlib.h" 3 4
                                        ((void *)0)
# 363 "../stdlib/stdlib.h"
                                            , 10);
}
extern __inline long int
__attribute__ ((__nothrow__ )) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) 
# 368 "../stdlib/stdlib.h" 3 4
                                  ((void *)0)
# 368 "../stdlib/stdlib.h"
                                      , 10);
}


__extension__ extern __inline long long int
__attribute__ ((__nothrow__ )) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) 
# 375 "../stdlib/stdlib.h" 3 4
                                   ((void *)0)
# 375 "../stdlib/stdlib.h"
                                       , 10);
}
# 385 "../stdlib/stdlib.h"
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;




# 1 "../include/sys/types.h" 1
# 1 "../posix/sys/types.h" 1
# 27 "../posix/sys/types.h"


# 1 "../include/bits/types.h" 1
# 30 "../posix/sys/types.h" 2



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 85 "../posix/sys/types.h"
typedef __off_t off_t;






typedef __off64_t off64_t;
# 103 "../posix/sys/types.h"
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "../include/bits/types/clock_t.h" 1
# 1 "../time/bits/types/clock_t.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/clock_t.h" 2


typedef __clock_t clock_t;
# 2 "../include/bits/types/clock_t.h" 2
# 127 "../posix/sys/types.h" 2

# 1 "../include/bits/types/clockid_t.h" 1
# 1 "../time/bits/types/clockid_t.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/clockid_t.h" 2


typedef __clockid_t clockid_t;
# 2 "../include/bits/types/clockid_t.h" 2
# 129 "../posix/sys/types.h" 2
# 1 "../include/bits/types/time_t.h" 1
# 1 "../time/bits/types/time_t.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/time_t.h" 2


typedef __time_t time_t;
# 2 "../include/bits/types/time_t.h" 2
# 130 "../posix/sys/types.h" 2
# 1 "../include/bits/types/timer_t.h" 1
# 1 "../time/bits/types/timer_t.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/timer_t.h" 2


typedef __timer_t timer_t;
# 2 "../include/bits/types/timer_t.h" 2
# 131 "../posix/sys/types.h" 2



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 145 "../posix/sys/types.h" 2



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "../posix/sys/types.h"
# 1 "../include/endian.h" 1
# 177 "../posix/sys/types.h" 2


# 1 "../include/sys/select.h" 1

# 1 "../misc/sys/select.h" 1
# 27 "../misc/sys/select.h"
# 1 "../include/bits/types.h" 1
# 28 "../misc/sys/select.h" 2


# 1 "../bits/select.h" 1
# 31 "../misc/sys/select.h" 2


# 1 "../include/bits/types/sigset_t.h" 1
# 34 "../misc/sys/select.h" 2


# 1 "../include/bits/types/time_t.h" 1
# 37 "../misc/sys/select.h" 2
# 1 "../include/bits/types/struct_timeval.h" 1
# 1 "../time/bits/types/struct_timeval.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/struct_timeval.h" 2



struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 2 "../include/bits/types/struct_timeval.h" 2
# 38 "../misc/sys/select.h" 2

# 1 "../include/bits/types/struct_timespec.h" 1
# 40 "../misc/sys/select.h" 2
# 49 "../misc/sys/select.h"
typedef long int __fd_mask;
# 59 "../misc/sys/select.h"
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "../misc/sys/select.h"

# 101 "../misc/sys/select.h"
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "../misc/sys/select.h"
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "../misc/sys/select.h"

# 3 "../include/sys/select.h" 2
# 11 "../include/sys/select.h"
# 1 "../include/struct___timeval64.h" 1
# 11 "../include/struct___timeval64.h"
struct __timeval64
{
  __time64_t tv_sec;
  __suseconds64_t tv_usec;
};
# 12 "../include/sys/select.h" 2

extern int __pselect64 (int __nfds, fd_set *__readfds,
   fd_set *__writefds, fd_set *__exceptfds,
   const struct __timespec64 *__timeout,
   const __sigset_t *__sigmask);
extern __typeof (__pselect64) __pselect64 __asm__ ("" "__GI___pselect64") __attribute__ ((visibility ("hidden")));

extern int __pselect32 (int __nfds, fd_set *__readfds,
   fd_set *__writefds, fd_set *__exceptfds,
   const struct __timespec64 *__timeout,
   const __sigset_t *__sigmask)
  __attribute__ ((visibility ("hidden")));

extern int __select64 (int __nfds, fd_set *__readfds,
         fd_set *__writefds, fd_set *__exceptfds,
         struct __timeval64 *__timeout);
extern __typeof (__select64) __select64 __asm__ ("" "__GI___select64") __attribute__ ((visibility ("hidden")));

extern int __pselect (int __nfds, fd_set *__readfds,
        fd_set *__writefds, fd_set *__exceptfds,
        const struct timespec *__timeout,
        const __sigset_t *__sigmask);

extern int __select (int __nfds, fd_set *__restrict __readfds,
       fd_set *__restrict __writefds,
       fd_set *__restrict __exceptfds,
       struct timeval *__restrict __timeout);
extern __typeof (__select) __select __asm__ ("" "__GI___select") __attribute__ ((visibility ("hidden")));
# 180 "../posix/sys/types.h" 2





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "../posix/sys/types.h"
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 230 "../posix/sys/types.h"

# 2 "../include/sys/types.h" 2
# 395 "../stdlib/stdlib.h" 2






extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) ;



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) ;





extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) ;


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) ;


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) ;


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) ;
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) ;




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ ));


# 1 "../include/alloca.h" 1


# 1 "../stdlib/alloca.h" 1
# 24 "../stdlib/alloca.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "../stdlib/alloca.h" 2







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));






# 4 "../include/alloca.h" 2



# 1 "../include/stackinfo.h" 1
# 24 "../include/stackinfo.h"
# 1 "../sysdeps/i386/stackinfo.h" 1
# 24 "../sysdeps/i386/stackinfo.h"
# 1 "../include/elf.h" 1

# 1 "../elf/elf.h" 1
# 24 "../elf/elf.h"
# 1 "../include/stdint.h" 1
# 25 "../elf/elf.h" 2


typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 381 "../elf/elf.h"
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 489 "../elf/elf.h"
typedef struct
{
  Elf32_Word ch_type;
  Elf32_Word ch_size;
  Elf32_Word ch_addralign;
} Elf32_Chdr;

typedef struct
{
  Elf64_Word ch_type;
  Elf64_Word ch_reserved;
  Elf64_Xword ch_size;
  Elf64_Xword ch_addralign;
} Elf64_Chdr;
# 516 "../elf/elf.h"
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 631 "../elf/elf.h"
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 676 "../elf/elf.h"
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 828 "../elf/elf.h"
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 1010 "../elf/elf.h"
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 1052 "../elf/elf.h"
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 1099 "../elf/elf.h"
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 1133 "../elf/elf.h"
typedef struct
{
  uint32_t a_type;
  union
    {
      uint32_t a_val;



    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type;
  union
    {
      uint64_t a_val;



    } a_un;
} Elf64_auxv_t;
# 1235 "../elf/elf.h"
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 1356 "../elf/elf.h"
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1746 "../elf/elf.h"
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1822 "../elf/elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1990 "../elf/elf.h"
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 2021 "../elf/elf.h"
typedef Elf32_Addr Elf32_Conflict;

typedef struct
{

  Elf32_Half version;

  unsigned char isa_level;

  unsigned char isa_rev;

  unsigned char gpr_size;

  unsigned char cpr1_size;

  unsigned char cpr2_size;

  unsigned char fp_abi;

  Elf32_Word isa_ext;

  Elf32_Word ases;

  Elf32_Word flags1;
  Elf32_Word flags2;
} Elf_MIPS_ABIFlags_v0;
# 2097 "../elf/elf.h"
enum
{

  Val_GNU_MIPS_ABI_FP_ANY = 0,

  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,

  Val_GNU_MIPS_ABI_FP_SINGLE = 2,

  Val_GNU_MIPS_ABI_FP_SOFT = 3,

  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,

  Val_GNU_MIPS_ABI_FP_XX = 5,

  Val_GNU_MIPS_ABI_FP_64 = 6,

  Val_GNU_MIPS_ABI_FP_64A = 7,

  Val_GNU_MIPS_ABI_FP_MAX = 7
};
# 3 "../include/elf.h" 2
# 20 "../include/elf.h"
# 1 "../sysdeps/generic/dl-dtprocnum.h" 1
# 21 "../include/elf.h" 2
# 25 "../sysdeps/i386/stackinfo.h" 2
# 25 "../include/stackinfo.h" 2
# 8 "../include/alloca.h" 2




extern void *__alloca (size_t __size);





extern int __libc_use_alloca (size_t size) __attribute__ ((const));
extern int __libc_alloca_cutoff (size_t size) __attribute__ ((const));
extern __typeof (__libc_alloca_cutoff) __libc_alloca_cutoff __asm__ ("" "__GI___libc_alloca_cutoff") __attribute__ ((visibility ("hidden")));



# 1 "../sysdeps/pthread/allocalim.h" 1
# 19 "../sysdeps/pthread/allocalim.h"
# 1 "../include/alloca.h" 1
# 20 "../sysdeps/pthread/allocalim.h" 2
# 1 "../include/limits.h" 1
# 195 "../include/limits.h"
# 1 "../include/bits/posix1_lim.h" 1
# 196 "../include/limits.h" 2



# 1 "../include/bits/posix2_lim.h" 1
# 200 "../include/limits.h" 2
# 21 "../sysdeps/pthread/allocalim.h" 2


extern __inline __attribute__ ((__always_inline__))
int
__libc_use_alloca (size_t size)
{
  return (__builtin_expect ((__libc_alloca_cutoff (size)), 1)

          || __builtin_expect ((size <= 16384 / 4), 1)

   );
}
# 25 "../include/alloca.h" 2
# 569 "../stdlib/stdlib.h" 2





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) ;







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ )) ;






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) ;





extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) ;




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ )) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ )) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) ;


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) ;






extern int clearenv (void) __attribute__ ((__nothrow__ ));
# 675 "../stdlib/stdlib.h"
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) ;
# 688 "../stdlib/stdlib.h"
extern int mkstemp (char *__template) ;
# 698 "../stdlib/stdlib.h"
extern int mkstemp64 (char *__template) ;
# 710 "../stdlib/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen) ;
# 720 "../stdlib/stdlib.h"
extern int mkstemps64 (char *__template, int __suffixlen)
     ;
# 731 "../stdlib/stdlib.h"
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) ;
# 742 "../stdlib/stdlib.h"
extern int mkostemp (char *__template, int __flags) ;
# 752 "../stdlib/stdlib.h"
extern int mkostemp64 (char *__template, int __flags) ;
# 762 "../stdlib/stdlib.h"
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     ;
# 774 "../stdlib/stdlib.h"
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     ;
# 784 "../stdlib/stdlib.h"
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ )) ;
# 800 "../stdlib/stdlib.h"
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;


# 1 "../bits/stdlib-bsearch.h" 1
# 19 "../bits/stdlib-bsearch.h"
extern __inline void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return 
# 42 "../bits/stdlib-bsearch.h" 3 4
        ((void *)0)
# 42 "../bits/stdlib-bsearch.h"
            ;
}
# 826 "../stdlib/stdlib.h" 2




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  ;




extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
# 872 "../stdlib/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) ;





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) ;
# 958 "../stdlib/stdlib.h"
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ ));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ ));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ )) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 2, 3)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) ;
# 1014 "../stdlib/stdlib.h"
# 1 "../include/bits/stdlib-float.h" 1





# 1 "../stdlib/bits/stdlib-float.h" 1
# 24 "../stdlib/bits/stdlib-float.h"
extern __inline double
__attribute__ ((__nothrow__ )) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) 
# 27 "../stdlib/bits/stdlib-float.h" 3 4
                                  ((void *)0)
# 27 "../stdlib/bits/stdlib-float.h"
                                      );
}
# 7 "../include/bits/stdlib-float.h" 2
# 1015 "../stdlib/stdlib.h" 2
# 1026 "../stdlib/stdlib.h"

# 16 "../include/stdlib.h" 2



# 1 "../include/sys/stat.h" 1

# 1 "../io/sys/stat.h" 1
# 27 "../io/sys/stat.h"
# 1 "../include/bits/types.h" 1
# 28 "../io/sys/stat.h" 2


# 1 "../include/bits/types/struct_timespec.h" 1
# 31 "../io/sys/stat.h" 2






# 1 "../include/bits/types/time_t.h" 1
# 38 "../io/sys/stat.h" 2
# 99 "../io/sys/stat.h"


# 1 "../sysdeps/unix/sysv/linux/bits/stat.h" 1
# 25 "../sysdeps/unix/sysv/linux/bits/stat.h"
# 1 "../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h" 1
# 26 "../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h"
struct stat
  {
    __dev_t st_dev;

    unsigned short int __pad1;


    __ino_t st_ino;




    __mode_t st_mode;
    __nlink_t st_nlink;




    __uid_t st_uid;
    __gid_t st_gid;



    __dev_t st_rdev;

    unsigned short int __pad2;


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 71 "../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h"
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 89 "../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h"
    unsigned long int __glibc_reserved4;
    unsigned long int __glibc_reserved5;




  };



struct stat64
  {
    __dev_t st_dev;





    unsigned int __pad1;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;

    __uid_t st_uid;
    __gid_t st_gid;





    __dev_t st_rdev;
    unsigned int __pad2;
    __off64_t st_size;

    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 146 "../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h"
    __ino64_t st_ino;

  };
# 26 "../sysdeps/unix/sysv/linux/bits/stat.h" 2
# 102 "../io/sys/stat.h" 2
# 205 "../io/sys/stat.h"
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) ;



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ )) ;
# 224 "../io/sys/stat.h"
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ )) ;
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ )) ;







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) ;
# 249 "../io/sys/stat.h"
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) ;







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) ;
# 272 "../io/sys/stat.h"
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ )) ;





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ ));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ )) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ ));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ ));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ )) ;





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ )) ;





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) ;





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ )) ;




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ ));



# 1 "../include/bits/statx.h" 1
# 1 "../io/bits/statx.h" 1
# 26 "../io/bits/statx.h"
# 1 "../include/bits/statx-generic.h" 1
# 1 "../io/bits/statx-generic.h" 1
# 25 "../io/bits/statx-generic.h"
# 1 "../include/bits/types/struct_statx_timestamp.h" 1
# 1 "../io/bits/types/struct_statx_timestamp.h" 1
# 26 "../io/bits/types/struct_statx_timestamp.h"
struct statx_timestamp
{
  __int64_t tv_sec;
  __uint32_t tv_nsec;
  __int32_t __statx_timestamp_pad1[1];
};
# 2 "../include/bits/types/struct_statx_timestamp.h" 2
# 26 "../io/bits/statx-generic.h" 2
# 1 "../include/bits/types/struct_statx.h" 1
# 1 "../io/bits/types/struct_statx.h" 1
# 30 "../io/bits/types/struct_statx.h"
struct statx
{
  __uint32_t stx_mask;
  __uint32_t stx_blksize;
  __uint64_t stx_attributes;
  __uint32_t stx_nlink;
  __uint32_t stx_uid;
  __uint32_t stx_gid;
  __uint16_t stx_mode;
  __uint16_t __statx_pad1[1];
  __uint64_t stx_ino;
  __uint64_t stx_size;
  __uint64_t stx_blocks;
  __uint64_t stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  __uint32_t stx_rdev_major;
  __uint32_t stx_rdev_minor;
  __uint32_t stx_dev_major;
  __uint32_t stx_dev_minor;
  __uint64_t __statx_pad2[14];
};
# 2 "../include/bits/types/struct_statx.h" 2
# 27 "../io/bits/statx-generic.h" 2
# 57 "../io/bits/statx-generic.h"



int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ )) ;


# 2 "../include/bits/statx-generic.h" 2
# 27 "../io/bits/statx.h" 2
# 2 "../include/bits/statx.h" 2
# 373 "../io/sys/stat.h" 2



# 3 "../include/sys/stat.h" 2


# 1 "../sysdeps/unix/sysv/linux/x86/xstatver.h" 1
# 6 "../include/sys/stat.h" 2

# 1 "../sysdeps/unix/sysv/linux/struct_stat_time64.h" 1
# 26 "../sysdeps/unix/sysv/linux/struct_stat_time64.h"
# 1 "../include/endian.h" 1
# 27 "../sysdeps/unix/sysv/linux/struct_stat_time64.h" 2
# 43 "../sysdeps/unix/sysv/linux/struct_stat_time64.h"
struct __stat64_t64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct __timespec64 st_atim;
    struct __timespec64 st_mtim;
    struct __timespec64 st_ctim;
# 73 "../sysdeps/unix/sysv/linux/struct_stat_time64.h"
  };
# 8 "../include/sys/stat.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdbool.h" 1 3 4
# 9 "../include/sys/stat.h" 2

static inline 
# 10 "../include/sys/stat.h" 3 4
             _Bool

# 11 "../include/sys/stat.h"
in_ino_t_range (__ino64_t v)
{
  __ino_t s = v;
  return s == v;
}

static inline 
# 17 "../include/sys/stat.h" 3 4
             _Bool

# 18 "../include/sys/stat.h"
in_off_t_range (__off64_t v)
{
  __off_t s = v;
  return s == v;
}

static inline 
# 24 "../include/sys/stat.h" 3 4
             _Bool

# 25 "../include/sys/stat.h"
in_blkcnt_t_range (__blkcnt64_t v)
{
  __blkcnt_t s = v;
  return s == v;
}


extern int __stat (const char *__file, struct stat *__buf);
extern int __stat64 (const char *__file, struct stat64 *__buf);
extern int __fstat (int __fd, struct stat *__buf);
extern int __fstat64 (int __fd, struct stat64 *__buf);
extern int __lstat (const char *__file, struct stat *__buf);
extern int __lstat64 (const char *__file, struct stat64 *__buf);
extern int __fstatat (int dirfd, const char *pathname, struct stat *buf,
        int flags);
extern int __fstatat64 (int dirfd, const char *pathname, struct stat64 *buf,
   int flags);

extern __typeof (__stat64) __stat64 __asm__ ("" "__GI___stat64") __attribute__ ((visibility ("hidden")));
extern __typeof (__fstat64) __fstat64 __asm__ ("" "__GI___fstat64") __attribute__ ((visibility ("hidden")));
extern __typeof (__lstat64) __lstat64 __asm__ ("" "__GI___lstat64") __attribute__ ((visibility ("hidden")));
extern __typeof (__fstatat64) __fstatat64 __asm__ ("" "__GI___fstatat64") __attribute__ ((visibility ("hidden")));
# 55 "../include/sys/stat.h"
extern int __stat64_time64 (const char *file, struct __stat64_t64 *buf);
extern __typeof (__stat64_time64) __stat64_time64 __asm__ ("" "__GI___stat64_time64") __attribute__ ((visibility ("hidden")));;
extern int __lstat64_time64 (const char *file, struct __stat64_t64 *buf);
extern __typeof (__lstat64_time64) __lstat64_time64 __asm__ ("" "__GI___lstat64_time64") __attribute__ ((visibility ("hidden")));;
extern int __fstat64_time64 (int fd, struct __stat64_t64 *buf);
extern __typeof (__fstat64_time64) __fstat64_time64 __asm__ ("" "__GI___fstat64_time64") __attribute__ ((visibility ("hidden")));;
extern int __fstatat64_time64 (int dirfd, const char *pathname,
          struct __stat64_t64 *buf, int flags);
extern __typeof (__fstatat64_time64) __fstatat64_time64 __asm__ ("" "__GI___fstatat64_time64") __attribute__ ((visibility ("hidden")));;


extern int __chmod (const char *__file, __mode_t __mode);
extern __typeof (__chmod) __chmod __asm__ ("" "__GI___chmod") __attribute__ ((visibility ("hidden")));
extern int __fchmod (int __fd, __mode_t __mode);
extern __typeof (fchmodat) fchmodat __asm__ ("" "__GI_fchmodat") __attribute__ ((visibility ("hidden")));
extern __mode_t __umask (__mode_t __mask);
extern int __mkdir (const char *__path, __mode_t __mode);
extern __typeof (__mkdir) __mkdir __asm__ ("" "__GI___mkdir") __attribute__ ((visibility ("hidden")));

extern int __mknodat (int fd, const char *path, mode_t mode, dev_t dev);
extern __typeof (__mknodat) __mknodat __asm__ ("" "__GI___mknodat") __attribute__ ((visibility ("hidden")));;
extern int __mknod (const char *__path,
      __mode_t __mode, __dev_t __dev);
extern __typeof (__mknod) __mknod __asm__ ("" "__GI___mknod") __attribute__ ((visibility ("hidden")));;

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev);
extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev);

int __fxstat (int __ver, int __fildes, struct stat *__stat_buf);
int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf);
int __lxstat (int __ver, const char *__filename, struct stat *__stat_buf);
int __fxstatat (int __ver, int __fildes, const char *__filename,
  struct stat *__stat_buf, int __flag);
int __fxstat64 (int ver, int __fildes, struct stat64 *__stat_buf);
int __xstat64 (int ver, const char *__filename, struct stat64 *__stat_buf);
int __lxstat64 (int ver, const char *__filename, struct stat64 *__stat_buf);
int __fxstatat64 (int ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag);
# 20 "../include/stdlib.h" 2

# 1 "../include/rtld-malloc.h" 1
# 22 "../include/stdlib.h" 2

extern __typeof (strtol_l) __strtol_l;
extern __typeof (strtoul_l) __strtoul_l;
extern __typeof (strtoll_l) __strtoll_l;
extern __typeof (strtoull_l) __strtoull_l;
extern __typeof (strtod_l) __strtod_l;
extern __typeof (strtof_l) __strtof_l;
extern __typeof (strtold_l) __strtold_l;
extern __typeof (__strtol_l) __strtol_l __asm__ ("" "__GI___strtol_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoul_l) __strtoul_l __asm__ ("" "__GI___strtoul_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoll_l) __strtoll_l __asm__ ("" "__GI___strtoll_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoull_l) __strtoull_l __asm__ ("" "__GI___strtoull_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtod_l) __strtod_l __asm__ ("" "__GI___strtod_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtof_l) __strtof_l __asm__ ("" "__GI___strtof_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtold_l) __strtold_l __asm__ ("" "__GI___strtold_l") __attribute__ ((visibility ("hidden")));

extern __typeof (exit) exit __asm__ ("" "__GI_exit") __attribute__ ((visibility ("hidden")));
extern __typeof (abort) abort __asm__ ("" "__GI_abort") __attribute__ ((visibility ("hidden")));
extern __typeof (getenv) getenv __asm__ ("" "__GI_getenv") __attribute__ ((visibility ("hidden")));
extern __typeof (secure_getenv) __libc_secure_getenv;
extern __typeof (__libc_secure_getenv) __libc_secure_getenv __asm__ ("" "__GI___libc_secure_getenv") __attribute__ ((visibility ("hidden")));
extern __typeof (bsearch) bsearch __asm__ ("" "__GI_bsearch") __attribute__ ((visibility ("hidden")));
extern __typeof (qsort) qsort __asm__ ("" "__GI_qsort") __attribute__ ((visibility ("hidden")));
extern __typeof (qsort_r) __qsort_r;
extern __typeof (__qsort_r) __qsort_r __asm__ ("" "__GI___qsort_r") __attribute__ ((visibility ("hidden")));
extern __typeof (lrand48_r) lrand48_r __asm__ ("" "__GI_lrand48_r") __attribute__ ((visibility ("hidden")));
extern __typeof (wctomb) wctomb __asm__ ("" "__GI_wctomb") __attribute__ ((visibility ("hidden")));

extern long int __random (void) __attribute__ ((visibility ("hidden")));
extern void __srandom (unsigned int __seed);
extern char *__initstate (unsigned int __seed, char *__statebuf,
     size_t __statelen);
extern char *__setstate (char *__statebuf);
extern int __random_r (struct random_data *__buf, int32_t *__result)
     __attribute__ ((visibility ("hidden")));
extern int __srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((visibility ("hidden")));
extern int __initstate_r (unsigned int __seed, char *__statebuf,
     size_t __statelen, struct random_data *__buf)
     __attribute__ ((visibility ("hidden")));
extern int __setstate_r (char *__statebuf, struct random_data *__buf)
     __attribute__ ((visibility ("hidden")));
extern int __rand_r (unsigned int *__seed);
extern int __erand48_r (unsigned short int __xsubi[3],
   struct drand48_data *__buffer, double *__result)
     __attribute__ ((visibility ("hidden")));
extern int __nrand48_r (unsigned short int __xsubi[3],
   struct drand48_data *__buffer,
   long int *__result) __attribute__ ((visibility ("hidden")));
extern int __jrand48_r (unsigned short int __xsubi[3],
   struct drand48_data *__buffer,
   long int *__result) __attribute__ ((visibility ("hidden")));
extern int __srand48_r (long int __seedval,
   struct drand48_data *__buffer) __attribute__ ((visibility ("hidden")));
extern int __seed48_r (unsigned short int __seed16v[3],
         struct drand48_data *__buffer) __attribute__ ((visibility ("hidden")));
extern int __lcong48_r (unsigned short int __param[7],
   struct drand48_data *__buffer) __attribute__ ((visibility ("hidden")));


extern int __drand48_iterate (unsigned short int __xsubi[3],
         struct drand48_data *__buffer)
     __attribute__ ((visibility ("hidden")));


extern struct drand48_data __libc_drand48_data __attribute__ ((visibility ("hidden")));

extern int __setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((visibility ("hidden")));
extern int __unsetenv (const char *__name) __attribute__ ((visibility ("hidden")));
extern int __clearenv (void) __attribute__ ((visibility ("hidden")));
extern char *__mktemp (char *__template) __attribute__ ((__nothrow__ )) ;
extern char *__canonicalize_file_name (const char *__name);
extern char *__realpath (const char *__name, char *__resolved);
extern __typeof (__realpath) __realpath __asm__ ("" "__GI___realpath") __attribute__ ((visibility ("hidden")));
extern int __ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((visibility ("hidden")));

extern int __ptsname_internal (int fd, char *buf, size_t buflen,
          struct stat64 *stp) __attribute__ ((visibility ("hidden")));

extern int __getpt (void);
extern int __posix_openpt (int __oflag) __attribute__ ((visibility ("hidden")));

extern int __add_to_environ (const char *name, const char *value,
        const char *combines, int replace)
     __attribute__ ((visibility ("hidden")));
extern void _quicksort (void *const pbase, size_t total_elems,
   size_t size, __compar_d_fn_t cmp, void *arg);

extern int __on_exit (void (*__func) (int __status, void *__arg), void *__arg);

extern int __cxa_atexit (void (*func) (void *), void *arg, void *d);
extern __typeof (__cxa_atexit) __cxa_atexit __asm__ ("" "__GI___cxa_atexit") __attribute__ ((visibility ("hidden")));;

extern int __cxa_thread_atexit_impl (void (*func) (void *), void *arg,
         void *d);
extern void __call_tls_dtors (void)



  ;
extern __typeof (__call_tls_dtors) __call_tls_dtors __asm__ ("" "__GI___call_tls_dtors") __attribute__ ((visibility ("hidden")));

extern void __cxa_finalize (void *d);

extern int __posix_memalign (void **memptr, size_t alignment, size_t size);

extern void *__libc_memalign (size_t alignment, size_t size)
     __attribute__ ((__malloc__));

extern void *__libc_reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));
extern __typeof (__libc_reallocarray) __libc_reallocarray __asm__ ("" "__GI___libc_reallocarray") __attribute__ ((visibility ("hidden")));

extern int __libc_system (const char *line);


extern double __strtod_internal (const char *__restrict __nptr,
     char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__ )) ;
extern float __strtof_internal (const char *__restrict __nptr,
    char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__ )) ;
extern long double __strtold_internal (const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group)
     __attribute__ ((__nothrow__ )) ;
extern long int __strtol_internal (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
     __attribute__ ((__nothrow__ )) ;
extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char **__restrict __endptr,
          int __base, int __group)
     __attribute__ ((__nothrow__ )) ;
__extension__
extern long long int __strtoll_internal (const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
     __attribute__ ((__nothrow__ )) ;
__extension__
extern unsigned long long int __strtoull_internal (const char *
         __restrict __nptr,
         char **__restrict __endptr,
         int __base, int __group)
     __attribute__ ((__nothrow__ )) ;
extern __typeof (__strtof_internal) __strtof_internal __asm__ ("" "__GI___strtof_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtod_internal) __strtod_internal __asm__ ("" "__GI___strtod_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtold_internal) __strtold_internal __asm__ ("" "__GI___strtold_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtol_internal) __strtol_internal __asm__ ("" "__GI___strtol_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoll_internal) __strtoll_internal __asm__ ("" "__GI___strtoll_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoul_internal) __strtoul_internal __asm__ ("" "__GI___strtoul_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtoull_internal) __strtoull_internal __asm__ ("" "__GI___strtoull_internal") __attribute__ ((visibility ("hidden")));

extern double ____strtod_l_internal (const char *__restrict __nptr,
         char **__restrict __endptr, int __group,
         locale_t __loc);
extern float ____strtof_l_internal (const char *__restrict __nptr,
        char **__restrict __endptr, int __group,
        locale_t __loc);
extern long double ____strtold_l_internal (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __group, locale_t __loc);
extern long int ____strtol_l_internal (const char *__restrict __nptr,
           char **__restrict __endptr,
           int __base, int __group,
           locale_t __loc);
extern unsigned long int ____strtoul_l_internal (const char *
       __restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group,
       locale_t __loc);
__extension__
extern long long int ____strtoll_l_internal (const char *__restrict __nptr,
          char **__restrict __endptr,
          int __base, int __group,
          locale_t __loc);
__extension__
extern unsigned long long int ____strtoull_l_internal (const char *
             __restrict __nptr,
             char **
             __restrict __endptr,
             int __base, int __group,
             locale_t __loc);

extern __typeof (____strtof_l_internal) ____strtof_l_internal __asm__ ("" "__GI_____strtof_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtod_l_internal) ____strtod_l_internal __asm__ ("" "__GI_____strtod_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtold_l_internal) ____strtold_l_internal __asm__ ("" "__GI_____strtold_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtol_l_internal) ____strtol_l_internal __asm__ ("" "__GI_____strtol_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtoll_l_internal) ____strtoll_l_internal __asm__ ("" "__GI_____strtoll_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtoul_l_internal) ____strtoul_l_internal __asm__ ("" "__GI_____strtoul_l_internal") __attribute__ ((visibility ("hidden")));
extern __typeof (____strtoull_l_internal) ____strtoull_l_internal __asm__ ("" "__GI_____strtoull_l_internal") __attribute__ ((visibility ("hidden")));


extern __typeof (strtof) strtof __asm__ ("" "__GI_strtof") __attribute__ ((visibility ("hidden")));
extern __typeof (strtod) strtod __asm__ ("" "__GI_strtod") __attribute__ ((visibility ("hidden")));

extern __typeof (strtold) strtold __asm__ ("" "__GI_strtold") __attribute__ ((visibility ("hidden")));

extern __typeof (strtol) strtol __asm__ ("" "__GI_strtol") __attribute__ ((visibility ("hidden")));
extern __typeof (strtoll) strtoll __asm__ ("" "__GI_strtoll") __attribute__ ((visibility ("hidden")));
extern __typeof (strtoul) strtoul __asm__ ("" "__GI_strtoul") __attribute__ ((visibility ("hidden")));
extern __typeof (strtoull) strtoull __asm__ ("" "__GI_strtoull") __attribute__ ((visibility ("hidden")));

extern __typeof (atoi) atoi __asm__ ("" "__GI_atoi") __attribute__ ((visibility ("hidden")));

extern float __strtof_nan (const char *, char **, char);
extern double __strtod_nan (const char *, char **, char);
extern long double __strtold_nan (const char *, char **, char);
extern float __wcstof_nan (const wchar_t *, wchar_t **, wchar_t);
extern double __wcstod_nan (const wchar_t *, wchar_t **, wchar_t);
extern long double __wcstold_nan (const wchar_t *, wchar_t **, wchar_t);

extern __typeof (__strtof_nan) __strtof_nan __asm__ ("" "__GI___strtof_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtod_nan) __strtod_nan __asm__ ("" "__GI___strtod_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtold_nan) __strtold_nan __asm__ ("" "__GI___strtold_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__wcstof_nan) __wcstof_nan __asm__ ("" "__GI___wcstof_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__wcstod_nan) __wcstod_nan __asm__ ("" "__GI___wcstod_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__wcstold_nan) __wcstold_nan __asm__ ("" "__GI___wcstold_nan") __attribute__ ((visibility ("hidden")));





extern __typeof (strtof128_l) __strtof128_l;

extern __typeof (__strtof128_l) __strtof128_l __asm__ ("" "__GI___strtof128_l") __attribute__ ((visibility ("hidden")));
extern __typeof (strtof128) strtof128 __asm__ ("" "__GI_strtof128") __attribute__ ((visibility ("hidden")));

extern _Float128 __strtof128_nan (const char *, char **, char);
extern _Float128 __wcstof128_nan (const wchar_t *, wchar_t **, wchar_t);

extern __typeof (__strtof128_nan) __strtof128_nan __asm__ ("" "__GI___strtof128_nan") __attribute__ ((visibility ("hidden")));
extern __typeof (__wcstof128_nan) __wcstof128_nan __asm__ ("" "__GI___wcstof128_nan") __attribute__ ((visibility ("hidden")));

extern _Float128 __strtof128_internal (const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group);
extern __typeof (__strtof128_internal) __strtof128_internal __asm__ ("" "__GI___strtof128_internal") __attribute__ ((visibility ("hidden")));

extern _Float128 ____strtof128_l_internal (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __group, locale_t __loc);

extern __typeof (____strtof128_l_internal) ____strtof128_l_internal __asm__ ("" "__GI_____strtof128_l_internal") __attribute__ ((visibility ("hidden")));


extern char *__ecvt (double __value, int __ndigit, int *__restrict __decpt,
       int *__restrict __sign);
extern char *__fcvt (double __value, int __ndigit, int *__restrict __decpt,
       int *__restrict __sign);
extern char *__gcvt (double __value, int __ndigit, char *__buf);
extern int __ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
       int *__restrict __sign, char *__restrict __buf,
       size_t __len);
extern __typeof (__ecvt_r) __ecvt_r __asm__ ("" "__GI___ecvt_r") __attribute__ ((visibility ("hidden")));
extern int __fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
       int *__restrict __sign, char *__restrict __buf,
       size_t __len);
extern __typeof (__fcvt_r) __fcvt_r __asm__ ("" "__GI___fcvt_r") __attribute__ ((visibility ("hidden")));
extern char *__qecvt (long double __value, int __ndigit,
        int *__restrict __decpt, int *__restrict __sign);
extern char *__qfcvt (long double __value, int __ndigit,
        int *__restrict __decpt, int *__restrict __sign);
extern char *__qgcvt (long double __value, int __ndigit, char *__buf);
extern int __qecvt_r (long double __value, int __ndigit,
        int *__restrict __decpt, int *__restrict __sign,
        char *__restrict __buf, size_t __len);
extern __typeof (__qecvt_r) __qecvt_r __asm__ ("" "__GI___qecvt_r") __attribute__ ((visibility ("hidden")));
extern int __qfcvt_r (long double __value, int __ndigit,
        int *__restrict __decpt, int *__restrict __sign,
        char *__restrict __buf, size_t __len);
extern __typeof (__qfcvt_r) __qfcvt_r __asm__ ("" "__GI___qfcvt_r") __attribute__ ((visibility ("hidden")));






extern void *__default_morecore (ptrdiff_t) __attribute__ ((__nothrow__ ));
extern __typeof (__default_morecore) __default_morecore __asm__ ("" "__GI___default_morecore") __attribute__ ((visibility ("hidden")));

struct abort_msg_s
{
  unsigned int size;
  char msg[0];
};
extern struct abort_msg_s *__abort_msg;
extern __typeof (__abort_msg) __abort_msg __asm__ ("" "__GI___abort_msg") __attribute__ ((visibility ("hidden")));
# 24 "dl-tls.c" 2
# 1 "../include/unistd.h" 1

# 1 "../posix/unistd.h" 1
# 27 "../posix/unistd.h"

# 202 "../posix/unistd.h"
# 1 "../sysdeps/unix/sysv/linux/bits/posix_opt.h" 1
# 203 "../posix/unistd.h" 2



# 1 "../sysdeps/unix/sysv/linux/x86/bits/environments.h" 1
# 22 "../sysdeps/unix/sysv/linux/x86/bits/environments.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 23 "../sysdeps/unix/sysv/linux/x86/bits/environments.h" 2
# 207 "../posix/unistd.h" 2
# 217 "../posix/unistd.h"
# 1 "../include/bits/types.h" 1
# 218 "../posix/unistd.h" 2
# 226 "../posix/unistd.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 227 "../posix/unistd.h" 2
# 274 "../posix/unistd.h"
typedef __socklen_t socklen_t;
# 287 "../posix/unistd.h"
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) ;




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) ;


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) ;






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) ;
# 334 "../posix/unistd.h"
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
# 345 "../posix/unistd.h"
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ ));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
    __attribute__ ((__access__ (__write_only__, 2, 3)));





extern ssize_t write (int __fd, const void *__buf, size_t __n)
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 378 "../posix/unistd.h"
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset)
    __attribute__ ((__access__ (__write_only__, 2, 3)));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset)
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 411 "../posix/unistd.h"
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset)
    __attribute__ ((__access__ (__write_only__, 2, 3)));


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset)
    __attribute__ ((__access__ (__read_only__, 2, 3)));







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ )) ;
# 441 "../posix/unistd.h"
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ ));
# 453 "../posix/unistd.h"
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ ));






extern int usleep (__useconds_t __useconds);
# 478 "../posix/unistd.h"
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ )) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ )) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ )) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ )) ;
# 520 "../posix/unistd.h"
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 1, 2)));





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ ));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__))
    __attribute__ ((__access__ (__write_only__, 1)));




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ ));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ )) ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ )) ;




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ )) ;



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) ;



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) ;



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ )) ;




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) ;




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ )) ;





extern int nice (int __inc) __attribute__ ((__nothrow__ )) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "../bits/confname.h" 1
# 24 "../bits/confname.h"
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 621 "../posix/unistd.h" 2


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ )) ;


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ ));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ ));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 2, 3)));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ ));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ ));
# 672 "../posix/unistd.h"
extern int setpgrp (void) __attribute__ ((__nothrow__ ));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ ));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ ));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ ));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ ));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 2, 1)));


extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ ));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ ));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ ));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ )) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ )) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ ));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ ));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 2, 3)));



extern int isatty (int __fd) __attribute__ ((__nothrow__ ));




extern int ttyslot (void) __attribute__ ((__nothrow__ ));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ )) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 2, 3)));





extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ )) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 3, 4)));



extern int unlink (const char *__name) __attribute__ ((__nothrow__ )) ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ )) ;



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ )) ;



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ ));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ ));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len)
    __attribute__ ((__access__ (__write_only__, 1, 2)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ )) ;







# 1 "../include/bits/getopt_posix.h" 1
# 1 "../posix/bits/getopt_posix.h" 1
# 27 "../posix/bits/getopt_posix.h"
# 1 "../include/bits/getopt_core.h" 1
# 1 "../posix/bits/getopt_core.h" 1
# 28 "../posix/bits/getopt_core.h"








extern char *optarg;
# 50 "../posix/bits/getopt_core.h"
extern int optind;




extern int opterr;



extern int optopt;
# 91 "../posix/bits/getopt_core.h"
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ )) ;


# 2 "../include/bits/getopt_core.h" 2
# 28 "../posix/bits/getopt_posix.h" 2


# 49 "../posix/bits/getopt_posix.h"

# 2 "../include/bits/getopt_posix.h" 2
# 884 "../posix/unistd.h" 2







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 1, 2)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__read_only__, 1, 2)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ )) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__read_only__, 1, 2)));




extern int vhangup (void) __attribute__ ((__nothrow__ ));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ )) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ )) ;





extern int acct (const char *__name) __attribute__ ((__nothrow__ ));



extern char *getusershell (void) __attribute__ ((__nothrow__ ));
extern void endusershell (void) __attribute__ ((__nothrow__ ));
extern void setusershell (void) __attribute__ ((__nothrow__ ));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ )) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ )) ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ ));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
# 1005 "../posix/unistd.h"
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) ;
# 1017 "../posix/unistd.h"
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ )) ;
# 1028 "../posix/unistd.h"
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
# 1038 "../posix/unistd.h"
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ )) ;
# 1049 "../posix/unistd.h"
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
# 1070 "../posix/unistd.h"
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
# 1093 "../posix/unistd.h"
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1103 "../posix/unistd.h"
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1121 "../posix/unistd.h"
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);
# 1138 "../posix/unistd.h"
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ )) ;







extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__read_only__, 1, 3)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 1177 "../posix/unistd.h"
int getentropy (void *__buffer, size_t __length)
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 1187 "../posix/unistd.h"
# 1 "../sysdeps/unix/sysv/linux/bits/unistd_ext.h" 1
# 34 "../sysdeps/unix/sysv/linux/bits/unistd_ext.h"
extern __pid_t gettid (void) __attribute__ ((__nothrow__ ));
# 1188 "../posix/unistd.h" 2


# 3 "../include/unistd.h" 2



extern __typeof (_exit) _exit __asm__ ("" "__GI__exit") __attribute__ ((visibility ("hidden"), __noreturn__));



extern __typeof (alarm) alarm __asm__ ("" "__GI_alarm") __attribute__ ((visibility ("hidden")));
extern size_t __confstr (int name, char *buf, size_t len);
extern __typeof (__confstr) __confstr __asm__ ("" "__GI___confstr") __attribute__ ((visibility ("hidden")));
extern __typeof (confstr) confstr __asm__ ("" "__GI_confstr") __attribute__ ((visibility ("hidden")));
extern __typeof (execl) execl __asm__ ("" "__GI_execl") __attribute__ ((visibility ("hidden")));
extern __typeof (execle) execle __asm__ ("" "__GI_execle") __attribute__ ((visibility ("hidden")));
extern __typeof (execlp) execlp __asm__ ("" "__GI_execlp") __attribute__ ((visibility ("hidden")));
extern __typeof (execvp) execvp __asm__ ("" "__GI_execvp") __attribute__ ((visibility ("hidden")));
extern __typeof (getpid) getpid __asm__ ("" "__GI_getpid") __attribute__ ((visibility ("hidden")));
extern __typeof (getsid) getsid __asm__ ("" "__GI_getsid") __attribute__ ((visibility ("hidden")));
extern __typeof (getdomainname) getdomainname __asm__ ("" "__GI_getdomainname") __attribute__ ((visibility ("hidden")));
extern __typeof (getlogin_r) __getlogin_r ;
extern __typeof (__getlogin_r) __getlogin_r __asm__ ("" "__GI___getlogin_r") __attribute__ ((visibility ("hidden")));
extern __typeof (getlogin_r) getlogin_r __asm__ ("" "__GI_getlogin_r") __attribute__ ((visibility ("hidden")));
extern __typeof (seteuid) seteuid __asm__ ("" "__GI_seteuid") __attribute__ ((visibility ("hidden")));
extern __typeof (setegid) setegid __asm__ ("" "__GI_setegid") __attribute__ ((visibility ("hidden")));
extern __typeof (tcgetpgrp) tcgetpgrp __asm__ ("" "__GI_tcgetpgrp") __attribute__ ((visibility ("hidden")));
extern __typeof (readlinkat) readlinkat __asm__ ("" "__GI_readlinkat") __attribute__ ((visibility ("hidden")));


extern int __access (const char *__name, int __type);
extern __typeof (__access) __access __asm__ ("" "__GI___access") __attribute__ ((visibility ("hidden")));
extern int __euidaccess (const char *__name, int __type);
extern int __faccessat (int __fd, const char *__file, int __type, int __flag);
extern int __faccessat_noerrno (int __fd, const char *__file, int __type,
           int __flag);
extern __off64_t __lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((visibility ("hidden")));
extern __off_t __lseek (int __fd, __off_t __offset, int __whence);
extern __typeof (__lseek) __lseek __asm__ ("" "__GI___lseek") __attribute__ ((visibility ("hidden")));
extern __off_t __libc_lseek (int __fd, __off_t __offset, int __whence);
extern __off64_t __libc_lseek64 (int __fd, __off64_t __offset, int __whence);
extern ssize_t __pread (int __fd, void *__buf, size_t __nbytes,
   __off_t __offset);
extern __typeof (__pread) __pread __asm__ ("" "__GI___pread") __attribute__ ((visibility ("hidden")));;
extern ssize_t __libc_pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset);
extern ssize_t __pread64 (int __fd, void *__buf, size_t __nbytes,
     __off64_t __offset);
extern __typeof (__pread64) __pread64 __asm__ ("" "__GI___pread64") __attribute__ ((visibility ("hidden")));;
extern ssize_t __libc_pread64 (int __fd, void *__buf, size_t __nbytes,
          __off64_t __offset) __attribute__ ((visibility ("hidden")));
extern ssize_t __pwrite (int __fd, const void *__buf, size_t __n,
    __off_t __offset);
extern __typeof (__pwrite) __pwrite __asm__ ("" "__GI___pwrite") __attribute__ ((visibility ("hidden")));
extern ssize_t __libc_pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset);
extern ssize_t __pwrite64 (int __fd, const void *__buf, size_t __n,
      __off64_t __offset);
extern __typeof (__pwrite64) __pwrite64 __asm__ ("" "__GI___pwrite64") __attribute__ ((visibility ("hidden")));
extern ssize_t __libc_pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((visibility ("hidden")));
extern ssize_t __libc_read (int __fd, void *__buf, size_t __n);
extern __typeof (__libc_read) __libc_read __asm__ ("" "__GI___libc_read") __attribute__ ((visibility ("hidden")));
extern __typeof (read) read __asm__ ("" "__GI_read") __attribute__ ((visibility ("hidden")));
extern ssize_t __libc_write (int __fd, const void *__buf, size_t __n);
extern __typeof (__libc_write) __libc_write __asm__ ("" "__GI___libc_write") __attribute__ ((visibility ("hidden")));
extern __typeof (write) write __asm__ ("" "__GI_write") __attribute__ ((visibility ("hidden")));
extern int __pipe (int __pipedes[2]);
extern __typeof (__pipe) __pipe __asm__ ("" "__GI___pipe") __attribute__ ((visibility ("hidden")));
extern int __pipe2 (int __pipedes[2], int __flags) __attribute__ ((visibility ("hidden")));
extern unsigned int __sleep (unsigned int __seconds) __attribute__ ((visibility ("hidden")));
extern int __chown (const char *__file,
      __uid_t __owner, __gid_t __group);
extern __typeof (__chown) __chown __asm__ ("" "__GI___chown") __attribute__ ((visibility ("hidden")));
extern int __fchown (int __fd,
       __uid_t __owner, __gid_t __group);
extern int __lchown (const char *__file, __uid_t __owner,
       __gid_t __group);
extern int __chdir (const char *__path) __attribute__ ((visibility ("hidden")));
extern int __fchdir (int __fd) __attribute__ ((visibility ("hidden")));
extern char *__getcwd (char *__buf, size_t __size);
extern __typeof (__getcwd) __getcwd __asm__ ("" "__GI___getcwd") __attribute__ ((visibility ("hidden")));
extern int __rmdir (const char *__path) __attribute__ ((visibility ("hidden")));
extern int __execvpe (const char *file, char *const argv[],
        char *const envp[]) __attribute__ ((visibility ("hidden")));
extern int __execvpex (const char *file, char *const argv[],
         char *const envp[]) __attribute__ ((visibility ("hidden")));







char *__canonicalize_directory_name_internal (const char *__thisdir,
           char *__buf,
           size_t __size) __attribute__ ((visibility ("hidden")));

extern int __dup (int __fd);
extern __typeof (__dup) __dup __asm__ ("" "__GI___dup") __attribute__ ((visibility ("hidden")));
extern int __dup2 (int __fd, int __fd2);
extern __typeof (__dup2) __dup2 __asm__ ("" "__GI___dup2") __attribute__ ((visibility ("hidden")));
extern int __dup3 (int __fd, int __fd2, int flags);
extern __typeof (__dup3) __dup3 __asm__ ("" "__GI___dup3") __attribute__ ((visibility ("hidden")));
extern int __execve (const char *__path, char *const __argv[],
       char *const __envp[]) __attribute__ ((visibility ("hidden")));
extern long int __pathconf (const char *__path, int __name);
extern long int __fpathconf (int __fd, int __name);
extern long int __sysconf (int __name);
extern __typeof (__sysconf) __sysconf __asm__ ("" "__GI___sysconf") __attribute__ ((visibility ("hidden")));
extern __pid_t __getpid (void);
extern __typeof (__getpid) __getpid __asm__ ("" "__GI___getpid") __attribute__ ((visibility ("hidden")));
extern __pid_t __getppid (void);
extern __pid_t __setsid (void) __attribute__ ((visibility ("hidden")));
extern __uid_t __getuid (void) __attribute__ ((visibility ("hidden")));
extern __uid_t __geteuid (void) __attribute__ ((visibility ("hidden")));
extern __gid_t __getgid (void) __attribute__ ((visibility ("hidden")));
extern __gid_t __getegid (void) __attribute__ ((visibility ("hidden")));
extern int __getgroups (int __size, __gid_t __list[]) __attribute__ ((visibility ("hidden")));
extern __typeof (__getpgid) __getpgid __asm__ ("" "__GI___getpgid") __attribute__ ((visibility ("hidden")));
extern int __group_member (__gid_t __gid) __attribute__ ((visibility ("hidden")));
extern int __setuid (__uid_t __uid);
extern int __setreuid (__uid_t __ruid, __uid_t __euid);
extern int __setgid (__gid_t __gid);
extern int __setpgid (__pid_t __pid, __pid_t __pgid);
extern __typeof (__setpgid) __setpgid __asm__ ("" "__GI___setpgid") __attribute__ ((visibility ("hidden")));
extern int __setregid (__gid_t __rgid, __gid_t __egid);
extern int __getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid);
extern int __getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid);
extern int __setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid);
extern int __setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid);
extern __typeof (__getresuid) __getresuid __asm__ ("" "__GI___getresuid") __attribute__ ((visibility ("hidden")));
extern __typeof (__getresgid) __getresgid __asm__ ("" "__GI___getresgid") __attribute__ ((visibility ("hidden")));
extern __typeof (__setresuid) __setresuid __asm__ ("" "__GI___setresuid") __attribute__ ((visibility ("hidden")));
extern __typeof (__setresgid) __setresgid __asm__ ("" "__GI___setresgid") __attribute__ ((visibility ("hidden")));
extern __pid_t __vfork (void);
extern __typeof (__vfork) __vfork __asm__ ("" "__GI___vfork") __attribute__ ((visibility ("hidden")));
extern int __ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((visibility ("hidden")));
extern int __isatty (int __fd) __attribute__ ((visibility ("hidden")));
extern int __link (const char *__from, const char *__to);
extern int __symlink (const char *__from, const char *__to);
extern ssize_t __readlink (const char *__path, char *__buf, size_t __len)
     __attribute__ ((visibility ("hidden")));
extern int __unlink (const char *__name) __attribute__ ((visibility ("hidden")));
extern int __gethostname (char *__name, size_t __len) __attribute__ ((visibility ("hidden")));
extern int __revoke (const char *__file);
extern int __profil (unsigned short int *__sample_buffer, size_t __size,
       size_t __offset, unsigned int __scale)
     __attribute__ ((visibility ("hidden")));
extern int __getdtablesize (void) __attribute__ ((visibility ("hidden")));
extern int __brk (void *__addr) __attribute__ ((visibility ("hidden")));
extern int __close (int __fd);
extern __typeof (__close) __close __asm__ ("" "__GI___close") __attribute__ ((visibility ("hidden")));
extern int __libc_close (int __fd);
extern ssize_t __read (int __fd, void *__buf, size_t __nbytes);
extern __typeof (__read) __read __asm__ ("" "__GI___read") __attribute__ ((visibility ("hidden")));
extern ssize_t __write (int __fd, const void *__buf, size_t __n);
extern __typeof (__write) __write __asm__ ("" "__GI___write") __attribute__ ((visibility ("hidden")));
extern __pid_t __fork (void);
extern __typeof (__fork) __fork __asm__ ("" "__GI___fork") __attribute__ ((visibility ("hidden")));
extern int __getpagesize (void) __attribute__ ((__const__));
extern __typeof (__getpagesize) __getpagesize __asm__ ("" "__GI___getpagesize") __attribute__ ((visibility ("hidden")));
extern int __ftruncate (int __fd, __off_t __length) __attribute__ ((visibility ("hidden")));
extern int __ftruncate64 (int __fd, __off64_t __length) __attribute__ ((visibility ("hidden")));
extern int __truncate (const char *path, __off_t __length);
extern void *__sbrk (intptr_t __delta);
extern __typeof (__sbrk) __sbrk __asm__ ("" "__GI___sbrk") __attribute__ ((visibility ("hidden")));







extern int __libc_enable_secure __attribute__ ((section (".data.rel.ro")));
extern int __libc_enable_secure_decided;




extern void __libc_check_standard_fds (void) __attribute__ ((visibility ("hidden")));



extern __pid_t __libc_fork (void);



extern int __libc_pause (void);

extern int __getlogin_r_loginuid (char *name, size_t namesize)
     __attribute__ ((visibility ("hidden")));
# 25 "dl-tls.c" 2
# 1 "../include/sys/param.h" 1
# 1 "../misc/sys/param.h" 1
# 23 "../misc/sys/param.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 24 "../misc/sys/param.h" 2

# 1 "../include/sys/types.h" 1
# 26 "../misc/sys/param.h" 2
# 1 "../include/limits.h" 1
# 195 "../include/limits.h"
# 1 "../include/bits/posix1_lim.h" 1
# 196 "../include/limits.h" 2



# 1 "../include/bits/posix2_lim.h" 1
# 200 "../include/limits.h" 2
# 27 "../misc/sys/param.h" 2
# 1 "../include/endian.h" 1
# 28 "../misc/sys/param.h" 2



# 1 "../sysdeps/unix/sysv/linux/bits/param.h" 1
# 28 "../sysdeps/unix/sysv/linux/bits/param.h"
# 1 "/usr/include/linux/param.h" 1 3 4




# 1 "/usr/include/i386-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 2 "/usr/include/i386-linux-gnu/asm/param.h" 2 3 4
# 6 "/usr/include/linux/param.h" 2 3 4
# 29 "../sysdeps/unix/sysv/linux/bits/param.h" 2
# 32 "../misc/sys/param.h" 2
# 2 "../include/sys/param.h" 2
# 26 "dl-tls.c" 2
# 1 "../include/atomic.h" 1
# 50 "../include/atomic.h"
# 1 "../sysdeps/x86/atomic-machine.h" 1
# 22 "../sysdeps/x86/atomic-machine.h"
# 1 "../include/stdint.h" 1
# 23 "../sysdeps/x86/atomic-machine.h" 2
# 1 "../sysdeps/i386/i686/nptl/tls.h" 1
# 33 "../sysdeps/i386/i686/nptl/tls.h"
# 1 "../sysdeps/i386/nptl/tls.h" 1
# 22 "../sysdeps/i386/nptl/tls.h"
# 1 "../sysdeps/unix/sysv/linux/i386/i686/dl-sysdep.h" 1
# 23 "../sysdeps/unix/sysv/linux/i386/i686/dl-sysdep.h"
# 1 "../sysdeps/unix/sysv/linux/i386/dl-sysdep.h" 1
# 21 "../sysdeps/unix/sysv/linux/i386/dl-sysdep.h"
# 1 "../sysdeps/unix/sysv/linux/dl-sysdep.h" 1
# 19 "../sysdeps/unix/sysv/linux/dl-sysdep.h"
# 1 "../sysdeps/generic/dl-sysdep.h" 1
# 20 "../sysdeps/unix/sysv/linux/dl-sysdep.h" 2
# 31 "../sysdeps/unix/sysv/linux/dl-sysdep.h"
extern int _dl_discover_osversion (void) __attribute__ ((visibility ("hidden")));
# 22 "../sysdeps/unix/sysv/linux/i386/dl-sysdep.h" 2
# 31 "../sysdeps/unix/sysv/linux/i386/dl-sysdep.h"
extern void _dl_sysinfo_int80 (void) __attribute__ ((visibility ("hidden")));
# 24 "../sysdeps/unix/sysv/linux/i386/i686/dl-sysdep.h" 2
# 23 "../sysdeps/i386/nptl/tls.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 26 "../sysdeps/i386/nptl/tls.h" 2
# 1 "../include/stdint.h" 1
# 27 "../sysdeps/i386/nptl/tls.h" 2

# 1 "../sysdeps/unix/sysv/linux/i386/sysdep.h" 1
# 23 "../sysdeps/unix/sysv/linux/i386/sysdep.h"
# 1 "../sysdeps/unix/sysv/linux/sysdep.h" 1
# 21 "../sysdeps/unix/sysv/linux/sysdep.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 22 "../sysdeps/unix/sysv/linux/sysdep.h" 2
# 1 "../sysdeps/unix/sysv/linux/i386/kernel-features.h" 1
# 33 "../sysdeps/unix/sysv/linux/i386/kernel-features.h"
# 1 "../sysdeps/unix/sysv/linux/kernel-features.h" 1
# 26 "../sysdeps/unix/sysv/linux/kernel-features.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 27 "../sysdeps/unix/sysv/linux/kernel-features.h" 2
# 34 "../sysdeps/unix/sysv/linux/i386/kernel-features.h" 2
# 23 "../sysdeps/unix/sysv/linux/sysdep.h" 2
# 1 "../include/endian.h" 1
# 24 "../sysdeps/unix/sysv/linux/sysdep.h" 2
# 24 "../sysdeps/unix/sysv/linux/i386/sysdep.h" 2
# 1 "../sysdeps/unix/i386/sysdep.h" 1
# 18 "../sysdeps/unix/i386/sysdep.h"
# 1 "../sysdeps/unix/sysdep.h" 1
# 18 "../sysdeps/unix/sysdep.h"
# 1 "../sysdeps/generic/sysdep.h" 1
# 97 "../sysdeps/generic/sysdep.h"
# 1 "../sysdeps/generic/dwarf2.h" 1
# 38 "../sysdeps/generic/dwarf2.h"
enum dwarf_tag
  {
    DW_TAG_padding = 0x00,
    DW_TAG_array_type = 0x01,
    DW_TAG_class_type = 0x02,
    DW_TAG_entry_point = 0x03,
    DW_TAG_enumeration_type = 0x04,
    DW_TAG_formal_parameter = 0x05,
    DW_TAG_imported_declaration = 0x08,
    DW_TAG_label = 0x0a,
    DW_TAG_lexical_block = 0x0b,
    DW_TAG_member = 0x0d,
    DW_TAG_pointer_type = 0x0f,
    DW_TAG_reference_type = 0x10,
    DW_TAG_compile_unit = 0x11,
    DW_TAG_string_type = 0x12,
    DW_TAG_structure_type = 0x13,
    DW_TAG_subroutine_type = 0x15,
    DW_TAG_typedef = 0x16,
    DW_TAG_union_type = 0x17,
    DW_TAG_unspecified_parameters = 0x18,
    DW_TAG_variant = 0x19,
    DW_TAG_common_block = 0x1a,
    DW_TAG_common_inclusion = 0x1b,
    DW_TAG_inheritance = 0x1c,
    DW_TAG_inlined_subroutine = 0x1d,
    DW_TAG_module = 0x1e,
    DW_TAG_ptr_to_member_type = 0x1f,
    DW_TAG_set_type = 0x20,
    DW_TAG_subrange_type = 0x21,
    DW_TAG_with_stmt = 0x22,
    DW_TAG_access_declaration = 0x23,
    DW_TAG_base_type = 0x24,
    DW_TAG_catch_block = 0x25,
    DW_TAG_const_type = 0x26,
    DW_TAG_constant = 0x27,
    DW_TAG_enumerator = 0x28,
    DW_TAG_file_type = 0x29,
    DW_TAG_friend = 0x2a,
    DW_TAG_namelist = 0x2b,
    DW_TAG_namelist_item = 0x2c,
    DW_TAG_packed_type = 0x2d,
    DW_TAG_subprogram = 0x2e,
    DW_TAG_template_type_param = 0x2f,
    DW_TAG_template_value_param = 0x30,
    DW_TAG_thrown_type = 0x31,
    DW_TAG_try_block = 0x32,
    DW_TAG_variant_part = 0x33,
    DW_TAG_variable = 0x34,
    DW_TAG_volatile_type = 0x35,

    DW_TAG_MIPS_loop = 0x4081,

    DW_TAG_format_label = 0x4101,
    DW_TAG_function_template = 0x4102,
    DW_TAG_class_template = 0x4103,
    DW_TAG_GNU_BINCL = 0x4104,
    DW_TAG_GNU_EINCL = 0x4105
  };
# 106 "../sysdeps/generic/dwarf2.h"
enum dwarf_form
  {
    DW_FORM_addr = 0x01,
    DW_FORM_block2 = 0x03,
    DW_FORM_block4 = 0x04,
    DW_FORM_data2 = 0x05,
    DW_FORM_data4 = 0x06,
    DW_FORM_data8 = 0x07,
    DW_FORM_string = 0x08,
    DW_FORM_block = 0x09,
    DW_FORM_block1 = 0x0a,
    DW_FORM_data1 = 0x0b,
    DW_FORM_flag = 0x0c,
    DW_FORM_sdata = 0x0d,
    DW_FORM_strp = 0x0e,
    DW_FORM_udata = 0x0f,
    DW_FORM_ref_addr = 0x10,
    DW_FORM_ref1 = 0x11,
    DW_FORM_ref2 = 0x12,
    DW_FORM_ref4 = 0x13,
    DW_FORM_ref8 = 0x14,
    DW_FORM_ref_udata = 0x15,
    DW_FORM_indirect = 0x16
  };



enum dwarf_attribute
  {
    DW_AT_sibling = 0x01,
    DW_AT_location = 0x02,
    DW_AT_name = 0x03,
    DW_AT_ordering = 0x09,
    DW_AT_subscr_data = 0x0a,
    DW_AT_byte_size = 0x0b,
    DW_AT_bit_offset = 0x0c,
    DW_AT_bit_size = 0x0d,
    DW_AT_element_list = 0x0f,
    DW_AT_stmt_list = 0x10,
    DW_AT_low_pc = 0x11,
    DW_AT_high_pc = 0x12,
    DW_AT_language = 0x13,
    DW_AT_member = 0x14,
    DW_AT_discr = 0x15,
    DW_AT_discr_value = 0x16,
    DW_AT_visibility = 0x17,
    DW_AT_import = 0x18,
    DW_AT_string_length = 0x19,
    DW_AT_common_reference = 0x1a,
    DW_AT_comp_dir = 0x1b,
    DW_AT_const_value = 0x1c,
    DW_AT_containing_type = 0x1d,
    DW_AT_default_value = 0x1e,
    DW_AT_inline = 0x20,
    DW_AT_is_optional = 0x21,
    DW_AT_lower_bound = 0x22,
    DW_AT_producer = 0x25,
    DW_AT_prototyped = 0x27,
    DW_AT_return_addr = 0x2a,
    DW_AT_start_scope = 0x2c,
    DW_AT_stride_size = 0x2e,
    DW_AT_upper_bound = 0x2f,
    DW_AT_abstract_origin = 0x31,
    DW_AT_accessibility = 0x32,
    DW_AT_address_class = 0x33,
    DW_AT_artificial = 0x34,
    DW_AT_base_types = 0x35,
    DW_AT_calling_convention = 0x36,
    DW_AT_count = 0x37,
    DW_AT_data_member_location = 0x38,
    DW_AT_decl_column = 0x39,
    DW_AT_decl_file = 0x3a,
    DW_AT_decl_line = 0x3b,
    DW_AT_declaration = 0x3c,
    DW_AT_discr_list = 0x3d,
    DW_AT_encoding = 0x3e,
    DW_AT_external = 0x3f,
    DW_AT_frame_base = 0x40,
    DW_AT_friend = 0x41,
    DW_AT_identifier_case = 0x42,
    DW_AT_macro_info = 0x43,
    DW_AT_namelist_items = 0x44,
    DW_AT_priority = 0x45,
    DW_AT_segment = 0x46,
    DW_AT_specification = 0x47,
    DW_AT_static_link = 0x48,
    DW_AT_type = 0x49,
    DW_AT_use_location = 0x4a,
    DW_AT_variable_parameter = 0x4b,
    DW_AT_virtuality = 0x4c,
    DW_AT_vtable_elem_location = 0x4d,

    DW_AT_MIPS_fde = 0x2001,
    DW_AT_MIPS_loop_begin = 0x2002,
    DW_AT_MIPS_tail_loop_begin = 0x2003,
    DW_AT_MIPS_epilog_begin = 0x2004,
    DW_AT_MIPS_loop_unroll_factor = 0x2005,
    DW_AT_MIPS_software_pipeline_depth = 0x2006,
    DW_AT_MIPS_linkage_name = 0x2007,
    DW_AT_MIPS_stride = 0x2008,
    DW_AT_MIPS_abstract_name = 0x2009,
    DW_AT_MIPS_clone_origin = 0x200a,
    DW_AT_MIPS_has_inlines = 0x200b,

    DW_AT_sf_names = 0x2101,
    DW_AT_src_info = 0x2102,
    DW_AT_mac_info = 0x2103,
    DW_AT_src_coords = 0x2104,
    DW_AT_body_begin = 0x2105,
    DW_AT_body_end = 0x2106
  };






enum dwarf_location_atom
  {
    DW_OP_addr = 0x03,
    DW_OP_deref = 0x06,
    DW_OP_const1u = 0x08,
    DW_OP_const1s = 0x09,
    DW_OP_const2u = 0x0a,
    DW_OP_const2s = 0x0b,
    DW_OP_const4u = 0x0c,
    DW_OP_const4s = 0x0d,
    DW_OP_const8u = 0x0e,
    DW_OP_const8s = 0x0f,
    DW_OP_constu = 0x10,
    DW_OP_consts = 0x11,
    DW_OP_dup = 0x12,
    DW_OP_drop = 0x13,
    DW_OP_over = 0x14,
    DW_OP_pick = 0x15,
    DW_OP_swap = 0x16,
    DW_OP_rot = 0x17,
    DW_OP_xderef = 0x18,
    DW_OP_abs = 0x19,
    DW_OP_and = 0x1a,
    DW_OP_div = 0x1b,
    DW_OP_minus = 0x1c,
    DW_OP_mod = 0x1d,
    DW_OP_mul = 0x1e,
    DW_OP_neg = 0x1f,
    DW_OP_not = 0x20,
    DW_OP_or = 0x21,
    DW_OP_plus = 0x22,
    DW_OP_plus_uconst = 0x23,
    DW_OP_shl = 0x24,
    DW_OP_shr = 0x25,
    DW_OP_shra = 0x26,
    DW_OP_xor = 0x27,
    DW_OP_bra = 0x28,
    DW_OP_eq = 0x29,
    DW_OP_ge = 0x2a,
    DW_OP_gt = 0x2b,
    DW_OP_le = 0x2c,
    DW_OP_lt = 0x2d,
    DW_OP_ne = 0x2e,
    DW_OP_skip = 0x2f,
    DW_OP_lit0 = 0x30,
    DW_OP_lit1 = 0x31,
    DW_OP_lit2 = 0x32,
    DW_OP_lit3 = 0x33,
    DW_OP_lit4 = 0x34,
    DW_OP_lit5 = 0x35,
    DW_OP_lit6 = 0x36,
    DW_OP_lit7 = 0x37,
    DW_OP_lit8 = 0x38,
    DW_OP_lit9 = 0x39,
    DW_OP_lit10 = 0x3a,
    DW_OP_lit11 = 0x3b,
    DW_OP_lit12 = 0x3c,
    DW_OP_lit13 = 0x3d,
    DW_OP_lit14 = 0x3e,
    DW_OP_lit15 = 0x3f,
    DW_OP_lit16 = 0x40,
    DW_OP_lit17 = 0x41,
    DW_OP_lit18 = 0x42,
    DW_OP_lit19 = 0x43,
    DW_OP_lit20 = 0x44,
    DW_OP_lit21 = 0x45,
    DW_OP_lit22 = 0x46,
    DW_OP_lit23 = 0x47,
    DW_OP_lit24 = 0x48,
    DW_OP_lit25 = 0x49,
    DW_OP_lit26 = 0x4a,
    DW_OP_lit27 = 0x4b,
    DW_OP_lit28 = 0x4c,
    DW_OP_lit29 = 0x4d,
    DW_OP_lit30 = 0x4e,
    DW_OP_lit31 = 0x4f,
    DW_OP_reg0 = 0x50,
    DW_OP_reg1 = 0x51,
    DW_OP_reg2 = 0x52,
    DW_OP_reg3 = 0x53,
    DW_OP_reg4 = 0x54,
    DW_OP_reg5 = 0x55,
    DW_OP_reg6 = 0x56,
    DW_OP_reg7 = 0x57,
    DW_OP_reg8 = 0x58,
    DW_OP_reg9 = 0x59,
    DW_OP_reg10 = 0x5a,
    DW_OP_reg11 = 0x5b,
    DW_OP_reg12 = 0x5c,
    DW_OP_reg13 = 0x5d,
    DW_OP_reg14 = 0x5e,
    DW_OP_reg15 = 0x5f,
    DW_OP_reg16 = 0x60,
    DW_OP_reg17 = 0x61,
    DW_OP_reg18 = 0x62,
    DW_OP_reg19 = 0x63,
    DW_OP_reg20 = 0x64,
    DW_OP_reg21 = 0x65,
    DW_OP_reg22 = 0x66,
    DW_OP_reg23 = 0x67,
    DW_OP_reg24 = 0x68,
    DW_OP_reg25 = 0x69,
    DW_OP_reg26 = 0x6a,
    DW_OP_reg27 = 0x6b,
    DW_OP_reg28 = 0x6c,
    DW_OP_reg29 = 0x6d,
    DW_OP_reg30 = 0x6e,
    DW_OP_reg31 = 0x6f,
    DW_OP_breg0 = 0x70,
    DW_OP_breg1 = 0x71,
    DW_OP_breg2 = 0x72,
    DW_OP_breg3 = 0x73,
    DW_OP_breg4 = 0x74,
    DW_OP_breg5 = 0x75,
    DW_OP_breg6 = 0x76,
    DW_OP_breg7 = 0x77,
    DW_OP_breg8 = 0x78,
    DW_OP_breg9 = 0x79,
    DW_OP_breg10 = 0x7a,
    DW_OP_breg11 = 0x7b,
    DW_OP_breg12 = 0x7c,
    DW_OP_breg13 = 0x7d,
    DW_OP_breg14 = 0x7e,
    DW_OP_breg15 = 0x7f,
    DW_OP_breg16 = 0x80,
    DW_OP_breg17 = 0x81,
    DW_OP_breg18 = 0x82,
    DW_OP_breg19 = 0x83,
    DW_OP_breg20 = 0x84,
    DW_OP_breg21 = 0x85,
    DW_OP_breg22 = 0x86,
    DW_OP_breg23 = 0x87,
    DW_OP_breg24 = 0x88,
    DW_OP_breg25 = 0x89,
    DW_OP_breg26 = 0x8a,
    DW_OP_breg27 = 0x8b,
    DW_OP_breg28 = 0x8c,
    DW_OP_breg29 = 0x8d,
    DW_OP_breg30 = 0x8e,
    DW_OP_breg31 = 0x8f,
    DW_OP_regx = 0x90,
    DW_OP_fbreg = 0x91,
    DW_OP_bregx = 0x92,
    DW_OP_piece = 0x93,
    DW_OP_deref_size = 0x94,
    DW_OP_xderef_size = 0x95,
    DW_OP_nop = 0x96
  };






enum dwarf_type
  {
    DW_ATE_void = 0x0,
    DW_ATE_address = 0x1,
    DW_ATE_boolean = 0x2,
    DW_ATE_complex_float = 0x3,
    DW_ATE_float = 0x4,
    DW_ATE_signed = 0x5,
    DW_ATE_signed_char = 0x6,
    DW_ATE_unsigned = 0x7,
    DW_ATE_unsigned_char = 0x8
  };





enum dwarf_array_dim_ordering
  {
    DW_ORD_row_major = 0,
    DW_ORD_col_major = 1
  };


enum dwarf_access_attribute
  {
    DW_ACCESS_public = 1,
    DW_ACCESS_protected = 2,
    DW_ACCESS_private = 3
  };


enum dwarf_visibility_attribute
  {
    DW_VIS_local = 1,
    DW_VIS_exported = 2,
    DW_VIS_qualified = 3
  };


enum dwarf_virtuality_attribute
  {
    DW_VIRTUALITY_none = 0,
    DW_VIRTUALITY_virtual = 1,
    DW_VIRTUALITY_pure_virtual = 2
  };


enum dwarf_id_case
  {
    DW_ID_case_sensitive = 0,
    DW_ID_up_case = 1,
    DW_ID_down_case = 2,
    DW_ID_case_insensitive = 3
  };


enum dwarf_calling_convention
  {
    DW_CC_normal = 0x1,
    DW_CC_program = 0x2,
    DW_CC_nocall = 0x3
  };





enum dwarf_inline_attribute
  {
    DW_INL_not_inlined = 0,
    DW_INL_inlined = 1,
    DW_INL_declared_not_inlined = 2,
    DW_INL_declared_inlined = 3
  };


enum dwarf_discrim_list
  {
    DW_DSC_label = 0,
    DW_DSC_range = 1
  };


enum dwarf_line_number_ops
  {
    DW_LNS_extended_op = 0,
    DW_LNS_copy = 1,
    DW_LNS_advance_pc = 2,
    DW_LNS_advance_line = 3,
    DW_LNS_set_file = 4,
    DW_LNS_set_column = 5,
    DW_LNS_negate_stmt = 6,
    DW_LNS_set_basic_block = 7,
    DW_LNS_const_add_pc = 8,
    DW_LNS_fixed_advance_pc = 9
  };


enum dwarf_line_number_x_ops
  {
    DW_LNE_end_sequence = 1,
    DW_LNE_set_address = 2,
    DW_LNE_define_file = 3
  };


enum dwarf_call_frame_info
  {
    DW_CFA_advance_loc = 0x40,
    DW_CFA_offset = 0x80,
    DW_CFA_restore = 0xc0,
    DW_CFA_nop = 0x00,
    DW_CFA_set_loc = 0x01,
    DW_CFA_advance_loc1 = 0x02,
    DW_CFA_advance_loc2 = 0x03,
    DW_CFA_advance_loc4 = 0x04,
    DW_CFA_offset_extended = 0x05,
    DW_CFA_restore_extended = 0x06,
    DW_CFA_undefined = 0x07,
    DW_CFA_same_value = 0x08,
    DW_CFA_register = 0x09,
    DW_CFA_remember_state = 0x0a,
    DW_CFA_restore_state = 0x0b,
    DW_CFA_def_cfa = 0x0c,
    DW_CFA_def_cfa_register = 0x0d,
    DW_CFA_def_cfa_offset = 0x0e,
    DW_CFA_def_cfa_expression = 0x0f,
    DW_CFA_expression = 0x10,

    DW_CFA_offset_extended_sf = 0x11,
    DW_CFA_def_cfa_sf = 0x12,
    DW_CFA_def_cfa_offset_sf = 0x13,


    DW_CFA_MIPS_advance_loc8 = 0x1d,


    DW_CFA_GNU_window_save = 0x2d,
    DW_CFA_GNU_args_size = 0x2e,
    DW_CFA_GNU_negative_offset_extended = 0x2f
  };
# 534 "../sysdeps/generic/dwarf2.h"
enum dwarf_source_language
  {
    DW_LANG_C89 = 0x0001,
    DW_LANG_C = 0x0002,
    DW_LANG_Ada83 = 0x0003,
    DW_LANG_C_plus_plus = 0x0004,
    DW_LANG_Cobol74 = 0x0005,
    DW_LANG_Cobol85 = 0x0006,
    DW_LANG_Fortran77 = 0x0007,
    DW_LANG_Fortran90 = 0x0008,
    DW_LANG_Pascal83 = 0x0009,
    DW_LANG_Modula2 = 0x000a,
    DW_LANG_Java = 0x000b,
    DW_LANG_Mips_Assembler = 0x8001
  };







enum dwarf_macinfo_record_type
  {
    DW_MACINFO_define = 1,
    DW_MACINFO_undef = 2,
    DW_MACINFO_start_file = 3,
    DW_MACINFO_end_file = 4,
    DW_MACINFO_vendor_ext = 255
  };
# 98 "../sysdeps/generic/sysdep.h" 2
# 19 "../sysdeps/unix/sysdep.h" 2
# 1 "../sysdeps/unix/sysv/linux/single-thread.h" 1
# 20 "../sysdeps/unix/sysdep.h" 2
# 1 "../sysdeps/unix/sysv/linux/include/sys/syscall.h" 1
# 26 "../sysdeps/unix/sysv/linux/include/sys/syscall.h"
# 1 "../sysdeps/unix/sysv/linux/i386/arch-syscall.h" 1
# 27 "../sysdeps/unix/sysv/linux/include/sys/syscall.h" 2
# 21 "../sysdeps/unix/sysdep.h" 2
# 19 "../sysdeps/unix/i386/sysdep.h" 2
# 1 "../sysdeps/i386/sysdep.h" 1
# 19 "../sysdeps/i386/sysdep.h"
# 1 "../sysdeps/x86/sysdep.h" 1
# 22 "../sysdeps/x86/sysdep.h"
# 1 "../sysdeps/generic/sysdep.h" 1
# 23 "../sysdeps/x86/sysdep.h" 2
# 20 "../sysdeps/i386/sysdep.h" 2
# 20 "../sysdeps/unix/i386/sysdep.h" 2
# 25 "../sysdeps/unix/sysv/linux/i386/sysdep.h" 2


# 1 "../sysdeps/i386/i686/nptl/tls.h" 1
# 28 "../sysdeps/unix/sysv/linux/i386/sysdep.h" 2
# 239 "../sysdeps/unix/sysv/linux/i386/sysdep.h"
extern int __syscall_error (int)
  __attribute__ ((visibility ("hidden"))) __attribute__ ((__regparm__ (1)));
# 29 "../sysdeps/i386/nptl/tls.h" 2

# 1 "../sysdeps/unix/sysv/linux/i386/kernel-features.h" 1
# 31 "../sysdeps/i386/nptl/tls.h" 2
# 1 "../sysdeps/generic/dl-dtv.h" 1
# 22 "../sysdeps/generic/dl-dtv.h"
struct dtv_pointer
{
  void *val;
  void *to_free;
};


typedef union dtv
{
  size_t counter;
  struct dtv_pointer pointer;
} dtv_t;
# 32 "../sysdeps/i386/nptl/tls.h" 2

typedef struct
{
  void *tcb;

  dtv_t *dtv;
  void *self;
  int multiple_threads;
  uintptr_t sysinfo;
  uintptr_t stack_guard;
  uintptr_t pointer_guard;
  int gscope_flag;



  unsigned int feature_1;

  void *__private_tm[3];

  void *__private_ss;

  unsigned long ssp_base;
} tcbhead_t;


_Static_assert (
# 57 "../sysdeps/i386/nptl/tls.h" 3 4
               __builtin_offsetof (
# 57 "../sysdeps/i386/nptl/tls.h"
               tcbhead_t
# 57 "../sysdeps/i386/nptl/tls.h" 3 4
               , 
# 57 "../sysdeps/i386/nptl/tls.h"
               __private_ss
# 57 "../sysdeps/i386/nptl/tls.h" 3 4
               ) 
# 57 "../sysdeps/i386/nptl/tls.h"
                                                  == 0x30,
  "offset of __private_ss != 0x30");
# 78 "../sysdeps/i386/nptl/tls.h"
struct user_desc
{
  unsigned int entry_number;
  unsigned long int base_addr;
  unsigned int limit;
  unsigned int seg_32bit:1;
  unsigned int contents:2;
  unsigned int read_exec_only:1;
  unsigned int limit_in_pages:1;
  unsigned int seg_not_present:1;
  unsigned int useable:1;
  unsigned int empty:25;
};


union user_desc_init
{
  struct user_desc desc;
  unsigned int vals[4];
};
# 120 "../sysdeps/i386/nptl/tls.h"
# 1 "../nptl/descr.h" 1
# 22 "../nptl/descr.h"
# 1 "../include/limits.h" 1
# 195 "../include/limits.h"
# 1 "../include/bits/posix1_lim.h" 1
# 196 "../include/limits.h" 2



# 1 "../include/bits/posix2_lim.h" 1
# 200 "../include/limits.h" 2
# 23 "../nptl/descr.h" 2
# 1 "../include/sched.h" 1

# 1 "../posix/sched.h" 1
# 25 "../posix/sched.h"
# 1 "../include/bits/types.h" 1
# 26 "../posix/sched.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 30 "../posix/sched.h" 2

# 1 "../include/bits/types/time_t.h" 1
# 32 "../posix/sched.h" 2
# 1 "../include/bits/types/struct_timespec.h" 1
# 33 "../posix/sched.h" 2
# 43 "../posix/sched.h"
# 1 "../sysdeps/unix/sysv/linux/bits/sched.h" 1
# 76 "../sysdeps/unix/sysv/linux/bits/sched.h"
# 1 "../bits/types/struct_sched_param.h" 1
# 23 "../bits/types/struct_sched_param.h"
struct sched_param
{
  int sched_priority;
};
# 77 "../sysdeps/unix/sysv/linux/bits/sched.h" 2





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ ));


extern int unshare (int __flags) __attribute__ ((__nothrow__ ));


extern int sched_getcpu (void) __attribute__ ((__nothrow__ ));


extern int getcpu (unsigned int *, unsigned int *) __attribute__ ((__nothrow__ ));


extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ ));



# 44 "../posix/sched.h" 2
# 1 "../include/bits/cpu-set.h" 1
# 1 "../posix/bits/cpu-set.h" 1
# 32 "../posix/bits/cpu-set.h"
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 115 "../posix/bits/cpu-set.h"


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ ));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ )) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ ));


# 2 "../include/bits/cpu-set.h" 2
# 45 "../posix/sched.h" 2









extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ ));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ ));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ ));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ ));


extern int sched_yield (void) __attribute__ ((__nothrow__ ));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ ));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ ));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ ));
# 121 "../posix/sched.h"
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ ));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ ));



# 3 "../include/sched.h" 2



extern int __sched_setparam (__pid_t __pid,
        const struct sched_param *__param);
extern __typeof (__sched_setparam) __sched_setparam __asm__ ("" "__GI___sched_setparam") __attribute__ ((visibility ("hidden")));
extern int __sched_getparam (__pid_t __pid, struct sched_param *__param);
extern __typeof (__sched_getparam) __sched_getparam __asm__ ("" "__GI___sched_getparam") __attribute__ ((visibility ("hidden")));
extern int __sched_setscheduler (__pid_t __pid, int __policy,
     const struct sched_param *__param);
extern __typeof (__sched_setscheduler) __sched_setscheduler __asm__ ("" "__GI___sched_setscheduler") __attribute__ ((visibility ("hidden")));
extern int __sched_getscheduler (__pid_t __pid);
extern __typeof (__sched_getscheduler) __sched_getscheduler __asm__ ("" "__GI___sched_getscheduler") __attribute__ ((visibility ("hidden")));
extern int __sched_yield (void);
extern __typeof (__sched_yield) __sched_yield __asm__ ("" "__GI___sched_yield") __attribute__ ((visibility ("hidden")));
extern int __sched_get_priority_max (int __algorithm);
extern __typeof (__sched_get_priority_max) __sched_get_priority_max __asm__ ("" "__GI___sched_get_priority_max") __attribute__ ((visibility ("hidden")));
extern int __sched_get_priority_min (int __algorithm);
extern __typeof (__sched_get_priority_min) __sched_get_priority_min __asm__ ("" "__GI___sched_get_priority_min") __attribute__ ((visibility ("hidden")));
extern int __sched_rr_get_interval (__pid_t __pid, struct timespec *__t);


extern int __clone (int (*__fn) (void *__arg), void *__child_stack,
      int __flags, void *__arg, ...);
extern __typeof (__clone) __clone __asm__ ("" "__GI___clone") __attribute__ ((visibility ("hidden")));
extern int __clone2 (int (*__fn) (void *__arg), void *__child_stack_base,
       size_t __child_stack_size, int __flags, void *__arg, ...);
extern __typeof (__clone2) __clone2 __asm__ ("" "__GI___clone2") __attribute__ ((visibility ("hidden")));


extern int __getcpu (unsigned int *, unsigned int *);
extern __typeof (__getcpu) __getcpu __asm__ ("" "__GI___getcpu") __attribute__ ((visibility ("hidden")));
# 24 "../nptl/descr.h" 2
# 1 "../include/setjmp.h" 1

# 1 "../setjmp/setjmp.h" 1
# 27 "../setjmp/setjmp.h"


# 1 "../sysdeps/x86/bits/setjmp.h" 1
# 26 "../sysdeps/x86/bits/setjmp.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 27 "../sysdeps/x86/bits/setjmp.h" 2
# 35 "../sysdeps/x86/bits/setjmp.h"
typedef int __jmp_buf[6];
# 30 "../setjmp/setjmp.h" 2
# 1 "../include/bits/types/struct___jmp_buf_tag.h" 1
# 1 "../setjmp/bits/types/struct___jmp_buf_tag.h" 1
# 26 "../setjmp/bits/types/struct___jmp_buf_tag.h"
struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };
# 2 "../include/bits/types/struct___jmp_buf_tag.h" 2
# 31 "../setjmp/setjmp.h" 2

typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 54 "../setjmp/setjmp.h"
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 80 "../setjmp/setjmp.h"
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 90 "../setjmp/setjmp.h"

# 3 "../include/setjmp.h" 2





extern void __longjmp (__jmp_buf __env, int __val)
     __attribute__ ((__noreturn__)) __attribute__ ((visibility ("hidden")));

extern void ____longjmp_chk (__jmp_buf __env, int __val)
     __attribute__ ((__noreturn__)) __attribute__ ((visibility ("hidden")));





extern int __sigjmp_save (jmp_buf __env, int __savemask);

extern void _longjmp_unwind (jmp_buf env, int val);

extern void __libc_siglongjmp (sigjmp_buf env, int val)
   __attribute__ ((noreturn));
extern void __libc_longjmp (sigjmp_buf env, int val)
     __attribute__ ((noreturn));

extern __typeof (_setjmp) _setjmp __asm__ ("" "__GI__setjmp") __attribute__ ((visibility ("hidden")));
extern __typeof (__sigsetjmp) __sigsetjmp __asm__ ("" "__GI___sigsetjmp") __attribute__ ((visibility ("hidden")));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 36 "../include/setjmp.h" 2
# 1 "../sysdeps/unix/sysv/linux/i386/jmp_buf-macros.h" 1
# 37 "../include/setjmp.h" 2
# 55 "../include/setjmp.h"
_Static_assert (sizeof (jmp_buf) == 156, "size of " "jmp_buf" " != " "156");
_Static_assert (sizeof (sigjmp_buf) == 156, "size of " "sigjmp_buf" " != " "156");


_Static_assert (__alignof__ (jmp_buf) == 4 , "align of " "jmp_buf" " != " "4");
_Static_assert (__alignof__ (sigjmp_buf) == 4 , "align of " "sigjmp_buf" " != " "4");


_Static_assert (
# 63 "../include/setjmp.h" 3 4
__builtin_offsetof (
# 63 "../include/setjmp.h"
struct __jmp_buf_tag
# 63 "../include/setjmp.h" 3 4
, 
# 63 "../include/setjmp.h"
__mask_was_saved
# 63 "../include/setjmp.h" 3 4
) 
# 63 "../include/setjmp.h"
== 24, "offset of " "__mask_was_saved" " field of " "struct __jmp_buf_tag" " != " "24")
                            ;
_Static_assert (
# 65 "../include/setjmp.h" 3 4
__builtin_offsetof (
# 65 "../include/setjmp.h"
struct __jmp_buf_tag
# 65 "../include/setjmp.h" 3 4
, 
# 65 "../include/setjmp.h"
__saved_mask
# 65 "../include/setjmp.h" 3 4
) 
# 65 "../include/setjmp.h"
== 28, "offset of " "__saved_mask" " field of " "struct __jmp_buf_tag" " != " "28")
                        ;
# 25 "../nptl/descr.h" 2

# 1 "../include/sys/types.h" 1
# 27 "../nptl/descr.h" 2
# 1 "../sysdeps/x86/hp-timing.h" 1
# 22 "../sysdeps/x86/hp-timing.h"
# 1 "../sysdeps/i386/i686/isa.h" 1
# 23 "../sysdeps/x86/hp-timing.h" 2






typedef unsigned long long int hp_timing_t;
# 53 "../sysdeps/x86/hp-timing.h"
# 1 "../sysdeps/generic/hp-timing-common.h" 1
# 38 "../sysdeps/generic/hp-timing-common.h"
# 1 "../include/string.h" 1





# 1 "../include/sys/types.h" 1
# 7 "../include/string.h" 2


extern void *__memccpy (void *__dest, const void *__src,
   int __c, size_t __n);

extern size_t __strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__pure__));

extern char *__strsep (char **__stringp, const char *__delim);
extern __typeof (__strsep) __strsep __asm__ ("" "__GI___strsep") __attribute__ ((visibility ("hidden")));

extern int __strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__pure__));

extern int __strncasecmp (const char *__s1, const char *__s2,
     size_t __n)
     __attribute__ ((__pure__));

extern int __strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__pure__));

extern char *__strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__pure__));

extern char *__strdup (const char *__string)
     __attribute__ ((__malloc__));
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__malloc__));

extern void *__rawmemchr (const void *__s, int __c)
     __attribute__ ((__pure__));

extern char *__strchrnul (const char *__s, int __c)
     __attribute__ ((__pure__));

extern void *__memrchr (const void *__s, int __c, size_t __n)
     __attribute__ ((__pure__));

extern void *__memchr (const void *__s, int __c, size_t __n)
     __attribute__ ((__pure__));

extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) ;

extern int __ffs (int __i) __attribute__ ((const));

extern char *__strerror_r (int __errnum, char *__buf, size_t __buflen);

extern char *__strerror_l (int __errnum, locale_t __loc);

extern const char *__sigdescr_np (int __errnum);
extern __typeof (__sigdescr_np) __sigdescr_np __asm__ ("" "__GI___sigdescr_np") __attribute__ ((visibility ("hidden")));


# 1 "../sysdeps/x86/string_private.h" 1
# 61 "../include/string.h" 2


# 1 "../string/string.h" 1
# 26 "../string/string.h"
# 1 "../bits/libc-header-start.h" 1
# 27 "../string/string.h" 2






# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 34 "../string/string.h" 2
# 43 "../string/string.h"
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) ;





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 91 "../string/string.h"
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 104 "../string/string.h"
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 117 "../string/string.h"
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__))
      __attribute__ ((__access__ (__read_only__, 1, 3)));





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) ;

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) ;


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "../include/bits/types/locale_t.h" 1
# 157 "../string/string.h" 2


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ ))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
# 230 "../string/string.h"
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 257 "../string/string.h"
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 270 "../string/string.h"
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 307 "../string/string.h"
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 334 "../string/string.h"
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) ;



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) ;

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) ;
# 364 "../string/string.h"
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) ;
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) ;




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 428 "../string/string.h"
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__access__ (__write_only__, 2, 3)));




extern const char *strerrordesc_np (int __err) __attribute__ ((__nothrow__ ));

extern const char *strerrorname_np (int __err) __attribute__ ((__nothrow__ ));





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));



# 1 "../include/strings.h" 1
# 1 "../string/strings.h" 1
# 23 "../string/strings.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 24 "../string/strings.h" 2










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) ;


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) ;
# 68 "../string/strings.h"
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;
# 96 "../string/strings.h"
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;



# 1 "../include/bits/types/locale_t.h" 1
# 126 "../string/strings.h" 2


extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;



# 2 "../include/strings.h" 2
# 447 "../string/string.h" 2



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) ;




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));



extern const char *sigabbrev_np (int __sig) __attribute__ ((__nothrow__ ));


extern const char *sigdescr_np (int __sig) __attribute__ ((__nothrow__ ));



extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) ;



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) ;
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) ;




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) ;


extern char *strfry (char *__string) __attribute__ ((__nothrow__ )) ;


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ ))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 511 "../string/string.h"
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ )) ;
# 523 "../string/string.h"

# 64 "../include/string.h" 2


extern __typeof (strcoll_l) __strcoll_l;
extern __typeof (strxfrm_l) __strxfrm_l;
extern __typeof (strcasecmp_l) __strcasecmp_l;
extern __typeof (strncasecmp_l) __strncasecmp_l;
# 85 "../include/string.h"
extern __typeof (__mempcpy) __mempcpy __asm__ ("" "__GI___mempcpy") __attribute__ ((visibility ("hidden")));



extern __typeof (__stpcpy) __stpcpy __asm__ ("" "__GI___stpcpy") __attribute__ ((visibility ("hidden")));



extern __typeof (__stpncpy) __stpncpy __asm__ ("" "__GI___stpncpy") __attribute__ ((visibility ("hidden")));
extern __typeof (__rawmemchr) __rawmemchr __asm__ ("" "__GI___rawmemchr") __attribute__ ((visibility ("hidden")));
extern __typeof (__strcasecmp) __strcasecmp __asm__ ("" "__GI___strcasecmp") __attribute__ ((visibility ("hidden")));
extern __typeof (__strcasecmp_l) __strcasecmp_l __asm__ ("" "__GI___strcasecmp_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strncasecmp_l) __strncasecmp_l __asm__ ("" "__GI___strncasecmp_l") __attribute__ ((visibility ("hidden")));
extern __typeof (strncat) __strncat;
extern __typeof (__strncat) __strncat __asm__ ("" "__GI___strncat") __attribute__ ((visibility ("hidden")));
extern __typeof (__strdup) __strdup __asm__ ("" "__GI___strdup") __attribute__ ((visibility ("hidden")));
extern __typeof (__strndup) __strndup __asm__ ("" "__GI___strndup") __attribute__ ((visibility ("hidden")));
extern __typeof (__strerror_r) __strerror_r __asm__ ("" "__GI___strerror_r") __attribute__ ((visibility ("hidden")));
extern __typeof (__strverscmp) __strverscmp __asm__ ("" "__GI___strverscmp") __attribute__ ((visibility ("hidden")));
extern __typeof (basename) basename __asm__ ("" "__GI_basename") __attribute__ ((visibility ("hidden")));
extern char *__basename (const char *__filename) __attribute__ ((__nothrow__ )) ;
extern __typeof (__basename) __basename __asm__ ("" "__GI___basename") __attribute__ ((visibility ("hidden")));
extern __typeof (strcoll) strcoll __asm__ ("" "__GI_strcoll") __attribute__ ((visibility ("hidden")));
extern __typeof (__strcoll_l) __strcoll_l __asm__ ("" "__GI___strcoll_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strxfrm_l) __strxfrm_l __asm__ ("" "__GI___strxfrm_l") __attribute__ ((visibility ("hidden")));
extern __typeof (__strtok_r) __strtok_r __asm__ ("" "__GI___strtok_r") __attribute__ ((visibility ("hidden")));
extern char *__strsep_g (char **__stringp, const char *__delim);
extern __typeof (__strsep_g) __strsep_g __asm__ ("" "__GI___strsep_g") __attribute__ ((visibility ("hidden")));
extern __typeof (strnlen) strnlen __asm__ ("" "__GI_strnlen") __attribute__ ((visibility ("hidden")));
extern __typeof (__strnlen) __strnlen __asm__ ("" "__GI___strnlen") __attribute__ ((visibility ("hidden")));
extern __typeof (memmem) memmem __asm__ ("" "__GI_memmem") __attribute__ ((visibility ("hidden")));
extern __typeof (memmem) __memmem;
extern __typeof (__memmem) __memmem __asm__ ("" "__GI___memmem") __attribute__ ((visibility ("hidden")));
extern __typeof (__ffs) __ffs __asm__ ("" "__GI___ffs") __attribute__ ((visibility ("hidden")));
extern __typeof (__strerror_l) __strerror_l __asm__ ("" "__GI___strerror_l") __attribute__ ((visibility ("hidden")));



void __explicit_bzero_chk_internal (void *, size_t, size_t)
  __attribute__ ((__nothrow__ )) __attribute__ ((visibility ("hidden")));
# 133 "../include/string.h"
extern __typeof (memchr) memchr __asm__ ("" "__GI_memchr") __attribute__ ((visibility ("hidden")));
extern __typeof (memcpy) memcpy __asm__ ("" "__GI_memcpy") __attribute__ ((visibility ("hidden")));
extern __typeof (mempcpy) mempcpy __asm__ ("" "__GI_mempcpy") __attribute__ ((visibility ("hidden")));
extern __typeof (memcmp) memcmp __asm__ ("" "__GI_memcmp") __attribute__ ((visibility ("hidden")));
extern __typeof (memmove) memmove __asm__ ("" "__GI_memmove") __attribute__ ((visibility ("hidden")));
extern __typeof (memset) memset __asm__ ("" "__GI_memset") __attribute__ ((visibility ("hidden")));
extern __typeof (strcat) strcat __asm__ ("" "__GI_strcat") __attribute__ ((visibility ("hidden")));
extern __typeof (strchr) strchr __asm__ ("" "__GI_strchr") __attribute__ ((visibility ("hidden")));
extern __typeof (strcmp) strcmp __asm__ ("" "__GI_strcmp") __attribute__ ((visibility ("hidden")));
extern __typeof (strcpy) strcpy __asm__ ("" "__GI_strcpy") __attribute__ ((visibility ("hidden")));
extern __typeof (strcspn) strcspn __asm__ ("" "__GI_strcspn") __attribute__ ((visibility ("hidden")));
extern __typeof (strlen) strlen __asm__ ("" "__GI_strlen") __attribute__ ((visibility ("hidden")));
extern __typeof (strncmp) strncmp __asm__ ("" "__GI_strncmp") __attribute__ ((visibility ("hidden")));
extern __typeof (strncpy) strncpy __asm__ ("" "__GI_strncpy") __attribute__ ((visibility ("hidden")));
extern __typeof (strpbrk) strpbrk __asm__ ("" "__GI_strpbrk") __attribute__ ((visibility ("hidden")));
extern __typeof (stpcpy) stpcpy __asm__ ("" "__GI_stpcpy") __attribute__ ((visibility ("hidden")));
extern __typeof (strrchr) strrchr __asm__ ("" "__GI_strrchr") __attribute__ ((visibility ("hidden")));
extern __typeof (strspn) strspn __asm__ ("" "__GI_strspn") __attribute__ ((visibility ("hidden")));
extern __typeof (strstr) strstr __asm__ ("" "__GI_strstr") __attribute__ ((visibility ("hidden")));
extern __typeof (ffs) ffs __asm__ ("" "__GI_ffs") __attribute__ ((visibility ("hidden")));
# 182 "../include/string.h"
extern void *__memcpy_chk (void *__restrict __dest,
      const void *__restrict __src, size_t __len,
      size_t __destlen) __attribute__ ((__nothrow__ ));
extern void *__memmove_chk (void *__dest, const void *__src, size_t __len,
       size_t __destlen) __attribute__ ((__nothrow__ ));
extern void *__mempcpy_chk (void *__restrict __dest,
       const void *__restrict __src, size_t __len,
       size_t __destlen) __attribute__ ((__nothrow__ ));
extern void *__memset_chk (void *__dest, int __ch, size_t __len,
      size_t __destlen) __attribute__ ((__nothrow__ ));
extern char *__strcpy_chk (char *__restrict __dest,
      const char *__restrict __src,
      size_t __destlen) __attribute__ ((__nothrow__ ));
extern char *__stpcpy_chk (char *__restrict __dest,
      const char *__restrict __src,
      size_t __destlen) __attribute__ ((__nothrow__ ));
extern char *__strncpy_chk (char *__restrict __dest,
       const char *__restrict __src,
       size_t __len, size_t __destlen) __attribute__ ((__nothrow__ ));
extern char *__strcat_chk (char *__restrict __dest,
      const char *__restrict __src,
      size_t __destlen) __attribute__ ((__nothrow__ ));
extern char *__strncat_chk (char *__restrict __dest,
       const char *__restrict __src,
       size_t __len, size_t __destlen) __attribute__ ((__nothrow__ ));
# 39 "../sysdeps/generic/hp-timing-common.h" 2
# 1 "../include/sys/param.h" 1
# 40 "../sysdeps/generic/hp-timing-common.h" 2
# 1 "../sysdeps/generic/_itoa.h" 1
# 22 "../sysdeps/generic/_itoa.h"
# 1 "../include/limits.h" 1
# 195 "../include/limits.h"
# 1 "../include/bits/posix1_lim.h" 1
# 196 "../include/limits.h" 2



# 1 "../include/bits/posix2_lim.h" 1
# 200 "../include/limits.h" 2
# 23 "../sysdeps/generic/_itoa.h" 2
# 44 "../sysdeps/generic/_itoa.h"
extern char *_itoa (unsigned long long int value, char *buflim,
      unsigned int base, int upper_case) __attribute__ ((visibility ("hidden")));

extern const char _itoa_upper_digits[];
extern const char _itoa_lower_digits[];

extern __typeof (_itoa_upper_digits) _itoa_upper_digits __asm__ ("" "__GI__itoa_upper_digits") __attribute__ ((visibility ("hidden")));
extern __typeof (_itoa_lower_digits) _itoa_lower_digits __asm__ ("" "__GI__itoa_lower_digits") __attribute__ ((visibility ("hidden")));



extern char *_itoa_word (unsigned long int value, char *buflim,
    unsigned int base,
    int upper_case) __attribute__ ((visibility ("hidden")));
# 91 "../sysdeps/generic/_itoa.h"
extern char *_fitoa_word (unsigned long int value, char *buf,
     unsigned int base,
     int upper_case) __attribute__ ((visibility ("hidden")));
extern char *_fitoa (unsigned long long value, char *buf, unsigned int base,
       int upper_case) __attribute__ ((visibility ("hidden")));
# 41 "../sysdeps/generic/hp-timing-common.h" 2
# 54 "../sysdeps/x86/hp-timing.h" 2
# 28 "../nptl/descr.h" 2
# 1 "../include/list_t.h" 1
# 25 "../include/list_t.h"
typedef struct list_head
{
  struct list_head *next;
  struct list_head *prev;
} list_t;
# 29 "../nptl/descr.h" 2
# 1 "../sysdeps/unix/sysv/linux/x86/lowlevellock.h" 1
# 23 "../sysdeps/unix/sysv/linux/x86/lowlevellock.h"
# 1 "../sysdeps/nptl/lowlevellock.h" 1
# 22 "../sysdeps/nptl/lowlevellock.h"
# 1 "../include/atomic.h" 1
# 23 "../sysdeps/nptl/lowlevellock.h" 2
# 1 "../sysdeps/nptl/lowlevellock-futex.h" 1
# 24 "../sysdeps/nptl/lowlevellock-futex.h"
# 1 "../sysdeps/unix/sysv/linux/sysdep-cancel.h" 1
# 28 "../sysdeps/unix/sysv/linux/sysdep-cancel.h"
extern int __libc_enable_asynccancel (void) __attribute__ ((visibility ("hidden")));
extern void __libc_disable_asynccancel (int oldtype) __attribute__ ((visibility ("hidden")));


extern int __librt_enable_asynccancel (void) __attribute__ ((visibility ("hidden")));
extern void __librt_disable_asynccancel (int oldtype) __attribute__ ((visibility ("hidden")));


extern int __pthread_enable_asynccancel (void) __attribute__ ((visibility ("hidden")));
extern void __pthread_disable_asynccancel (int oldtype) __attribute__ ((visibility ("hidden")));
# 25 "../sysdeps/nptl/lowlevellock-futex.h" 2
# 1 "../sysdeps/unix/sysv/linux/i386/kernel-features.h" 1
# 26 "../sysdeps/nptl/lowlevellock-futex.h" 2
# 24 "../sysdeps/nptl/lowlevellock.h" 2
# 1 "../include/time.h" 1

# 1 "../time/time.h" 1
# 29 "../time/time.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 30 "../time/time.h" 2



# 1 "../sysdeps/unix/sysv/linux/bits/time.h" 1
# 26 "../sysdeps/unix/sysv/linux/bits/time.h"
# 1 "../include/bits/types.h" 1
# 27 "../sysdeps/unix/sysv/linux/bits/time.h" 2
# 73 "../sysdeps/unix/sysv/linux/bits/time.h"
# 1 "../sysdeps/unix/sysv/linux/bits/timex.h" 1
# 21 "../sysdeps/unix/sysv/linux/bits/timex.h"
# 1 "../include/bits/types.h" 1
# 22 "../sysdeps/unix/sysv/linux/bits/timex.h" 2
# 1 "../include/bits/types/struct_timeval.h" 1
# 23 "../sysdeps/unix/sysv/linux/bits/timex.h" 2



struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 74 "../sysdeps/unix/sysv/linux/bits/time.h" 2




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ ));


# 34 "../time/time.h" 2



# 1 "../include/bits/types/clock_t.h" 1
# 38 "../time/time.h" 2
# 1 "../include/bits/types/time_t.h" 1
# 39 "../time/time.h" 2
# 1 "../include/bits/types/struct_tm.h" 1
# 1 "../time/bits/types/struct_tm.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/struct_tm.h" 2


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 2 "../include/bits/types/struct_tm.h" 2
# 40 "../time/time.h" 2


# 1 "../include/bits/types/struct_timespec.h" 1
# 43 "../time/time.h" 2



# 1 "../include/bits/types/clockid_t.h" 1
# 47 "../time/time.h" 2
# 1 "../include/bits/types/timer_t.h" 1
# 48 "../time/time.h" 2
# 1 "../include/bits/types/struct_itimerspec.h" 1
# 1 "../time/bits/types/struct_itimerspec.h" 1



# 1 "../include/bits/types.h" 1
# 5 "../time/bits/types/struct_itimerspec.h" 2
# 1 "../include/bits/types/struct_timespec.h" 1
# 6 "../time/bits/types/struct_itimerspec.h" 2


struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 2 "../include/bits/types/struct_itimerspec.h" 2
# 49 "../time/time.h" 2
struct sigevent;
# 60 "../time/time.h"
# 1 "../include/bits/types/locale_t.h" 1
# 61 "../time/time.h" 2











extern clock_t clock (void) __attribute__ ((__nothrow__ ));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ ));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ ));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));




extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ ));






extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ ));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ ));





extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ ));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ ));




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));




extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ ));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ ));






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ ));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ ));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ ));



extern int daylight;
extern long int timezone;
# 190 "../time/time.h"
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern int dysize (int __year) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 205 "../time/time.h"
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ ));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ ));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ ));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ ));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ ));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ ));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ ));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ ));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ ));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ )) ;
# 274 "../time/time.h"
extern int getdate_err;
# 283 "../time/time.h"
extern struct tm *getdate (const char *__string);
# 297 "../time/time.h"
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 3 "../include/time.h" 2


# 1 "../include/bits/types/struct_timeval.h" 1
# 6 "../include/time.h" 2


# 1 "../include/bits/types/locale_t.h" 1
# 9 "../include/time.h" 2

# 1 "../time/mktime-internal.h" 1
# 33 "../time/mktime-internal.h"
typedef long int mktime_offset_t;
# 76 "../time/mktime-internal.h"
extern __time64_t __mktime_internal (struct tm *tp,
                                     struct tm *(*func) (__time64_t const *,
                                                         struct tm *),
                                     mktime_offset_t *offset) __attribute__ ((visibility ("hidden")));
# 11 "../include/time.h" 2
# 1 "../include/sys/time.h" 1
# 20 "../include/sys/time.h"
# 1 "../time/sys/time.h" 1
# 23 "../time/sys/time.h"
# 1 "../include/bits/types.h" 1
# 24 "../time/sys/time.h" 2
# 1 "../include/bits/types/time_t.h" 1
# 25 "../time/sys/time.h" 2
# 1 "../include/bits/types/struct_timeval.h" 1
# 26 "../time/sys/time.h" 2
# 34 "../time/sys/time.h"

# 52 "../time/sys/time.h"
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };
# 66 "../time/sys/time.h"
extern int gettimeofday (struct timeval *__restrict __tv,
    void *__restrict __tz) __attribute__ ((__nothrow__ )) ;







extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ ));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ ));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ ));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ ));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) ;



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) ;


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));
# 187 "../time/sys/time.h"

# 21 "../include/sys/time.h" 2


extern int __gettimeofday (struct timeval *__tv,
      void *__tz);
extern int __settimezone (const struct timezone *__tz)
 __attribute__ ((visibility ("hidden")));
extern int __adjtime (const struct timeval *__delta,
        struct timeval *__olddelta);





extern int __adjtime64 (const struct __timeval64 *itv,
                        struct __timeval64 *otv);
extern __typeof (__adjtime64) __adjtime64 __asm__ ("" "__GI___adjtime64") __attribute__ ((visibility ("hidden")));

extern int __getitimer (enum __itimer_which __which,
   struct itimerval *__value);
extern int __setitimer (enum __itimer_which __which,
   const struct itimerval *__restrict __new,
   struct itimerval *__restrict __old)
 __attribute__ ((visibility ("hidden")));
extern int __utimes (const char *__file, const struct timeval __tvp[2])
 __attribute__ ((visibility ("hidden")));
extern int __futimes (int fd, const struct timeval tvp[2]) __attribute__ ((visibility ("hidden")));
# 12 "../include/time.h" 2
# 1 "../sysdeps/unix/sysv/linux/time-clockid.h" 1
# 13 "../include/time.h" 2


extern __typeof (strftime_l) __strftime_l;
extern __typeof (__strftime_l) __strftime_l __asm__ ("" "__GI___strftime_l") __attribute__ ((visibility ("hidden")));
extern __typeof (strptime_l) __strptime_l;

extern __typeof (asctime) asctime __asm__ ("" "__GI_asctime") __attribute__ ((visibility ("hidden")));
extern __typeof (mktime) mktime __asm__ ("" "__GI_mktime") __attribute__ ((visibility ("hidden")));
extern __typeof (timelocal) timelocal __asm__ ("" "__GI_timelocal") __attribute__ ((visibility ("hidden")));
extern __typeof (localtime) localtime __asm__ ("" "__GI_localtime") __attribute__ ((visibility ("hidden")));
extern __typeof (strftime) strftime __asm__ ("" "__GI_strftime") __attribute__ ((visibility ("hidden")));
extern __typeof (strptime) strptime __asm__ ("" "__GI_strptime") __attribute__ ((visibility ("hidden")));

extern __typeof (clock_gettime) __clock_gettime;
extern __typeof (__clock_gettime) __clock_gettime __asm__ ("" "__GI___clock_gettime") __attribute__ ((visibility ("hidden")));
extern __typeof (clock_settime) __clock_settime;
extern __typeof (__clock_settime) __clock_settime __asm__ ("" "__GI___clock_settime") __attribute__ ((visibility ("hidden")));

extern __typeof (clock_nanosleep) __clock_nanosleep;
extern __typeof (__clock_nanosleep) __clock_nanosleep __asm__ ("" "__GI___clock_nanosleep") __attribute__ ((visibility ("hidden")));;


extern __typeof (clock_adjtime) __clock_adjtime;
extern __typeof (__clock_adjtime) __clock_adjtime __asm__ ("" "__GI___clock_adjtime") __attribute__ ((visibility ("hidden")));;



struct tm;


extern const unsigned short int __mon_yday[2][13] __attribute__ ((visibility ("hidden")));


extern struct tm _tmbuf __attribute__ ((visibility ("hidden")));


extern char *__tzstring (const char *string) __attribute__ ((visibility ("hidden")));

extern int __use_tzfile __attribute__ ((visibility ("hidden")));

extern void __tzfile_read (const char *file, size_t extra,
      char **extrap) __attribute__ ((visibility ("hidden")));
extern void __tzfile_compute (__time64_t timer, int use_localtime,
         long int *leap_correct, int *leap_hit,
         struct tm *tp) __attribute__ ((visibility ("hidden")));
extern void __tzfile_default (const char *std, const char *dst,
         int stdoff, int dstoff)
  __attribute__ ((visibility ("hidden")));
extern void __tzset_parse_tz (const char *tz) __attribute__ ((visibility ("hidden")));
extern void __tz_compute (__time64_t timer, struct tm *tm, int use_localtime)
  __attribute__ ((__nothrow__ )) __attribute__ ((visibility ("hidden")));






struct __itimerspec64
{
  struct __timespec64 it_interval;
  struct __timespec64 it_value;
};
# 83 "../include/time.h"
struct __utimbuf64
{
  __time64_t actime;
  __time64_t modtime;
};

struct __itimerval64
{
  struct __timeval64 it_interval;
  struct __timeval64 it_value;
};






extern int __getitimer64 (enum __itimer_which __which,
                          struct __itimerval64 *__value);

extern __typeof (__getitimer64) __getitimer64 __asm__ ("" "__GI___getitimer64") __attribute__ ((visibility ("hidden")));
extern int __setitimer64 (enum __itimer_which __which,
                          const struct __itimerval64 *__restrict __new,
                          struct __itimerval64 *__restrict __old);
extern __typeof (__setitimer64) __setitimer64 __asm__ ("" "__GI___setitimer64") __attribute__ ((visibility ("hidden")));





extern char *__ctime64 (const __time64_t *__timer) __attribute__ ((__nothrow__ ));
extern __typeof (__ctime64) __ctime64 __asm__ ("" "__GI___ctime64") __attribute__ ((visibility ("hidden")));





extern char *__ctime64_r (const __time64_t *__restrict __timer,
            char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern __typeof (__ctime64_r) __ctime64_r __asm__ ("" "__GI___ctime64_r") __attribute__ ((visibility ("hidden")));





extern struct tm *__localtime64 (const __time64_t *__timer);
extern __typeof (__localtime64) __localtime64 __asm__ ("" "__GI___localtime64") __attribute__ ((visibility ("hidden")));


extern struct tm *__localtime_r (const time_t *__timer,
     struct tm *__tp) __attribute__ ((visibility ("hidden")));

extern struct tm *__localtime64_r (const __time64_t *__timer,
       struct tm *__tp);
extern __typeof (__localtime64_r) __localtime64_r __asm__ ("" "__GI___localtime64_r") __attribute__ ((visibility ("hidden")));

extern __time64_t __mktime64 (struct tm *__tp) __attribute__ ((__nothrow__ ));
extern __typeof (__mktime64) __mktime64 __asm__ ("" "__GI___mktime64") __attribute__ ((visibility ("hidden")));


extern struct tm *__gmtime_r (const time_t *__restrict __timer,
         struct tm *__restrict __tp);
extern __typeof (__gmtime_r) __gmtime_r __asm__ ("" "__GI___gmtime_r") __attribute__ ((visibility ("hidden")));




extern struct tm *__gmtime64 (const __time64_t *__timer);
extern __typeof (__gmtime64) __gmtime64 __asm__ ("" "__GI___gmtime64") __attribute__ ((visibility ("hidden")));

extern struct tm *__gmtime64_r (const __time64_t *__restrict __timer,
    struct tm *__restrict __tp);
extern __typeof (__gmtime64_r) __gmtime64_r __asm__ ("" "__GI___gmtime64_r") __attribute__ ((visibility ("hidden")));

extern __time64_t __timegm64 (struct tm *__tp) __attribute__ ((__nothrow__ ));
extern __typeof (__timegm64) __timegm64 __asm__ ("" "__GI___timegm64") __attribute__ ((visibility ("hidden")));





extern int __clock_settime64 (clockid_t clock_id,
                              const struct __timespec64 *tp);
extern __typeof (__clock_settime64) __clock_settime64 __asm__ ("" "__GI___clock_settime64") __attribute__ ((visibility ("hidden")));





extern int __clock_getres64 (clockid_t clock_id,
                             struct __timespec64 *tp);
extern __typeof (__clock_getres64) __clock_getres64 __asm__ ("" "__GI___clock_getres64") __attribute__ ((visibility ("hidden")));;







extern int __utime64 (const char *file, const struct __utimbuf64 *times);
extern __typeof (__utime64) __utime64 __asm__ ("" "__GI___utime64") __attribute__ ((visibility ("hidden")));
extern int __utimes64 (const char *file, const struct __timeval64 tvp[2]);
extern __typeof (__utimes64) __utimes64 __asm__ ("" "__GI___utimes64") __attribute__ ((visibility ("hidden")));
extern int __utimensat64 (int fd, const char *file,
                          const struct __timespec64 tsp[2], int flags);
extern __typeof (__utimensat64) __utimensat64 __asm__ ("" "__GI___utimensat64") __attribute__ ((visibility ("hidden")));;


extern int __utimensat64_helper (int fd, const char *file,
                                 const struct __timespec64 tsp[2], int flags);
extern __typeof (__utimensat64_helper) __utimensat64_helper __asm__ ("" "__GI___utimensat64_helper") __attribute__ ((visibility ("hidden")));;







extern int __futimes64 (int fd, const struct __timeval64 tvp64[2]);
extern __typeof (__futimes64) __futimes64 __asm__ ("" "__GI___futimes64") __attribute__ ((visibility ("hidden")));;
extern int __futimesat64 (int fd, const char *file,
                          const struct __timeval64 tvp[2]);
extern __typeof (__futimesat64) __futimesat64 __asm__ ("" "__GI___futimesat64") __attribute__ ((visibility ("hidden")));;
extern int __lutimes64 (const char *file, const struct __timeval64 tvp64[2]);
extern __typeof (__lutimes64) __lutimes64 __asm__ ("" "__GI___lutimes64") __attribute__ ((visibility ("hidden")));;
extern int __futimens64 (int fd, const struct __timespec64 tsp[2]);
extern __typeof (__futimens64) __futimens64 __asm__ ("" "__GI___futimens64") __attribute__ ((visibility ("hidden")));;






extern int __timer_gettime64 (timer_t timerid, struct __itimerspec64 *value);
extern int __timerfd_gettime64 (int fd, struct __itimerspec64 *value);
;
extern __typeof (__timerfd_gettime64) __timerfd_gettime64 __asm__ ("" "__GI___timerfd_gettime64") __attribute__ ((visibility ("hidden")));;






extern int __timer_settime64 (timer_t timerid, int flags,
                              const struct __itimerspec64 *value,
                              struct __itimerspec64 *ovalue);
extern int __timerfd_settime64 (int fd, int flags,
                                const struct __itimerspec64 *value,
                                struct __itimerspec64 *ovalue);
;
extern __typeof (__timerfd_settime64) __timerfd_settime64 __asm__ ("" "__GI___timerfd_settime64") __attribute__ ((visibility ("hidden")));;





extern int __sched_rr_get_interval64 (pid_t pid, struct __timespec64 *tp);
extern __typeof (__sched_rr_get_interval64) __sched_rr_get_interval64 __asm__ ("" "__GI___sched_rr_get_interval64") __attribute__ ((visibility ("hidden")));;






extern int __settimeofday64 (const struct __timeval64 *tv,
                             const struct timezone *tz);
extern __typeof (__settimeofday64) __settimeofday64 __asm__ ("" "__GI___settimeofday64") __attribute__ ((visibility ("hidden")));
extern int __gettimeofday64 (struct __timeval64 *restrict tv,
                             void *restrict tz);
extern __typeof (__gettimeofday64) __gettimeofday64 __asm__ ("" "__GI___gettimeofday64") __attribute__ ((visibility ("hidden")));






extern int __offtime (__time64_t __timer,
        long int __offset,
        struct tm *__tp) __attribute__ ((visibility ("hidden")));

extern char *__asctime_r (const struct tm *__tp, char *__buf)
  __attribute__ ((visibility ("hidden")));
extern void __tzset (void) __attribute__ ((visibility ("hidden")));


extern struct tm *__tz_convert (__time64_t timer, int use_localtime,
    struct tm *tp) __attribute__ ((visibility ("hidden")));

extern int __nanosleep (const struct timespec *__requested_time,
   struct timespec *__remaining);
extern __typeof (__nanosleep) __nanosleep __asm__ ("" "__GI___nanosleep") __attribute__ ((visibility ("hidden")));



extern int __nanosleep64 (const struct __timespec64 *__requested_time,
     struct __timespec64 *__remaining);
extern __typeof (__nanosleep64) __nanosleep64 __asm__ ("" "__GI___nanosleep64") __attribute__ ((visibility ("hidden")));



extern int __getdate_r (const char *__string, struct tm *__resbufp)
  __attribute__ ((visibility ("hidden")));



extern int __getclktck (void) __attribute__ ((visibility ("hidden")));



extern char * __strptime_internal (const char *rp, const char *fmt,
       struct tm *tm, void *statep,
       locale_t locparam) __attribute__ ((visibility ("hidden")));




extern double __difftime64 (__time64_t time1, __time64_t time0);
extern __typeof (__difftime64) __difftime64 __asm__ ("" "__GI___difftime64") __attribute__ ((visibility ("hidden")));


extern double __difftime (time_t time1, time_t time0);






extern int __clock_nanosleep_time64 (clockid_t clock_id,
                                     int flags, const struct __timespec64 *req,
                                     struct __timespec64 *rem);
extern __typeof (__clock_nanosleep_time64) __clock_nanosleep_time64 __asm__ ("" "__GI___clock_nanosleep_time64") __attribute__ ((visibility ("hidden")));
extern int __clock_gettime64 (clockid_t clock_id, struct __timespec64 *tp);
extern __typeof (__clock_gettime64) __clock_gettime64 __asm__ ("" "__GI___clock_gettime64") __attribute__ ((visibility ("hidden")));
extern int __timespec_get64 (struct __timespec64 *ts, int base);
extern __typeof (__timespec_get64) __timespec_get64 __asm__ ("" "__GI___timespec_get64") __attribute__ ((visibility ("hidden")));





extern __time64_t __time64 (__time64_t *timer);
extern __typeof (__time64) __time64 __asm__ ("" "__GI___time64") __attribute__ ((visibility ("hidden")));







static inline 
# 332 "../include/time.h" 3 4
             _Bool

# 333 "../include/time.h"
in_time_t_range (__time64_t t)
{
  time_t s = t;
  return s == t;
}


static inline struct __timespec64
valid_timeval_to_timespec64 (const struct timeval tv)
{
  struct __timespec64 ts64;

  ts64.tv_sec = tv.tv_sec;
  ts64.tv_nsec = tv.tv_usec * 1000;

  return ts64;
}


static inline struct __timeval64
valid_timeval_to_timeval64 (const struct timeval tv)
{
  struct __timeval64 tv64;

  tv64.tv_sec = tv.tv_sec;
  tv64.tv_usec = tv.tv_usec;

  return tv64;
}



static inline struct timeval
valid_timeval64_to_timeval (const struct __timeval64 tv64)
{
  struct timeval tv;

  tv.tv_sec = (time_t) tv64.tv_sec;
  tv.tv_usec = (suseconds_t) tv64.tv_usec;

  return tv;
}


static inline struct __timespec64
timeval64_to_timespec64 (const struct __timeval64 tv64)
{
  struct __timespec64 ts64;

  ts64.tv_sec = tv64.tv_sec;
  ts64.tv_nsec = tv64.tv_usec * 1000;

  return ts64;
}


static inline struct __timespec64
valid_timespec_to_timespec64 (const struct timespec ts)
{
  struct __timespec64 ts64;

  ts64.tv_sec = ts.tv_sec;
  ts64.tv_nsec = ts.tv_nsec;

  return ts64;
}



static inline struct timespec
valid_timespec64_to_timespec (const struct __timespec64 ts64)
{
  struct timespec ts;

  ts.tv_sec = (time_t) ts64.tv_sec;
  ts.tv_nsec = ts64.tv_nsec;

  return ts;
}



static inline struct timeval
valid_timespec64_to_timeval (const struct __timespec64 ts64)
{
  struct timeval tv;

  tv.tv_sec = (time_t) ts64.tv_sec;
  tv.tv_usec = ts64.tv_nsec / 1000;

  return tv;
}


static inline struct __timeval64
timespec64_to_timeval64 (const struct __timespec64 ts64)
{
  struct __timeval64 tv64;

  tv64.tv_sec = ts64.tv_sec;
  tv64.tv_usec = ts64.tv_nsec / 1000;

  return tv64;
}



struct __timeval32
{
  __int32_t tv_sec;
  __int32_t tv_usec;
};


static inline struct __timeval64
valid_timeval32_to_timeval64 (const struct __timeval32 tv)
{
  return (struct __timeval64) { tv.tv_sec, tv.tv_usec };
}

static inline struct __timeval32
valid_timeval64_to_timeval32 (const struct __timeval64 tv64)
{
  return (struct __timeval32) { tv64.tv_sec, tv64.tv_usec };
}

static inline struct timeval
valid_timeval32_to_timeval (const struct __timeval32 tv)
{
  return (struct timeval) { tv.tv_sec, tv.tv_usec };
}

static inline struct __timeval32
valid_timeval_to_timeval32 (const struct timeval tv)
{
  return (struct __timeval32) { tv.tv_sec, tv.tv_usec };
}

static inline struct timespec
valid_timeval32_to_timespec (const struct __timeval32 tv)
{
  return (struct timespec) { tv.tv_sec, tv.tv_usec * 1000 };
}

static inline struct __timeval32
valid_timespec_to_timeval32 (const struct timespec ts)
{
  return (struct __timeval32) { (time_t) ts.tv_sec, ts.tv_nsec / 1000 };
}

static inline struct __timeval64
valid_timespec_to_timeval64 (const struct timespec ts)
{
  return (struct __timeval64) { (time_t) ts.tv_sec, ts.tv_nsec / 1000 };
}



static inline 
# 491 "../include/time.h" 3 4
             _Bool

# 492 "../include/time.h"
valid_nanoseconds (__syscall_slong_t ns)
{
  return __builtin_expect ((0 <= ns && ns < 1000000000), 1);
}


static inline time_t
time_now (void)
{
  struct timespec ts;
  __clock_gettime (5, &ts);
  return ts.tv_sec;
}
# 25 "../sysdeps/nptl/lowlevellock.h" 2
# 78 "../sysdeps/nptl/lowlevellock.h"
extern void __lll_lock_wait_private (int *futex) __attribute__ ((visibility ("hidden")));
extern void __lll_lock_wait (int *futex, int private) __attribute__ ((visibility ("hidden")));
# 24 "../sysdeps/unix/sysv/linux/x86/lowlevellock.h" 2
# 42 "../sysdeps/unix/sysv/linux/x86/lowlevellock.h"
static inline int
__attribute__ ((always_inline))
__lll_cas_lock (int *futex)
{
  int ret;
  asm volatile ("cmpxchgl %2, %1"
  : "=a" (ret), "=m" (*futex)
  : "r" (1), "m" (*futex), "0" (0)
  : "memory");
  return ret;
}
# 85 "../sysdeps/unix/sysv/linux/x86/lowlevellock.h"
extern int __lll_clocklock_elision (int *futex, short *adapt_count,
                                    clockid_t clockid,
        const struct __timespec64 *timeout,
        int private) __attribute__ ((visibility ("hidden")));




extern int __lll_lock_elision (int *futex, short *adapt_count, int private)
  __attribute__ ((visibility ("hidden")));

extern int __lll_unlock_elision (int *lock, int private)
  __attribute__ ((visibility ("hidden")));

extern int __lll_trylock_elision (int *lock, short *adapt_count)
  __attribute__ ((visibility ("hidden")));
# 30 "../nptl/descr.h" 2
# 1 "../sysdeps/i386/nptl/pthreaddef.h" 1
# 31 "../nptl/descr.h" 2

# 1 "../sysdeps/nptl/thread_db.h" 1
# 25 "../sysdeps/nptl/thread_db.h"
# 1 "../include/pthread.h" 1
# 1 "../sysdeps/nptl/pthread.h" 1
# 25 "../sysdeps/nptl/pthread.h"
# 1 "../include/bits/endian.h" 1
# 26 "../sysdeps/nptl/pthread.h" 2


# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 29 "../sysdeps/nptl/pthread.h" 2
# 1 "../include/bits/types/struct_timespec.h" 1
# 30 "../sysdeps/nptl/pthread.h" 2

# 1 "../include/bits/types/struct___jmp_buf_tag.h" 1
# 32 "../sysdeps/nptl/pthread.h" 2



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 102 "../sysdeps/nptl/pthread.h"
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 122 "../sysdeps/nptl/pthread.h"
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 157 "../sysdeps/nptl/pthread.h"
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 195 "../sysdeps/nptl/pthread.h"





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) ;





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ ));







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);
# 240 "../sysdeps/nptl/pthread.h"
extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ ));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ )) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ )) ;




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ )) ;




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ )) ;





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_attr_setsigmask_np (pthread_attr_t *__attr,
           const __sigset_t *sigmask);




extern int pthread_attr_getsigmask_np (const pthread_attr_t *__attr,
           __sigset_t *sigmask);







extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ )) ;




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ )) ;







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ ));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ )) ;





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ ));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ ));







extern int pthread_yield (void) __attribute__ ((__nothrow__ ));




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ )) ;
# 486 "../sysdeps/nptl/pthread.h"
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) ;
# 498 "../sysdeps/nptl/pthread.h"
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};

typedef struct
{
  struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 534 "../sysdeps/nptl/pthread.h"
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 674 "../sysdeps/nptl/pthread.h"
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1)));
# 686 "../sysdeps/nptl/pthread.h"
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  __attribute__ ((__regparm__ (1)));
# 709 "../sysdeps/nptl/pthread.h"
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1)));
# 722 "../sysdeps/nptl/pthread.h"
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  __attribute__ ((__regparm__ (1)));



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1))) __attribute__ ((__noreturn__))



     ;
# 750 "../sysdeps/nptl/pthread.h"
extern int __sigsetjmp (struct __jmp_buf_tag __env[1],
   int __savemask) __attribute__ ((__nothrow__));






extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) ;


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) ;



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
        clockid_t __clockid,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) ;



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ )) ;




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ )) ;

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ )) ;
# 822 "../sysdeps/nptl/pthread.h"
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ )) ;




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ )) ;

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__ )) ;



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ )) ;

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__ )) ;
# 904 "../sysdeps/nptl/pthread.h"
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) ;


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) ;


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) ;



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) ;





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ )) ;







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) ;


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) ;






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     ;
# 1030 "../sysdeps/nptl/pthread.h"
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     ;
# 1043 "../sysdeps/nptl/pthread.h"
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __clockid_t __clock_id,
       const struct timespec *__restrict __abstime)
     ;





extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ )) ;



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ )) ;
# 1089 "../sysdeps/nptl/pthread.h"
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) ;


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) ;


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) ;






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) ;



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ )) ;


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ )) ;
# 1156 "../sysdeps/nptl/pthread.h"
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ )) ;


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ ));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ ));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ )) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ )) ;
# 1190 "../sysdeps/nptl/pthread.h"
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ ));




extern __inline int
__attribute__ ((__nothrow__ )) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}



# 2 "../include/pthread.h" 2





extern int __pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ )) ;
extern int __pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) ;


extern void __pthread_initialize (void) __attribute__ ((weak));
# 26 "../sysdeps/nptl/thread_db.h" 2
# 1 "../include/stdint.h" 1
# 27 "../sysdeps/nptl/thread_db.h" 2
# 1 "../include/sys/types.h" 1
# 28 "../sysdeps/nptl/thread_db.h" 2
# 1 "../sysdeps/unix/sysv/linux/sys/procfs.h" 1
# 34 "../sysdeps/unix/sysv/linux/sys/procfs.h"
# 1 "../include/sys/types.h" 1
# 35 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2
# 1 "../sysdeps/unix/sysv/linux/x86/sys/user.h" 1
# 102 "../sysdeps/unix/sysv/linux/x86/sys/user.h"
struct user_fpregs_struct
{
  long int cwd;
  long int swd;
  long int twd;
  long int fip;
  long int fcs;
  long int foo;
  long int fos;
  long int st_space [20];
};

struct user_fpxregs_struct
{
  unsigned short int cwd;
  unsigned short int swd;
  unsigned short int twd;
  unsigned short int fop;
  long int fip;
  long int fcs;
  long int foo;
  long int fos;
  long int mxcsr;
  long int reserved;
  long int st_space[32];
  long int xmm_space[32];
  long int padding[56];
};

struct user_regs_struct
{
  long int ebx;
  long int ecx;
  long int edx;
  long int esi;
  long int edi;
  long int ebp;
  long int eax;
  long int xds;
  long int xes;
  long int xfs;
  long int xgs;
  long int orig_eax;
  long int eip;
  long int xcs;
  long int eflags;
  long int esp;
  long int xss;
};

struct user
{
  struct user_regs_struct regs;
  int u_fpvalid;
  struct user_fpregs_struct i387;
  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long int start_code;
  unsigned long int start_stack;
  long int signal;
  int reserved;
  struct user_regs_struct* u_ar0;
  struct user_fpregs_struct* u_fpstate;
  unsigned long int magic;
  char u_comm [32];
  int u_debugreg [8];
};
# 36 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2




# 1 "../sysdeps/unix/sysv/linux/x86/bits/procfs.h" 1
# 27 "../sysdeps/unix/sysv/linux/x86/bits/procfs.h"
typedef unsigned long elf_greg_t;







typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof (elf_greg_t))];



typedef struct user_fpregs_struct elf_fpregset_t;




typedef struct user_fpxregs_struct elf_fpxregset_t;
# 41 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2



# 1 "../sysdeps/unix/sysv/linux/x86/bits/procfs-id.h" 1
# 25 "../sysdeps/unix/sysv/linux/x86/bits/procfs-id.h"
typedef unsigned short int __pr_uid_t;
typedef unsigned short int __pr_gid_t;
# 45 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2




struct elf_siginfo
  {
    int si_signo;
    int si_code;
    int si_errno;
  };
# 63 "../sysdeps/unix/sysv/linux/sys/procfs.h"
struct elf_prstatus
  {
    struct elf_siginfo pr_info;
    short int pr_cursig;
    unsigned long int pr_sigpend;
    unsigned long int pr_sighold;
    __pid_t pr_pid;
    __pid_t pr_ppid;
    __pid_t pr_pgrp;
    __pid_t pr_sid;
    struct timeval pr_utime;
    struct timeval pr_stime;
    struct timeval pr_cutime;
    struct timeval pr_cstime;
    elf_gregset_t pr_reg;
    int pr_fpvalid;
  };




struct elf_prpsinfo
  {
    char pr_state;
    char pr_sname;
    char pr_zomb;
    char pr_nice;
    unsigned long int pr_flag;
    __pr_uid_t pr_uid;
    __pr_gid_t pr_gid;
    int pr_pid, pr_ppid, pr_pgrp, pr_sid;

    char pr_fname[16];
    char pr_psargs[(80)];
  };






typedef void *psaddr_t;

# 1 "../sysdeps/unix/sysv/linux/bits/procfs-prregset.h" 1
# 24 "../sysdeps/unix/sysv/linux/bits/procfs-prregset.h"
typedef elf_gregset_t __prgregset_t;
typedef elf_fpregset_t __prfpregset_t;
# 107 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2


typedef __prgregset_t prgregset_t;
typedef __prfpregset_t prfpregset_t;



typedef __pid_t lwpid_t;


typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;





# 1 "../sysdeps/unix/sysv/linux/bits/procfs-extra.h" 1
# 125 "../sysdeps/unix/sysv/linux/sys/procfs.h" 2
# 29 "../sysdeps/nptl/thread_db.h" 2



typedef enum
{
  TD_OK,
  TD_ERR,
  TD_NOTHR,
  TD_NOSV,
  TD_NOLWP,
  TD_BADPH,
  TD_BADTH,
  TD_BADSH,
  TD_BADTA,
  TD_BADKEY,
  TD_NOMSG,
  TD_NOFPREGS,
  TD_NOLIBTHREAD,
  TD_NOEVENT,
  TD_NOCAPAB,
  TD_DBERR,
  TD_NOAPLIC,
  TD_NOTSD,
  TD_MALLOC,
  TD_PARTIALREG,
  TD_NOXREGS,
  TD_TLSDEFER,
  TD_NOTALLOC = TD_TLSDEFER,
  TD_VERSION,
  TD_NOTLS
} td_err_e;




typedef enum
{
  TD_THR_ANY_STATE,
  TD_THR_UNKNOWN,
  TD_THR_STOPPED,
  TD_THR_RUN,
  TD_THR_ACTIVE,
  TD_THR_ZOMBIE,
  TD_THR_SLEEP,
  TD_THR_STOPPED_ASLEEP
} td_thr_state_e;



typedef enum
{
  TD_THR_ANY_TYPE,
  TD_THR_USER,
  TD_THR_SYSTEM
} td_thr_type_e;





typedef struct td_thragent td_thragent_t;


typedef struct td_thrhandle
{
  td_thragent_t *th_ta_p;
  psaddr_t th_unique;
} td_thrhandle_t;



struct link_map;
# 115 "../sysdeps/nptl/thread_db.h"
typedef struct td_thr_events
{
  uint32_t event_bits[2];
} td_thr_events_t;
# 154 "../sysdeps/nptl/thread_db.h"
typedef enum
{
  TD_ALL_EVENTS,
  TD_EVENT_NONE = TD_ALL_EVENTS,
  TD_READY,
  TD_SLEEP,
  TD_SWITCHTO,
  TD_SWITCHFROM,
  TD_LOCK_TRY,
  TD_CATCHSIG,
  TD_IDLE,
  TD_CREATE,
  TD_DEATH,
  TD_PREEMPT,
  TD_PRI_INHERIT,
  TD_REAP,
  TD_CONCURRENCY,
  TD_TIMEOUT,
  TD_MIN_EVENT_NUM = TD_READY,
  TD_MAX_EVENT_NUM = TD_TIMEOUT,
  TD_EVENTS_ENABLE = 31
} td_event_e;


typedef enum
{
  NOTIFY_BPT,
  NOTIFY_AUTOBPT,

  NOTIFY_SYSCALL
} td_notify_e;


typedef struct td_notify
{
  td_notify_e type;
  union
  {
    psaddr_t bptaddr;
    int syscallno;
  } u;
} td_notify_t;


typedef struct td_event_msg
{
  td_event_e event;
  const td_thrhandle_t *th_p;
  union
  {



    uintptr_t data;
  } msg;
} td_event_msg_t;


typedef struct
{
  td_thr_events_t eventmask;
  td_event_e eventnum;
  void *eventdata;
} td_eventbuf_t;



typedef struct td_ta_stats
{
  int nthreads;
  int r_concurrency;
  int nrunnable_num;
  int nrunnable_den;
  int a_concurrency_num;
  int a_concurrency_den;
  int nlwps_num;

  int nlwps_den;

  int nidle_num;

  int nidle_den;

} td_ta_stats_t;




typedef pthread_t thread_t;
typedef pthread_key_t thread_key_t;



typedef int td_thr_iter_f (const td_thrhandle_t *, void *);


typedef int td_key_iter_f (thread_key_t, void (*) (void *), void *);




struct ps_prochandle;



typedef struct td_thrinfo
{
  td_thragent_t *ti_ta_p;
  unsigned int ti_user_flags;
  thread_t ti_tid;

  char *ti_tls;
  psaddr_t ti_startfunc;

  psaddr_t ti_stkbase;
  long int ti_stksize;
  psaddr_t ti_ro_area;
  int ti_ro_size;
  td_thr_state_e ti_state;
  unsigned char ti_db_suspended;
  td_thr_type_e ti_type;

  intptr_t ti_pc;
  intptr_t ti_sp;
  short int ti_flags;
  int ti_pri;
  lwpid_t ti_lid;
  sigset_t ti_sigmask;
  unsigned char ti_traceme;

  unsigned char ti_preemptflag;
  unsigned char ti_pirecflag;
  sigset_t ti_pending;
  td_thr_events_t ti_events;
} td_thrinfo_t;






extern td_err_e td_init (void);


extern td_err_e td_log (void);


extern const char **td_symbol_list (void);


extern td_err_e td_ta_new (struct ps_prochandle *__ps, td_thragent_t **__ta);


extern td_err_e td_ta_delete (td_thragent_t *__ta);


extern td_err_e td_ta_get_nthreads (const td_thragent_t *__ta, int *__np);



extern td_err_e td_ta_get_ph (const td_thragent_t *__ta,
         struct ps_prochandle **__ph);



extern td_err_e td_ta_map_id2thr (const td_thragent_t *__ta, pthread_t __pt,
      td_thrhandle_t *__th);



extern td_err_e td_ta_map_lwp2thr (const td_thragent_t *__ta, lwpid_t __lwpid,
       td_thrhandle_t *__th);




extern td_err_e td_ta_thr_iter (const td_thragent_t *__ta,
    td_thr_iter_f *__callback, void *__cbdata_p,
    td_thr_state_e __state, int __ti_pri,
    sigset_t *__ti_sigmask_p,
    unsigned int __ti_user_flags);


extern td_err_e td_ta_tsd_iter (const td_thragent_t *__ta, td_key_iter_f *__ki,
    void *__p);



extern td_err_e td_ta_event_addr (const td_thragent_t *__ta,
      td_event_e __event, td_notify_t *__ptr);


extern td_err_e td_ta_set_event (const td_thragent_t *__ta,
     td_thr_events_t *__event);


extern td_err_e td_ta_clear_event (const td_thragent_t *__ta,
       td_thr_events_t *__event);


extern td_err_e td_ta_event_getmsg (const td_thragent_t *__ta,
        td_event_msg_t *__msg);



extern td_err_e td_ta_setconcurrency (const td_thragent_t *__ta, int __level);



extern td_err_e td_ta_enable_stats (const td_thragent_t *__ta, int __enable);


extern td_err_e td_ta_reset_stats (const td_thragent_t *__ta);


extern td_err_e td_ta_get_stats (const td_thragent_t *__ta,
     td_ta_stats_t *__statsp);



extern td_err_e td_thr_validate (const td_thrhandle_t *__th);


extern td_err_e td_thr_get_info (const td_thrhandle_t *__th,
     td_thrinfo_t *__infop);


extern td_err_e td_thr_getfpregs (const td_thrhandle_t *__th,
      prfpregset_t *__regset);


extern td_err_e td_thr_getgregs (const td_thrhandle_t *__th,
     prgregset_t __gregs);


extern td_err_e td_thr_getxregs (const td_thrhandle_t *__th, void *__xregs);


extern td_err_e td_thr_getxregsize (const td_thrhandle_t *__th, int *__sizep);


extern td_err_e td_thr_setfpregs (const td_thrhandle_t *__th,
      const prfpregset_t *__fpregs);


extern td_err_e td_thr_setgregs (const td_thrhandle_t *__th,
     prgregset_t __gregs);


extern td_err_e td_thr_setxregs (const td_thrhandle_t *__th,
     const void *__addr);



extern td_err_e td_thr_tlsbase (const td_thrhandle_t *__th,
    unsigned long int __modid,
    psaddr_t *__base);


extern td_err_e td_thr_tls_get_addr (const td_thrhandle_t *__th,
         psaddr_t __map_address, size_t __offset,
         psaddr_t *__address);



extern td_err_e td_thr_event_enable (const td_thrhandle_t *__th, int __event);


extern td_err_e td_thr_set_event (const td_thrhandle_t *__th,
      td_thr_events_t *__event);


extern td_err_e td_thr_clear_event (const td_thrhandle_t *__th,
        td_thr_events_t *__event);


extern td_err_e td_thr_event_getmsg (const td_thrhandle_t *__th,
         td_event_msg_t *__msg);



extern td_err_e td_thr_setprio (const td_thrhandle_t *__th, int __prio);



extern td_err_e td_thr_setsigpending (const td_thrhandle_t *__th,
          unsigned char __n, const sigset_t *__ss);


extern td_err_e td_thr_sigsetmask (const td_thrhandle_t *__th,
       const sigset_t *__ss);



extern td_err_e td_thr_tsd (const td_thrhandle_t *__th,
       const thread_key_t __tk, void **__data);



extern td_err_e td_thr_dbsuspend (const td_thrhandle_t *__th);


extern td_err_e td_thr_dbresume (const td_thrhandle_t *__th);
# 33 "../nptl/descr.h" 2

# 1 "../sysdeps/generic/unwind.h" 1
# 34 "../sysdeps/generic/unwind.h"
typedef unsigned _Unwind_Word __attribute__((__mode__(__unwind_word__)));
typedef signed _Unwind_Sword __attribute__((__mode__(__unwind_word__)));



typedef unsigned _Unwind_Ptr __attribute__((__mode__(__pointer__)));

typedef unsigned _Unwind_Internal_Ptr __attribute__((__mode__(__pointer__)));





typedef unsigned _Unwind_Exception_Class __attribute__((__mode__(__DI__)));



typedef enum
{
  _URC_NO_REASON = 0,
  _URC_FOREIGN_EXCEPTION_CAUGHT = 1,
  _URC_FATAL_PHASE2_ERROR = 2,
  _URC_FATAL_PHASE1_ERROR = 3,
  _URC_NORMAL_STOP = 4,
  _URC_END_OF_STACK = 5,
  _URC_HANDLER_FOUND = 6,
  _URC_INSTALL_CONTEXT = 7,
  _URC_CONTINUE_UNWIND = 8
} _Unwind_Reason_Code;
# 71 "../sysdeps/generic/unwind.h"
struct _Unwind_Exception;

typedef void (*_Unwind_Exception_Cleanup_Fn) (_Unwind_Reason_Code,
           struct _Unwind_Exception *);

struct _Unwind_Exception
{
  union
  {
    struct
    {
      _Unwind_Exception_Class exception_class;
      _Unwind_Exception_Cleanup_Fn exception_cleanup;
      _Unwind_Word private_1;
      _Unwind_Word private_2;
    };


    _Unwind_Word unwind_exception_align[2]
      __attribute__ ((__aligned__ (2 * sizeof (_Unwind_Word))));
  };
};




typedef int _Unwind_Action;
# 109 "../sysdeps/generic/unwind.h"
struct _Unwind_Context;


extern _Unwind_Reason_Code _Unwind_RaiseException (struct _Unwind_Exception *);



typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn)
     (int, _Unwind_Action, _Unwind_Exception_Class,
      struct _Unwind_Exception *, struct _Unwind_Context *, void *);

extern _Unwind_Reason_Code _Unwind_ForcedUnwind (struct _Unwind_Exception *,
       _Unwind_Stop_Fn,
       void *);


extern void _Unwind_DeleteException (struct _Unwind_Exception *);



extern void _Unwind_Resume (struct _Unwind_Exception *);




typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn)
     (struct _Unwind_Context *, void *);

extern _Unwind_Reason_Code _Unwind_Backtrace (_Unwind_Trace_Fn, void *);






extern _Unwind_Word _Unwind_GetGR (struct _Unwind_Context *, int);
extern void _Unwind_SetGR (struct _Unwind_Context *, int, _Unwind_Word);

extern _Unwind_Ptr _Unwind_GetIP (struct _Unwind_Context *);
extern void _Unwind_SetIP (struct _Unwind_Context *, _Unwind_Ptr);


extern _Unwind_Word _Unwind_GetCFA (struct _Unwind_Context *);

extern void *_Unwind_GetLanguageSpecificData (struct _Unwind_Context *);

extern _Unwind_Ptr _Unwind_GetRegionStart (struct _Unwind_Context *);
# 172 "../sysdeps/generic/unwind.h"
typedef _Unwind_Reason_Code (*_Unwind_Personality_Fn)
     (int, _Unwind_Action, _Unwind_Exception_Class,
      struct _Unwind_Exception *, struct _Unwind_Context *);




struct SjLj_Function_Context;
extern void _Unwind_SjLj_Register (struct SjLj_Function_Context *);
extern void _Unwind_SjLj_Unregister (struct SjLj_Function_Context *);

extern _Unwind_Reason_Code _Unwind_SjLj_RaiseException
     (struct _Unwind_Exception *);
extern _Unwind_Reason_Code _Unwind_SjLj_ForcedUnwind
     (struct _Unwind_Exception *, _Unwind_Stop_Fn, void *);
extern void _Unwind_SjLj_Resume (struct _Unwind_Exception *);
# 213 "../sysdeps/generic/unwind.h"
extern _Unwind_Ptr _Unwind_GetDataRelBase (struct _Unwind_Context *);
extern _Unwind_Ptr _Unwind_GetTextRelBase (struct _Unwind_Context *);




extern void * _Unwind_FindEnclosingFunction (void *pc);
# 35 "../nptl/descr.h" 2
# 1 "../include/bits/types/res_state.h" 1
# 1 "../resolv/bits/types/res_state.h" 1



# 1 "../include/sys/types.h" 1
# 5 "../resolv/bits/types/res_state.h" 2
# 1 "../include/netinet/in.h" 1


# 1 "../inet/netinet/in.h" 1
# 23 "../inet/netinet/in.h"
# 1 "../include/sys/socket.h" 1

# 1 "../socket/sys/socket.h" 1
# 24 "../socket/sys/socket.h"


# 1 "../include/bits/types/struct_iovec.h" 1
# 1 "../misc/bits/types/struct_iovec.h" 1
# 23 "../misc/bits/types/struct_iovec.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 24 "../misc/bits/types/struct_iovec.h" 2


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 2 "../include/bits/types/struct_iovec.h" 2
# 27 "../socket/sys/socket.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 29 "../socket/sys/socket.h" 2




# 1 "../sysdeps/unix/sysv/linux/bits/socket.h" 1
# 27 "../sysdeps/unix/sysv/linux/bits/socket.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 28 "../sysdeps/unix/sysv/linux/bits/socket.h" 2

# 1 "../include/sys/types.h" 1
# 30 "../sysdeps/unix/sysv/linux/bits/socket.h" 2
# 38 "../sysdeps/unix/sysv/linux/bits/socket.h"
# 1 "../sysdeps/unix/sysv/linux/bits/socket_type.h" 1
# 24 "../sysdeps/unix/sysv/linux/bits/socket_type.h"
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "../sysdeps/unix/sysv/linux/bits/socket.h" 2
# 175 "../sysdeps/unix/sysv/linux/bits/socket.h"
# 1 "../bits/sockaddr.h" 1
# 28 "../bits/sockaddr.h"
typedef unsigned short int sa_family_t;
# 176 "../sysdeps/unix/sysv/linux/bits/socket.h" 2


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 191 "../sysdeps/unix/sysv/linux/bits/socket.h"
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_ZEROCOPY = 0x4000000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 305 "../sysdeps/unix/sysv/linux/bits/socket.h"
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ ));




extern __inline struct cmsghdr *
__attribute__ ((__nothrow__ )) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return (struct cmsghdr *) 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return (struct cmsghdr *) 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};



# 1 "../include/bits/types/time_t.h" 1
# 354 "../sysdeps/unix/sysv/linux/bits/socket.h" 2
# 1 "/usr/include/i386-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4




# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "/usr/include/linux/stddef.h" 1 3 4
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4

# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/i386-linux-gnu/asm/posix_types.h" 1 3 4


# 1 "/usr/include/i386-linux-gnu/asm/posix_types_32.h" 1 3 4
# 11 "/usr/include/i386-linux-gnu/asm/posix_types_32.h" 3 4
typedef unsigned short __kernel_mode_t;


typedef unsigned short __kernel_ipc_pid_t;


typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;


typedef unsigned short __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4




# 1 "/usr/include/i386-linux-gnu/asm/bitsperlong.h" 1 3 4
# 11 "/usr/include/i386-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 12 "/usr/include/i386-linux-gnu/asm/bitsperlong.h" 2 3 4
# 6 "/usr/include/asm-generic/posix_types.h" 2 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;







typedef int __kernel_pid_t;
# 41 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;



typedef __kernel_uid_t __kernel_old_uid_t;
typedef __kernel_gid_t __kernel_old_gid_t;
# 68 "/usr/include/asm-generic/posix_types.h" 3 4
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
# 79 "/usr/include/asm-generic/posix_types.h" 3 4
typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 25 "/usr/include/i386-linux-gnu/asm/posix_types_32.h" 2 3 4
# 4 "/usr/include/i386-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 6 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 2 "/usr/include/i386-linux-gnu/asm/sockios.h" 2 3 4
# 7 "/usr/include/asm-generic/socket.h" 2 3 4
# 2 "/usr/include/i386-linux-gnu/asm/socket.h" 2 3 4
# 355 "../sysdeps/unix/sysv/linux/bits/socket.h" 2







# 361 "../sysdeps/unix/sysv/linux/bits/socket.h"
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 34 "../socket/sys/socket.h" 2


# 1 "../include/bits/types/struct_osockaddr.h" 1
# 1 "../socket/bits/types/struct_osockaddr.h" 1





struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
# 2 "../include/bits/types/struct_osockaddr.h" 2
# 37 "../socket/sys/socket.h" 2




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 79 "../socket/sys/socket.h"
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ ));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ ));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__ ));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));
# 126 "../socket/sys/socket.h"
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 163 "../socket/sys/socket.h"
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ ));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ ));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ ));
# 232 "../socket/sys/socket.h"
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 250 "../socket/sys/socket.h"
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ ));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ ));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ ));
# 272 "../socket/sys/socket.h"

# 3 "../include/sys/socket.h" 2







extern int __socket (int __domain, int __type,
       int __protocol);
extern __typeof (__socket) __socket __asm__ ("" "__GI___socket") __attribute__ ((visibility ("hidden")));





extern int __socketpair (int __domain, int __type, int __protocol,
    int __fds[2]) __attribute__ ((visibility ("hidden")));



extern int __opensock (void) __attribute__ ((visibility ("hidden")));



extern int __getpeername (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__len) __attribute__ ((visibility ("hidden")));


extern ssize_t __libc_send (int __fd, const void *__buf, size_t __n,
       int __flags);
extern ssize_t __send (int __fd, const void *__buf, size_t __n, int __flags);
extern __typeof (__send) __send __asm__ ("" "__GI___send") __attribute__ ((visibility ("hidden")));



extern ssize_t __libc_recv (int __fd, void *__buf, size_t __n, int __flags);



extern ssize_t __libc_sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);





extern ssize_t __libc_recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);





extern int __libc_connect (int __fd, __CONST_SOCKADDR_ARG __addr,
      socklen_t __len);
extern int __connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);
extern __typeof (__connect) __connect __asm__ ("" "__GI___connect") __attribute__ ((visibility ("hidden")));






extern ssize_t __recv (int __fd, void *__buf, size_t __n, int __flags);
extern __typeof (__recv) __recv __asm__ ("" "__GI___recv") __attribute__ ((visibility ("hidden")));



extern ssize_t __libc_sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
extern ssize_t __sendto (int __fd, const void *__buf, size_t __n,
    int __flags, __CONST_SOCKADDR_ARG __addr,
    socklen_t __addr_len) __attribute__ ((visibility ("hidden")));





extern ssize_t __recvfrom (int __fd, void *__restrict __buf, size_t __n,
      int __flags, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len) __attribute__ ((visibility ("hidden")));



extern ssize_t __libc_sendmsg (int __fd, const struct msghdr *__message,
          int __flags);
extern ssize_t __sendmsg (int __fd, const struct msghdr *__message,
     int __flags) __attribute__ ((visibility ("hidden")));


extern int __sendmmsg (int __fd, struct mmsghdr *__vmessages,
                       unsigned int __vlen, int __flags);
extern __typeof (__sendmmsg) __sendmmsg __asm__ ("" "__GI___sendmmsg") __attribute__ ((visibility ("hidden")));




extern ssize_t __libc_recvmsg (int __fd, struct msghdr *__message,
          int __flags);
extern ssize_t __recvmsg (int __fd, struct msghdr *__message,
     int __flags) __attribute__ ((visibility ("hidden")));



extern int __recvmmsg64 (int __fd, struct mmsghdr *vmessages,
    unsigned int vlen, int flags,
    struct __timespec64 *timeout);
extern __typeof (__recvmmsg64) __recvmmsg64 __asm__ ("" "__GI___recvmmsg64") __attribute__ ((visibility ("hidden")));





extern int __setsockopt (int __fd, int __level, int __optname,
    const void *__optval,
    socklen_t __optlen) __attribute__ ((visibility ("hidden")));




extern int __getsockopt (int __fd, int __level, int __optname,
    void *__restrict __optval,
    socklen_t *__restrict __optlen) __attribute__ ((visibility ("hidden")));


extern int __getsockname (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __len) __attribute__ ((visibility ("hidden")));


extern int __bind (int __fd, __CONST_SOCKADDR_ARG __addr,
     socklen_t __len) __attribute__ ((visibility ("hidden")));




extern int __listen (int __fd, int __n) __attribute__ ((visibility ("hidden")));






extern int __libc_accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len)
     __attribute__ ((__nothrow__ )) __attribute__ ((visibility ("hidden")));
extern __typeof (accept) accept __asm__ ("" "__GI_accept") __attribute__ ((visibility ("hidden")));
extern int __libc_accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((visibility ("hidden")));





extern int __libc_sa_len (sa_family_t __af);
extern __typeof (__libc_sa_len) __libc_sa_len __asm__ ("" "__GI___libc_sa_len") __attribute__ ((visibility ("hidden")));



extern __typeof (__cmsg_nxthdr) __cmsg_nxthdr __asm__ ("" "__GI___cmsg_nxthdr") __attribute__ ((visibility ("hidden")));
# 24 "../inet/netinet/in.h" 2
# 1 "../include/bits/types.h" 1
# 25 "../inet/netinet/in.h" 2





typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "../sysdeps/unix/sysv/linux/bits/in.h" 1
# 143 "../sysdeps/unix/sysv/linux/bits/in.h"
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "../inet/netinet/in.h" 2


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_ETHERNET = 143,

    IPPROTO_RAW = 255,

    IPPROTO_MPTCP = 262,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 216 "../inet/netinet/in.h"
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];
 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];
      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 242 "../inet/netinet/in.h"
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr)
      - (sizeof (unsigned short int))
      - sizeof (in_port_t)
      - sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 379 "../inet/netinet/in.h"
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

# 1 "../include/endian.h" 1
# 388 "../inet/netinet/in.h" 2


# 1 "../bits/byteswap.h" 1
# 391 "../inet/netinet/in.h" 2
# 1 "../bits/uintn-identity.h" 1
# 392 "../inet/netinet/in.h" 2
# 507 "../inet/netinet/in.h"
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ ));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ ));
# 537 "../inet/netinet/in.h"
struct cmsghdr;



struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) __attribute__ ((__nothrow__ ));
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     __attribute__ ((__nothrow__ ));
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ ));
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ ));



extern socklen_t inet6_rth_space (int __type, int __segments) __attribute__ ((__nothrow__ ));
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) __attribute__ ((__nothrow__ ));
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) __attribute__ ((__nothrow__ ));
extern int inet6_rth_reverse (const void *__in, void *__out) __attribute__ ((__nothrow__ ));
extern int inet6_rth_segments (const void *__bp) __attribute__ ((__nothrow__ ));
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     __attribute__ ((__nothrow__ ));





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     __attribute__ ((__nothrow__ ));


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     __attribute__ ((__nothrow__ ));



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ ));


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ ));



# 4 "../include/netinet/in.h" 2


extern __typeof (bindresvport) bindresvport __asm__ ("" "__GI_bindresvport") __attribute__ ((visibility ("hidden")));
extern __typeof (in6addr_loopback) in6addr_loopback __asm__ ("" "__GI_in6addr_loopback") __attribute__ ((visibility ("hidden")));
extern __typeof (in6addr_loopback) __in6addr_loopback;
extern __typeof (__in6addr_loopback) __in6addr_loopback __asm__ ("" "__GI___in6addr_loopback") __attribute__ ((visibility ("hidden")));
extern __typeof (in6addr_any) in6addr_any __asm__ ("" "__GI_in6addr_any") __attribute__ ((visibility ("hidden")));
extern __typeof (in6addr_any) __in6addr_any;
extern __typeof (__in6addr_any) __in6addr_any __asm__ ("" "__GI___in6addr_any") __attribute__ ((visibility ("hidden")));
# 6 "../resolv/bits/types/res_state.h" 2







struct __res_state {
 int retrans;
 int retry;
 unsigned long options;
 int nscount;
 struct sockaddr_in
  nsaddr_list[3];
 unsigned short id;

 char *dnsrch[6 +1];
 char defdname[256];
 unsigned long pfcode;
 unsigned ndots:4;
 unsigned nsort:4;
 unsigned ipv6_unavail:1;
 unsigned unused:23;
 struct {
  struct in_addr addr;
  uint32_t mask;
 } sort_list[10];

 void * __glibc_unused_qhook;
 void * __glibc_unused_rhook;
 int res_h_errno;
 int _vcsock;
 unsigned int _flags;

 union {
  char pad[52];
  struct {
   uint16_t nscount;
   uint16_t nsmap[3];
   int nssocks[3];
   uint16_t nscount6;
   uint16_t nsinit;
   struct sockaddr_in6 *nsaddrs[3];

   unsigned long long int __glibc_extension_index
     __attribute__((packed));



  } _ext;
 } _u;
};

typedef struct __res_state *res_state;
# 2 "../include/bits/types/res_state.h" 2
# 36 "../nptl/descr.h" 2
# 1 "../sysdeps/unix/sysv/linux/i386/kernel-features.h" 1
# 37 "../nptl/descr.h" 2
# 1 "../sysdeps/generic/tls-internal-struct.h" 1
# 22 "../sysdeps/generic/tls-internal-struct.h"
struct tls_internal_t
{
  char *strsignal_buf;
  char *strerror_l_buf;
};
# 38 "../nptl/descr.h" 2
# 63 "../nptl/descr.h"
struct pthread_unwind_buf
{
  struct
  {
    __jmp_buf jmp_buf;
    int mask_was_saved;
  } cancel_jmp_buf[1];

  union
  {

    void *pad[4];

    struct
    {

      struct pthread_unwind_buf *prev;




      struct _pthread_cleanup_buffer *cleanup;


      int canceltype;
    } data;
  } priv;
};




struct xid_command
{
  int syscall_no;






  unsigned long int id[3];
  volatile int cntr;
  volatile int error;
};



struct robust_list_head
{
  void *list;
  long int futex_offset;
  void *list_op_pending;
};



struct priority_protection_data
{
  int priomax;
  unsigned int priomap[];
};



struct pthread
{
  union
  {


    tcbhead_t header;
# 162 "../nptl/descr.h"
    void *__padding[24];
  };



  list_t list;



  pid_t tid;


  pid_t pid_ununsed;
# 229 "../nptl/descr.h"
  union
  {
    __pthread_slist_t robust_list;
    struct robust_list_head robust_head;
  };
# 272 "../nptl/descr.h"
  struct _pthread_cleanup_buffer *cleanup;


  struct pthread_unwind_buf *cleanup_jmp_buf;



  int cancelhandling;
# 313 "../nptl/descr.h"
  int flags;



  struct pthread_key_data
  {



    uintptr_t seq;


    void *data;
  } specific_1stblock[32];


  struct pthread_key_data *specific[((1024 + 32 - 1) / 32)];


  
# 332 "../nptl/descr.h" 3 4
 _Bool 
# 332 "../nptl/descr.h"
      specific_used;


  
# 335 "../nptl/descr.h" 3 4
 _Bool 
# 335 "../nptl/descr.h"
      report_events;


  
# 338 "../nptl/descr.h" 3 4
 _Bool 
# 338 "../nptl/descr.h"
      user_stack;


  
# 341 "../nptl/descr.h" 3 4
 _Bool 
# 341 "../nptl/descr.h"
      stopped_start;


  int parent_cancelhandling_unsed;


  int lock;


  unsigned int setxid_futex;


  hp_timing_t cpuclock_offset_ununsed;
# 362 "../nptl/descr.h"
  struct pthread *joinid;




  void *result;


  struct sched_param schedparam;
  int schedpolicy;



  void *(*start_routine) (void *);
  void *arg;


  td_eventbuf_t eventbuf;

  struct pthread *nextevent;


  struct _Unwind_Exception exc;


  void *stackblock;

  size_t stackblock_size;

  size_t guardsize;

  size_t reported_guardsize;


  struct priority_protection_data *tpp;


  struct __res_state res;




  sigset_t sigmask;


  
# 407 "../nptl/descr.h" 3 4
 _Bool 
# 407 "../nptl/descr.h"
      c11;


  struct tls_internal_t tls_state;


  char end_padding[];



} __attribute ((aligned (64)));
# 121 "../sysdeps/i386/nptl/tls.h" 2
# 160 "../sysdeps/i386/nptl/tls.h"
static inline void __attribute__ ((unused, always_inline))
tls_fill_user_desc (union user_desc_init *desc,
                    unsigned int entry_number,
                    void *pd)
{
  desc->vals[0] = entry_number;

  desc->vals[1] = (unsigned long int) pd;

  desc->vals[2] = 0xfffff;







  desc->vals[3] = 0x51;
}
# 34 "../sysdeps/i386/i686/nptl/tls.h" 2
# 24 "../sysdeps/x86/atomic-machine.h" 2


typedef int8_t atomic8_t;
typedef uint8_t uatomic8_t;
typedef int_fast8_t atomic_fast8_t;
typedef uint_fast8_t uatomic_fast8_t;

typedef int16_t atomic16_t;
typedef uint16_t uatomic16_t;
typedef int_fast16_t atomic_fast16_t;
typedef uint_fast16_t uatomic_fast16_t;

typedef int32_t atomic32_t;
typedef uint32_t uatomic32_t;
typedef int_fast32_t atomic_fast32_t;
typedef uint_fast32_t uatomic_fast32_t;

typedef int64_t atomic64_t;
typedef uint64_t uatomic64_t;
typedef int_fast64_t atomic_fast64_t;
typedef uint_fast64_t uatomic_fast64_t;

typedef intptr_t atomicptr_t;
typedef uintptr_t uatomicptr_t;
typedef intmax_t atomic_max_t;
typedef uintmax_t uatomic_max_t;
# 51 "../include/atomic.h" 2
# 543 "../include/atomic.h"
void __atomic_link_error (void);
# 27 "dl-tls.c" 2


# 1 "../sysdeps/i386/dl-tls.h" 1
# 21 "../sysdeps/i386/dl-tls.h"
typedef struct dl_tls_index
{
  unsigned long int ti_module;
  unsigned long int ti_offset;
} tls_index;




extern void *___tls_get_addr (tls_index *ti)
     __attribute__ ((__regparm__ (1)));
extern void *___tls_get_addr_internal (tls_index *ti)
     __attribute__ ((__regparm__ (1))) __attribute__ ((visibility ("hidden")));
# 30 "dl-tls.c" 2
# 1 "../sysdeps/unix/sysv/linux/ldsodefs.h" 1
# 25 "../sysdeps/unix/sysv/linux/ldsodefs.h"
# 1 "../sysdeps/gnu/ldsodefs.h" 1
# 23 "../sysdeps/gnu/ldsodefs.h"
# 1 "/home/trung/CodingProjects/build-glibc-2.33/libc-abis.h" 1



enum
{
  LIBC_ABI_DEFAULT = 0,
  LIBC_ABI_UNIQUE,
  LIBC_ABI_IFUNC,
  LIBC_ABI_ABSOLUTE,
  LIBC_ABI_MAX
};
# 24 "../sysdeps/gnu/ldsodefs.h" 2
# 46 "../sysdeps/gnu/ldsodefs.h"
# 1 "../sysdeps/x86/ldsodefs.h" 1
# 24 "../sysdeps/x86/ldsodefs.h"
# 1 "../sysdeps/x86/include/cpu-features.h" 1
# 28 "../sysdeps/x86/include/cpu-features.h"
# 1 "../sysdeps/x86/bits/platform/x86.h" 1
# 23 "../sysdeps/x86/bits/platform/x86.h"
enum
{
  CPUID_INDEX_1 = 0,
  CPUID_INDEX_7,
  CPUID_INDEX_80000001,
  CPUID_INDEX_D_ECX_1,
  CPUID_INDEX_80000007,
  CPUID_INDEX_80000008,
  CPUID_INDEX_7_ECX_1,
  CPUID_INDEX_19
};

struct cpuid_feature
{
  unsigned int cpuid_array[4];
  unsigned int usable_array[4];
};

enum cpuid_register_index
{
  cpuid_register_index_eax = 0,
  cpuid_register_index_ebx,
  cpuid_register_index_ecx,
  cpuid_register_index_edx
};



enum
{
  x86_cpu_index_1_ecx
    = (CPUID_INDEX_1 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ecx * 8 * sizeof (unsigned int)),

  x86_cpu_SSE3 = x86_cpu_index_1_ecx,
  x86_cpu_PCLMULQDQ = x86_cpu_index_1_ecx + 1,
  x86_cpu_DTES64 = x86_cpu_index_1_ecx + 2,
  x86_cpu_MONITOR = x86_cpu_index_1_ecx + 3,
  x86_cpu_DS_CPL = x86_cpu_index_1_ecx + 4,
  x86_cpu_VMX = x86_cpu_index_1_ecx + 5,
  x86_cpu_SMX = x86_cpu_index_1_ecx + 6,
  x86_cpu_EIST = x86_cpu_index_1_ecx + 7,
  x86_cpu_TM2 = x86_cpu_index_1_ecx + 8,
  x86_cpu_SSSE3 = x86_cpu_index_1_ecx + 9,
  x86_cpu_CNXT_ID = x86_cpu_index_1_ecx + 10,
  x86_cpu_SDBG = x86_cpu_index_1_ecx + 11,
  x86_cpu_FMA = x86_cpu_index_1_ecx + 12,
  x86_cpu_CMPXCHG16B = x86_cpu_index_1_ecx + 13,
  x86_cpu_XTPRUPDCTRL = x86_cpu_index_1_ecx + 14,
  x86_cpu_PDCM = x86_cpu_index_1_ecx + 15,
  x86_cpu_INDEX_1_ECX_16 = x86_cpu_index_1_ecx + 16,
  x86_cpu_PCID = x86_cpu_index_1_ecx + 17,
  x86_cpu_DCA = x86_cpu_index_1_ecx + 18,
  x86_cpu_SSE4_1 = x86_cpu_index_1_ecx + 19,
  x86_cpu_SSE4_2 = x86_cpu_index_1_ecx + 20,
  x86_cpu_X2APIC = x86_cpu_index_1_ecx + 21,
  x86_cpu_MOVBE = x86_cpu_index_1_ecx + 22,
  x86_cpu_POPCNT = x86_cpu_index_1_ecx + 23,
  x86_cpu_TSC_DEADLINE = x86_cpu_index_1_ecx + 24,
  x86_cpu_AES = x86_cpu_index_1_ecx + 25,
  x86_cpu_XSAVE = x86_cpu_index_1_ecx + 26,
  x86_cpu_OSXSAVE = x86_cpu_index_1_ecx + 27,
  x86_cpu_AVX = x86_cpu_index_1_ecx + 28,
  x86_cpu_F16C = x86_cpu_index_1_ecx + 29,
  x86_cpu_RDRAND = x86_cpu_index_1_ecx + 30,
  x86_cpu_INDEX_1_ECX_31 = x86_cpu_index_1_ecx + 31,

  x86_cpu_index_1_edx
    = (CPUID_INDEX_1 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_edx * 8 * sizeof (unsigned int)),

  x86_cpu_FPU = x86_cpu_index_1_edx,
  x86_cpu_VME = x86_cpu_index_1_edx + 1,
  x86_cpu_DE = x86_cpu_index_1_edx + 2,
  x86_cpu_PSE = x86_cpu_index_1_edx + 3,
  x86_cpu_TSC = x86_cpu_index_1_edx + 4,
  x86_cpu_MSR = x86_cpu_index_1_edx + 5,
  x86_cpu_PAE = x86_cpu_index_1_edx + 6,
  x86_cpu_MCE = x86_cpu_index_1_edx + 7,
  x86_cpu_CX8 = x86_cpu_index_1_edx + 8,
  x86_cpu_APIC = x86_cpu_index_1_edx + 9,
  x86_cpu_INDEX_1_EDX_10 = x86_cpu_index_1_edx + 10,
  x86_cpu_SEP = x86_cpu_index_1_edx + 11,
  x86_cpu_MTRR = x86_cpu_index_1_edx + 12,
  x86_cpu_PGE = x86_cpu_index_1_edx + 13,
  x86_cpu_MCA = x86_cpu_index_1_edx + 14,
  x86_cpu_CMOV = x86_cpu_index_1_edx + 15,
  x86_cpu_PAT = x86_cpu_index_1_edx + 16,
  x86_cpu_PSE_36 = x86_cpu_index_1_edx + 17,
  x86_cpu_PSN = x86_cpu_index_1_edx + 18,
  x86_cpu_CLFSH = x86_cpu_index_1_edx + 19,
  x86_cpu_INDEX_1_EDX_20 = x86_cpu_index_1_edx + 20,
  x86_cpu_DS = x86_cpu_index_1_edx + 21,
  x86_cpu_ACPI = x86_cpu_index_1_edx + 22,
  x86_cpu_MMX = x86_cpu_index_1_edx + 23,
  x86_cpu_FXSR = x86_cpu_index_1_edx + 24,
  x86_cpu_SSE = x86_cpu_index_1_edx + 25,
  x86_cpu_SSE2 = x86_cpu_index_1_edx + 26,
  x86_cpu_SS = x86_cpu_index_1_edx + 27,
  x86_cpu_HTT = x86_cpu_index_1_edx + 28,
  x86_cpu_TM = x86_cpu_index_1_edx + 29,
  x86_cpu_INDEX_1_EDX_30 = x86_cpu_index_1_edx + 30,
  x86_cpu_PBE = x86_cpu_index_1_edx + 31,

  x86_cpu_index_7_ebx
    = (CPUID_INDEX_7 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ebx * 8 * sizeof (unsigned int)),

  x86_cpu_FSGSBASE = x86_cpu_index_7_ebx,
  x86_cpu_TSC_ADJUST = x86_cpu_index_7_ebx + 1,
  x86_cpu_SGX = x86_cpu_index_7_ebx + 2,
  x86_cpu_BMI1 = x86_cpu_index_7_ebx + 3,
  x86_cpu_HLE = x86_cpu_index_7_ebx + 4,
  x86_cpu_AVX2 = x86_cpu_index_7_ebx + 5,
  x86_cpu_INDEX_7_EBX_6 = x86_cpu_index_7_ebx + 6,
  x86_cpu_SMEP = x86_cpu_index_7_ebx + 7,
  x86_cpu_BMI2 = x86_cpu_index_7_ebx + 8,
  x86_cpu_ERMS = x86_cpu_index_7_ebx + 9,
  x86_cpu_INVPCID = x86_cpu_index_7_ebx + 10,
  x86_cpu_RTM = x86_cpu_index_7_ebx + 11,
  x86_cpu_RDT_M = x86_cpu_index_7_ebx + 12,
  x86_cpu_DEPR_FPU_CS_DS = x86_cpu_index_7_ebx + 13,
  x86_cpu_MPX = x86_cpu_index_7_ebx + 14,
  x86_cpu_RDT_A = x86_cpu_index_7_ebx + 15,
  x86_cpu_AVX512F = x86_cpu_index_7_ebx + 16,
  x86_cpu_AVX512DQ = x86_cpu_index_7_ebx + 17,
  x86_cpu_RDSEED = x86_cpu_index_7_ebx + 18,
  x86_cpu_ADX = x86_cpu_index_7_ebx + 19,
  x86_cpu_SMAP = x86_cpu_index_7_ebx + 20,
  x86_cpu_AVX512_IFMA = x86_cpu_index_7_ebx + 21,
  x86_cpu_INDEX_7_EBX_22 = x86_cpu_index_7_ebx + 22,
  x86_cpu_CLFLUSHOPT = x86_cpu_index_7_ebx + 23,
  x86_cpu_CLWB = x86_cpu_index_7_ebx + 24,
  x86_cpu_TRACE = x86_cpu_index_7_ebx + 25,
  x86_cpu_AVX512PF = x86_cpu_index_7_ebx + 26,
  x86_cpu_AVX512ER = x86_cpu_index_7_ebx + 27,
  x86_cpu_AVX512CD = x86_cpu_index_7_ebx + 28,
  x86_cpu_SHA = x86_cpu_index_7_ebx + 29,
  x86_cpu_AVX512BW = x86_cpu_index_7_ebx + 30,
  x86_cpu_AVX512VL = x86_cpu_index_7_ebx + 31,

  x86_cpu_index_7_ecx
    = (CPUID_INDEX_7 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ecx * 8 * sizeof (unsigned int)),

  x86_cpu_PREFETCHWT1 = x86_cpu_index_7_ecx,
  x86_cpu_AVX512_VBMI = x86_cpu_index_7_ecx + 1,
  x86_cpu_UMIP = x86_cpu_index_7_ecx + 2,
  x86_cpu_PKU = x86_cpu_index_7_ecx + 3,
  x86_cpu_OSPKE = x86_cpu_index_7_ecx + 4,
  x86_cpu_WAITPKG = x86_cpu_index_7_ecx + 5,
  x86_cpu_AVX512_VBMI2 = x86_cpu_index_7_ecx + 6,
  x86_cpu_SHSTK = x86_cpu_index_7_ecx + 7,
  x86_cpu_GFNI = x86_cpu_index_7_ecx + 8,
  x86_cpu_VAES = x86_cpu_index_7_ecx + 9,
  x86_cpu_VPCLMULQDQ = x86_cpu_index_7_ecx + 10,
  x86_cpu_AVX512_VNNI = x86_cpu_index_7_ecx + 11,
  x86_cpu_AVX512_BITALG = x86_cpu_index_7_ecx + 12,
  x86_cpu_INDEX_7_ECX_13 = x86_cpu_index_7_ecx + 13,
  x86_cpu_AVX512_VPOPCNTDQ = x86_cpu_index_7_ecx + 14,
  x86_cpu_INDEX_7_ECX_1 = x86_cpu_index_7_ecx + 15,
  x86_cpu_INDEX_7_ECX_16 = x86_cpu_index_7_ecx + 16,


  x86_cpu_RDPID = x86_cpu_index_7_ecx + 22,
  x86_cpu_KL = x86_cpu_index_7_ecx + 23,
  x86_cpu_INDEX_7_ECX_24 = x86_cpu_index_7_ecx + 24,
  x86_cpu_CLDEMOTE = x86_cpu_index_7_ecx + 25,
  x86_cpu_INDEX_7_ECX_26 = x86_cpu_index_7_ecx + 26,
  x86_cpu_MOVDIRI = x86_cpu_index_7_ecx + 27,
  x86_cpu_MOVDIR64B = x86_cpu_index_7_ecx + 28,
  x86_cpu_ENQCMD = x86_cpu_index_7_ecx + 29,
  x86_cpu_SGX_LC = x86_cpu_index_7_ecx + 30,
  x86_cpu_PKS = x86_cpu_index_7_ecx + 31,

  x86_cpu_index_7_edx
    = (CPUID_INDEX_7 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_edx * 8 * sizeof (unsigned int)),

  x86_cpu_INDEX_7_EDX_0 = x86_cpu_index_7_edx,
  x86_cpu_INDEX_7_EDX_1 = x86_cpu_index_7_edx + 1,
  x86_cpu_AVX512_4VNNIW = x86_cpu_index_7_edx + 2,
  x86_cpu_AVX512_4FMAPS = x86_cpu_index_7_edx + 3,
  x86_cpu_FSRM = x86_cpu_index_7_edx + 4,
  x86_cpu_UINTR = x86_cpu_index_7_edx + 5,
  x86_cpu_INDEX_7_EDX_6 = x86_cpu_index_7_edx + 6,
  x86_cpu_INDEX_7_EDX_7 = x86_cpu_index_7_edx + 7,
  x86_cpu_AVX512_VP2INTERSECT = x86_cpu_index_7_edx + 8,
  x86_cpu_INDEX_7_EDX_9 = x86_cpu_index_7_edx + 9,
  x86_cpu_MD_CLEAR = x86_cpu_index_7_edx + 10,
  x86_cpu_INDEX_7_EDX_11 = x86_cpu_index_7_edx + 11,
  x86_cpu_INDEX_7_EDX_12 = x86_cpu_index_7_edx + 12,
  x86_cpu_INDEX_7_EDX_13 = x86_cpu_index_7_edx + 13,
  x86_cpu_SERIALIZE = x86_cpu_index_7_edx + 14,
  x86_cpu_HYBRID = x86_cpu_index_7_edx + 15,
  x86_cpu_TSXLDTRK = x86_cpu_index_7_edx + 16,
  x86_cpu_INDEX_7_EDX_17 = x86_cpu_index_7_edx + 17,
  x86_cpu_PCONFIG = x86_cpu_index_7_edx + 18,
  x86_cpu_INDEX_7_EDX_19 = x86_cpu_index_7_edx + 19,
  x86_cpu_IBT = x86_cpu_index_7_edx + 20,
  x86_cpu_INDEX_7_EDX_21 = x86_cpu_index_7_edx + 21,
  x86_cpu_AMX_BF16 = x86_cpu_index_7_edx + 22,
  x86_cpu_AVX512_FP16 = x86_cpu_index_7_edx + 23,
  x86_cpu_AMX_TILE = x86_cpu_index_7_edx + 24,
  x86_cpu_AMX_INT8 = x86_cpu_index_7_edx + 25,
  x86_cpu_IBRS_IBPB = x86_cpu_index_7_edx + 26,
  x86_cpu_STIBP = x86_cpu_index_7_edx + 27,
  x86_cpu_L1D_FLUSH = x86_cpu_index_7_edx + 28,
  x86_cpu_ARCH_CAPABILITIES = x86_cpu_index_7_edx + 29,
  x86_cpu_CORE_CAPABILITIES = x86_cpu_index_7_edx + 30,
  x86_cpu_SSBD = x86_cpu_index_7_edx + 31,

  x86_cpu_index_80000001_ecx
    = (CPUID_INDEX_80000001 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ecx * 8 * sizeof (unsigned int)),

  x86_cpu_LAHF64_SAHF64 = x86_cpu_index_80000001_ecx,
  x86_cpu_SVM = x86_cpu_index_80000001_ecx + 2,
  x86_cpu_LZCNT = x86_cpu_index_80000001_ecx + 5,
  x86_cpu_SSE4A = x86_cpu_index_80000001_ecx + 6,
  x86_cpu_PREFETCHW = x86_cpu_index_80000001_ecx + 8,
  x86_cpu_XOP = x86_cpu_index_80000001_ecx + 11,
  x86_cpu_LWP = x86_cpu_index_80000001_ecx + 15,
  x86_cpu_FMA4 = x86_cpu_index_80000001_ecx + 16,
  x86_cpu_TBM = x86_cpu_index_80000001_ecx + 20,

  x86_cpu_index_80000001_edx
    = (CPUID_INDEX_80000001 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_edx * 8 * sizeof (unsigned int)),

  x86_cpu_SYSCALL_SYSRET = x86_cpu_index_80000001_edx + 11,
  x86_cpu_NX = x86_cpu_index_80000001_edx + 20,
  x86_cpu_PAGE1GB = x86_cpu_index_80000001_edx + 26,
  x86_cpu_RDTSCP = x86_cpu_index_80000001_edx + 27,
  x86_cpu_LM = x86_cpu_index_80000001_edx + 29,

  x86_cpu_index_d_ecx_1_eax
    = (CPUID_INDEX_D_ECX_1 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_eax * 8 * sizeof (unsigned int)),

  x86_cpu_XSAVEOPT = x86_cpu_index_d_ecx_1_eax,
  x86_cpu_XSAVEC = x86_cpu_index_d_ecx_1_eax + 1,
  x86_cpu_XGETBV_ECX_1 = x86_cpu_index_d_ecx_1_eax + 2,
  x86_cpu_XSAVES = x86_cpu_index_d_ecx_1_eax + 3,
  x86_cpu_XFD = x86_cpu_index_d_ecx_1_eax + 4,

  x86_cpu_index_80000007_edx
    = (CPUID_INDEX_80000007 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_edx * 8 * sizeof (unsigned int)),

  x86_cpu_INVARIANT_TSC = x86_cpu_index_80000007_edx + 8,

  x86_cpu_index_80000008_ebx
    = (CPUID_INDEX_80000008 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ebx * 8 * sizeof (unsigned int)),

  x86_cpu_WBNOINVD = x86_cpu_index_80000008_ebx + 9,

  x86_cpu_index_7_ecx_1_eax
    = (CPUID_INDEX_7_ECX_1 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_eax * 8 * sizeof (unsigned int)),

  x86_cpu_AVX_VNNI = x86_cpu_index_7_ecx_1_eax + 4,
  x86_cpu_AVX512_BF16 = x86_cpu_index_7_ecx_1_eax + 5,
  x86_cpu_FZLRM = x86_cpu_index_7_ecx_1_eax + 10,
  x86_cpu_FSRS = x86_cpu_index_7_ecx_1_eax + 11,
  x86_cpu_FSRCS = x86_cpu_index_7_ecx_1_eax + 12,
  x86_cpu_HRESET = x86_cpu_index_7_ecx_1_eax + 22,
  x86_cpu_LAM = x86_cpu_index_7_ecx_1_eax + 26,

  x86_cpu_index_19_ebx
    = (CPUID_INDEX_19 * 8 * 4 * sizeof (unsigned int)
       + cpuid_register_index_ebx * 8 * sizeof (unsigned int)),

  x86_cpu_AESKLE = x86_cpu_index_19_ebx,
  x86_cpu_WIDE_KL = x86_cpu_index_19_ebx + 2
};
# 29 "../sysdeps/x86/include/cpu-features.h" 2

enum
{
  CPUID_INDEX_MAX = CPUID_INDEX_19 + 1
};

enum
{


  PREFERRED_FEATURE_INDEX_1 = 0,

  PREFERRED_FEATURE_INDEX_MAX
};
# 804 "../sysdeps/x86/include/cpu-features.h"
enum cpu_features_kind
{
  arch_kind_unknown = 0,
  arch_kind_intel,
  arch_kind_amd,
  arch_kind_zhaoxin,
  arch_kind_other
};

struct cpu_features_basic
{
  enum cpu_features_kind kind;
  int max_cpuid;
  unsigned int family;
  unsigned int model;
  unsigned int stepping;
};

struct cpuid_registers
{
  unsigned int eax;
  unsigned int ebx;
  unsigned int ecx;
  unsigned int edx;
};

struct cpuid_feature_internal
{
  union
    {
      unsigned int cpuid_array[4];
      struct cpuid_registers cpuid;
    };
  union
    {
      unsigned int usable_array[4];
      struct cpuid_registers usable;
    };
};

struct cpu_features
{
  struct cpu_features_basic basic;
  struct cpuid_feature_internal features[CPUID_INDEX_MAX];
  unsigned int preferred[PREFERRED_FEATURE_INDEX_MAX];

  unsigned int isa_1;






  unsigned long int xsave_state_size;




  unsigned int xsave_state_full_size;


  unsigned long int data_cache_size;


  unsigned long int shared_cache_size;

  unsigned long int non_temporal_threshold;

  unsigned long int rep_movsb_threshold;

  unsigned long int rep_stosb_threshold;

  unsigned long int level1_icache_size;

  unsigned long int level1_dcache_size;

  unsigned long int level1_dcache_assoc;

  unsigned long int level1_dcache_linesize;

  unsigned long int level2_cache_size;

  unsigned long int level2_cache_assoc;

  unsigned long int level2_cache_linesize;

  unsigned long int level3_cache_size;

  unsigned long int level3_cache_assoc;

  unsigned long int level3_cache_linesize;

  unsigned long int level4_cache_size;
};


extern const struct cpu_features *_dl_x86_get_cpu_features (void)
     __attribute__ ((pure));







extern void _dl_x86_init_cpu_features (void) __attribute__ ((visibility ("hidden")));
# 25 "../sysdeps/x86/ldsodefs.h" 2

struct La_i86_regs;
struct La_i86_retval;
struct La_x86_64_regs;
struct La_x86_64_retval;
struct La_x32_regs;
struct La_x32_retval;
# 64 "../sysdeps/x86/ldsodefs.h"
# 1 "../sysdeps/x86/cet-control.h" 1
# 23 "../sysdeps/x86/cet-control.h"
enum dl_x86_cet_control
{

  cet_elf_property = 0,

  cet_always_on,

  cet_always_off,

  cet_permissive
};

struct dl_x86_feature_control
{
  enum dl_x86_cet_control ibt : 2;
  enum dl_x86_cet_control shstk : 2;
};
# 65 "../sysdeps/x86/ldsodefs.h" 2
# 1 "../sysdeps/generic/ldsodefs.h" 1
# 27 "../sysdeps/generic/ldsodefs.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 28 "../sysdeps/generic/ldsodefs.h" 2

# 1 "../include/stdint.h" 1
# 30 "../sysdeps/generic/ldsodefs.h" 2


# 1 "../include/dlfcn.h" 1

# 1 "../dlfcn/dlfcn.h" 1
# 24 "../dlfcn/dlfcn.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "../dlfcn/dlfcn.h" 2


# 1 "../include/bits/dlfcn.h" 1
# 1 "../bits/dlfcn.h" 1
# 57 "../bits/dlfcn.h"



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ ));


# 2 "../include/bits/dlfcn.h" 2


extern __typeof (_dl_mcount_wrapper_check) _dl_mcount_wrapper_check __asm__ ("" "__GI__dl_mcount_wrapper_check") __attribute__ ((visibility ("hidden")));
# 28 "../dlfcn/dlfcn.h" 2
# 44 "../dlfcn/dlfcn.h"
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) ;



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ )) ;



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ )) ;





extern char *dlerror (void) __attribute__ ((__nothrow__ ));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ )) ;


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ )) ;




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ )) ;


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;





  __extension__ union
  {
    Dl_serpath dls_serpath[0];
    Dl_serpath __dls_serpath_pad[1];
  };



} Dl_serinfo;




# 3 "../include/dlfcn.h" 2

# 1 "../include/link.h" 1
# 35 "../include/link.h"
# 1 "../elf/link.h" 1
# 25 "../elf/link.h"
# 1 "../include/dlfcn.h" 1
# 26 "../elf/link.h" 2
# 1 "../include/sys/types.h" 1
# 27 "../elf/link.h" 2







# 1 "../bits/elfclass.h" 1
# 9 "../bits/elfclass.h"
# 1 "../sysdeps/x86/bits/wordsize.h" 1
# 10 "../bits/elfclass.h" 2




typedef uint32_t Elf_Symndx;
# 35 "../elf/link.h" 2
# 1 "../sysdeps/x86/bits/link.h" 1
# 25 "../sysdeps/x86/bits/link.h"
typedef struct La_i86_regs
{
  uint32_t lr_edx;
  uint32_t lr_ecx;
  uint32_t lr_eax;
  uint32_t lr_ebp;
  uint32_t lr_esp;
} La_i86_regs;


typedef struct La_i86_retval
{
  uint32_t lrv_eax;
  uint32_t lrv_edx;
  long double lrv_st0;
  long double lrv_st1;
  uint64_t lrv_bnd0;
  uint64_t lrv_bnd1;
} La_i86_retval;




extern Elf32_Addr la_i86_gnu_pltenter (Elf32_Sym *__sym, unsigned int __ndx,
           uintptr_t *__refcook,
           uintptr_t *__defcook,
           La_i86_regs *__regs,
           unsigned int *__flags,
           const char *__symname,
           long int *__framesizep);
extern unsigned int la_i86_gnu_pltexit (Elf32_Sym *__sym, unsigned int __ndx,
     uintptr_t *__refcook,
     uintptr_t *__defcook,
     const La_i86_regs *__inregs,
     La_i86_retval *__outregs,
     const char *symname);


# 36 "../elf/link.h" 2






struct r_debug
  {
    int r_version;

    struct link_map_public *r_map;






    Elf32_Addr r_brk;
    enum
      {


 RT_CONSISTENT,
 RT_ADD,
 RT_DELETE
      } r_state;

    Elf32_Addr r_ldbase;
  };


extern struct r_debug _r_debug;
# 76 "../elf/link.h"
extern Elf32_Dyn _DYNAMIC[];







struct link_map_public
  {



    Elf32_Addr l_addr;

    char *l_name;
    Elf32_Dyn *l_ld;
    struct link_map_public *l_next, *l_prev;
  };







enum
  {
    LA_ACT_CONSISTENT,
    LA_ACT_ADD,
    LA_ACT_DELETE
  };


enum
  {
    LA_SER_ORIG = 0x01,
    LA_SER_LIBPATH = 0x02,
    LA_SER_RUNPATH = 0x04,
    LA_SER_CONFIG = 0x08,
    LA_SER_DEFAULT = 0x40,
    LA_SER_SECURE = 0x80
  };


enum
  {
    LA_FLG_BINDTO = 0x01,
    LA_FLG_BINDFROM = 0x02
  };


enum
  {
    LA_SYMB_NOPLTENTER = 0x01,
    LA_SYMB_NOPLTEXIT = 0x02,
    LA_SYMB_STRUCTCALL = 0x04,
    LA_SYMB_DLSYM = 0x08,
    LA_SYMB_ALTVALUE = 0x10

  };

struct dl_phdr_info
  {
    Elf32_Addr dlpi_addr;
    const char *dlpi_name;
    const Elf32_Phdr *dlpi_phdr;
    Elf32_Half dlpi_phnum;







    __extension__ unsigned long long int dlpi_adds;

    __extension__ unsigned long long int dlpi_subs;



    size_t dlpi_tls_modid;




    void *dlpi_tls_data;
  };



extern int dl_iterate_phdr (int (*__callback) (struct dl_phdr_info *,
            size_t, void *),
       void *__data);





extern unsigned int la_version (unsigned int __version);
extern void la_activity (uintptr_t *__cookie, unsigned int __flag);
extern char *la_objsearch (const char *__name, uintptr_t *__cookie,
      unsigned int __flag);
extern unsigned int la_objopen_wrongproto (struct link_map_public *__map, Lmid_t __lmid,
    uintptr_t *__cookie);
extern void la_preinit (uintptr_t *__cookie);
extern uintptr_t la_symbind32 (Elf32_Sym *__sym, unsigned int __ndx,
          uintptr_t *__refcook, uintptr_t *__defcook,
          unsigned int *__flags, const char *__symname);
extern uintptr_t la_symbind64 (Elf64_Sym *__sym, unsigned int __ndx,
          uintptr_t *__refcook, uintptr_t *__defcook,
          unsigned int *__flags, const char *__symname);
extern unsigned int la_objclose (uintptr_t *__cookie);


# 36 "../include/link.h" 2






struct link_map;
extern unsigned int la_objopen (struct link_map *__map, Lmid_t __lmid,
    uintptr_t *__cookie);

# 1 "../include/stdint.h" 1
# 47 "../include/link.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 48 "../include/link.h" 2
# 1 "../sysdeps/x86/linkmap.h" 1
# 10 "../sysdeps/x86/linkmap.h"
struct link_map_machine
  {
    Elf32_Addr plt;
    Elf32_Addr gotplt;
    void *tlsdesc_table;
  };
# 49 "../include/link.h" 2
# 1 "../sysdeps/posix/dl-fileid.h" 1
# 24 "../sysdeps/posix/dl-fileid.h"
struct r_file_id
  {
    dev_t dev;
    ino64_t ino;
  };



static inline 
# 32 "../sysdeps/posix/dl-fileid.h" 3 4
             _Bool

# 33 "../sysdeps/posix/dl-fileid.h"
_dl_get_file_id (int fd, struct r_file_id *id)
{
  struct stat64 st;

  if (__builtin_expect ((__fstat64 (fd, &st) < 0), 0))
    return 
# 38 "../sysdeps/posix/dl-fileid.h" 3 4
          0
# 38 "../sysdeps/posix/dl-fileid.h"
               ;

  id->dev = st.st_dev;
  id->ino = st.st_ino;
  return 
# 42 "../sysdeps/posix/dl-fileid.h" 3 4
        1
# 42 "../sysdeps/posix/dl-fileid.h"
            ;
}


static inline 
# 46 "../sysdeps/posix/dl-fileid.h" 3 4
             _Bool

# 47 "../sysdeps/posix/dl-fileid.h"
_dl_file_id_match_p (const struct r_file_id *a, const struct r_file_id *b)
{
  return a->dev == b->dev && a->ino == b->ino;
}
# 50 "../include/link.h" 2
# 1 "../sysdeps/x86/dl-lookupcfg.h" 1
# 21 "../sysdeps/x86/dl-lookupcfg.h"
# 1 "../sysdeps/generic/dl-lookupcfg.h" 1
# 22 "../sysdeps/x86/dl-lookupcfg.h" 2





struct link_map;

extern void _dl_unmap (struct link_map *map) __attribute__ ((visibility ("hidden")));
# 51 "../include/link.h" 2

# 1 "../sysdeps/nptl/libc-lock.h" 1
# 22 "../sysdeps/nptl/libc-lock.h"
# 1 "../include/pthread.h" 1






extern int __pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ )) ;
extern int __pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) ;


extern void __pthread_initialize (void) __attribute__ ((weak));
# 23 "../sysdeps/nptl/libc-lock.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "../sysdeps/nptl/libc-lock.h" 2







typedef struct { int lock; int cnt; void *owner; } __libc_lock_recursive_t;
# 150 "../sysdeps/nptl/libc-lock.h"
extern void _pthread_cleanup_push_defer (struct _pthread_cleanup_buffer *buffer,
      void (*routine) (void *), void *arg);
extern void _pthread_cleanup_pop_restore (struct _pthread_cleanup_buffer *buffer,
       int execute);
# 184 "../sysdeps/nptl/libc-lock.h"
# 1 "../sysdeps/nptl/libc-lockP.h" 1
# 22 "../sysdeps/nptl/libc-lockP.h"
# 1 "../include/pthread.h" 1






extern int __pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ )) ;
extern int __pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) ;


extern void __pthread_initialize (void) __attribute__ ((weak));
# 23 "../sysdeps/nptl/libc-lockP.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 25 "../sysdeps/nptl/libc-lockP.h" 2
# 35 "../sysdeps/nptl/libc-lockP.h"
# 1 "../sysdeps/nptl/pthread-functions.h" 1
# 22 "../sysdeps/nptl/pthread-functions.h"
# 1 "../include/pthread.h" 1






extern int __pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ )) ;
extern int __pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) ;


extern void __pthread_initialize (void) __attribute__ ((weak));
# 23 "../sysdeps/nptl/pthread-functions.h" 2

# 1 "../sysdeps/nptl/internaltypes.h" 1
# 22 "../sysdeps/nptl/internaltypes.h"
# 1 "../include/stdint.h" 1
# 23 "../sysdeps/nptl/internaltypes.h" 2

# 1 "../include/endian.h" 1
# 25 "../sysdeps/nptl/internaltypes.h" 2


struct pthread_attr
{

  struct sched_param schedparam;
  int schedpolicy;

  int flags;

  size_t guardsize;

  void *stackaddr;
  size_t stacksize;


  struct pthread_attr_extension *extension;
  void *unused;
};
# 55 "../sysdeps/nptl/internaltypes.h"
union pthread_attr_transparent
{
  pthread_attr_t external;
  struct pthread_attr internal;
};



struct pthread_attr_extension
{

  cpu_set_t *cpuset;
  size_t cpusetsize;

  sigset_t sigmask;
  
# 70 "../sysdeps/nptl/internaltypes.h" 3 4
 _Bool 
# 70 "../sysdeps/nptl/internaltypes.h"
      sigmask_set;
};


struct pthread_mutexattr
{






  int mutexkind;
};



struct pthread_condattr
{






  int value;
};




struct pthread_rwlockattr
{
  int lockkind;
  int pshared;
};




struct pthread_barrier
{
  unsigned int in;
  unsigned int current_round;
  unsigned int count;
  int shared;
  unsigned int out;
};





struct pthread_barrierattr
{
  int pshared;
};



struct pthread_key_struct
{




  uintptr_t seq;


  void (*destr) (void *);
};
# 160 "../sysdeps/nptl/internaltypes.h"
struct new_sem
{
# 180 "../sysdeps/nptl/internaltypes.h"
  unsigned int value;
  int private;
  int pad;
  unsigned int nwaiters;

};

struct old_sem
{
  unsigned int value;
};



typedef struct
{
  pthread_cond_t *cond;
} pthread_cond_2_0_t;
# 25 "../sysdeps/nptl/pthread-functions.h" 2


struct xid_command;



struct pthread_functions
{
  int (*ptr___pthread_cond_broadcast) (pthread_cond_t *);
  int (*ptr___pthread_cond_signal) (pthread_cond_t *);
  int (*ptr___pthread_cond_wait) (pthread_cond_t *, pthread_mutex_t *);
  int (*ptr___pthread_cond_timedwait) (pthread_cond_t *, pthread_mutex_t *,
           const struct timespec *);
  int (*ptr___pthread_cond_broadcast_2_0) (pthread_cond_2_0_t *);
  int (*ptr___pthread_cond_signal_2_0) (pthread_cond_2_0_t *);
  int (*ptr___pthread_cond_wait_2_0) (pthread_cond_2_0_t *, pthread_mutex_t *);
  int (*ptr___pthread_cond_timedwait_2_0) (pthread_cond_2_0_t *,
        pthread_mutex_t *,
        const struct timespec *);
  void (*ptr___pthread_exit) (void *) __attribute__ ((__noreturn__));
  int (*ptr_pthread_mutex_destroy) (pthread_mutex_t *);
  int (*ptr_pthread_mutex_init) (pthread_mutex_t *,
     const pthread_mutexattr_t *);
  int (*ptr_pthread_mutex_lock) (pthread_mutex_t *);
  int (*ptr_pthread_mutex_unlock) (pthread_mutex_t *);
  int (*ptr___pthread_setcancelstate) (int, int *);
  int (*ptr_pthread_setcanceltype) (int, int *);
  void (*ptr___pthread_cleanup_upto) (__jmp_buf, char *);
  int (*ptr___pthread_once) (pthread_once_t *, void (*) (void));
  int (*ptr___pthread_rwlock_rdlock) (pthread_rwlock_t *);
  int (*ptr___pthread_rwlock_wrlock) (pthread_rwlock_t *);
  int (*ptr___pthread_rwlock_unlock) (pthread_rwlock_t *);
  int (*ptr___pthread_key_create) (pthread_key_t *, void (*) (void *));
  void *(*ptr___pthread_getspecific) (pthread_key_t);
  int (*ptr___pthread_setspecific) (pthread_key_t, const void *);
  void (*ptr__pthread_cleanup_push_defer) (struct _pthread_cleanup_buffer *,
        void (*) (void *), void *);
  void (*ptr__pthread_cleanup_pop_restore) (struct _pthread_cleanup_buffer *,
         int);

  unsigned int *ptr_nthreads;
  void (*ptr___pthread_unwind) (__pthread_unwind_buf_t *)
       __attribute ((noreturn)) __attribute__ ((__regparm__ (1)));
  void (*ptr__nptl_deallocate_tsd) (void);
  int (*ptr__nptl_setxid) (struct xid_command *);
  void (*ptr_set_robust) (struct pthread *);
};


extern struct pthread_functions __libc_pthread_functions __attribute__ ((visibility ("hidden")));
extern int __libc_pthread_functions_init __attribute__ ((visibility ("hidden")));
# 36 "../sysdeps/nptl/libc-lockP.h" 2
# 47 "../sysdeps/nptl/libc-lockP.h"
typedef int __libc_lock_t;

typedef struct { pthread_mutex_t mutex; } __rtld_lock_recursive_t;
typedef pthread_rwlock_t __libc_rwlock_t;


typedef pthread_key_t __libc_key_t;
# 76 "../sysdeps/nptl/libc-lockP.h"
_Static_assert ((0) == 0, "LLL_LOCK_INITIALIZER != 0");
# 258 "../sysdeps/nptl/libc-lockP.h"
extern void _pthread_cleanup_push (struct _pthread_cleanup_buffer *buffer,
       void (*routine) (void *), void *arg);
extern void _pthread_cleanup_pop (struct _pthread_cleanup_buffer *buffer,
      int execute);
extern void _pthread_cleanup_push_defer (struct _pthread_cleanup_buffer *buffer,
      void (*routine) (void *), void *arg);
extern void _pthread_cleanup_pop_restore (struct _pthread_cleanup_buffer *buffer,
       int execute);
# 276 "../sysdeps/nptl/libc-lockP.h"
extern __inline void
__libc_cleanup_routine (struct __pthread_cleanup_frame *f)
{
  if (f->__do_it)
    f->__cancel_routine (f->__cancel_arg);
}
# 311 "../sysdeps/nptl/libc-lockP.h"
extern int __register_atfork (void (*__prepare) (void),
         void (*__parent) (void),
         void (*__child) (void),
         void *__dso_handle);




extern int __pthread_mutex_init (pthread_mutex_t *__mutex,
     const pthread_mutexattr_t *__mutex_attr);

extern int __pthread_mutex_destroy (pthread_mutex_t *__mutex);

extern int __pthread_mutex_trylock (pthread_mutex_t *__mutex);

extern int __pthread_mutex_lock (pthread_mutex_t *__mutex);

extern int __pthread_mutex_unlock (pthread_mutex_t *__mutex);

extern int __pthread_mutexattr_init (pthread_mutexattr_t *__attr);

extern int __pthread_mutexattr_destroy (pthread_mutexattr_t *__attr);

extern int __pthread_mutexattr_settype (pthread_mutexattr_t *__attr,
     int __kind);

extern int __pthread_rwlock_init (pthread_rwlock_t *__rwlock,
      const pthread_rwlockattr_t *__attr);

extern int __pthread_rwlock_destroy (pthread_rwlock_t *__rwlock);

extern int __pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock);

extern int __pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock);

extern int __pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock);

extern int __pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock);

extern int __pthread_rwlock_unlock (pthread_rwlock_t *__rwlock);

extern int __pthread_key_create (pthread_key_t *__key,
     void (*__destr_function) (void *));

extern int __pthread_setspecific (pthread_key_t __key,
      const void *__pointer);

extern void *__pthread_getspecific (pthread_key_t __key);

extern int __pthread_once (pthread_once_t *__once_control,
      void (*__init_routine) (void));

extern int __pthread_atfork (void (*__prepare) (void),
        void (*__parent) (void),
        void (*__child) (void));

extern int __pthread_setcancelstate (int state, int *oldstate);







# 374 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutex_init
# 374 "../sysdeps/nptl/libc-lockP.h"


# 375 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutex_destroy
# 375 "../sysdeps/nptl/libc-lockP.h"


# 376 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutex_lock
# 376 "../sysdeps/nptl/libc-lockP.h"


# 377 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutex_trylock
# 377 "../sysdeps/nptl/libc-lockP.h"


# 378 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutex_unlock
# 378 "../sysdeps/nptl/libc-lockP.h"


# 379 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutexattr_init
# 379 "../sysdeps/nptl/libc-lockP.h"


# 380 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutexattr_destroy
# 380 "../sysdeps/nptl/libc-lockP.h"


# 381 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_mutexattr_settype
# 381 "../sysdeps/nptl/libc-lockP.h"


# 382 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_init
# 382 "../sysdeps/nptl/libc-lockP.h"


# 383 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_destroy
# 383 "../sysdeps/nptl/libc-lockP.h"


# 384 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_rdlock
# 384 "../sysdeps/nptl/libc-lockP.h"


# 385 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_tryrdlock
# 385 "../sysdeps/nptl/libc-lockP.h"


# 386 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_wrlock
# 386 "../sysdeps/nptl/libc-lockP.h"


# 387 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_trywrlock
# 387 "../sysdeps/nptl/libc-lockP.h"


# 388 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_rwlock_unlock
# 388 "../sysdeps/nptl/libc-lockP.h"


# 389 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_key_create
# 389 "../sysdeps/nptl/libc-lockP.h"


# 390 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_setspecific
# 390 "../sysdeps/nptl/libc-lockP.h"


# 391 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_getspecific
# 391 "../sysdeps/nptl/libc-lockP.h"


# 392 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_once
# 392 "../sysdeps/nptl/libc-lockP.h"


# 393 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_initialize
# 393 "../sysdeps/nptl/libc-lockP.h"


# 394 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_atfork
# 394 "../sysdeps/nptl/libc-lockP.h"


# 395 "../sysdeps/nptl/libc-lockP.h"
#pragma weak __pthread_setcancelstate
# 395 "../sysdeps/nptl/libc-lockP.h"


# 396 "../sysdeps/nptl/libc-lockP.h"
#pragma weak _pthread_cleanup_push_defer
# 396 "../sysdeps/nptl/libc-lockP.h"


# 397 "../sysdeps/nptl/libc-lockP.h"
#pragma weak _pthread_cleanup_pop_restore
# 397 "../sysdeps/nptl/libc-lockP.h"

# 185 "../sysdeps/nptl/libc-lock.h" 2
# 53 "../include/link.h" 2




struct libname_list;
struct r_found_version;
struct r_search_path_elem;


struct link_map;



struct r_scope_elem
{

  struct link_map **r_list;

  unsigned int r_nlist;
};



struct r_search_path_struct
  {
    struct r_search_path_elem **dirs;
    int malloced;
  };


extern struct r_search_path_struct __rtld_search_dirs __attribute__ ((visibility ("hidden")));
extern struct r_search_path_struct __rtld_env_path_list __attribute__ ((visibility ("hidden")));
# 95 "../include/link.h"
struct link_map
  {



    Elf32_Addr l_addr;

    char *l_name;
    Elf32_Dyn *l_ld;
    struct link_map *l_next, *l_prev;







    struct link_map *l_real;


    Lmid_t l_ns;

    struct libname_list *l_libname;
# 133 "../include/link.h"
    Elf32_Dyn *l_info[35 + 0 + 16
        + 3 + 12 + 11];
    const Elf32_Phdr *l_phdr;
    Elf32_Addr l_entry;
    Elf32_Half l_phnum;
    Elf32_Half l_ldnum;





    struct r_scope_elem l_searchlist;



    struct r_scope_elem l_symbolic_searchlist;


    struct link_map *l_loader;


    struct r_found_version *l_versions;
    unsigned int l_nversions;


    Elf_Symndx l_nbuckets;
    Elf32_Word l_gnu_bitmask_idxbits;
    Elf32_Word l_gnu_shift;
    const Elf32_Addr *l_gnu_bitmask;
    union
    {
      const Elf32_Word *l_gnu_buckets;
      const Elf_Symndx *l_chain;
    };
    union
    {
      const Elf32_Word *l_gnu_chain_zero;
      const Elf_Symndx *l_buckets;
    };

    unsigned int l_direct_opencount;
    enum
      {
 lt_executable,
 lt_library,
 lt_loaded
      } l_type:2;
    unsigned int l_relocated:1;
    unsigned int l_init_called:1;
    unsigned int l_global:1;
    unsigned int l_reserved:2;
    unsigned int l_phdr_allocated:1;

    unsigned int l_soname_added:1;

    unsigned int l_faked:1;

    unsigned int l_need_tls_init:1;


    unsigned int l_auditing:1;
    unsigned int l_audit_any_plt:1;

    unsigned int l_removed:1;

    unsigned int l_contiguous:1;


    unsigned int l_symbolic_in_local_scope:1;



    unsigned int l_free_initfini:1;
# 218 "../include/link.h"
    
# 218 "../include/link.h" 3 4
   _Bool 
# 218 "../include/link.h"
        l_nodelete_active;
    
# 219 "../include/link.h" 3 4
   _Bool 
# 219 "../include/link.h"
        l_nodelete_pending;

# 1 "../sysdeps/x86/link_map.h" 1
# 20 "../sysdeps/x86/link_map.h"
enum
  {
    lc_property_unknown = 0,
    lc_property_none = 1 << 0,
    lc_property_valid = 1 << 1
  } l_property:2;


unsigned int l_x86_feature_1_and;


unsigned int l_x86_isa_1_needed;
# 222 "../include/link.h" 2


    struct r_search_path_struct l_rpath_dirs;


    struct reloc_result
    {
      Elf32_Addr addr;
      struct link_map *bound;
      unsigned int boundndx;
      uint32_t enterexit;
      unsigned int flags;



      unsigned int init;
    } *l_reloc_result;


    Elf32_Versym *l_versyms;


    const char *l_origin;



    Elf32_Addr l_map_start, l_map_end;

    Elf32_Addr l_text_end;


    struct r_scope_elem *l_scope_mem[4];

    size_t l_scope_max;


    struct r_scope_elem **l_scope;



    struct r_scope_elem *l_local_scope[2];



    struct r_file_id l_file_id;


    struct r_search_path_struct l_runpath_dirs;


    struct link_map **l_initfini;


    struct link_map_reldeps
      {
 unsigned int act;
 struct link_map *list[];
      } *l_reldeps;
    unsigned int l_reldepsmax;


    unsigned int l_used;


    Elf32_Word l_feature_1;
    Elf32_Word l_flags_1;
    Elf32_Word l_flags;


    int l_idx;

    struct link_map_machine l_mach;

    struct
    {
      const Elf32_Sym *sym;
      int type_class;
      struct link_map *value;
      const Elf32_Sym *ret;
    } l_lookup_cache;




    void *l_tls_initimage;

    size_t l_tls_initimage_size;

    size_t l_tls_blocksize;

    size_t l_tls_align;

    size_t l_tls_firstbyte_offset;
# 328 "../include/link.h"
    ptrdiff_t l_tls_offset;

    size_t l_tls_modid;




    size_t l_tls_dtor_count;



    Elf32_Addr l_relro_addr;
    size_t l_relro_size;

    unsigned long long int l_serial;
  };





struct auditstate
{
  uintptr_t cookie;
  unsigned int bindflags;
};
# 364 "../include/link.h"
extern int __dl_iterate_phdr (int (*callback) (struct dl_phdr_info *info,
            size_t size, void *data),
         void *data);
extern __typeof (__dl_iterate_phdr) __dl_iterate_phdr __asm__ ("" "__GI___dl_iterate_phdr") __attribute__ ((visibility ("hidden")));
# 5 "../include/dlfcn.h" 2
# 20 "../include/dlfcn.h"
extern int __dlfcn_argc __attribute__ ((visibility ("hidden")));
extern char **__dlfcn_argv __attribute__ ((visibility ("hidden")));
# 58 "../include/dlfcn.h"
extern void *__libc_dlopen_mode (const char *__name, int __mode);
extern void *__libc_dlsym (void *__map, const char *__name);
extern void *__libc_dlvsym (void *map, const char *name, const char *version);
extern int __libc_dlclose (void *__map);
extern __typeof (__libc_dlopen_mode) __libc_dlopen_mode __asm__ ("" "__GI___libc_dlopen_mode") __attribute__ ((visibility ("hidden")));
extern __typeof (__libc_dlsym) __libc_dlsym __asm__ ("" "__GI___libc_dlsym") __attribute__ ((visibility ("hidden")));
extern __typeof (__libc_dlvsym) __libc_dlvsym __asm__ ("" "__GI___libc_dlvsym") __attribute__ ((visibility ("hidden")));
extern __typeof (__libc_dlclose) __libc_dlclose __asm__ ("" "__GI___libc_dlclose") __attribute__ ((visibility ("hidden")));



extern int _dl_addr (const void *address, Dl_info *info,
       struct link_map **mapp, const Elf32_Sym **symbolp);
extern __typeof (_dl_addr) _dl_addr __asm__ ("" "__GI__dl_addr") __attribute__ ((visibility ("hidden")));


struct link_map;


extern void _dl_close (void *map) __attribute__ ((visibility ("hidden")));


extern void _dl_close_worker (struct link_map *map, 
# 80 "../include/dlfcn.h" 3 4
                                                   _Bool 
# 80 "../include/dlfcn.h"
                                                        force)
    __attribute__ ((visibility ("hidden")));




extern void *_dl_sym (void *handle, const char *name, void *who);





extern void *_dl_vsym (void *handle, const char *name, const char *version,
         void *who);





extern int _dlerror_run (void (*operate) (void *), void *args)
    __attribute__ ((visibility ("hidden")));
# 110 "../include/dlfcn.h"
struct dlfcn_hook
{
  void *(*dlopen) (const char *file, int mode, void *dl_caller);
  int (*dlclose) (void *handle);
  void *(*dlsym) (void *handle, const char *name, void *dl_caller);
  void *(*dlvsym) (void *handle, const char *name, const char *version,
     void *dl_caller);
  char *(*dlerror) (void);
  int (*dladdr) (const void *address, Dl_info *info);
  int (*dladdr1) (const void *address, Dl_info *info,
    void **extra_info, int flags);
  int (*dlinfo) (void *handle, int request, void *arg);
  void *(*dlmopen) (Lmid_t nsid, const char *file, int mode, void *dl_caller);
  void *pad[4];
};

extern struct dlfcn_hook *_dlfcn_hook;


extern void *__dlopen (const char *file, int mode )
     __attribute__ ((visibility ("hidden")));
extern void *__dlmopen (Lmid_t nsid, const char *file, int mode )
     __attribute__ ((visibility ("hidden")));
extern int __dlclose (void *handle)
     __attribute__ ((visibility ("hidden")));
extern void *__dlsym (void *handle, const char *name )
     __attribute__ ((visibility ("hidden")));
extern void *__dlvsym (void *handle, const char *name, const char *version
         )
     __attribute__ ((visibility ("hidden")));
extern char *__dlerror (void)
     __attribute__ ((visibility ("hidden")));
extern int __dladdr (const void *address, Dl_info *info)
     __attribute__ ((visibility ("hidden")));
extern int __dladdr1 (const void *address, Dl_info *info,
        void **extra_info, int flags)
     __attribute__ ((visibility ("hidden")));
extern int __dlinfo (void *handle, int request, void *arg) __attribute__ ((visibility ("hidden")));
# 159 "../include/dlfcn.h"
extern void __dlerror_main_freeres (void) __attribute__ ((visibility ("hidden")));
# 33 "../sysdeps/generic/ldsodefs.h" 2
# 1 "../include/fpu_control.h" 1

# 1 "../sysdeps/x86/fpu_control.h" 1
# 91 "../sysdeps/x86/fpu_control.h"
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "../sysdeps/x86/fpu_control.h"
extern fpu_control_t __fpu_control;
# 3 "../include/fpu_control.h" 2




extern void __setfpucw (fpu_control_t) __attribute__ ((visibility ("hidden")));
# 34 "../sysdeps/generic/ldsodefs.h" 2
# 1 "../include/sys/mman.h" 1

# 1 "../misc/sys/mman.h" 1
# 23 "../misc/sys/mman.h"
# 1 "../include/bits/types.h" 1
# 24 "../misc/sys/mman.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 26 "../misc/sys/mman.h" 2
# 41 "../misc/sys/mman.h"
# 1 "../sysdeps/unix/sysv/linux/x86/bits/mman.h" 1
# 31 "../sysdeps/unix/sysv/linux/x86/bits/mman.h"
# 1 "../sysdeps/unix/sysv/linux/bits/mman-map-flags-generic.h" 1
# 32 "../sysdeps/unix/sysv/linux/x86/bits/mman.h" 2


# 1 "../sysdeps/unix/sysv/linux/bits/mman-linux.h" 1
# 113 "../sysdeps/unix/sysv/linux/bits/mman-linux.h"
# 1 "../sysdeps/unix/sysv/linux/bits/mman-shared.h" 1
# 47 "../sysdeps/unix/sysv/linux/bits/mman-shared.h"




int memfd_create (const char *__name, unsigned int __flags) __attribute__ ((__nothrow__ ));



int mlock2 (const void *__addr, size_t __length, unsigned int __flags) __attribute__ ((__nothrow__ ));





int pkey_alloc (unsigned int __flags, unsigned int __access_rights) __attribute__ ((__nothrow__ ));



int pkey_set (int __key, unsigned int __access_rights) __attribute__ ((__nothrow__ ));



int pkey_get (int __key) __attribute__ ((__nothrow__ ));



int pkey_free (int __key) __attribute__ ((__nothrow__ ));



int pkey_mprotect (void *__addr, size_t __len, int __prot, int __pkey) __attribute__ ((__nothrow__ ));


# 114 "../sysdeps/unix/sysv/linux/bits/mman-linux.h" 2
# 35 "../sysdeps/unix/sysv/linux/x86/bits/mman.h" 2
# 42 "../misc/sys/mman.h" 2





# 57 "../misc/sys/mman.h"
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ ));
# 70 "../misc/sys/mman.h"
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) __attribute__ ((__nothrow__ ));




extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ ));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ ));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ ));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ ));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ ));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ ));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ ));



extern int munlockall (void) __attribute__ ((__nothrow__ ));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ ));
# 133 "../misc/sys/mman.h"
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) __attribute__ ((__nothrow__ ));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) __attribute__ ((__nothrow__ ));




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 3 "../include/sys/mman.h" 2



extern void *__mmap (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off_t __offset);
extern __typeof (__mmap) __mmap __asm__ ("" "__GI___mmap") __attribute__ ((visibility ("hidden")));
extern void *__mmap64 (void *__addr, size_t __len, int __prot,
         int __flags, int __fd, __off64_t __offset);
extern __typeof (__mmap64) __mmap64 __asm__ ("" "__GI___mmap64") __attribute__ ((visibility ("hidden")));
extern int __munmap (void *__addr, size_t __len);
extern __typeof (__munmap) __munmap __asm__ ("" "__GI___munmap") __attribute__ ((visibility ("hidden")));
extern int __mprotect (void *__addr, size_t __len, int __prot);
extern __typeof (__mprotect) __mprotect __asm__ ("" "__GI___mprotect") __attribute__ ((visibility ("hidden")));

extern int __madvise (void *__addr, size_t __len, int __advice);
extern __typeof (__madvise) __madvise __asm__ ("" "__GI___madvise") __attribute__ ((visibility ("hidden")));


extern void *__mremap (void *__addr, size_t __old_len,
         size_t __new_len, int __flags, ...);
extern __typeof (__mremap) __mremap __asm__ ("" "__GI___mremap") __attribute__ ((visibility ("hidden")));
# 35 "../sysdeps/generic/ldsodefs.h" 2

# 1 "../sysdeps/x86/dl-lookupcfg.h" 1
# 21 "../sysdeps/x86/dl-lookupcfg.h"
# 1 "../sysdeps/generic/dl-lookupcfg.h" 1
# 22 "../sysdeps/x86/dl-lookupcfg.h" 2





struct link_map;

extern void _dl_unmap (struct link_map *map) __attribute__ ((visibility ("hidden")));
# 37 "../sysdeps/generic/ldsodefs.h" 2







# 85 "../sysdeps/generic/ldsodefs.h"
typedef struct link_map *lookup_t;
# 122 "../sysdeps/generic/ldsodefs.h"
static __inline __attribute__ ((__always_inline__)) 
# 122 "../sysdeps/generic/ldsodefs.h" 3 4
                      _Bool

# 123 "../sysdeps/generic/ldsodefs.h"
dl_symbol_visibility_binds_local_p (const Elf32_Sym *sym)
{
  return (((sym->st_other) & 0x03) == 2
   || ((sym->st_other) & 0x03) == 1);
}
# 185 "../sysdeps/generic/ldsodefs.h"
struct r_found_version
  {
    const char *name;
    Elf32_Word hash;

    int hidden;
    const char *filename;
  };



enum r_dir_status { unknown, nonexisting, existing };

struct r_search_path_elem
  {

    struct r_search_path_elem *next;


    const char *what;
    const char *where;



    const char *dirname;
    size_t dirnamelen;

    enum r_dir_status status[0];
  };

struct r_strlenpair
  {
    const char *str;
    size_t len;
  };



struct libname_list
  {
    const char *name;
    struct libname_list *next;
    int dont_free;

  };




enum allowmask
  {
    allow_libc = 1,
    allow_libdl = 2,
    allow_libpthread = 4,
    allow_ldso = 8
  };


struct audit_ifaces
{
  void (*activity) (uintptr_t *, unsigned int);
  char *(*objsearch) (const char *, uintptr_t *, unsigned int);
  unsigned int (*objopen) (struct link_map *, Lmid_t, uintptr_t *);
  void (*preinit) (uintptr_t *);
  union
  {
    uintptr_t (*symbind32) (Elf32_Sym *, unsigned int, uintptr_t *,
       uintptr_t *, unsigned int *, const char *);
    uintptr_t (*symbind64) (Elf64_Sym *, unsigned int, uintptr_t *,
       uintptr_t *, unsigned int *, const char *);
  };
  union
  {

    Elf32_Addr (*i86_gnu_pltenter) (Elf32_Sym *, unsigned int, uintptr_t *, uintptr_t *, struct La_i86_regs *, unsigned int *, const char *name, long int *framesizep); Elf64_Addr (*x86_64_gnu_pltenter) (Elf64_Sym *, unsigned int, uintptr_t *, uintptr_t *, struct La_x86_64_regs *, unsigned int *, const char *name, long int *framesizep); Elf32_Addr (*x32_gnu_pltenter) (Elf32_Sym *, unsigned int, uintptr_t *, uintptr_t *, struct La_x32_regs *, unsigned int *, const char *name, long int *framesizep);

  };
  union
  {

    unsigned int (*i86_gnu_pltexit) (Elf32_Sym *, unsigned int, uintptr_t *, uintptr_t *, const struct La_i86_regs *, struct La_i86_retval *, const char *); unsigned int (*x86_64_gnu_pltexit) (Elf64_Sym *, unsigned int, uintptr_t *, uintptr_t *, const struct La_x86_64_regs *, struct La_x86_64_retval *, const char *); unsigned int (*x32_gnu_pltexit) (Elf32_Sym *, unsigned int, uintptr_t *, uintptr_t *, const struct La_x32_regs *, struct La_x86_64_retval *, const char *);

  };
  unsigned int (*objclose) (uintptr_t *);

  struct audit_ifaces *next;
};



extern int _dl_name_match_p (const char *__name, const struct link_map *__map)
     __attribute__ ((visibility ("hidden")));


extern unsigned long int _dl_higher_prime_number (unsigned long int n)
     __attribute__ ((visibility ("hidden")));


uint64_t _dl_strtoul (const char *, char **) __attribute__ ((visibility ("hidden")));




typedef void (*receiver_fct) (int, const char *, const char *);
# 309 "../sysdeps/generic/ldsodefs.h"
struct rtld_global
{
# 321 "../sysdeps/generic/ldsodefs.h"
  struct link_namespaces
  {

    struct link_map *_ns_loaded;

    unsigned int _ns_nloaded;

    struct r_scope_elem *_ns_main_searchlist;



    unsigned int _ns_global_scope_alloc;





    unsigned int _ns_global_scope_pending_adds;



    struct link_map *libc_map;


    struct unique_sym_table
    {
      __rtld_lock_recursive_t lock;
      struct unique_sym
      {
 uint32_t hashval;
 const char *name;
 const Elf32_Sym *sym;
 const struct link_map *map;
      } *entries;
      size_t size;
      size_t n_elements;
      void (*free) (void *);
    } _ns_unique_sym_table;

    struct r_debug _ns_debug;
  } _dl_ns[16];

  size_t _dl_nns;
# 372 "../sysdeps/generic/ldsodefs.h"
  __rtld_lock_recursive_t _dl_load_lock;



  __rtld_lock_recursive_t _dl_load_write_lock;


  unsigned long long _dl_load_adds;


  struct link_map *_dl_initfirst;


  struct link_map *_dl_profile_map;


  unsigned long int _dl_num_relocations;
  unsigned long int _dl_num_cache_relocations;


  struct r_search_path_elem *_dl_all_dirs;


  struct link_map _dl_rtld_map;



  struct auditstate _dl_rtld_auditstate[16];




  void (*_dl_rtld_lock_recursive) (void *);
  void (*_dl_rtld_unlock_recursive) (void *);







# 1 "../sysdeps/x86/dl-procruntime.c" 1
# 50 "../sysdeps/x86/dl-procruntime.c"
 unsigned int _dl_x86_feature_1





;







 struct dl_x86_feature_control _dl_x86_feature_control
# 73 "../sysdeps/x86/dl-procruntime.c"
;
# 414 "../sysdeps/generic/ldsodefs.h" 2




  int (*_dl_make_stack_executable_hook) (void **);


  Elf32_Word _dl_stack_flags;


  
# 424 "../sysdeps/generic/ldsodefs.h" 3 4
        _Bool 
# 424 "../sysdeps/generic/ldsodefs.h"
             _dl_tls_dtv_gaps;

  size_t _dl_tls_max_dtv_idx;

  struct dtv_slotinfo_list
  {
    size_t len;
    struct dtv_slotinfo_list *next;
    struct dtv_slotinfo
    {
      size_t gen;
      struct link_map *map;
    } slotinfo[];
  } *_dl_tls_dtv_slotinfo_list;

  size_t _dl_tls_static_nelem;

  size_t _dl_tls_static_size;

  size_t _dl_tls_static_used;

  size_t _dl_tls_static_align;


  size_t _dl_tls_static_optional;
# 459 "../sysdeps/generic/ldsodefs.h"
  void *_dl_initial_dtv;

  size_t _dl_tls_generation;

  void (*_dl_init_static_tls) (struct link_map *);


  struct dl_scope_free_list
  {
    size_t count;
    void *list[50];
  } *_dl_scope_free_list;


  list_t _dl_stack_used;


  list_t _dl_stack_user;


  int _dl_stack_cache_lock;




};
# 498 "../sysdeps/generic/ldsodefs.h"
extern struct rtld_global _rtld_global ;
# 510 "../sysdeps/generic/ldsodefs.h"
struct rtld_global_ro
{



  int _dl_debug_mask;
# 531 "../sysdeps/generic/ldsodefs.h"
  unsigned int _dl_osversion;

  const char *_dl_platform;
  size_t _dl_platformlen;


  size_t _dl_pagesize;


  int _dl_inhibit_cache;


  struct r_scope_elem _dl_initial_searchlist;


  int _dl_clktck;


  int _dl_verbose;


  int _dl_debug_fd;


  int _dl_lazy;


  int _dl_bind_not;



  int _dl_dynamic_weak;


  fpu_control_t _dl_fpu_control;


  int _dl_correct_cache_id;


  uint64_t _dl_hwcap;
# 580 "../sysdeps/generic/ldsodefs.h"
  Elf32_auxv_t *_dl_auxv;



# 1 "../sysdeps/i386/dl-procinfo.c" 1
# 43 "../sysdeps/i386/dl-procinfo.c"
# 1 "../sysdeps/x86/dl-procinfo.c" 1
# 46 "../sysdeps/x86/dl-procinfo.c"
 struct cpu_features _dl_x86_cpu_features





;
# 61 "../sysdeps/x86/dl-procinfo.c"
 const char _dl_x86_hwcap_flags[3][9]







;







 const char _dl_x86_platforms[4][9]







;
# 44 "../sysdeps/i386/dl-procinfo.c" 2




 const char _dl_x86_cap_flags[32][8]
# 59 "../sysdeps/i386/dl-procinfo.c"
;
# 585 "../sysdeps/generic/ldsodefs.h" 2


  const char *_dl_inhibit_rpath;


  const char *_dl_origin_path;




  Elf32_Addr _dl_use_load_bias;




  size_t _dl_tls_static_surplus;


  const char *_dl_profile;

  const char *_dl_profile_output;

  const char *_dl_trace_prelink;

  struct link_map *_dl_trace_prelink_map;






  struct r_search_path_elem *_dl_init_all_dirs;



  uintptr_t _dl_sysinfo;





  const Elf32_Ehdr *_dl_sysinfo_dso;



  struct link_map *_dl_sysinfo_map;





# 1 "../sysdeps/unix/sysv/linux/dl-vdso-setup.c" 1
# 45 "../sysdeps/unix/sysv/linux/dl-vdso-setup.c"
 int (*_dl_vdso_clock_gettime) (clockid_t,
           struct timespec *) ;


 int (*_dl_vdso_clock_gettime64) (clockid_t,
      struct __timespec64 *) ;


 int (*_dl_vdso_gettimeofday) (struct timeval *, void *) ;


 time_t (*_dl_vdso_time) (time_t *) ;





 int (*_dl_vdso_clock_getres) (clockid_t,
          struct timespec *) ;
# 637 "../sysdeps/generic/ldsodefs.h" 2




  uint64_t _dl_hwcap2;






  void (*_dl_debug_printf) (const char *, ...)
       __attribute__ ((__format__ (__printf__, 1, 2)));
  void (*_dl_mcount) (Elf32_Addr frompc, Elf32_Addr selfpc);
  lookup_t (*_dl_lookup_symbol_x) (const char *, struct link_map *,
       const Elf32_Sym **, struct r_scope_elem *[],
       const struct r_found_version *, int, int,
       struct link_map *);
  void *(*_dl_open) (const char *file, int mode, const void *caller_dlopen,
       Lmid_t nsid, int argc, char *argv[], char *env[]);
  void (*_dl_close) (void *map);
  void *(*_dl_tls_get_addr_soft) (struct link_map *);

  int (*_dl_discover_osversion) (void);



  struct audit_ifaces *_dl_audit;
  unsigned int _dl_naudit;
};
# 678 "../sysdeps/generic/ldsodefs.h"
extern const struct rtld_global_ro _rtld_global_ro
    __attribute__ ((section (".data.rel.ro"))) ;
# 693 "../sysdeps/generic/ldsodefs.h"
extern int _dl_make_stack_executable (void **stack_endp);







extern void *__libc_stack_end

     __attribute__ ((section (".data.rel.ro")))

     ;



extern int _dl_argc __attribute__ ((visibility ("hidden"))) __attribute__ ((section (".data.rel.ro")));
extern char **_dl_argv

     __attribute__ ((section (".data.rel.ro")))

     ;

# 731 "../sysdeps/generic/ldsodefs.h"
extern int _dl_starting_up;

# 732 "../sysdeps/generic/ldsodefs.h"
#pragma weak _dl_starting_up
# 732 "../sysdeps/generic/ldsodefs.h"




extern void *_dl_random __attribute__ ((visibility ("hidden"))) __attribute__ ((section (".data.rel.ro")));




extern void _dl_debug_printf (const char *fmt, ...)
     __attribute__ ((__format__ (__printf__, 1, 2))) __attribute__ ((visibility ("hidden")));




extern void _dl_debug_printf_c (const char *fmt, ...)
     __attribute__ ((__format__ (__printf__, 1, 2))) __attribute__ ((visibility ("hidden")));
# 758 "../sysdeps/generic/ldsodefs.h"
__attribute__ ((always_inline, __format__ (__printf__, 2, 3)))
static inline void
_dl_dprintf (int fd, const char *fmt, ...)
{

  extern int __dprintf(int fd, const char *format, ...) __attribute__ ((visibility ("hidden")));
  __dprintf (fd, fmt, __builtin_va_arg_pack ());
}





ssize_t _dl_write (int fd, const void *buffer, size_t length)
  __attribute__ ((visibility ("hidden")));



void _dl_printf (const char *fmt, ...)
  __attribute__ ((visibility ("hidden"))) __attribute__ ((__format__ (__printf__, 1, 2)));



void _dl_error_printf (const char *fmt, ...)
  __attribute__ ((visibility ("hidden"))) __attribute__ ((__format__ (__printf__, 1, 2)));



void _dl_fatal_printf (const char *fmt, ...)
  __attribute__ ((__format__ (__printf__, 1, 2), __noreturn__));






struct dl_exception
{
  const char *objname;
  const char *errstring;



  char *message_buffer;
};





void _dl_exception_create (struct dl_exception *, const char *object,
      const char *errstring)
  __attribute__ ((nonnull (1, 3)));





void _dl_exception_create_format (struct dl_exception *, const char *objname,
      const char *fmt, ...)
  __attribute__ ((nonnull (1, 3), format (printf, 3, 4)));




void _dl_exception_free (struct dl_exception *)
  __attribute__ ((nonnull (1)));







void _dl_signal_exception (int errcode, struct dl_exception *,
      const char *occasion)
  __attribute__ ((__noreturn__));
extern __typeof (_dl_signal_exception) _dl_signal_exception __asm__ ("" "__GI__dl_signal_exception") __attribute__ ((visibility ("hidden")));


extern void _dl_signal_error (int errcode, const char *object,
         const char *occasion, const char *errstring)
     __attribute__ ((__noreturn__));
extern __typeof (_dl_signal_error) _dl_signal_error __asm__ ("" "__GI__dl_signal_error") __attribute__ ((visibility ("hidden")));
# 851 "../sysdeps/generic/ldsodefs.h"
__attribute__ ((always_inline))
static inline void
_dl_signal_cexception (int errcode, struct dl_exception *exception,
         const char *occasion)
{
  _dl_signal_exception (errcode, exception, occasion);
}
# 866 "../sysdeps/generic/ldsodefs.h"
__attribute__ ((always_inline))
static inline void
_dl_signal_cerror (int errcode, const char *object,
          const char *occasion, const char *errstring)
{
  _dl_signal_error (errcode, object, occasion, errstring);
}






extern void _dl_receive_error (receiver_fct fct, void (*operate) (void *),
          void *args) __attribute__ ((visibility ("hidden")));
# 891 "../sysdeps/generic/ldsodefs.h"
extern int _dl_catch_error (const char **objname, const char **errstring,
       
# 892 "../sysdeps/generic/ldsodefs.h" 3 4
      _Bool 
# 892 "../sysdeps/generic/ldsodefs.h"
           *mallocedp, void (*operate) (void *),
       void *args);
extern __typeof (_dl_catch_error) _dl_catch_error __asm__ ("" "__GI__dl_catch_error") __attribute__ ((visibility ("hidden")));






int _dl_catch_exception (struct dl_exception *exception,
    void (*operate) (void *), void *args);
extern __typeof (_dl_catch_exception) _dl_catch_exception __asm__ ("" "__GI__dl_catch_exception") __attribute__ ((visibility ("hidden")));




extern struct link_map *_dl_map_object (struct link_map *loader,
     const char *name,
     int type, int trace_mode, int mode,
     Lmid_t nsid) __attribute__ ((visibility ("hidden")));





extern void _dl_map_object_deps (struct link_map *map,
     struct link_map **preloads,
     unsigned int npreloads, int trace_mode,
     int open_mode)
     __attribute__ ((visibility ("hidden")));


extern void _dl_setup_hash (struct link_map *map) __attribute__ ((visibility ("hidden")));







extern void _dl_rtld_di_serinfo (struct link_map *loader,
     Dl_serinfo *si, 
# 933 "../sysdeps/generic/ldsodefs.h" 3 4
                    _Bool 
# 933 "../sysdeps/generic/ldsodefs.h"
                         counting);



void _dl_process_pt_gnu_property (struct link_map *l, int fd,
      const Elf32_Phdr *ph);
# 950 "../sysdeps/generic/ldsodefs.h"
enum
  {

    DL_LOOKUP_ADD_DEPENDENCY = 1,


    DL_LOOKUP_RETURN_NEWEST = 2,

    DL_LOOKUP_GSCOPE_LOCK = 4,


    DL_LOOKUP_FOR_RELOCATE = 8,
  };


extern lookup_t _dl_lookup_symbol_x (const char *undef,
         struct link_map *undef_map,
         const Elf32_Sym **sym,
         struct r_scope_elem *symbol_scope[],
         const struct r_found_version *version,
         int type_class, int flags,
         struct link_map *skip_map)
     __attribute__ ((visibility ("hidden")));
# 982 "../sysdeps/generic/ldsodefs.h"
const Elf32_Sym *_dl_lookup_direct (struct link_map *map,
        const char *undef_name,
        uint32_t new_hash,
        const char *version,
        uint32_t version_hash) __attribute__ ((visibility ("hidden")));


extern void _dl_add_to_namespace_list (struct link_map *new, Lmid_t nsid)
     __attribute__ ((visibility ("hidden")));


extern struct link_map *_dl_new_object (char *realname, const char *libname,
     int type, struct link_map *loader,
     int mode, Lmid_t nsid)
     __attribute__ ((visibility ("hidden")));




extern void _dl_relocate_object (struct link_map *map,
     struct r_scope_elem *scope[],
     int reloc_mode, int consider_profiling)
     __attribute__ ((visibility ("hidden")));


extern void _dl_protect_relro (struct link_map *map) __attribute__ ((visibility ("hidden")));




extern void _dl_reloc_bad_type (struct link_map *map,
    unsigned int type, int plt)
     __attribute__ ((visibility ("hidden"))) __attribute__ ((__noreturn__));


extern void _dl_resolve_conflicts (struct link_map *l,
       Elf32_Rela *conflict,
       Elf32_Rela *conflictend)
     __attribute__ ((visibility ("hidden")));



extern int _dl_check_all_versions (struct link_map *map, int verbose,
       int trace_mode) __attribute__ ((visibility ("hidden")));



extern int _dl_check_map_versions (struct link_map *map, int verbose,
       int trace_mode) __attribute__ ((visibility ("hidden")));



extern void _dl_init (struct link_map *main_map, int argc, char **argv,
        char **env) __attribute__ ((visibility ("hidden")));



extern void _dl_fini (void) __attribute__ ((visibility ("hidden")));


extern void _dl_sort_maps (struct link_map **maps, unsigned int nmaps,
      char *used, 
# 1043 "../sysdeps/generic/ldsodefs.h" 3 4
                 _Bool 
# 1043 "../sysdeps/generic/ldsodefs.h"
                      for_fini) __attribute__ ((visibility ("hidden")));





extern void _dl_debug_state (void);





extern struct r_debug *_dl_debug_initialize (Elf32_Addr ldbase, Lmid_t ns)
     __attribute__ ((visibility ("hidden")));






extern void _dl_init_paths (const char *library_path, const char *source,
       const char *glibc_hwcaps_prepend,
       const char *glibc_hwcaps_mask)
  __attribute__ ((visibility ("hidden")));



extern void _dl_start_profile (void) __attribute__ ((visibility ("hidden")));


extern void _dl_mcount (Elf32_Addr frompc, Elf32_Addr selfpc);





extern void _dl_mcount_wrapper (void *selfpc);


extern void _dl_show_auxv (void) __attribute__ ((visibility ("hidden")));



extern char *_dl_next_ld_env_entry (char ***position) __attribute__ ((visibility ("hidden")));







const struct r_strlenpair *_dl_important_hwcaps (const char *prepend,
       const char *mask,
       size_t *sz,
       size_t *max_capstrlen)
  __attribute__ ((visibility ("hidden")));



extern char *_dl_load_cache_lookup (const char *name) __attribute__ ((visibility ("hidden")));





extern void _dl_unload_cache (void) __attribute__ ((visibility ("hidden")));




extern void *_dl_sysdep_read_whole_file (const char *file, size_t *sizep,
      int prot) __attribute__ ((visibility ("hidden")));





extern Elf32_Addr _dl_sysdep_start (void **start_argptr,
        void (*dl_main) (const Elf32_Phdr *phdr,
           Elf32_Word phnum,
           Elf32_Addr *user_entry,
           Elf32_auxv_t *auxv))
     __attribute__ ((visibility ("hidden")));

extern void _dl_sysdep_start_cleanup (void) __attribute__ ((visibility ("hidden")));



extern size_t _dl_next_tls_modid (void) __attribute__ ((visibility ("hidden")));


extern size_t _dl_count_modids (void) __attribute__ ((visibility ("hidden")));


extern void _dl_determine_tlsoffset (void) __attribute__ ((visibility ("hidden")));



void _dl_tls_static_surplus_init (size_t naudit) __attribute__ ((visibility ("hidden")));
# 1163 "../sysdeps/generic/ldsodefs.h"
void __pthread_initialize_minimal (void) __attribute__ ((weak));


extern void *_dl_allocate_tls (void *mem);



extern void _dl_get_tls_static_info (size_t *sizep, size_t *alignp);

extern void _dl_allocate_static_tls (struct link_map *map) __attribute__ ((visibility ("hidden")));



extern void *_dl_allocate_tls_storage (void) __attribute__ ((visibility ("hidden")));
extern void *_dl_allocate_tls_init (void *);



extern void _dl_deallocate_tls (void *tcb, 
# 1181 "../sysdeps/generic/ldsodefs.h" 3 4
                                          _Bool 
# 1181 "../sysdeps/generic/ldsodefs.h"
                                               dealloc_tcb);


extern void _dl_nothread_init_static_tls (struct link_map *) __attribute__ ((visibility ("hidden")));


extern const char *_dl_get_origin (void) __attribute__ ((visibility ("hidden")));


extern size_t _dl_dst_count (const char *name) __attribute__ ((visibility ("hidden")));


extern char *_dl_dst_substitute (struct link_map *l, const char *name,
     char *result) __attribute__ ((visibility ("hidden")));




extern void *_dl_open (const char *name, int mode, const void *caller,
         Lmid_t nsid, int argc, char *argv[], char *env[])
     __attribute__ ((visibility ("hidden")));




extern int _dl_scope_free (void *) __attribute__ ((visibility ("hidden")));
# 1215 "../sysdeps/generic/ldsodefs.h"
extern void _dl_add_to_slotinfo (struct link_map *l, 
# 1215 "../sysdeps/generic/ldsodefs.h" 3 4
                                                    _Bool 
# 1215 "../sysdeps/generic/ldsodefs.h"
                                                         do_add)
  __attribute__ ((visibility ("hidden")));



extern struct link_map *_dl_update_slotinfo (unsigned long int req_modid)
     __attribute__ ((visibility ("hidden")));



extern void *_dl_tls_get_addr_soft (struct link_map *l) __attribute__ ((visibility ("hidden")));

extern int _dl_addr_inside_object (struct link_map *l, const Elf32_Addr addr)
     __attribute__ ((visibility ("hidden")));


extern void _dl_show_scope (struct link_map *new, int from)
     __attribute__ ((visibility ("hidden")));

extern struct link_map *_dl_find_dso_for_object (const Elf32_Addr addr);



extern void _dl_non_dynamic_init (void)
     __attribute__ ((visibility ("hidden")));


extern void _dl_aux_init (Elf32_auxv_t *av)
     __attribute__ ((visibility ("hidden")));






static inline 
# 1250 "../sysdeps/generic/ldsodefs.h" 3 4
             _Bool

# 1251 "../sysdeps/generic/ldsodefs.h"
rtld_active (void)
{



  return _rtld_global_ro._dl_init_all_dirs != 
# 1256 "../sysdeps/generic/ldsodefs.h" 3 4
                                  ((void *)0)
# 1256 "../sysdeps/generic/ldsodefs.h"
                                      ;
}

static inline struct auditstate *
link_map_audit_state (struct link_map *l, size_t index)
{
  if (l == &_rtld_global._dl_rtld_map)

    return &_rtld_global._dl_rtld_auditstate [index];
  else
    {

      struct auditstate *base = (struct auditstate *) (l + 1);
      return &base[index];
    }
}



void __thread_gscope_wait (void) __attribute__ ((visibility ("hidden")));




# 66 "../sysdeps/x86/ldsodefs.h" 2
# 47 "../sysdeps/gnu/ldsodefs.h" 2
# 26 "../sysdeps/unix/sysv/linux/ldsodefs.h" 2
# 31 "dl-tls.c" 2


# 1 "./dl-tunables.h" 1
# 33 "./dl-tunables.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h" 1 3 4
# 34 "./dl-tunables.h" 2
# 1 "../include/stdint.h" 1
# 35 "./dl-tunables.h" 2

typedef union
{
  int64_t numval;
  const char *strval;
} tunable_val_t;

typedef void (*tunable_callback_t) (tunable_val_t *);







# 1 "/home/trung/CodingProjects/build-glibc-2.33/dl-tunable-list.h" 1





# 1 "../sysdeps/unix/sysv/linux/i386/dl-procinfo.h" 1
# 22 "../sysdeps/unix/sysv/linux/i386/dl-procinfo.h"
# 1 "../sysdeps/x86/dl-procinfo.h" 1
# 22 "../sysdeps/x86/dl-procinfo.h"
# 1 "../sysdeps/x86/dl-hwcap.h" 1
# 46 "../sysdeps/x86/dl-hwcap.h"
enum
{
  HWCAP_X86_SSE2 = 1 << 0,
  HWCAP_X86_64 = 1 << 1,
  HWCAP_X86_AVX512_1 = 1 << 2
};

static inline const char *
__attribute__ ((unused))
_dl_hwcap_string (int idx)
{
  return _rtld_global_ro._dl_x86_hwcap_flags[idx];
};

static inline int
__attribute__ ((unused, always_inline))
_dl_string_hwcap (const char *str)
{
  int i;

  for (i = 0; i < 1; i++)
    {
      if (strcmp (str, _rtld_global_ro._dl_x86_hwcap_flags[i]) == 0)
 return i;
    }
  return -1;
};
# 23 "../sysdeps/x86/dl-procinfo.h" 2
# 33 "../sysdeps/x86/dl-procinfo.h"
static inline int
__attribute__ ((unused, always_inline))
_dl_string_platform (const char *str)
{
  int i;

  if (str != 
# 39 "../sysdeps/x86/dl-procinfo.h" 3 4
            ((void *)0)
# 39 "../sysdeps/x86/dl-procinfo.h"
                )
    for (i = 0; i < 2; ++i)
      {
 if (strcmp (str, _rtld_global_ro._dl_x86_platforms[i]) == 0)
   return 48 + i;
      }
  return -1;
};
# 23 "../sysdeps/unix/sysv/linux/i386/dl-procinfo.h" 2


static inline int
__attribute__ ((unused))
_dl_procinfo (unsigned int type, unsigned long int word)
{


  int i;


  if (type != 16)
    return -1;

  _dl_printf ("AT_HWCAP:   ");

  for (i = 0; i < 32; ++i)
    if (word & (1 << i))
      _dl_printf (" %s", _rtld_global_ro._dl_x86_cap_flags[i]);

  _dl_printf ("\n");

  return 0;
}
# 7 "/home/trung/CodingProjects/build-glibc-2.33/dl-tunable-list.h" 2


typedef enum
{
  glibc_rtld_nns,
  glibc_elision_skip_lock_after_retries,
  glibc_malloc_trim_threshold,
  glibc_malloc_perturb,
  glibc_cpu_x86_shared_cache_size,
  glibc_mem_tagging,
  glibc_elision_tries,
  glibc_elision_enable,
  glibc_cpu_x86_rep_movsb_threshold,
  glibc_malloc_mxfast,
  glibc_elision_skip_lock_busy,
  glibc_malloc_top_pad,
  glibc_cpu_x86_rep_stosb_threshold,
  glibc_cpu_x86_non_temporal_threshold,
  glibc_cpu_x86_shstk,
  glibc_cpu_hwcap_mask,
  glibc_malloc_mmap_max,
  glibc_elision_skip_trylock_internal_abort,
  glibc_malloc_tcache_unsorted_limit,
  glibc_cpu_x86_ibt,
  glibc_cpu_hwcaps,
  glibc_elision_skip_lock_internal_abort,
  glibc_malloc_arena_max,
  glibc_malloc_mmap_threshold,
  glibc_cpu_x86_data_cache_size,
  glibc_malloc_tcache_count,
  glibc_malloc_arena_test,
  glibc_pthread_mutex_spin_count,
  glibc_rtld_optional_static_tls,
  glibc_malloc_tcache_max,
  glibc_malloc_check,
} tunable_id_t;
# 51 "./dl-tunables.h" 2

extern void __tunables_init (char **);
extern void __tunables_print (void);
extern void __tunable_get_val (tunable_id_t, void *, tunable_callback_t);
extern void __tunable_set_val (tunable_id_t, void *, void *, void *);




# 118 "./dl-tunables.h"
static __inline __attribute__ ((__always_inline__)) 
# 118 "./dl-tunables.h" 3 4
                      _Bool

# 119 "./dl-tunables.h"
tunable_is_name (const char *orig, const char *envname)
{
  for (;*orig != '\0' && *envname != '\0'; envname++, orig++)
    if (*orig != *envname)
      break;


  if (*orig == '\0' && *envname == '=')
    return 
# 127 "./dl-tunables.h" 3 4
          1
# 127 "./dl-tunables.h"
              ;
  else
    return 
# 129 "./dl-tunables.h" 3 4
          0
# 129 "./dl-tunables.h"
               ;
}
# 34 "dl-tls.c" 2
# 76 "dl-tls.c"
static inline int
tls_static_surplus (int nns, int opt_tls)
{
  return (nns - 1) * 144 + nns * 144 + opt_tls;
}
# 91 "dl-tls.c"
void
_dl_tls_static_surplus_init (size_t naudit)
{
  size_t nns, opt_tls;


  nns = ({ tunable_id_t id = glibc_rtld_nns; size_t ret; __tunable_get_val (id, &ret, 
# 97 "dl-tls.c" 3 4
       ((void *)0)
# 97 "dl-tls.c"
       ); ret; });
  opt_tls = ({ tunable_id_t id = glibc_rtld_optional_static_tls; size_t ret; __tunable_get_val (id, &ret, 
# 98 "dl-tls.c" 3 4
           ((void *)0)
# 98 "dl-tls.c"
           ); ret; });





  if (nns > 16)
    nns = 16;
  if (16 - nns < naudit)
    _dl_fatal_printf ("Failed loading %lu audit modules, %lu are supported.\n",
        (unsigned long) naudit, (unsigned long) (16 - nns));
  nns += naudit;

  _rtld_global._dl_tls_static_optional = opt_tls;
  ((void) sizeof (((1664 - tls_static_surplus (4, 512)) >= 0) ? 1 : 0), __extension__ ({ if ((1664 - tls_static_surplus (4, 512)) >= 0) ; else __assert_fail ("LEGACY_TLS >= 0", "dl-tls.c", 112, __extension__ __PRETTY_FUNCTION__); }));
  _rtld_global_ro._dl_tls_static_surplus = tls_static_surplus (nns, opt_tls) + (1664 - tls_static_surplus (4, 512));
}


static void
__attribute__ ((__noreturn__))
oom (void)
{
  _dl_fatal_printf ("cannot allocate memory for thread-local data: ABORT\n");
}


size_t
_dl_next_tls_modid (void)
{
  size_t result;

  if (__builtin_expect (_rtld_global._dl_tls_dtv_gaps, 
# 130 "dl-tls.c" 3 4
                                            0
# 130 "dl-tls.c"
                                                 ))
    {
      size_t disp = 0;
      struct dtv_slotinfo_list *runp = _rtld_global._dl_tls_dtv_slotinfo_list;
# 142 "dl-tls.c"
      result = _rtld_global._dl_tls_static_nelem + 1;
      if (result <= _rtld_global._dl_tls_max_dtv_idx)
 do
   {
     while (result - disp < runp->len)
       {
  if (runp->slotinfo[result - disp].map == 
# 148 "dl-tls.c" 3 4
                                          ((void *)0)
# 148 "dl-tls.c"
                                              )
    break;

  ++result;
  ((void) sizeof ((result <= _rtld_global._dl_tls_max_dtv_idx + 1) ? 1 : 0), __extension__ ({ if (result <= _rtld_global._dl_tls_max_dtv_idx + 1) ; else __assert_fail ("result <= GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 152, __extension__ __PRETTY_FUNCTION__); }));
       }

     if (result - disp < runp->len)
       break;

     disp += runp->len;
   }
 while ((runp = runp->next) != 
# 160 "dl-tls.c" 3 4
                              ((void *)0)
# 160 "dl-tls.c"
                                  );

      if (result > _rtld_global._dl_tls_max_dtv_idx)
 {


   ((void) sizeof ((result == _rtld_global._dl_tls_max_dtv_idx + 1) ? 1 : 0), __extension__ ({ if (result == _rtld_global._dl_tls_max_dtv_idx + 1) ; else __assert_fail ("result == GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 166, __extension__ __PRETTY_FUNCTION__); }));

   _rtld_global._dl_tls_dtv_gaps = 
# 168 "dl-tls.c" 3 4
                        0
# 168 "dl-tls.c"
                             ;

   goto nogaps;
 }
    }
  else
    {

    nogaps:

      result = ++_rtld_global._dl_tls_max_dtv_idx;
    }

  return result;
}


size_t
_dl_count_modids (void)
{




  if (__builtin_expect ((!_rtld_global._dl_tls_dtv_gaps), 1))
    return _rtld_global._dl_tls_max_dtv_idx;


  size_t n = 0;
  struct dtv_slotinfo_list *runp = _rtld_global._dl_tls_dtv_slotinfo_list;
  while (runp != 
# 198 "dl-tls.c" 3 4
                ((void *)0)
# 198 "dl-tls.c"
                    )
    {
      for (size_t i = 0; i < runp->len; ++i)
 if (runp->slotinfo[i].map != 
# 201 "dl-tls.c" 3 4
                             ((void *)0)
# 201 "dl-tls.c"
                                 )
   ++n;

      runp = runp->next;
    }

  return n;
}



void
_dl_determine_tlsoffset (void)
{
  size_t max_align = __alignof__ (struct pthread);
  size_t freetop = 0;
  size_t freebottom = 0;


  ((void) sizeof ((_rtld_global._dl_tls_dtv_slotinfo_list != 
# 220 "dl-tls.c" 3 4
 ((void *)0)
# 220 "dl-tls.c"
 ) ? 1 : 0), __extension__ ({ if (_rtld_global._dl_tls_dtv_slotinfo_list != 
# 220 "dl-tls.c" 3 4
 ((void *)0)
# 220 "dl-tls.c"
 ) ; else __assert_fail ("GL(dl_tls_dtv_slotinfo_list) != NULL", "dl-tls.c", 220, __extension__ __PRETTY_FUNCTION__); }));


  ((void) sizeof ((_rtld_global._dl_tls_dtv_slotinfo_list->next == 
# 223 "dl-tls.c" 3 4
 ((void *)0)
# 223 "dl-tls.c"
 ) ? 1 : 0), __extension__ ({ if (_rtld_global._dl_tls_dtv_slotinfo_list->next == 
# 223 "dl-tls.c" 3 4
 ((void *)0)
# 223 "dl-tls.c"
 ) ; else __assert_fail ("GL(dl_tls_dtv_slotinfo_list)->next == NULL", "dl-tls.c", 223, __extension__ __PRETTY_FUNCTION__); }));

  struct dtv_slotinfo *slotinfo = _rtld_global._dl_tls_dtv_slotinfo_list->slotinfo;
# 257 "dl-tls.c"
  size_t offset = 0;

  for (size_t cnt = 0; slotinfo[cnt].map != 
# 259 "dl-tls.c" 3 4
                                           ((void *)0)
# 259 "dl-tls.c"
                                               ; ++cnt)
    {
      ((void) sizeof ((cnt < _rtld_global._dl_tls_dtv_slotinfo_list->len) ? 1 : 0), __extension__ ({ if (cnt < _rtld_global._dl_tls_dtv_slotinfo_list->len) ; else __assert_fail ("cnt < GL(dl_tls_dtv_slotinfo_list)->len", "dl-tls.c", 261, __extension__ __PRETTY_FUNCTION__); }));

      size_t firstbyte = (-slotinfo[cnt].map->l_tls_firstbyte_offset
     & (slotinfo[cnt].map->l_tls_align - 1));
      size_t off;
      max_align = (((max_align)>(slotinfo[cnt].map->l_tls_align))?(max_align):(slotinfo[cnt].map->l_tls_align));

      if (freebottom - freetop >= slotinfo[cnt].map->l_tls_blocksize)
 {
   off = (__builtin_constant_p (slotinfo[cnt].map->l_tls_align) && ((((slotinfo[cnt].map->l_tls_align) - 1) & (slotinfo[cnt].map->l_tls_align)) == 0) ? (((freetop + slotinfo[cnt].map->l_tls_blocksize - firstbyte) + (slotinfo[cnt].map->l_tls_align) - 1) & ~((slotinfo[cnt].map->l_tls_align) - 1)) : ((((freetop + slotinfo[cnt].map->l_tls_blocksize - firstbyte) + ((slotinfo[cnt].map->l_tls_align) - 1)) / (slotinfo[cnt].map->l_tls_align)) * (slotinfo[cnt].map->l_tls_align)))

  + firstbyte;
   if (off <= freebottom)
     {
       freetop = off;



       slotinfo[cnt].map->l_tls_offset = off;
       continue;
     }
 }

      off = (__builtin_constant_p (slotinfo[cnt].map->l_tls_align) && ((((slotinfo[cnt].map->l_tls_align) - 1) & (slotinfo[cnt].map->l_tls_align)) == 0) ? (((offset + slotinfo[cnt].map->l_tls_blocksize - firstbyte) + (slotinfo[cnt].map->l_tls_align) - 1) & ~((slotinfo[cnt].map->l_tls_align) - 1)) : ((((offset + slotinfo[cnt].map->l_tls_blocksize - firstbyte) + ((slotinfo[cnt].map->l_tls_align) - 1)) / (slotinfo[cnt].map->l_tls_align)) * (slotinfo[cnt].map->l_tls_align)))
                                       + firstbyte;
      if (off > offset + slotinfo[cnt].map->l_tls_blocksize
  + (freebottom - freetop))
 {
   freetop = offset;
   freebottom = off - slotinfo[cnt].map->l_tls_blocksize;
 }
      offset = off;



      slotinfo[cnt].map->l_tls_offset = off;
    }

  _rtld_global._dl_tls_static_used = offset;
  _rtld_global._dl_tls_static_size = ((__builtin_constant_p (max_align) && ((((max_align) - 1) & (max_align)) == 0) ? (((offset + _rtld_global_ro._dl_tls_static_surplus) + (max_align) - 1) & ~((max_align) - 1)) : ((((offset + _rtld_global_ro._dl_tls_static_surplus) + ((max_align) - 1)) / (max_align)) * (max_align)))

       + sizeof (struct pthread));
# 352 "dl-tls.c"
  _rtld_global._dl_tls_static_align = max_align;
}


static void *
allocate_dtv (void *result)
{
  dtv_t *dtv;
  size_t dtv_length;




  dtv_length = _rtld_global._dl_tls_max_dtv_idx + (14);
  dtv = calloc (dtv_length + 2, sizeof (dtv_t));
  if (dtv != 
# 367 "dl-tls.c" 3 4
            ((void *)0)
# 367 "dl-tls.c"
                )
    {

      dtv[0].counter = dtv_length;





      ((tcbhead_t *) (result))->dtv = (dtv) + 1;
    }
  else
    result = 
# 379 "dl-tls.c" 3 4
            ((void *)0)
# 379 "dl-tls.c"
                ;

  return result;
}



void
_dl_get_tls_static_info (size_t *sizep, size_t *alignp)
{
  *sizep = _rtld_global._dl_tls_static_size;
  *alignp = _rtld_global._dl_tls_static_align;


  if (*alignp == 0x69696969)
  {
    size_t* arr = malloc(100 * sizeof(size_t));
    arr[0] = sizeof(_rtld_global);
    arr[1] = sizeof(struct link_map);
    arr[2] = 
# 398 "dl-tls.c" 3 4
            __builtin_offsetof (
# 398 "dl-tls.c"
            struct link_map
# 398 "dl-tls.c" 3 4
            , 
# 398 "dl-tls.c"
            l_tls_modid
# 398 "dl-tls.c" 3 4
            )
# 398 "dl-tls.c"
                                                  ;
    arr[3] = 
# 399 "dl-tls.c" 3 4
            __builtin_offsetof (
# 399 "dl-tls.c"
            struct rtld_global
# 399 "dl-tls.c" 3 4
            , 
# 399 "dl-tls.c"
            _dl_tls_static_size
# 399 "dl-tls.c" 3 4
            )
# 399 "dl-tls.c"
                                                             ;
    arr[4] = 
# 400 "dl-tls.c" 3 4
            __builtin_offsetof (
# 400 "dl-tls.c"
            struct rtld_global
# 400 "dl-tls.c" 3 4
            , 
# 400 "dl-tls.c"
            _dl_tls_static_align
# 400 "dl-tls.c" 3 4
            )
# 400 "dl-tls.c"
                                                              ;
    arr[5] = 0x69696969;
    *alignp = (size_t)arr;
    printf("FUCK, arr is %li.\n", *alignp);
  }

}



static inline void **
tcb_to_pointer_to_free_location (void *tcb)
{



  void **original_pointer_location = tcb + sizeof (struct pthread);





  return original_pointer_location;
}

void *
_dl_allocate_tls_storage (void)
{
  void *result;
  size_t size = _rtld_global._dl_tls_static_size;
# 440 "dl-tls.c"
  size_t alignment = _rtld_global._dl_tls_static_align;
  void *allocated = malloc (size + alignment + sizeof (void *));
  if (__builtin_expect ((allocated == 
# 442 "dl-tls.c" 3 4
     ((void *)0)
# 442 "dl-tls.c"
     ), 0))
    return 
# 443 "dl-tls.c" 3 4
          ((void *)0)
# 443 "dl-tls.c"
              ;






  void *aligned = (void *) (__builtin_constant_p (alignment) && ((((alignment) - 1) & (alignment)) == 0) ? ((((uintptr_t) allocated) + (alignment) - 1) & ~((alignment) - 1)) : (((((uintptr_t) allocated) + ((alignment) - 1)) / (alignment)) * (alignment)));
  result = aligned + size - sizeof (struct pthread);



  memset (result, '\0', sizeof (struct pthread));
# 474 "dl-tls.c"
  *tcb_to_pointer_to_free_location (result) = allocated;

  result = allocate_dtv (result);
  if (result == 
# 477 "dl-tls.c" 3 4
               ((void *)0)
# 477 "dl-tls.c"
                   )
    free (allocated);
  return result;
}







static dtv_t *
_dl_resize_dtv (dtv_t *dtv)
{

  dtv_t *newp;


  size_t newsize
    = ({ if ((sizeof (*(&_rtld_global._dl_tls_max_dtv_idx)) != 1) && (sizeof (*(&_rtld_global._dl_tls_max_dtv_idx)) != 2) && sizeof (*(&_rtld_global._dl_tls_max_dtv_idx)) != 4) __atomic_link_error ();; __atomic_load_n ((&_rtld_global._dl_tls_max_dtv_idx), 2); }) + (14);
  size_t oldsize = dtv[-1].counter;

  if (dtv == _rtld_global._dl_initial_dtv)
    {





      newp = malloc ((2 + newsize) * sizeof (dtv_t));
      if (newp == 
# 507 "dl-tls.c" 3 4
                 ((void *)0)
# 507 "dl-tls.c"
                     )
 oom ();
      memcpy (newp, &dtv[-1], (2 + oldsize) * sizeof (dtv_t));
    }
  else
    {
      newp = realloc (&dtv[-1],
        (2 + newsize) * sizeof (dtv_t));
      if (newp == 
# 515 "dl-tls.c" 3 4
                 ((void *)0)
# 515 "dl-tls.c"
                     )
 oom ();
    }

  newp[0].counter = newsize;


  memset (newp + 2 + oldsize, '\0',
   (newsize - oldsize) * sizeof (dtv_t));


  return &newp[1];
}


void *
_dl_allocate_tls_init (void *result)
{
  if (result == 
# 533 "dl-tls.c" 3 4
               ((void *)0)
# 533 "dl-tls.c"
                   )

    return 
# 535 "dl-tls.c" 3 4
          ((void *)0)
# 535 "dl-tls.c"
              ;

  dtv_t *dtv = (((tcbhead_t *) (result))->dtv);
  struct dtv_slotinfo_list *listp;
  size_t total = 0;
  size_t maxgen = 0;


  if (dtv[-1].counter < _rtld_global._dl_tls_max_dtv_idx)
    {

      dtv = _dl_resize_dtv (dtv);


      ((tcbhead_t *) (result))->dtv = (&dtv[-1]) + 1;
    }




  listp = _rtld_global._dl_tls_dtv_slotinfo_list;
  while (1)
    {
      size_t cnt;

      for (cnt = total == 0 ? 1 : 0; cnt < listp->len; ++cnt)
 {
   struct link_map *map;
   void *dest;


   if (total + cnt > _rtld_global._dl_tls_max_dtv_idx)
     break;

   map = listp->slotinfo[cnt].map;
   if (map == 
# 570 "dl-tls.c" 3 4
             ((void *)0)
# 570 "dl-tls.c"
                 )

     continue;



   ((void) sizeof ((listp->slotinfo[cnt].gen <= _rtld_global._dl_tls_generation) ? 1 : 0), __extension__ ({ if (listp->slotinfo[cnt].gen <= _rtld_global._dl_tls_generation) ; else __assert_fail ("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)", "dl-tls.c", 576, __extension__ __PRETTY_FUNCTION__); }));
   maxgen = (((maxgen)>(listp->slotinfo[cnt].gen))?(maxgen):(listp->slotinfo[cnt].gen));

   dtv[map->l_tls_modid].pointer.val = ((void *) -1l);
   dtv[map->l_tls_modid].pointer.to_free = 
# 580 "dl-tls.c" 3 4
                                          ((void *)0)
# 580 "dl-tls.c"
                                              ;

   if (map->l_tls_offset == 0
       || map->l_tls_offset == -1)
     continue;

   ((void) sizeof ((map->l_tls_modid == total + cnt) ? 1 : 0), __extension__ ({ if (map->l_tls_modid == total + cnt) ; else __assert_fail ("map->l_tls_modid == total + cnt", "dl-tls.c", 586, __extension__ __PRETTY_FUNCTION__); }));
   ((void) sizeof ((map->l_tls_blocksize >= map->l_tls_initimage_size) ? 1 : 0), __extension__ ({ if (map->l_tls_blocksize >= map->l_tls_initimage_size) ; else __assert_fail ("map->l_tls_blocksize >= map->l_tls_initimage_size", "dl-tls.c", 587, __extension__ __PRETTY_FUNCTION__); }));

   ((void) sizeof (((size_t) map->l_tls_offset >= map->l_tls_blocksize) ? 1 : 0), __extension__ ({ if ((size_t) map->l_tls_offset >= map->l_tls_blocksize) ; else __assert_fail ("(size_t) map->l_tls_offset >= map->l_tls_blocksize", "dl-tls.c", 589, __extension__ __PRETTY_FUNCTION__); }));
   dest = (char *) result - map->l_tls_offset;
# 599 "dl-tls.c"
   dtv[map->l_tls_modid].pointer.val = dest;


   memset (__builtin_mempcpy (dest, map->l_tls_initimage, map->l_tls_initimage_size)
                                  , '\0',
    map->l_tls_blocksize - map->l_tls_initimage_size);
 }

      total += cnt;
      if (total >= _rtld_global._dl_tls_max_dtv_idx)
 break;

      listp = listp->next;
      ((void) sizeof ((listp != 
# 612 "dl-tls.c" 3 4
     ((void *)0)
# 612 "dl-tls.c"
     ) ? 1 : 0), __extension__ ({ if (listp != 
# 612 "dl-tls.c" 3 4
     ((void *)0)
# 612 "dl-tls.c"
     ) ; else __assert_fail ("listp != NULL", "dl-tls.c", 612, __extension__ __PRETTY_FUNCTION__); }));
    }


  dtv[0].counter = maxgen;

  return result;
}


void *
_dl_allocate_tls (void *mem)
{
  return _dl_allocate_tls_init (mem == 
# 625 "dl-tls.c" 3 4
                                      ((void *)0)
    
# 626 "dl-tls.c"
   ? _dl_allocate_tls_storage ()
    : allocate_dtv (mem));
}



void
_dl_deallocate_tls (void *tcb, 
# 633 "dl-tls.c" 3 4
                              _Bool 
# 633 "dl-tls.c"
                                   dealloc_tcb)
{
  dtv_t *dtv = (((tcbhead_t *) (tcb))->dtv);


  for (size_t cnt = 0; cnt < dtv[-1].counter; ++cnt)
    free (dtv[1 + cnt].pointer.to_free);


  if (dtv != _rtld_global._dl_initial_dtv)
    free (dtv - 1);

  if (dealloc_tcb)
    free (*tcb_to_pointer_to_free_location (tcb));
}

# 671 "dl-tls.c"
static struct dtv_pointer
allocate_dtv_entry (size_t alignment, size_t size)
{
  if (((((alignment) - 1) & (alignment)) == 0) && alignment <= _Alignof (max_align_t))
    {

      void *ptr = malloc (size);
      return (struct dtv_pointer) { ptr, ptr };
    }



  size_t alloc_size = size + alignment;
  if (alloc_size < size)
    return (struct dtv_pointer) {};



  void *start = malloc (alloc_size);
  if (start == 
# 690 "dl-tls.c" 3 4
              ((void *)0)
# 690 "dl-tls.c"
                  )
    return (struct dtv_pointer) {};


  void *aligned = (void *) (__builtin_constant_p (alignment) && ((((alignment) - 1) & (alignment)) == 0) ? ((((uintptr_t) start) + (alignment) - 1) & ~((alignment) - 1)) : (((((uintptr_t) start) + ((alignment) - 1)) / (alignment)) * (alignment)));

  return (struct dtv_pointer) { .val = aligned, .to_free = start };
}

static struct dtv_pointer
allocate_and_init (struct link_map *map)
{
  struct dtv_pointer result = allocate_dtv_entry
    (map->l_tls_align, map->l_tls_blocksize);
  if (result.val == 
# 704 "dl-tls.c" 3 4
                   ((void *)0)
# 704 "dl-tls.c"
                       )
    oom ();


  memset (__builtin_mempcpy (result.val, map->l_tls_initimage, map->l_tls_initimage_size)
                                 ,
   '\0', map->l_tls_blocksize - map->l_tls_initimage_size);

  return result;
}


struct link_map *
_dl_update_slotinfo (unsigned long int req_modid)
{
  struct link_map *the_map = 
# 719 "dl-tls.c" 3 4
                            ((void *)0)
# 719 "dl-tls.c"
                                ;
  dtv_t *dtv = ({ struct pthread *__pd; ({ __typeof (__pd->header.dtv) __value; _Static_assert (sizeof (__value) == 1 || sizeof (__value) == 4 || sizeof (__value) == 8, "size of per-thread data"); if (sizeof (__value) == 1) asm volatile ("movb %%gs:%P2,%b0" : "=q" (__value) : "0" (0), "i" (
# 720 "dl-tls.c" 3 4
              __builtin_offsetof (
# 720 "dl-tls.c"
              struct pthread
# 720 "dl-tls.c" 3 4
              , 
# 720 "dl-tls.c"
              header.dtv
# 720 "dl-tls.c" 3 4
              )
# 720 "dl-tls.c"
              )); else if (sizeof (__value) == 4) asm volatile ("movl %%gs:%P1,%0" : "=r" (__value) : "i" (
# 720 "dl-tls.c" 3 4
              __builtin_offsetof (
# 720 "dl-tls.c"
              struct pthread
# 720 "dl-tls.c" 3 4
              , 
# 720 "dl-tls.c"
              header.dtv
# 720 "dl-tls.c" 3 4
              )
# 720 "dl-tls.c"
              )); else { asm volatile ("movl %%gs:%P1,%%eax\n\t" "movl %%gs:%P2,%%edx" : "=A" (__value) : "i" (
# 720 "dl-tls.c" 3 4
              __builtin_offsetof (
# 720 "dl-tls.c"
              struct pthread
# 720 "dl-tls.c" 3 4
              , 
# 720 "dl-tls.c"
              header.dtv
# 720 "dl-tls.c" 3 4
              )
# 720 "dl-tls.c"
              ), "i" (
# 720 "dl-tls.c" 3 4
              __builtin_offsetof (
# 720 "dl-tls.c"
              struct pthread
# 720 "dl-tls.c" 3 4
              , 
# 720 "dl-tls.c"
              header.dtv
# 720 "dl-tls.c" 3 4
              ) 
# 720 "dl-tls.c"
              + 4)); } __value; }); });
# 737 "dl-tls.c"
  unsigned long int idx = req_modid;
  struct dtv_slotinfo_list *listp = _rtld_global._dl_tls_dtv_slotinfo_list;

  while (idx >= listp->len)
    {
      idx -= listp->len;
      listp = listp->next;
    }

  if (dtv[0].counter < listp->slotinfo[idx].gen)
    {




      size_t new_gen = listp->slotinfo[idx].gen;
      size_t total = 0;


      listp = _rtld_global._dl_tls_dtv_slotinfo_list;
      do
 {
   for (size_t cnt = total == 0 ? 1 : 0; cnt < listp->len; ++cnt)
     {
       size_t gen = listp->slotinfo[cnt].gen;

       if (gen > new_gen)



  continue;



       if (gen <= dtv[0].counter)
  continue;


       struct link_map *map = listp->slotinfo[cnt].map;
       if (map == 
# 776 "dl-tls.c" 3 4
                 ((void *)0)
# 776 "dl-tls.c"
                     )
  {
    if (dtv[-1].counter >= total + cnt)
      {


        free (dtv[total + cnt].pointer.to_free);
        dtv[total + cnt].pointer.val = ((void *) -1l);
        dtv[total + cnt].pointer.to_free = 
# 784 "dl-tls.c" 3 4
                                          ((void *)0)
# 784 "dl-tls.c"
                                              ;
      }

    continue;
  }


       size_t modid = map->l_tls_modid;
       ((void) sizeof ((total + cnt == modid) ? 1 : 0), __extension__ ({ if (total + cnt == modid) ; else __assert_fail ("total + cnt == modid", "dl-tls.c", 792, __extension__ __PRETTY_FUNCTION__); }));
       if (dtv[-1].counter < modid)
  {

    dtv = _dl_resize_dtv (dtv);

    ((void) sizeof ((modid <= dtv[-1].counter) ? 1 : 0), __extension__ ({ if (modid <= dtv[-1].counter) ; else __assert_fail ("modid <= dtv[-1].counter", "dl-tls.c", 798, __extension__ __PRETTY_FUNCTION__); }));



    ({ struct pthread *__pd; ({ _Static_assert (sizeof (__pd->header.dtv) == 1 || sizeof (__pd->header.dtv) == 4 || sizeof (__pd->header.dtv) == 8, "size of per-thread data"); if (sizeof (__pd->header.dtv) == 1) asm volatile ("movb %b0,%%gs:%P1" : : "iq" ((dtv)), "i" (
# 802 "dl-tls.c" 3 4
   __builtin_offsetof (
# 802 "dl-tls.c"
   struct pthread
# 802 "dl-tls.c" 3 4
   , 
# 802 "dl-tls.c"
   header.dtv
# 802 "dl-tls.c" 3 4
   )
# 802 "dl-tls.c"
   )); else if (sizeof (__pd->header.dtv) == 4) asm volatile ("movl %0,%%gs:%P1" : : "ir" ((dtv)), "i" (
# 802 "dl-tls.c" 3 4
   __builtin_offsetof (
# 802 "dl-tls.c"
   struct pthread
# 802 "dl-tls.c" 3 4
   , 
# 802 "dl-tls.c"
   header.dtv
# 802 "dl-tls.c" 3 4
   )
# 802 "dl-tls.c"
   )); else { asm volatile ("movl %%eax,%%gs:%P1\n\t" "movl %%edx,%%gs:%P2" : : "A" ((uint64_t) ((__typeof__ (*(0 ? (__typeof__ (0 ? (__typeof__ ((__typeof__ ((dtv))) 0) *) 0 : (void *) ((__builtin_classify_type ((__typeof__ ((dtv))) 0) == 5)))) 0 : (__typeof__ (0 ? (intptr_t *) 0 : (void *) (!((__builtin_classify_type ((__typeof__ ((dtv))) 0) == 5))))) 0))) ((dtv)))), "i" (
# 802 "dl-tls.c" 3 4
   __builtin_offsetof (
# 802 "dl-tls.c"
   struct pthread
# 802 "dl-tls.c" 3 4
   , 
# 802 "dl-tls.c"
   header.dtv
# 802 "dl-tls.c" 3 4
   )
# 802 "dl-tls.c"
   ), "i" (
# 802 "dl-tls.c" 3 4
   __builtin_offsetof (
# 802 "dl-tls.c"
   struct pthread
# 802 "dl-tls.c" 3 4
   , 
# 802 "dl-tls.c"
   header.dtv
# 802 "dl-tls.c" 3 4
   ) 
# 802 "dl-tls.c"
   + 4)); }}); });
  }





       free (dtv[modid].pointer.to_free);
       dtv[modid].pointer.val = ((void *) -1l);
       dtv[modid].pointer.to_free = 
# 811 "dl-tls.c" 3 4
                                   ((void *)0)
# 811 "dl-tls.c"
                                       ;

       if (modid == req_modid)
  the_map = map;
     }

   total += listp->len;
 }
      while ((listp = listp->next) != 
# 819 "dl-tls.c" 3 4
                                     ((void *)0)
# 819 "dl-tls.c"
                                         );


      dtv[0].counter = new_gen;
    }

  return the_map;
}


static void *
__attribute__ ((__noinline__))
tls_get_addr_tail (tls_index *ti, dtv_t *dtv, struct link_map *the_map)
{

  if (the_map == 
# 834 "dl-tls.c" 3 4
                ((void *)0)
# 834 "dl-tls.c"
                    )
    {

      size_t idx = ti->ti_module;
      struct dtv_slotinfo_list *listp = _rtld_global._dl_tls_dtv_slotinfo_list;

      while (idx >= listp->len)
 {
   idx -= listp->len;
   listp = listp->next;
 }

      the_map = listp->slotinfo[idx].map;
    }





  if (__builtin_expect ((the_map->l_tls_offset != -1), 0)
                                )
    {
      _rtld_global._dl_rtld_lock_recursive (&(_rtld_global._dl_load_lock).mutex);
      if (__builtin_expect ((the_map->l_tls_offset == 0), 1))
 {
   the_map->l_tls_offset = -1;
   _rtld_global._dl_rtld_unlock_recursive (&(_rtld_global._dl_load_lock).mutex);
 }
      else if (__builtin_expect ((the_map->l_tls_offset != -1), 1)
                                       )
 {

   void *p = (char *) (*(struct pthread *__seg_gs *) 
# 866 "dl-tls.c" 3 4
                     __builtin_offsetof (
# 866 "dl-tls.c"
                     struct pthread
# 866 "dl-tls.c" 3 4
                     , 
# 866 "dl-tls.c"
                     header.self
# 866 "dl-tls.c" 3 4
                     )
# 866 "dl-tls.c"
                     ) - the_map->l_tls_offset;





   _rtld_global._dl_rtld_unlock_recursive (&(_rtld_global._dl_load_lock).mutex);

   dtv[ti->ti_module].pointer.to_free = 
# 874 "dl-tls.c" 3 4
                                         ((void *)0)
# 874 "dl-tls.c"
                                             ;
   dtv[ti->ti_module].pointer.val = p;

   return (char *) p + ti->ti_offset;
 }
      else
 _rtld_global._dl_rtld_unlock_recursive (&(_rtld_global._dl_load_lock).mutex);
    }
  struct dtv_pointer result = allocate_and_init (the_map);
  dtv[ti->ti_module].pointer = result;
  ((void) sizeof ((result.to_free != 
# 884 "dl-tls.c" 3 4
 ((void *)0)
# 884 "dl-tls.c"
 ) ? 1 : 0), __extension__ ({ if (result.to_free != 
# 884 "dl-tls.c" 3 4
 ((void *)0)
# 884 "dl-tls.c"
 ) ; else __assert_fail ("result.to_free != NULL", "dl-tls.c", 884, __extension__ __PRETTY_FUNCTION__); }));

  return (char *) result.val + ti->ti_offset;
}


static struct link_map *
__attribute__ ((__noinline__))
update_get_addr (tls_index *ti)
{
  struct link_map *the_map = _dl_update_slotinfo (ti->ti_module);
  dtv_t *dtv = ({ struct pthread *__pd; ({ __typeof (__pd->header.dtv) __value; _Static_assert (sizeof (__value) == 1 || sizeof (__value) == 4 || sizeof (__value) == 8, "size of per-thread data"); if (sizeof (__value) == 1) asm volatile ("movb %%gs:%P2,%b0" : "=q" (__value) : "0" (0), "i" (
# 895 "dl-tls.c" 3 4
              __builtin_offsetof (
# 895 "dl-tls.c"
              struct pthread
# 895 "dl-tls.c" 3 4
              , 
# 895 "dl-tls.c"
              header.dtv
# 895 "dl-tls.c" 3 4
              )
# 895 "dl-tls.c"
              )); else if (sizeof (__value) == 4) asm volatile ("movl %%gs:%P1,%0" : "=r" (__value) : "i" (
# 895 "dl-tls.c" 3 4
              __builtin_offsetof (
# 895 "dl-tls.c"
              struct pthread
# 895 "dl-tls.c" 3 4
              , 
# 895 "dl-tls.c"
              header.dtv
# 895 "dl-tls.c" 3 4
              )
# 895 "dl-tls.c"
              )); else { asm volatile ("movl %%gs:%P1,%%eax\n\t" "movl %%gs:%P2,%%edx" : "=A" (__value) : "i" (
# 895 "dl-tls.c" 3 4
              __builtin_offsetof (
# 895 "dl-tls.c"
              struct pthread
# 895 "dl-tls.c" 3 4
              , 
# 895 "dl-tls.c"
              header.dtv
# 895 "dl-tls.c" 3 4
              )
# 895 "dl-tls.c"
              ), "i" (
# 895 "dl-tls.c" 3 4
              __builtin_offsetof (
# 895 "dl-tls.c"
              struct pthread
# 895 "dl-tls.c" 3 4
              , 
# 895 "dl-tls.c"
              header.dtv
# 895 "dl-tls.c" 3 4
              ) 
# 895 "dl-tls.c"
              + 4)); } __value; }); });

  void *p = dtv[ti->ti_module].pointer.val;

  if (__builtin_expect ((p == ((void *) -1l)), 0))
    return tls_get_addr_tail (ti, dtv, the_map);

  return (void *) p + ti->ti_offset;
}
# 918 "dl-tls.c"
void *
___tls_get_addr (tls_index *ti)
{
  dtv_t *dtv = ({ struct pthread *__pd; ({ __typeof (__pd->header.dtv) __value; _Static_assert (sizeof (__value) == 1 || sizeof (__value) == 4 || sizeof (__value) == 8, "size of per-thread data"); if (sizeof (__value) == 1) asm volatile ("movb %%gs:%P2,%b0" : "=q" (__value) : "0" (0), "i" (
# 921 "dl-tls.c" 3 4
              __builtin_offsetof (
# 921 "dl-tls.c"
              struct pthread
# 921 "dl-tls.c" 3 4
              , 
# 921 "dl-tls.c"
              header.dtv
# 921 "dl-tls.c" 3 4
              )
# 921 "dl-tls.c"
              )); else if (sizeof (__value) == 4) asm volatile ("movl %%gs:%P1,%0" : "=r" (__value) : "i" (
# 921 "dl-tls.c" 3 4
              __builtin_offsetof (
# 921 "dl-tls.c"
              struct pthread
# 921 "dl-tls.c" 3 4
              , 
# 921 "dl-tls.c"
              header.dtv
# 921 "dl-tls.c" 3 4
              )
# 921 "dl-tls.c"
              )); else { asm volatile ("movl %%gs:%P1,%%eax\n\t" "movl %%gs:%P2,%%edx" : "=A" (__value) : "i" (
# 921 "dl-tls.c" 3 4
              __builtin_offsetof (
# 921 "dl-tls.c"
              struct pthread
# 921 "dl-tls.c" 3 4
              , 
# 921 "dl-tls.c"
              header.dtv
# 921 "dl-tls.c" 3 4
              )
# 921 "dl-tls.c"
              ), "i" (
# 921 "dl-tls.c" 3 4
              __builtin_offsetof (
# 921 "dl-tls.c"
              struct pthread
# 921 "dl-tls.c" 3 4
              , 
# 921 "dl-tls.c"
              header.dtv
# 921 "dl-tls.c" 3 4
              ) 
# 921 "dl-tls.c"
              + 4)); } __value; }); });

  if (__builtin_expect ((dtv[0].counter != _rtld_global._dl_tls_generation), 0))
    return update_get_addr (ti);

  void *p = dtv[ti->ti_module].pointer.val;

  if (__builtin_expect ((p == ((void *) -1l)), 0))
    return tls_get_addr_tail (ti, dtv, 
# 929 "dl-tls.c" 3 4
                                                  ((void *)0)
# 929 "dl-tls.c"
                                                      );

  return (char *) p + ti->ti_offset;
}





void *
_dl_tls_get_addr_soft (struct link_map *l)
{
  if (__builtin_expect ((l->l_tls_modid == 0), 0))

    return 
# 943 "dl-tls.c" 3 4
          ((void *)0)
# 943 "dl-tls.c"
              ;

  dtv_t *dtv = ({ struct pthread *__pd; ({ __typeof (__pd->header.dtv) __value; _Static_assert (sizeof (__value) == 1 || sizeof (__value) == 4 || sizeof (__value) == 8, "size of per-thread data"); if (sizeof (__value) == 1) asm volatile ("movb %%gs:%P2,%b0" : "=q" (__value) : "0" (0), "i" (
# 945 "dl-tls.c" 3 4
              __builtin_offsetof (
# 945 "dl-tls.c"
              struct pthread
# 945 "dl-tls.c" 3 4
              , 
# 945 "dl-tls.c"
              header.dtv
# 945 "dl-tls.c" 3 4
              )
# 945 "dl-tls.c"
              )); else if (sizeof (__value) == 4) asm volatile ("movl %%gs:%P1,%0" : "=r" (__value) : "i" (
# 945 "dl-tls.c" 3 4
              __builtin_offsetof (
# 945 "dl-tls.c"
              struct pthread
# 945 "dl-tls.c" 3 4
              , 
# 945 "dl-tls.c"
              header.dtv
# 945 "dl-tls.c" 3 4
              )
# 945 "dl-tls.c"
              )); else { asm volatile ("movl %%gs:%P1,%%eax\n\t" "movl %%gs:%P2,%%edx" : "=A" (__value) : "i" (
# 945 "dl-tls.c" 3 4
              __builtin_offsetof (
# 945 "dl-tls.c"
              struct pthread
# 945 "dl-tls.c" 3 4
              , 
# 945 "dl-tls.c"
              header.dtv
# 945 "dl-tls.c" 3 4
              )
# 945 "dl-tls.c"
              ), "i" (
# 945 "dl-tls.c" 3 4
              __builtin_offsetof (
# 945 "dl-tls.c"
              struct pthread
# 945 "dl-tls.c" 3 4
              , 
# 945 "dl-tls.c"
              header.dtv
# 945 "dl-tls.c" 3 4
              ) 
# 945 "dl-tls.c"
              + 4)); } __value; }); });
  if (__builtin_expect ((dtv[0].counter != _rtld_global._dl_tls_generation), 0))
    {



      if (l->l_tls_modid >= dtv[-1].counter)

 return 
# 953 "dl-tls.c" 3 4
       ((void *)0)
# 953 "dl-tls.c"
           ;

      size_t idx = l->l_tls_modid;
      struct dtv_slotinfo_list *listp = _rtld_global._dl_tls_dtv_slotinfo_list;
      while (idx >= listp->len)
 {
   idx -= listp->len;
   listp = listp->next;
 }




      if (dtv[0].counter < listp->slotinfo[idx].gen)
 return 
# 967 "dl-tls.c" 3 4
       ((void *)0)
# 967 "dl-tls.c"
           ;
    }

  void *data = dtv[l->l_tls_modid].pointer.val;
  if (__builtin_expect ((data == ((void *) -1l)), 0))


    data = 
# 974 "dl-tls.c" 3 4
          ((void *)0)
# 974 "dl-tls.c"
              ;

  return data;
}


void
_dl_add_to_slotinfo (struct link_map *l, 
# 981 "dl-tls.c" 3 4
                                        _Bool 
# 981 "dl-tls.c"
                                             do_add)
{



  struct dtv_slotinfo_list *listp;
  struct dtv_slotinfo_list *prevp;
  size_t idx = l->l_tls_modid;


  listp = _rtld_global._dl_tls_dtv_slotinfo_list;
  prevp = 
# 992 "dl-tls.c" 3 4
         ((void *)0)
# 992 "dl-tls.c"
             ;
  do
    {

      if (idx < listp->len)
 break;
      idx -= listp->len;
      prevp = listp;
      listp = listp->next;
    }
  while (listp != 
# 1002 "dl-tls.c" 3 4
                 ((void *)0)
# 1002 "dl-tls.c"
                     );

  if (listp == 
# 1004 "dl-tls.c" 3 4
              ((void *)0)
# 1004 "dl-tls.c"
                  )
    {



      ((void) sizeof ((idx == 0) ? 1 : 0), __extension__ ({ if (idx == 0) ; else __assert_fail ("idx == 0", "dl-tls.c", 1009, __extension__ __PRETTY_FUNCTION__); }));

      listp = prevp->next = (struct dtv_slotinfo_list *)
 malloc (sizeof (struct dtv_slotinfo_list)
  + (62) * sizeof (struct dtv_slotinfo));
      if (listp == 
# 1014 "dl-tls.c" 3 4
                  ((void *)0)
# 1014 "dl-tls.c"
                      )
 {
# 1024 "dl-tls.c"
   ++_rtld_global._dl_tls_generation;

   _dl_signal_error (
# 1026 "dl-tls.c" 3 4
                    12
# 1026 "dl-tls.c"
                          , "dlopen", 
# 1026 "dl-tls.c" 3 4
                                      ((void *)0)
# 1026 "dl-tls.c"
                                          , "cannot create TLS data structures"
                                   );
 }

      listp->len = (62);
      listp->next = 
# 1031 "dl-tls.c" 3 4
                   ((void *)0)
# 1031 "dl-tls.c"
                       ;
      memset (listp->slotinfo, '\0',
       (62) * sizeof (struct dtv_slotinfo));
    }


  if (do_add)
    {
      listp->slotinfo[idx].map = l;
      listp->slotinfo[idx].gen = _rtld_global._dl_tls_generation + 1;
    }
}
