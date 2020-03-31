#include "spinlock.h"
void SpinlockEnter ( int *addr ) {
	while(!__sync_bool_compare_and_swap(addr,0,1));
}
void SpinlockLeave ( int volatile *addr ) {
	asm volatile("");
	*addr = 0;
}
