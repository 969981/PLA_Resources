/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4566c; name: FUN_02e4566c
 */


undefined8 FUN_02e4566c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_02e452b8(param_1,0xffffffffffffffff);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x48)) {
      if (*(long *)(lVar3 + 0x40) == param_2) goto LAB_02e456c8;
    }
  }
  lVar3 = FUN_02e4574c(param_1 + 9,param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_02e457b4(param_1,lVar3);
    if ((uVar4 & 1) != 0) {
LAB_02e456c8:
      FUN_02e504d4(lVar3,param_3,param_4);
      if (*(long *)(lVar3 + 0x78) == 0) {
        FUN_02e50438(lVar3,param_1[0xd]);
      }
      return 1;
    }
    FUN_02e50298(lVar3);
    FUN_02e473f0(param_1 + 9,lVar3);
  }
  return 0x34;
}


