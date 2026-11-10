/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038bff0; name: FUN_0038bff0
 */


void FUN_0038bff0(long *param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"AddEnum","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"AddEnum",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar1 = *(ulong **)(param_3 + 0x30);
  if ((puVar1 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_04373a98, local_50 = param_3, *puVar1 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    local_28 = &local_40;
    puStack_38 = (undefined1 *)&local_50;
    std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 8) {
    FUN_003871e0(*param_1,param_3,"AddEnum",8);
  }
  if (*(int *)(*(long *)(param_3 + 0x28) + 0x3c) != 3) {
    uVar2 = FUN_00346ae8(param_3);
    lVar3 = FUN_00343194(uVar2,param_4);
    if (lVar3 == 0) {
      uVar4 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_0030c8c0();
      }
      else {
        lVar3 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      FUN_0030d5b0(lVar3,*(undefined4 *)(param_3 + 0x44),(long)param_4);
      return;
    }
  }
  FUN_0038bec8(param_1,param_2,param_3,param_4);
  return;
}


