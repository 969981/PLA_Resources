/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcc70; name: FUN_002fcc70
 */


long FUN_002fcc70(int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uStack_18;
  
  do {
    iVar1 = nn::socket::EventFdRead(*param_1,&uStack_18);
    if (-1 < iVar1) {
      return 0;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  piVar2 = __errno_location();
  if (*piVar2 == 0xb) {
    return 0;
  }
  piVar2 = __errno_location();
  lVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/wakeup_fd_eventfd.cc",0x35,
                       *piVar2,"eventfd_read");
  if (lVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                 "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


