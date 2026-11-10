/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400180; name: FUN_00400180
 */


void FUN_00400180(pthread_mutex_t *param_1)

{
  if (param_1 == (pthread_mutex_t *)0x0) {
    return;
  }
  pthread_mutex_destroy(param_1);
  FUN_00400420(param_1,"external/openssl/crypto/threads_pthread.c",0x6a);
  return;
}


