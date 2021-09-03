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

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4




typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
// typedef __intmax_t intmax_t;
// typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stdint.h" 2 3 4
# 25 "/usr/include/elf.h" 2 3 4


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

typedef long unsigned int size_t;
typedef long int ptrdiff_t;

typedef long int Lmid_t;

typedef unsigned long int __dev_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;

// typedef struct __pthread_internal_list
// {
//   struct __pthread_internal_list *__prev;
//   struct __pthread_internal_list *__next;
// } __pthread_list_t;

// struct __pthread_mutex_s
// {
//   int __lock;
//   unsigned int __count;
//   int __owner;

//   unsigned int __nusers;



//   int __kind;

//   short __spins;
//   short __elision;
//   __pthread_list_t __list;
// # 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
// };

// typedef union
// {
//   struct __pthread_mutex_s __data;
//   char __size[40];
//   long int __align;
// } pthread_mutex_t;

#include <pthread.h>

typedef struct { pthread_mutex_t mutex; } __rtld_lock_recursive_t;

using _Bool = bool;

typedef uint32_t Elf_Symndx;

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

struct r_file_id
{
dev_t dev;
ino64_t ino;
};

struct link_map_machine
{
Elf64_Addr plt;
Elf64_Addr gotplt;
void *tlsdesc_table;
};

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;

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

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;

struct link_map
  {
    Elf64_Addr l_addr;

    char *l_name;
    Elf64_Dyn *l_ld;
    struct link_map *l_next, *l_prev;
    struct link_map *l_real;
    Lmid_t l_ns;
    struct libname_list *l_libname;
    Elf64_Dyn *l_info[35 + 0 + 16 + 3 + 12 + 11];
    const Elf64_Phdr *l_phdr;
    Elf64_Addr l_entry;
    Elf64_Half l_phnum;
    Elf64_Half l_ldnum;

    struct r_scope_elem l_searchlist;
    struct r_scope_elem l_symbolic_searchlist;
    struct link_map *l_loader;
    struct r_found_version *l_versions;
    unsigned int l_nversions;

    Elf_Symndx l_nbuckets;
    Elf32_Word l_gnu_bitmask_idxbits;
    Elf32_Word l_gnu_shift;
    const Elf64_Addr *l_gnu_bitmask;
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
      Elf64_Addr addr;
      struct link_map *bound;
      unsigned int boundndx;
      uint32_t enterexit;
      unsigned int flags;



      unsigned int init;
    } *l_reloc_result;


    Elf64_Versym *l_versyms;


    const char *l_origin;



    Elf64_Addr l_map_start, l_map_end;

    Elf64_Addr l_text_end;


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


    Elf64_Word l_feature_1;
    Elf64_Word l_flags_1;
    Elf64_Word l_flags;


    int l_idx;

    struct link_map_machine l_mach;

    struct
    {
      const Elf64_Sym *sym;
      int type_class;
      struct link_map *value;
      const Elf64_Sym *ret;
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



    Elf64_Addr l_relro_addr;
    size_t l_relro_size;

    unsigned long long int l_serial;
  };

struct r_debug
  {
    int r_version;

    struct link_map_public *r_map;






    Elf64_Addr r_brk;
    enum
      {
 RT_CONSISTENT,
 RT_ADD,
 RT_DELETE
      } r_state;

    Elf64_Addr r_ldbase;
  };

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

struct auditstate
{
  uintptr_t cookie;
  unsigned int bindflags;
};

typedef struct list_head
{
  struct list_head *next;
  struct list_head *prev;
} list_t;

struct rtld_global
{
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
 const Elf64_Sym *sym;
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


  Elf64_Word _dl_stack_flags;


  
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

extern "C"
{
    extern void _rtld_global();
}

#include <iostream>
#include <dlfcn.h>

union dtv_t
{
    size_t counter;
    struct dtv_pointer_t
    {
        void* address;
        void* toFree;
    } pointer;
};

int main()
{
    std::cout << sizeof(rtld_global::dtv_slotinfo_list) << std::endl;
    // static_assert(sizeof(rtld_global) == 4168, "Managed implementation bugged.");
    std::cout << "size of pointer: " << sizeof(void *) << std::endl;
    std::cout << "size of rtld_global: " << sizeof(rtld_global) << std::endl;
    std::cout << "size of link_map: " << sizeof(link_map) << std::endl;
    std::cout << "offset of: _dl_tls_static_nelem: " << offsetof(rtld_global, _dl_tls_static_nelem) << std::endl;
    std::cout << "offset of: _dl_rtld_map: " << offsetof(rtld_global, _dl_rtld_map) << std::endl;
    std::cout << "offset of: _dl_tls_dtv_slotinfo_list: " << offsetof(rtld_global, _dl_tls_dtv_slotinfo_list) << std::endl;
    std::cout << "offset of: _dl_tls_max_dtv_idx: " << offsetof(rtld_global, _dl_tls_max_dtv_idx) << std::endl;
    return 0;

    const rtld_global& _rtld_global = *(rtld_global*)(::_rtld_global);

    std::cout << "Module generation: " << _rtld_global._dl_tls_generation << std::endl;
    std::cout << "TLS address: " << _rtld_global._dl_initial_dtv << std::endl;
    std::cout << "Element count: " <<_rtld_global._dl_tls_static_nelem << std::endl;
    std::cout << "Size: " << _rtld_global._dl_tls_static_size << std::endl;
    std::cout << "Alignment: " << _rtld_global._dl_tls_static_align << std::endl;

    dtv_t * dtv = (dtv_t *)_rtld_global._dl_initial_dtv;
    std::cout << "DTV array generation: " << dtv[0].counter << std::endl;

    std::cout << "Dlopening some dummy lib: " << std::endl;
    void* handle = dlopen("/mnt/hgfs/D/CodingProjects/ElfParser/ElfParser/test/testApp/Lib.so", RTLD_LAZY);
    std::cout << "Done" << std::endl;
    void* sym = dlsym(handle, "GetThreadLocalInt");
    std::cout << handle << std::endl;
    std::cout << sym << std::endl;

    std::cout << dtv[0].counter << std::endl;

    std::cout << "Element count: " <<_rtld_global._dl_tls_static_nelem << std::endl;
    std::cout << "Module generation: " << _rtld_global._dl_tls_generation << std::endl;
    std::cout << "TLS address: " << _rtld_global._dl_initial_dtv << std::endl;

    std::cout << ((int(*)())(sym))() << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl;

    std::cout << "Element count: " <<_rtld_global._dl_tls_static_nelem << std::endl;
    std::cout << "Module generation: " << _rtld_global._dl_tls_generation << std::endl;
    std::cout << "TLS address: " << _rtld_global._dl_initial_dtv << std::endl;
    std::cout << "DTV array generation: " << dtv[0].counter << std::endl;
}