/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9420; name: FUN_002f9420
 */


void FUN_002f9420(undefined4 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (PTR_DAT_04373928[0x10] == '\0') {
    cVar1 = PTR_DAT_04373930[0x10];
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x107,1,
                 "(polling-api) fd_create(%d, %s, %d)",param_1,param_2,param_3 & 1);
    cVar1 = PTR_DAT_04373930[0x10];
  }
  if (cVar1 == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_043997f8 + 0x10);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x108,1,
                 "(fd-trace) fd_create(%d, %s, %d)",param_1,param_2,param_3 & 1);
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_043997f8 + 0x10);
  }
  if ((param_3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = FUN_002fde70();
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(DAT_043997f8 + 8) != '\0';
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002f951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,bVar2);
  return;
}


