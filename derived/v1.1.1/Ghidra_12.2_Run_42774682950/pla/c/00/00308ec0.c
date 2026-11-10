/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308ec0; name: FUN_00308ec0
 */


long FUN_00308ec0(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  
  uVar2 = FUN_002fcdf0(param_1,1,0);
  if ((int)uVar2 < 0) {
    piVar4 = __errno_location();
    lVar5 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0x9a,*piVar4,"fcntl");
  }
  else {
    uVar1 = uVar2 & 0xfffffffe;
    if (param_2 != 0) {
      uVar1 = uVar2 | 1;
    }
    iVar3 = FUN_002fcdf0(param_1 & 0xffffffff,2,uVar1);
    if (iVar3 == 0) {
      return 0;
    }
    piVar4 = __errno_location();
    lVar5 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xa4,*piVar4,"fcntl");
  }
  if (lVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                 "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar5;
}


