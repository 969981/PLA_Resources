/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef860; name: FUN_002ef860
 */


void FUN_002ef860(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(param_1);
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/sync_posix.cc",0x73,2,
                 "assertion failed: %s","pthread_cond_destroy(cv) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


