/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcbf0; name: FUN_002fcbf0
 */


long FUN_002fcbf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  iVar1 = FUN_002fd060(0,6);
  *param_1 = iVar1;
  param_1[1] = -1;
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = __errno_location();
  lVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/wakeup_fd_eventfd.cc",0x29,
                       *piVar2,"eventfd");
  if (lVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                 "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


