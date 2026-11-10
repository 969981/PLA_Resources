/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266ea0; name: FUN_03266ea0
 */


void FUN_03266ea0(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar3 = (uint *)(*(long *)(param_1 + 0x100) + (param_2 & 0xffff) * 0x20);
  puVar4 = (uint *)(*(long *)(param_1 + 0x100) + (param_3 & 0xffff) * 0x20);
  uVar6 = *puVar3;
  uVar8 = puVar3[1];
  uVar7 = *puVar4;
  uVar9 = puVar4[1];
  if (uVar8 != uVar9) {
    iVar1 = ((uVar8 - uVar6) * 2 & 0x10000) + (uVar8 - uVar6);
    iVar2 = ((uVar9 - uVar6) * 2 & 0x10000) + (uVar9 - uVar6);
    iVar5 = iVar1 >> 0x10;
    iVar1 = (int)(short)iVar1;
    uVar10 = (short)iVar2 * iVar5 - (iVar2 >> 0x10) * iVar1;
    if ((uVar10 != 0) &&
       ((iVar2 = ((uVar7 - uVar6) * 2 & 0x10000) + (uVar7 - uVar6),
        uVar11 = (short)iVar2 * iVar5 - (iVar2 >> 0x10) * iVar1, uVar11 == 0 ||
        ((int)(uVar10 ^ uVar11) < 0)))) {
      iVar1 = ((uVar9 - uVar7) * 2 & 0x10000) + (uVar9 - uVar7);
      iVar2 = iVar1 >> 0x10;
      iVar5 = (int)(short)iVar1;
      iVar1 = ((uVar8 - uVar7) * 2 & 0x10000) + (uVar8 - uVar7);
      uVar10 = (short)iVar1 * iVar2 - iVar5 * (iVar1 >> 0x10);
      if ((uVar10 != 0) &&
         ((iVar1 = ((uVar6 - uVar7) * 2 & 0x10000) + (uVar6 - uVar7),
          uVar11 = (short)iVar1 * iVar2 - iVar5 * (iVar1 >> 0x10), uVar11 == 0 ||
          ((int)(uVar11 ^ uVar10) < 0)))) {
        FUN_03261020();
        return;
      }
    }
  }
  if (*(char *)((long)puVar3 + 0xb) == -1) {
    if (((uVar9 <= uVar8) || (uVar8 <= uVar7)) ||
       (iVar1 = ((uVar9 - uVar7) * 2 & 0x10000) + (uVar9 - uVar7),
       iVar2 = ((uVar8 - uVar7) * 2 & 0x10000) + (uVar8 - uVar7),
       (int)(short)iVar2 * (iVar1 >> 0x10) != (int)(short)iVar1 * (iVar2 >> 0x10))) {
      return;
    }
  }
  else {
    if (*(char *)((long)puVar4 + 0xb) != -1) {
      return;
    }
    if (uVar8 <= uVar9) {
      return;
    }
    if (uVar9 <= uVar6) {
      return;
    }
    iVar1 = ((uVar8 - uVar6) * 2 & 0x10000) + (uVar8 - uVar6);
    iVar2 = ((uVar9 - uVar6) * 2 & 0x10000) + (uVar9 - uVar6);
    if ((int)(short)iVar2 * (iVar1 >> 0x10) != (iVar2 >> 0x10) * (int)(short)iVar1) {
      return;
    }
  }
  FUN_03261020();
  return;
}


