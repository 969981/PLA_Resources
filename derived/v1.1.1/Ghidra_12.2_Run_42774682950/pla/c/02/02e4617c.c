/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4617c; name: FUN_02e4617c
 */


undefined8 FUN_02e4617c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [32];
  long *local_50;
  uint local_48;
  long local_40;
  long lStack_38;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return 0xf;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  local_48 = (uint)param_2 - uVar2 * uVar1;
  local_40 = *(long *)(*param_1 + (ulong)local_48 * 8);
  lStack_38 = 0;
  if (local_40 != 0) {
    if (*(long *)(local_40 + 0x40) == param_2) goto LAB_02e461e8;
    do {
      lStack_38 = local_40;
      local_40 = *(long *)(lStack_38 + 0x48);
      if (local_40 == 0) {
        return 0xf;
      }
    } while (*(long *)(local_40 + 0x40) != param_2);
  }
  if (local_40 == 0) {
    return 0xf;
  }
LAB_02e461e8:
  lVar3 = local_40;
  lVar4 = *(long *)(local_40 + 0x78);
  local_50 = param_1;
  FUN_02e45fac(auStack_70,param_1,&local_50);
  FUN_02e50298(lVar3);
  FUN_02e473f0(param_1 + 9,lVar3);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
    FUN_02e45218(param_1,lVar4);
  }
  return 1;
}


