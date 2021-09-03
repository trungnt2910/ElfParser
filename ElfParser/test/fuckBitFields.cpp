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

struct BundleOfShit
{
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
    
// # 218 "../include/link.h" 3 4
//    bool 
// # 218 "../include/link.h"
//         l_nodelete_active;
    
// # 219 "../include/link.h" 3 4
//    bool 
// # 219 "../include/link.h"
//         l_nodelete_pending;

# 1 "../sysdeps/x86/link_map.h" 1
# 20 "../sysdeps/x86/link_map.h"
// enum
//   {
//     lc_property_unknown = 0,
//     lc_property_none = 1 << 0,
//     lc_property_valid = 1 << 1
//   } l_property:2;
};

// #include <array>
// #include <iostream>

int main()
{
// 	std::cout << sizeof(dl_x86_feature_control) << std::endl;
//   std::cout << alignof(dl_x86_feature_control) << std::endl;
//   std::cout << sizeof(BundleOfShit) << std::endl;
//   std::cout << alignof(BundleOfShit) << std::endl;

//   std::cout << sizeof(std::array<BundleOfShit, 2>) << std::endl;
//   std::cout << alignof(std::array<BundleOfShit, 2>) << std::endl;

    static_assert(sizeof(BundleOfShit) == 4, "you gay");
}