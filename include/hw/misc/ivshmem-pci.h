#ifndef TYPE_IVSHMEM_PCI
#define TYPE_IVSHMEM_PCI
#include <stdbool.h>
#include "system/memory.h"

bool ivshmem_bar2_is_protected(MemoryRegion *mr);

#endif