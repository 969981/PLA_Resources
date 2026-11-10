/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195f14; name: FUN_03195f14
 */


void FUN_03195f14(long param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(param_1 + 0x20);
  iVar7 = *param_2;
  if (iVar7 < *(int *)(lVar4 + 0x30)) {
    lVar5 = *(long *)(lVar4 + 0x28);
    iVar8 = iVar7;
    if (*(int *)(lVar4 + 0x78) != 0) {
      iVar8 = *(int *)(*(long *)(lVar4 + 0x70) + (long)iVar7 * 4);
    }
    if (iVar8 == -1) goto LAB_03195f4c;
    plVar6 = (long *)(lVar4 + 0xc0);
    iVar7 = iVar8;
  }
  else {
    plVar6 = (long *)(lVar4 + 0xe0);
    iVar7 = iVar7 - *(int *)(lVar4 + 0x30);
  }
  lVar5 = *plVar6;
LAB_03195f4c:
  iVar8 = *(int *)(lVar4 + 0x40);
  iVar3 = *(int *)(lVar5 + (long)iVar7 * 0x14);
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)iVar3 * 0x10);
  if (iVar8 <= iVar3) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 0xf0) + (long)(iVar3 - iVar8) * 0x10);
  }
  iVar7 = *(int *)(lVar5 + (long)iVar7 * 0x14 + 4);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)iVar7 * 0x10);
  if (iVar8 <= iVar7) {
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0xf0) + (long)(iVar7 - iVar8) * 0x10);
  }
  uVar13 = *puVar2;
  fVar9 = (float)*puVar1;
  fVar10 = (float)((ulong)*puVar1 >> 0x20);
  fVar11 = (float)puVar1[1];
  fVar12 = (float)((ulong)puVar1[1] >> 0x20);
  param_3[1] = CONCAT44(fVar12 + ((float)((ulong)puVar2[1] >> 0x20) - fVar12) * 0.5,
                        fVar11 + ((float)puVar2[1] - fVar11) * 0.5);
  *param_3 = CONCAT44(fVar10 + ((float)((ulong)uVar13 >> 0x20) - fVar10) * 0.5,
                      fVar9 + ((float)uVar13 - fVar9) * 0.5);
  return;
}


