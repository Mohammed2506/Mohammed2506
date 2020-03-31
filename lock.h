#ifndef _asysob_spinlock_
#define _asysob_spinlock_
void SpinlockEnter ( int *addr );
void SpinlockLeave ( int volatile *addr );
#endif 
