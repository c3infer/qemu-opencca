#ifndef QEMU_IVSHMEM_EXEMPT_H
#define QEMU_IVSHMEM_EXEMPT_H

#include "exec/hwaddr.h"

/* Guest-physical range (addr/size) that KVM conversion should skip. */
extern hwaddr ivshmem_exempt_start;
extern hwaddr ivshmem_exempt_size;

#endif /* QEMU_IVSHMEM_EXEMPT_H */