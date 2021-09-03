#include <elf.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <stddef.h>

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

#include <dlfcn.h>
#include <iostream>

  int main()
  {
    //   link_map* handle = (link_map*)dlopen("libc.so.6", RTLD_LAZY);
      link_map* handle = (link_map*)dlopen("/lib64/ld-linux-x86-64.so.2", RTLD_LAZY);
      std::cout << (void *)handle << std::endl;
      while (handle->l_prev != nullptr)
      {
          handle = handle->l_prev;
      }

      while (handle != nullptr)
      {
        std::cout << handle->l_tls_modid << std::endl;
        std::cout << handle->l_name << std::endl;
        handle = handle->l_next;
      }
  }