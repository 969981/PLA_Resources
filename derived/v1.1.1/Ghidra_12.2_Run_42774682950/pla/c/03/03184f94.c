/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03184f94; name: FUN_03184f94
 */


void FUN_03184f94(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  
  *param_1 = &PTR_LAB_0430a648;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  iVar4 = *(int *)(param_2 + 0x28);
  puVar12 = *(undefined4 **)(param_2 + 0x20);
  if (iVar4 < 1) {
    puVar6 = (undefined4 *)0x0;
    if (iVar4 == 0) {
      lVar7 = 0;
      uVar10 = 0;
      iVar8 = 0;
      goto LAB_03185064;
    }
  }
  else {
    puVar6 = (undefined4 *)FUN_031851bc(PTR_PTR_0434a080,iVar4,0,0,(long)param_1 + 0x2c);
    param_1[4] = puVar6;
  }
  puVar9 = puVar12 + (long)iVar4 * 4;
  do {
    *puVar6 = *puVar12;
    puVar6[1] = puVar12[1];
    puVar6[2] = puVar12[2];
    puVar1 = puVar12 + 3;
    puVar12 = puVar12 + 4;
    puVar6[3] = *puVar1;
    puVar6 = puVar6 + 4;
  } while (puVar12 != puVar9);
  iVar8 = *(int *)(param_1 + 7);
  uVar10 = *(uint *)((long)param_1 + 0x3c) & 0x3fffffff;
  lVar7 = param_1[6];
LAB_03185064:
  *(int *)(param_1 + 5) = iVar4;
  iVar5 = *(int *)(param_2 + 0x38);
  puVar13 = *(undefined8 **)(param_2 + 0x30);
  iVar4 = iVar5 + iVar8;
  if ((int)uVar10 < iVar4) {
    lVar7 = FUN_03185244(PTR_PTR_0434a080,iVar4,lVar7,iVar8,(long)param_1 + 0x3c);
    param_1[6] = lVar7;
  }
  if (iVar5 != 0) {
    puVar11 = (undefined8 *)(lVar7 + (long)iVar8 * 0x14);
    lVar7 = (long)iVar5 * 0x14;
    do {
      uVar2 = *puVar13;
      uVar3 = puVar13[1];
      lVar7 = lVar7 + -0x14;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar13 + 2);
      puVar13 = (undefined8 *)((long)puVar13 + 0x14);
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
      puVar11 = (undefined8 *)((long)puVar11 + 0x14);
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 7) = iVar4;
  iVar5 = *(int *)(param_2 + 0x48);
  puVar12 = *(undefined4 **)(param_2 + 0x40);
  iVar8 = *(int *)(param_1 + 9);
  lVar7 = param_1[8];
  iVar4 = iVar8 + iVar5;
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar4) {
    lVar7 = FUN_031853d8(PTR_PTR_0434a080,iVar4,lVar7,iVar8,(long)param_1 + 0x4c);
    param_1[8] = lVar7;
  }
  if (iVar5 != 0) {
    puVar9 = (undefined4 *)(lVar7 + (long)iVar8 * 8);
    lVar7 = (long)iVar5 * 8 + -8;
    puVar6 = puVar12;
    if (((uint)lVar7 >> 3 & 1) == 0) {
      *puVar9 = *puVar12;
      puVar9[1] = puVar12[1];
      puVar6 = puVar12 + 2;
      puVar9 = puVar9 + 2;
    }
    if (lVar7 != 0) {
      do {
        *puVar9 = *puVar6;
        puVar9[1] = puVar6[1];
        puVar9[2] = puVar6[2];
        puVar1 = puVar6 + 3;
        puVar6 = puVar6 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar9 + 4;
      } while (puVar6 != puVar12 + (long)iVar5 * 2);
    }
  }
  *(int *)(param_1 + 9) = iVar4;
  return;
}


