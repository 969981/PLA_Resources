/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef7d0; name: FUN_002ef7d0
 */


void FUN_002ef7d0(pthread_cond_t *param_1)

{
  int iVar1;
  pthread_condattr_t apStack_18 [2];
  
  iVar1 = pthread_condattr_init(apStack_18);
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/sync_posix.cc",0x60,2,
                 "assertion failed: %s","pthread_condattr_init(&attr) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = pthread_cond_init(param_1,apStack_18);
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/sync_posix.cc",0x6a,2,
                 "assertion failed: %s","pthread_cond_init(cv, &attr) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


