#include <cstdlib>
#include <cstring>

#include <iostream>

#include <asm/prctl.h>
#include <sys/prctl.h>
#include <dlfcn.h>

#include <link.h>
int 🖕 = 0;
const int _rtld_global_size = 0x1010;

struct tls_index
{
    size_t ti_module;
    size_t ti_index;
};

extern "C"
{
    void* __tls_get_addr (tls_index* t);
    int arch_prctl(int code, unsigned long *addr);
    extern void _rtld_global();
    extern void _dl_get_tls_static_info(size_t * s1, size_t * s2);
}

// Fuck alignment.
struct lmao
{
    // All the fucking useless shit has been stripped.
    // Only useful symbols are kept.
  /* If loading a shared object requires that we make the stack executable
     when it was not, we do it by calling this function.
     It returns an errno code or zero on success.  */
  int (*_dl_make_stack_executable_hook) (void **);
  /* Prevailing state of the stack, PF_X indicating it's executable.  */
  uint32_t _dl_stack_flags;

  /* Flag signalling whether there are gaps in the module ID allocation.  */
  bool _dl_tls_dtv_gaps;
  /* Highest dtv index currently needed.  */
  size_t _dl_tls_max_dtv_idx;
  /* Information about the dtv slots.  */
  struct dtv_slotinfo_list
  {
    size_t len;
    struct dtv_slotinfo_list *next;
    struct dtv_slotinfo
    {
      size_t gen;
      // Actually link_map!
      void *map;
    } slotinfo[0];
  } *_dl_tls_dtv_slotinfo_list;
  /* Number of modules in the static TLS block.  */
  size_t _dl_tls_static_nelem;
  /* Size of the static TLS block.  */
  size_t _dl_tls_static_size;
  /* Size actually allocated in the static TLS block.  */
  size_t _dl_tls_static_used;
  /* Alignment requirement of the static TLS block.  */
  size_t _dl_tls_static_align;
/* Number of additional entries in the slotinfo array of each slotinfo
   list element.  A large number makes it almost certain take we never
   have to iterate beyond the first element in the slotinfo list.  */
#define TLS_SLOTINFO_SURPLUS (62)
/* Number of additional slots in the dtv allocated.  */
#define DTV_SURPLUS        (14)
  /* Initial dtv of the main thread, not allocated with normal malloc.  */
  /* Generation counter for the dtv.  */
  void (*_dl_init_static_tls) (void *);
  void *_dl_initial_dtv;
  size_t _dl_tls_generation;
  void (*_dl_wait_lookup_done) (void);
  /* Scopes to free after next THREAD_GSCOPE_WAIT ().  */
  struct dl_scope_free_list
  {
    size_t count;
    void *list[50];
  } *_dl_scope_free_list;
};

#define ARCH_SET_GS		0x1001
#define ARCH_SET_FS		0x1002
#define ARCH_GET_FS		0x1003
#define ARCH_GET_GS		0x1004

union dtv_t
{
    size_t counter;
    struct dtv_pointer_t
    {
        void* address;
        void* toFree;
    } pointer;
};

void PrintDtv()
{
    ++🖕;
    unsigned long addr = 0;
    
    std::cout << arch_prctl(ARCH_GET_FS, &addr) << std::endl;
    std::cout << std::hex << "Thread control block is at: " << (void *)addr << std::endl;
    std::cout << std::hex << "The value of the pointer there: " << *((void **)(addr)) << std::endl;
    dtv_t * dtvPtr = (dtv_t *)((void **)(addr))[1];
    std::cout << std::hex << "DTV is at: " << dtvPtr << std::endl;

    std::cout << "DTV size: " << dtvPtr[-1].counter << std::endl;
    std::cout << "DTV generation: " << dtvPtr[0].counter << std::endl;

    size_t dtvSize = dtvPtr[-1].counter;

    for (int i = 1; i <= dtvSize; ++i)
    {
        std::cout << "TLS at: " << dtvPtr[i].pointer.address << std::endl;
        std::cout << "Unaligned TLS block: " << dtvPtr[i].pointer.toFree << std::endl;
    }
}

