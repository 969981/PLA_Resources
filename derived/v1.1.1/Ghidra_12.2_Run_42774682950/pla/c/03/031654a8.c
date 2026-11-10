/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031654a8; name: FUN_031654a8
 */


undefined8 FUN_031654a8(long param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = (uint)param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) +
                             (param_2 >> 0x16 & 0x3ff) * 0xf0) + 0x20);
  iVar2 = *(int *)(lVar5 + 0x60);
  uVar6 = uVar1 - *(int *)(lVar5 + 0x30);
  if ((int)uVar1 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) == 0) {
      uVar6 = uVar1;
    }
    else {
      uVar6 = *(uint *)(*(long *)(lVar5 + 0x70) + (ulong)uVar1 * 4);
      if (uVar6 == 0xffffffff) {
        lVar4 = *(long *)(lVar5 + 0x58) + (long)(int)(iVar2 * uVar1) * 4;
        uVar3 = FUN_031607cc(param_1,param_2 & 0xffffffff,
                             *(long *)(lVar5 + 0x28) + (ulong)uVar1 * 0x14,lVar4,
                             lVar4 + (long)iVar2 * 4,param_3);
        return uVar3;
      }
    }
    lVar4 = *(long *)(lVar5 + 0x130) + (long)(int)(uVar6 * iVar2) * 4;
    lVar5 = *(long *)(lVar5 + 0xc0);
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x150) + (long)(int)(iVar2 * uVar6) * 4;
    lVar5 = *(long *)(lVar5 + 0xe0);
  }
  uVar3 = FUN_031607cc(param_1,param_2 & 0xffffffff,lVar5 + (long)(int)uVar6 * 0x14,lVar4,
                       lVar4 + (long)iVar2 * 4,param_3);
  return uVar3;
}


