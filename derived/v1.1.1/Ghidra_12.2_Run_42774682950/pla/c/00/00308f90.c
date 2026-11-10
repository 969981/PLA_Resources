/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308f90; name: FUN_00308f90
 */


long FUN_00308f90(ulong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = (uint)(param_2 != 0);
  local_1c = 4;
  iVar1 = nnsocketSetSockOpt(param_1,0xffff,4,&local_14,4);
  if (iVar1 == 0) {
    iVar1 = nnsocketGetSockOpt(param_1 & 0xffffffff,0xffff,4,&local_18,&local_1c);
    if (iVar1 == 0) {
      if (local_14 == (local_18 != 0)) {
        return 0;
      }
      FUN_002f2c60(auStack_40,"Failed to set SO_REUSEADDR");
      lVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                           ,0xb6,auStack_40,0,0);
      return lVar3;
    }
    piVar2 = __errno_location();
    lVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xb3,*piVar2,"getsockopt(SO_REUSEADDR)");
  }
  else {
    piVar2 = __errno_location();
    lVar3 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xb0,*piVar2,"setsockopt(SO_REUSEADDR)");
  }
  if (lVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                 "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