void FuckDtv()
{
    unsigned long addr = 0;
    
    std::cout << arch_prctl(ARCH_GET_FS, &addr) << std::endl;
    std::cout << std::hex << "Thread control block is at: " << (void *)addr << std::endl;
    std::cout << std::hex << "The value of the pointer there: " << *((void **)(addr)) << std::endl;
    dtv_t *& dtvPtr = (dtv_t * &)((void **)(addr))[1];
    std::cout << std::hex << "DTV is at: " << dtvPtr << std::endl;

    std::cout << "DTV size: " << dtvPtr[-1].counter << std::endl;
    std::cout << "DTV generation: " << dtvPtr[0].counter << std::endl;

    size_t dtvSize = dtvPtr[-1].counter;
    size_t oldGeneration = dtvPtr[0].counter;

    dtv_t* newDvt = ((dtv_t *)malloc(sizeof(dtv_t) * 100)) + 1;

    memset((void *)(newDvt - 1), 0, sizeof(dtv_t) * 100);
    memcpy(newDvt, dtvPtr, sizeof(dtv_t) * dtvPtr[-1].counter);

    std::swap(dtvPtr, newDvt);

    dtvPtr[-1].counter = 99;
    dtvPtr[0].counter = oldGeneration;

    PrintDtv();
}

void FuckDtv1()
{
    unsigned long addr = 0;
    
    std::cout << arch_prctl(ARCH_GET_FS, &addr) << std::endl;
    std::cout << std::hex << "Thread control block is at: " << (void *)addr << std::endl;
    std::cout << std::hex << "The value of the pointer there: " << *((void **)(addr)) << std::endl;
    dtv_t *& dtvPtr = (dtv_t * &)((void **)(addr))[1];
    std::cout << std::hex << "DTV is at: " << dtvPtr << std::endl;

    std::cout << "DTV size: " << dtvPtr[-1].counter << std::endl;
    std::cout << "DTV generation: " << dtvPtr[0].counter << std::endl;

    // size_t dtvSize = dtvPtr[-1].counter;
    // size_t oldGeneration = dtvPtr[0].counter;

    // dtv_t* newDvt = ((dtv_t *)malloc(sizeof(dtv_t) * 100)) + 1;

    // memset((void *)(newDvt - 1), 0, sizeof(dtv_t) * 100);
    // memcpy(newDvt, dtvPtr, sizeof(dtv_t) * dtvPtr[-1].counter);

    // std::swap(dtvPtr, newDvt);

    ++dtvPtr[0].counter;
    
    PrintDtv();
}

void FuckDtv2()
{
    unsigned long addr = 0;
    
    std::cout << arch_prctl(ARCH_GET_FS, &addr) << std::endl;
    std::cout << std::hex << "Thread control block is at: " << (void *)addr << std::endl;
    std::cout << std::hex << "The value of the pointer there: " << *((void **)(addr)) << std::endl;
    dtv_t *& dtvPtr = (dtv_t * &)((void **)(addr))[1];
    std::cout << std::hex << "DTV is at: " << dtvPtr << std::endl;

    std::cout << "DTV size: " << dtvPtr[-1].counter << std::endl;
    std::cout << "DTV generation: " << dtvPtr[0].counter << std::endl;

    dtv_t* elem = dtvPtr + 1;
    while (elem->pointer.address != nullptr)
    {
        ++elem;
    }
    elem->pointer.address = malloc(1000);
    elem->pointer.toFree = elem->pointer.address;

    ++dtvPtr[0].counter;

    PrintDtv();
}

