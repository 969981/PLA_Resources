/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03174f94; name: FUN_03174f94
 */


uint FUN_03174f94(uint *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  uVar2 = *param_1;
  if (param_2 != 0) {
    uVar7 = (ulong)uVar2 & 0x3fffff;
    lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0) + 0x20);
    iVar5 = *(int *)(*(long *)(lVar10 + 0x168) + uVar7 * 4);
    lVar8 = (long)iVar5;
    if (iVar5 < 0) {
      if (((*(int *)(lVar10 + 0x108) != 0) &&
          ((*(byte *)(*(long *)(lVar10 + 0x100) + uVar7) & 1) != 0)) || ((short)param_1[1] != -1)) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      do {
        lVar8 = lVar8 + 1;
        if (*(int *)(lVar10 + 0x170) <= lVar8) break;
      } while (*(int *)(*(long *)(lVar10 + 0x168) + lVar8 * 4) == (int)uVar7);
      uVar6 = iVar5 + (short)param_1[1];
      uVar1 = 0xffffffff;
      if ((int)uVar6 < (int)lVar8) {
        uVar1 = uVar6 | uVar2 & 0xffc00000;
      }
      uVar2 = 0xffffffff;
      if ((short)param_1[1] != -1) {
        uVar2 = uVar1;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (((uVar2 == 0xffffffff) ||
      (lVar8 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0), lVar8 == 0)) ||
     (sVar3 = (short)param_1[2], sVar3 == -1)) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(lVar8 + 0x20);
  uVar6 = uVar2 & 0x3fffff;
  uVar7 = (ulong)uVar6;
  if ((int)uVar6 < *(int *)(lVar8 + 0x20)) {
    if ((*(int *)(lVar8 + 0x98) == 0) ||
       (uVar6 = *(uint *)(*(long *)(lVar8 + 0x90) + uVar7 * 4), uVar6 != 0xffffffff)) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + (long)(int)uVar6 * 0x10);
    }
    else {
      piVar9 = (int *)(*(long *)(lVar8 + 0x18) + uVar7 * 0x10);
    }
  }
  else {
    piVar9 = (int *)(*(long *)(lVar8 + 0xd0) + (long)(int)(uVar6 - *(int *)(lVar8 + 0x20)) * 0x10);
  }
  sVar4 = (short)piVar9[2];
  if (sVar3 < sVar4) {
    uVar6 = *piVar9 + (int)sVar3;
  }
  else {
    if ((int)*(short *)((long)piVar9 + 10) + (int)sVar4 <= (int)sVar3) {
      if (param_3 != (uint *)0x0) {
        *param_3 = 0xffffffff;
      }
      return 0xffffffff;
    }
    uVar6 = ((int)sVar3 - (int)sVar4) + piVar9[1];
  }
  return uVar6 | uVar2 & 0xffc00000;
}


