/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bf07c; name: FUN_001bf07c
 */


void FUN_001bf07c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  iVar5 = FUN_001b6874();
  puVar9 = (uint *)((long)param_2 + 0xc);
  uVar7 = *puVar9;
  iVar3 = (int)param_2[1];
  uVar1 = iVar3 + iVar5;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
    uVar10 = *(undefined8 *)PTR_PTR_04372408;
    lVar11 = *param_2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar7 = *puVar9;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar2 = uVar7;
    }
    lVar11 = FUN_032bd1d4(uVar10,uVar2,0x10,lVar11,iVar3,puVar9);
    *param_2 = lVar11;
  }
  else {
    lVar11 = *param_2;
  }
  *(uint *)(param_2 + 1) = uVar1;
  iVar5 = FUN_001b6874(param_1);
  if (0 < iVar5) {
    uVar8 = 0;
    do {
      puVar6 = (undefined8 *)FUN_001b69bc(param_1,uVar8 & 0xffffffff);
      uVar10 = *puVar6;
      puVar4 = (undefined8 *)(lVar11 + (long)iVar3 * 0x10 + uVar8 * 0x10);
      puVar4[1] = puVar6[1];
      *puVar4 = uVar10;
      uVar8 = uVar8 + 1;
    } while (iVar5 != (int)uVar8);
  }
  return;
}