int main()
{
    std::cout << offsetof(struct lmao, _dl_tls_max_dtv_idx) << std::endl;
    // auto ld64_handle = dlopen("/lib/ld64.so.1", RTLD_NOW);
    // std::cout << ld64_handle << std::endl;
    // auto symbol = dlsym(ld64_handle, "_rtld_global");
    // std::cout << symbol << std::endl;

    char* _rtld_global = (char *)(&::_rtld_global);

    // std::cout << "DUMP:" << std::endl;
    // for (int i = 0; i < _rtld_global_size; i += sizeof(uint64_t))
    // {
    //     std::cout << i << "\t: " <<  std::hex << *((const uint64_t *)&_rtld_global[i])  << std::dec << std::endl;
    // }

    // std::cin.get();

    // std::cout << "Size of lmao: " << sizeof(lmao) << std::endl;

    lmao* ptr = (lmao*)((char *)&_rtld_global[0] + _rtld_global_size - sizeof(lmao));

    // std::cout << "Has gaps: " << ptr->_dl_tls_dtv_gaps << std::endl;
    // std::cout << "Element count: " << ptr->_dl_tls_static_nelem << std::endl;

    // std::cout << (void *)&_rtld_global[0] << std::endl;
    // std::cout << ptr << std::endl;
    // std::cout << ptr->_dl_tls_static_nelem << std::endl; 

    // std::cout << (void *)&_rtld_global[_rtld_global_size - sizeof(void *)] << std::endl;
    // std::cout << &ptr->_dl_scope_free_list << std::endl;

    // std::cout << ptr->_dl_tls_generation << std::endl;
    // std::cout << ptr->_dl_scope_free_list << std::endl;

    // std::cout << ptr->_dl_tls_static_align << std::endl;
    // std::cout << ptr->_dl_tls_static_size << std::endl;

    // std::cout << "Static block used: " << ptr->_dl_tls_static_used << std::endl;
    // std::cout << "Max DTV index: " << ptr->_dl_tls_max_dtv_idx << std::endl;
    // std::cout << "Initial DTV: " << ptr->_dl_initial_dtv << std::endl;

    // size_t s1 = 0;
    // size_t s2 = 0;

    // _dl_get_tls_static_info(&s1, &s2);
    // std::cout << s1 << " " << s2 << std::endl;

    // // I didn't learn KMP!
    // for (int i = 0; i < _rtld_global_size; ++i)
    // {
    //     if (*((size_t*)(&_rtld_global[i])) == s1)
    //     {
    //         std::cout << "found s1 at index: " << i << std::endl;
    //         std::cout << "LMAO: " << (void *)&_rtld_global[i] << std::endl;
    //         std::cout << &ptr->_dl_tls_static_size << std::endl;

    //         std::cout << "magic diff: " << (((char *)&_rtld_global[i]) - (char *)(&(ptr->_dl_tls_static_size))) << std::endl;
    //     }
    // }

    // for (int i = 0; i < _rtld_global_size; ++i)
    // {
    //     if (*((size_t*)(&_rtld_global[i])) == 1)
    //     {
    //         std::cout << "found 1 at index: " << i << std::endl;
    //         std::cout << "LMAO: " << (void *)&_rtld_global[i] << std::endl;
    //         std::cout << &ptr->_dl_tls_generation << std::endl;

    //         std::cout << "magic diff: " << (((char *)&_rtld_global[i]) - (char *)(&(ptr->_dl_tls_generation))) << std::endl;
    //     }
    // }

    // PrintDtv();

    // FuckDtv2();

    // ++ptr->_dl_tls_max_dtv_idx;
    // ++ptr->_dl_tls_generation;

    // std::cout << "Current generation: " << ptr->_dl_tls_generation << std::endl;
    // std::cout << "Max index: " << ptr->_dl_tls_max_dtv_idx << std::endl;

    // ptr->_dl_tls_dtv_slotinfo_list->slotinfo[ptr->_dl_tls_max_dtv_idx].gen = 3;
    // ptr->_dl_tls_dtv_slotinfo_list->slotinfo[ptr->_dl_tls_max_dtv_idx].map = (void *)0xDEADBEEF;

    // std::cin.get();
    // ++ptr->_dl_tls_static_nelem;
    

    // ++ptr->_dl_tls_static_nelem;
    std::cout << "Current element count: " << ptr->_dl_tls_static_nelem << std::endl;

    std::cout << "Current generation: " << ptr->_dl_tls_generation << std::endl;
    std::cout << "Max index: " << ptr->_dl_tls_max_dtv_idx << std::endl;

    std::cout << "TLS static array: " << ptr->_dl_initial_dtv << std::endl;

    ++ptr->_dl_tls_generation;
    ++ptr->_dl_tls_static_nelem;
    ++ptr->_dl_tls_max_dtv_idx;
    FuckDtv2();


    std::cout << "Dlopening some dummy lib: " << std::endl;
    void* handle = dlopen("/mnt/hgfs/D/CodingProjects/ElfParser/ElfParser/test/testApp/Lib.so", RTLD_LAZY);
    std::cout << "Done" << std::endl;
    void* sym = dlsym(handle, "GetThreadLocalInt");
    std::cout << handle << std::endl;
    std::cout << sym << std::endl;

    // std::cout << "Slot info list: " << std::endl;
    // auto current = ptr->_dl_tls_dtv_slotinfo_list;
    // decltype(current) last = nullptr;
    // while (current != nullptr)
    // {
    //     std::cout << current->len << std::endl;
    //     auto len = current->len;
    //     for (int i = 0; i < len; ++i)
    //     {
    //         std::cout << "gen: " << current->slotinfo[i].gen << std::endl;
    //         std::cout << "map: " << current->slotinfo[i].map << std::endl;
    //     }
    //     last = current;
    //     current = current->next;
    // }
    // std::cout << "End." << std::endl;

    // PrintDtv();
    // FuckDtv2();

    // FuckDtv1();

    std::cout << "Trying to access thread local storage: " << std::endl;
    // Cast it to a pointer to a function that returns a int, and call.
    std::cout << ((int(*)())(sym))() << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl;

    tls_index i;
    i.ti_index = 0;
    i.ti_module = ptr->_dl_tls_max_dtv_idx;
    std::cout << __tls_get_addr(&i) << std::endl;

    PrintDtv();
    std::cin.get();

    std::cout << "Current element count: " << ptr->_dl_tls_static_nelem << std::endl;
    std::cout << "Current generation: " << ptr->_dl_tls_generation << std::endl;
    std::cout << "Max index: " << ptr->_dl_tls_max_dtv_idx << std::endl;

    std::cin.get();


    ++ptr->_dl_tls_generation;
    ++ptr->_dl_tls_static_nelem;
    ++ptr->_dl_tls_max_dtv_idx;
    FuckDtv2();

    dlclose(handle);

    std::cout << "Current element count: " << ptr->_dl_tls_static_nelem << std::endl;
    std::cout << "Current generation: " << ptr->_dl_tls_generation << std::endl;
    std::cout << "Max index: " << ptr->_dl_tls_max_dtv_idx << std::endl;

    std::cin.get();


    PrintDtv();

    handle = dlopen("/mnt/hgfs/D/CodingProjects/ElfParser/ElfParser/test/testApp/Lib.so", RTLD_LAZY);
    sym = dlsym(handle, "GetThreadLocalInt");
    std::cout << "Trying to access thread local storage (again): " << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl;
    std::cout << ((int(*)())(sym))() << std::endl; 

    std::cout << "Current element count: " << ptr->_dl_tls_static_nelem << std::endl;
    std::cout << "Current generation: " << ptr->_dl_tls_generation << std::endl;
    std::cout << "Max index: " << ptr->_dl_tls_max_dtv_idx << std::endl;

    std::cin.get();

    PrintDtv();
}