/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030b970; name: FUN_0030b970
 */


undefined8 FUN_0030b970(long param_1,int param_2,long param_3,ulong param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [128];
  undefined4 local_38 [2];
  ulong local_28;
  
  local_28 = 0;
  if (param_2 < 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                 ,0x9c,2,"assertion failed: %s","fd >= 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((((param_4 & 1) == 0) || (iVar1 = FUN_002fe910(param_3), iVar1 != 0)) ||
      (local_28 = FUN_003090c0(param_2,1), local_28 == 0)) &&
     ((local_28 = FUN_00308de0(param_2,1), local_28 == 0 &&
      (local_28 = FUN_00308ec0(param_2,1), local_28 == 0)))) {
    iVar1 = FUN_002fe910(param_3);
    if (iVar1 == 0) {
      local_28 = FUN_003092b0(param_2,1);
      if (((local_28 != 0) || (local_28 = FUN_00308f90(param_2,1), local_28 != 0)) ||
         (local_28 = FUN_003093e0(param_2,*(undefined8 *)(param_1 + 0x90),0), local_28 != 0))
      goto LAB_0030ba88;
      local_28 = 0;
    }
    local_28 = FUN_00308eb0(param_2);
    if ((local_28 == 0) &&
       (local_28 = FUN_003096d0(param_2,*(undefined8 *)(param_1 + 0x90)), local_28 == 0)) {
      iVar1 = nnsocketBind(param_2,param_3,*(undefined4 *)(param_3 + 0x80));
      if (iVar1 < 0) {
        piVar4 = __errno_location();
        uVar5 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                             ,0xc0,*piVar4,&DAT_0398db48);
      }
      else {
        FUN_002ef9f0(&DAT_04399944,&LAB_0030bc10);
        uVar2 = 0x80;
        if (DAT_04399940 == '\0') {
          uVar2 = 0;
        }
        iVar1 = nnsocketListen(param_2,uVar2);
        if (iVar1 < 0) {
          piVar4 = __errno_location();
          uVar5 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                               ,0xc5,*piVar4,"listen");
        }
        else {
          local_38[0] = 0x80;
          iVar1 = nnsocketGetSockName(param_2,auStack_b8,local_38);
          if (-1 < iVar1) {
            uVar2 = FUN_00308d60(auStack_b8);
            *param_5 = uVar2;
            return 0;
          }
          piVar4 = __errno_location();
          uVar5 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                               ,0xcd,*piVar4,"getsockname");
        }
      }
      if (uVar5 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                     "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_28 = uVar5;
    }
  }
LAB_0030ba88:
  nnsocketClose(param_2);
  FUN_002f2c60(auStack_d8,"Unable to configure socket");
  uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                       ,0xdb,auStack_d8,&local_28,1);
  uVar3 = FUN_002f0d20(uVar3,0xb,(long)param_2);
  if (4 < local_28) {
    FUN_002f0430(local_28,
                 "external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                 ,0xdd);
  }
  return uVar3;
}


