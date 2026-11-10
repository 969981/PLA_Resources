/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410790; name: FUN_00410790
 */


undefined8 FUN_00410790(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if ((int)param_3 < 0) {
    FUN_004014b0(3,0x92,0x77,"external/openssl/crypto/bn/bn_shift.c",0xa3);
    return 0;
  }
  uVar5 = param_3 >> 5;
  uVar16 = (ulong)uVar5;
  if (((int)param_2[1] <= (int)uVar5) || ((int)param_2[1] == 0)) {
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  iVar7 = FUN_0040c070(param_2);
  iVar1 = (iVar7 - param_3) + 0x1f;
  iVar7 = (iVar7 - param_3) + 0x3e;
  if (-1 < iVar1) {
    iVar7 = iVar1;
  }
  iVar7 = iVar7 >> 5;
  if (param_1 == param_2) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    lVar8 = FUN_0040c660(param_1,iVar7);
    if (lVar8 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  lVar8 = *param_2;
  puVar11 = (uint *)(lVar8 + uVar16 * 4);
  iVar1 = (int)param_2[1];
  puVar9 = (uint *)*param_1;
  uVar3 = param_3 & 0x1f;
  uVar12 = iVar1 - uVar5;
  *(int *)(param_1 + 1) = iVar7;
  if ((param_3 & 0x1f) == 0) {
    if (uVar12 == 0) goto LAB_004109e0;
    uVar14 = (ulong)(iVar1 + ~uVar5);
    uVar2 = uVar14 + 1;
    puVar10 = puVar9;
    if ((0xf < uVar2) &&
       (((uint *)(lVar8 + (uVar16 + uVar14) * 4 + 4) <= puVar9 || (puVar9 + uVar14 + 1 <= puVar11)))
       ) {
      uVar14 = uVar2 & 0x1fffffff0;
      uVar12 = uVar12 - (int)uVar14;
      puVar11 = puVar11 + uVar14;
      puVar10 = puVar9 + uVar14;
      puVar9 = puVar9 + 8;
      puVar15 = (undefined8 *)(lVar8 + uVar16 * 4 + 0x20);
      uVar16 = uVar14;
      do {
        uVar18 = puVar15[-3];
        uVar17 = puVar15[-4];
        uVar20 = puVar15[-1];
        uVar19 = puVar15[-2];
        uVar16 = uVar16 - 0x10;
        uVar21 = *puVar15;
        uVar23 = puVar15[3];
        uVar22 = puVar15[2];
        *(undefined8 *)(puVar9 + 2) = puVar15[1];
        *(undefined8 *)puVar9 = uVar21;
        *(undefined8 *)(puVar9 + 6) = uVar23;
        *(undefined8 *)(puVar9 + 4) = uVar22;
        *(undefined8 *)(puVar9 + -6) = uVar18;
        *(undefined8 *)(puVar9 + -8) = uVar17;
        *(undefined8 *)(puVar9 + -2) = uVar20;
        *(undefined8 *)(puVar9 + -4) = uVar19;
        puVar9 = puVar9 + 0x10;
        puVar15 = puVar15 + 8;
      } while (uVar16 != 0);
      if (uVar2 == uVar14) goto LAB_004109dc;
    }
    uVar3 = uVar12 - 1;
    for (uVar5 = uVar12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar12 = uVar12 - 1;
      *puVar10 = *puVar11;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    if (2 < uVar3) {
      do {
        *puVar10 = *puVar11;
        puVar10[1] = puVar11[1];
        puVar10[2] = puVar11[2];
        puVar9 = puVar11 + 3;
        uVar12 = uVar12 - 4;
        puVar11 = puVar11 + 4;
        puVar10[3] = *puVar9;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    iVar7 = uVar12 - 1;
    uVar13 = *puVar11 >> (ulong)uVar3;
    if (iVar7 != 0) {
      uVar6 = 0x20 - uVar3;
      if ((iVar1 + ~uVar5 & 1) != 0) {
        puVar11 = puVar11 + 1;
        uVar4 = *puVar11;
        iVar7 = uVar12 - 2;
        *puVar9 = uVar4 << (ulong)(uVar6 & 0x1f) | uVar13;
        uVar13 = uVar4 >> (ulong)uVar3;
        puVar9 = puVar9 + 1;
      }
      if (iVar1 - 2U != uVar5) {
        puVar10 = puVar9;
        do {
          uVar5 = puVar11[1];
          *puVar10 = uVar5 << (ulong)(uVar6 & 0x1f) | uVar13;
          iVar7 = iVar7 + -2;
          uVar12 = puVar11[2];
          uVar13 = uVar12 >> (ulong)uVar3;
          puVar9 = puVar10 + 2;
          puVar10[1] = uVar12 << (ulong)(uVar6 & 0x1f) | uVar5 >> (ulong)uVar3;
          puVar10 = puVar9;
          puVar11 = puVar11 + 2;
        } while (iVar7 != 0);
      }
    }
    if (uVar13 != 0) {
      *puVar9 = uVar13;
    }
  }
LAB_004109dc:
  iVar7 = (int)param_1[1];
LAB_004109e0:
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}


