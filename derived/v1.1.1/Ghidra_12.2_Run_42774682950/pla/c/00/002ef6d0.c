/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef6d0; name: FUN_002ef6d0
 */


void FUN_002ef6d0(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/sync_posix.cc",0x2e,2,
                 "assertion failed: %s","pthread_mutex_init(mu, nullptr) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


