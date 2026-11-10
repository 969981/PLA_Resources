/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e7f0; name: FUN_0333e7f0
 */


undefined8 FUN_0333e7f0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar9 = PTR_PTR_0434a080;
  puVar17 = (uint *)(param_1 + 0x24);
  uVar12 = *puVar17;
  iVar8 = *(int *)(param_1 + 0x20);
  lVar15 = (long)iVar8;
  uVar2 = *(int *)(param_2 + 0x20) + iVar8;
  iVar5 = *(int *)(param_1 + 0x30);
  lVar18 = (long)iVar5;
  if ((int)(uVar12 & 0x3fffffff) < (int)uVar2) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar12 = *puVar17;
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    if ((int)uVar2 <= (int)uVar12) {
      uVar2 = uVar12;
    }
    uVar10 = FUN_032bd1d4(puVar9,uVar2,0x10,uVar10,iVar8,puVar17);
    *(undefined8 *)(param_1 + 0x18) = uVar10;
  }
  iVar3 = *(int *)(param_2 + 0x30) + iVar5;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar3) {
    uVar10 = FUN_02fada68(puVar9,iVar3,*(undefined8 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x28) = uVar10;
  }
  iVar6 = *(int *)(param_2 + 0x20);
  iVar3 = *(int *)(param_1 + 0x20);
  uVar12 = *(uint *)(param_1 + 0x24);
  uVar2 = iVar3 + iVar6;
  puVar16 = *(undefined8 **)(param_2 + 0x18);
  if ((int)(uVar12 & 0x3fffffff) < (int)uVar2) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar12 = *puVar17;
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar4 = uVar2;
    if ((int)uVar2 <= (int)uVar12) {
      uVar4 = uVar12;
    }
    lVar11 = FUN_032bd1d4(puVar9,uVar4,0x10,uVar10,iVar3,puVar17);
    *(long *)(param_1 + 0x18) = lVar11;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x18);
  }
  if (iVar6 != 0) {
    puVar13 = (undefined8 *)(lVar11 + (long)iVar3 * 0x10);
    lVar11 = (long)iVar6 * 0x10 + -0x10;
    puVar14 = puVar16;
    if (((uint)lVar11 >> 4 & 1) == 0) {
      puVar13[1] = puVar16[1];
      *puVar13 = *puVar16;
      puVar14 = puVar16 + 2;
      puVar13 = puVar13 + 2;
    }
    if (lVar11 != 0) {
      do {
        puVar13[1] = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[3] = puVar14[3];
        puVar1 = puVar14 + 2;
        puVar14 = puVar14 + 4;
        puVar13[2] = *puVar1;
        puVar13 = puVar13 + 4;
      } while (puVar14 != puVar16 + (long)iVar6 * 2);
    }
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  iVar7 = *(int *)(param_2 + 0x30);
  puVar16 = *(undefined8 **)(param_2 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  lVar11 = *(long *)(param_1 + 0x28);
  iVar3 = iVar6 + iVar7;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar3) {
    lVar11 = FUN_02fada68(puVar9,iVar3,lVar11,iVar6,(uint *)(param_1 + 0x34));
    *(long *)(param_1 + 0x28) = lVar11;
  }
  if (iVar7 != 0) {
    puVar13 = (undefined8 *)(lVar11 + (long)iVar6 * 0x10);
    lVar11 = (long)iVar7 * 0x10 + -0x10;
    puVar14 = puVar16;
    if (((uint)lVar11 >> 4 & 1) == 0) {
      uVar10 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar10;
      puVar14 = puVar16 + 2;
      puVar13 = puVar13 + 2;
    }
    if (lVar11 != 0) {
      do {
        uVar10 = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[1] = uVar10;
        puVar1 = puVar14 + 2;
        uVar10 = puVar14[3];
        puVar14 = puVar14 + 4;
        puVar13[2] = *puVar1;
        puVar13[3] = uVar10;
        puVar13 = puVar13 + 4;
      } while (puVar14 != puVar16 + (long)iVar7 * 2);
    }
  }
  *(int *)(param_1 + 0x30) = iVar3;
  if ((param_3 != (undefined8 *)0x0) && (iVar8 < *(int *)(param_1 + 0x20))) {
    do {
      lVar11 = lVar15 * 0x10;
      lVar15 = lVar15 + 1;
      puVar16 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar11);
      uVar22 = puVar16[1];
      uVar10 = *puVar16;
      uVar25 = param_3[6];
      uVar23 = *param_3;
      uVar24 = param_3[2];
      fVar19 = (float)uVar10;
      fVar20 = (float)((ulong)uVar10 >> 0x20);
      uVar10 = param_3[4];
      fVar21 = (float)uVar22;
      puVar16 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar11);
      puVar16[1] = CONCAT44((int)((ulong)uVar22 >> 0x20),
                            (float)param_3[7] + (float)param_3[1] * fVar19 +
                            (float)param_3[3] * fVar20 + (float)param_3[5] * fVar21);
      *puVar16 = CONCAT44((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar23 >> 0x20) * fVar19 +
                          (float)((ulong)uVar24 >> 0x20) * fVar20 +
                          (float)((ulong)uVar10 >> 0x20) * fVar21,
                          (float)uVar25 + (float)uVar23 * fVar19 + (float)uVar24 * fVar20 +
                          (float)uVar10 * fVar21);
    } while (lVar15 < *(int *)(param_1 + 0x20));
  }
  if ((0 < iVar8) && (iVar5 < *(int *)(param_1 + 0x30))) {
    lVar15 = lVar18 << 4;
    do {
      lVar18 = lVar18 + 1;
      *(int *)(*(long *)(param_1 + 0x28) + lVar15) =
           *(int *)(*(long *)(param_1 + 0x28) + lVar15) + iVar8;
      lVar11 = *(long *)(param_1 + 0x28) + lVar15;
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + iVar8;
      lVar11 = *(long *)(param_1 + 0x28) + lVar15;
      lVar15 = lVar15 + 0x10;
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + iVar8;
    } while (lVar18 < *(int *)(param_1 + 0x30));
  }
  return 0;
}


