/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004000a0; name: FUN_004000a0
 */


pthread_mutex_t * FUN_004000a0(void)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t apStack_18 [2];
  
  __mutex = (pthread_mutex_t *)FUN_004002a0(0x20,"external/openssl/crypto/threads_pthread.c",0x25);
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutexattr_init(apStack_18);
    pthread_mutexattr_settype(apStack_18,1);
    iVar1 = pthread_mutex_init(__mutex,apStack_18);
    pthread_mutexattr_destroy(apStack_18);
    if (iVar1 != 0) {
      FUN_00400420(__mutex,"external/openssl/crypto/threads_pthread.c",0x2f);
      __mutex = (pthread_mutex_t *)0x0;
    }
  }
  return __mutex;
}


