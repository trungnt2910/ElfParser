typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long long int __int64_t;
typedef unsigned long long int __uint64_t;

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;

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

typedef unsigned int size_t;

typedef unsigned int uintptr_t;


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
  union
  {
    struct
    {
      short __espins;
      short __eelision;
    } __elision_data;
    __pthread_slist_t __list;
  };
};

typedef union
{
  struct __pthread_mutex_s __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef struct { pthread_mutex_t mutex; } __rtld_lock_recursive_t;

typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

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

typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef long int Lmid_t;

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

struct r_scope_elem
{

  struct link_map **r_list;

  unsigned int r_nlist;
};

typedef uint32_t Elf_Symndx;
typedef bool _Bool;

struct r_search_path_struct
  {
    struct r_search_path_elem **dirs;
    int malloced;
  };

typedef __uint64_t __dev_t;
typedef unsigned long int __ino_t;
typedef __uint64_t __ino64_t;

typedef __ino64_t ino64_t;
typedef __dev_t dev_t;

typedef int ptrdiff_t;


struct r_file_id
  {
    dev_t dev;
    ino64_t ino;
  };

struct link_map_machine
  {
    Elf32_Addr plt;
    Elf32_Addr gotplt;
    void *tlsdesc_table;
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

typedef struct list_head
{
  struct list_head *next;
  struct list_head *prev;
} list_t;

# 309 "../sysdeps/generic/ldsodefs.h"
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

int main()
{
    return sizeof(long);
}