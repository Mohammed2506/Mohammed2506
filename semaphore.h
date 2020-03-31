#ifndef _asysob_semaphore_
#define _asysob_semaphore_
typedef void *semaphore_t;
semaphore_t CreateSemaphore ( int initial_value );
void CloseSemaphore ( semaphore_t sema);
void P ( semaphore_t sema);
void V ( semaphore_t sema);
#endif 
