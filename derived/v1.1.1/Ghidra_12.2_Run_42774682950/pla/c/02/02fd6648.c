/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd6648; name: FUN_02fd6648
 */


uint FUN_02fd6648(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  lVar6 = *(long *)(param_1 + 0x48);
  uVar5 = param_2 >> 9;
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + param_1 + 0x48;
  }
  piVar8 = (int *)(lVar1 + 0x60);
  lVar6 = (ulong)uVar5 * 0x40 + (long)*piVar8;
  piVar9 = (int *)((long)piVar8 + lVar6 + 8);
  uVar4 = param_2 >> 1 & 0xff;
  uVar7 = *(uint *)((long)piVar9 + (ulong)uVar4 * 4 + (long)*piVar9);
  if ((((uVar7 >> 0x10 & 0xff) == uVar7 >> 0x18) || ((param_2 & 1) != 0)) ||
     (uVar7 >> 0x18 < (uVar7 >> 8 & 0xff))) {
    bVar3 = uVar4 + 1 == *(int *)((long)piVar8 + lVar6 + 0xc);
    uVar7 = 0;
    if (bVar3) {
      uVar5 = uVar5 + 1;
    }
    uVar2 = 0;
    if (!bVar3) {
      uVar2 = uVar4 + 1;
    }
    uVar4 = uVar2;
  }
  else {
    uVar7 = 1;
  }
  if (uVar5 < *(uint *)(lVar1 + 100)) {
    return uVar4 << 1 | uVar5 << 9 | uVar7;
  }
  return 0xffffffff;
}


