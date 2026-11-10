/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9530; name: FUN_002f9530
 */


void FUN_002f9530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (PTR_DAT_04373928[0x10] == '\0') {
    cVar1 = PTR_DAT_04373930[0x10];
  }
  else {
    uVar2 = (**(code **)(DAT_043997f8 + 0x18))(param_1);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x114,1,
                 "(polling-api) fd_orphan(%d, %p, %p, %s)",uVar2,param_2,param_3,param_4);
    cVar1 = PTR_DAT_04373930[0x10];
  }
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(DAT_043997f8 + 0x18))(param_1);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x115,1,
                 "(fd-trace) grpc_fd_orphan, fd:%d closed",uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x002f9594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_043997f8 + 0x20))(param_1,param_2,param_3,param_4);
  return;
}


