/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a113c; name: FUN_031a113c
 */


void FUN_031a113c(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar6 = (long)*(int *)(param_2 + 4);
  lVar13 = (long)*(int *)(param_2 + 8);
  lVar24 = *(long *)(param_1 + 0x18);
  piVar9 = (int *)(lVar24 + lVar6 * 0x38);
  uVar21 = *(uint *)(param_1 + 0x70);
  piVar14 = (int *)(lVar24 + lVar13 * 0x38);
  uVar19 = (ulong)uVar21;
  uVar20 = uVar21;
  if (0 < (int)uVar21) {
    lVar10 = lVar24 + lVar6 * 0x38;
    fVar27 = *(float *)(lVar10 + 0xc);
    uVar19 = 0;
    do {
      piVar15 = *(int **)(*(long *)(param_1 + 0x68) + uVar19 * 8);
      fVar28 = (float)piVar15[6];
      fVar29 = (float)piVar15[3] + fVar28 * (*(float *)(lVar10 + 8) - (float)piVar15[2]);
      if (fVar27 == fVar29) {
        fVar29 = *(float *)(lVar24 + lVar6 * 0x38 + 0x18);
        if (fVar29 == fVar28) {
          bVar4 = *(byte *)(lVar24 + lVar6 * 0x38 + 4);
          if (bVar4 == *(byte *)(piVar15 + 1)) {
            if (*piVar9 < *piVar15) goto LAB_031a15e8;
          }
          else if (bVar4 < *(byte *)(piVar15 + 1)) {
LAB_031a15e8:
            iVar7 = (int)uVar19;
            if ((int)uVar21 <= iVar7) goto LAB_031a1190;
            lVar11 = lVar24 + lVar13 * 0x38;
            fVar27 = *(float *)(lVar11 + 0xc);
            lVar10 = 0;
            goto LAB_031a1608;
          }
        }
        else if (fVar29 < fVar28) goto LAB_031a15e8;
      }
      else if (fVar27 < fVar29) goto LAB_031a15e8;
      uVar19 = uVar19 + 1;
    } while ((long)(int)uVar21 != uVar19);
    uVar19 = (ulong)uVar21;
  }
  goto LAB_031a1190;
LAB_031a1608:
  do {
    piVar15 = *(int **)(*(long *)(param_1 + 0x68) + (long)iVar7 * 8 + lVar10 * 8);
    fVar28 = (float)piVar15[6];
    fVar29 = (float)piVar15[3] + fVar28 * (*(float *)(lVar11 + 8) - (float)piVar15[2]);
    bVar5 = fVar27 < fVar29;
    if ((fVar27 == fVar29) &&
       (fVar29 = *(float *)(lVar24 + lVar13 * 0x38 + 0x18), bVar5 = fVar29 < fVar28,
       fVar29 == fVar28)) {
      bVar4 = *(byte *)(lVar24 + lVar13 * 0x38 + 4);
      if (bVar4 == *(byte *)(piVar15 + 1)) {
        if (*piVar14 < *piVar15) goto LAB_031a162c;
      }
      else if (bVar4 < *(byte *)(piVar15 + 1)) {
LAB_031a162c:
        uVar20 = iVar7 + (int)lVar10;
        break;
      }
    }
    else if (bVar5) goto LAB_031a162c;
    lVar10 = lVar10 + 1;
  } while ((long)(int)uVar21 - (long)iVar7 != lVar10);
LAB_031a1190:
  uVar18 = (uint)uVar19;
  uVar17 = (long)(int)uVar18 - 1;
  uVar16 = (uint)uVar17;
  if (uVar21 != 0) {
    uVar3 = uVar21;
    if ((int)uVar16 <= (int)uVar21) {
      uVar3 = uVar16;
    }
    uVar2 = 0;
    if (0 < (int)uVar18) {
      uVar2 = uVar3;
    }
    uVar3 = uVar21;
    if ((int)uVar20 <= (int)uVar21) {
      uVar3 = uVar20;
    }
    uVar26 = 0;
    if (-1 < (int)uVar20) {
      uVar26 = uVar3;
    }
    if (uVar26 == uVar21) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)(uVar21 - 1) * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
      uVar26 = uVar21 - 1;
    }
    if ((int)uVar2 < (int)uVar26) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar2 * 8);
      if (*(int *)(lVar10 + 0x1c) == 0) {
        FUN_031a1f60(param_1);
        lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar2 * 8);
      }
      uVar21 = uVar2 + 1;
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      if (uVar26 != uVar21) {
        lVar10 = (long)(int)uVar2 * 8;
        do {
          lVar10 = lVar10 + 8;
          lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar10);
          if (*(int *)(lVar11 + 0x1c) == 0) {
            FUN_031a1f60(param_1,uVar21);
            lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar10);
          }
          uVar21 = uVar21 + 1;
          *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
        } while (uVar26 != uVar21);
      }
    }
  }
  if (uVar18 == uVar20) {
    iVar7 = -1;
    if (*(char *)(lVar24 + lVar6 * 0x38 + 4) == '\0') {
      iVar7 = 1;
    }
    if (uVar18 == 0) {
      *(int *)(lVar24 + lVar6 * 0x38 + 0x1c) = iVar7 + 1;
      iVar8 = 1;
      lVar10 = lVar13;
    }
    else {
      iVar8 = *(int *)(*(long *)(*(long *)(param_1 + 0x68) + uVar17 * 8) + 0x1c);
      *(int *)(lVar24 + lVar13 * 0x38 + 0x1c) = iVar8;
      iVar8 = iVar8 + iVar7;
      lVar10 = lVar6;
    }
    *(int *)(lVar24 + lVar10 * 0x38 + 0x1c) = iVar8;
    *(undefined4 *)(lVar24 + lVar6 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar24 + lVar13 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    puVar22 = (uint *)(param_1 + 0x74);
    uVar21 = *puVar22;
    iVar7 = *(int *)(param_1 + 0x70);
    uVar20 = iVar7 + 2;
    uVar16 = iVar7 - uVar18;
    if ((int)(uVar21 & 0x3fffffff) < (int)uVar20) {
      uVar25 = *(undefined8 *)(param_1 + 0x68);
      if (0x3fffffff < (int)uVar20) {
        FUN_032bd0a8(uVar20);
        uVar21 = *puVar22;
      }
      uVar21 = (uVar21 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      uVar3 = uVar20;
      if ((int)uVar20 <= (int)uVar21) {
        uVar3 = uVar21;
      }
      lVar6 = FUN_032bd1d4(PTR_PTR_0434a090,uVar3,8,uVar25,iVar7,puVar22);
      *(long *)(param_1 + 0x68) = lVar6;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x68);
    }
    puVar1 = (undefined8 *)(lVar6 + (long)(int)uVar18 * 8);
    if (0 < (int)uVar16) {
      FUN_032d57d0(puVar1 + 2,puVar1,
                   -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3);
    }
    *puVar1 = piVar9;
    puVar1[1] = piVar14;
    *(uint *)(param_1 + 0x70) = uVar20;
    FUN_031a1a88(param_1,uVar17 & 0xffffffff);
    FUN_031a1a88(param_1,uVar19 & 0xffffffff);
    uVar23 = (ulong)(uVar18 + 1);
  }
  else {
    *(undefined4 *)(lVar24 + lVar6 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    puVar12 = (undefined4 *)(lVar24 + lVar13 * 0x38 + 0x20);
    *puVar12 = *(undefined4 *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x70);
    uVar21 = iVar7 + 2;
    *(uint *)(param_1 + 0x70) = uVar21;
    if ((int)(uVar20 + 2) < (int)uVar21) {
      lVar11 = (-(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar21 << 3) - 0x18;
      lVar10 = (long)(iVar7 + 1);
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar11);
        lVar11 = lVar11 + -8;
        *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar10 * 8) = *puVar1;
        bVar5 = (int)(uVar20 + 2) < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar5);
    }
    *(undefined4 *)(lVar24 + lVar13 * 0x38 + 0x1c) =
         *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar20 * 8 + -8) + 0x1c);
    *puVar12 = *(undefined4 *)(param_1 + 0x60);
    lVar13 = (long)(int)uVar20;
    uVar23 = lVar13 + 1;
    *(int **)(*(long *)(param_1 + 0x68) + uVar23 * 8) = piVar14;
    iVar7 = -1;
    if (*(char *)(lVar24 + lVar6 * 0x38 + 4) == '\0') {
      iVar7 = 1;
    }
    if ((int)uVar18 < (int)uVar20) {
      lVar10 = lVar13 + -1;
      *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar13 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar10 * 8);
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar13 * 8);
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + iVar7;
      while ((int)uVar18 < lVar10) {
        lVar10 = *(long *)(param_1 + 0x68) + lVar13 * 8;
        *(undefined8 *)(lVar10 + -8) = *(undefined8 *)(lVar10 + -0x10);
        lVar10 = *(long *)(*(long *)(param_1 + 0x68) + lVar13 * 8 + -8);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + iVar7;
        lVar10 = lVar13 + -2;
        lVar13 = lVar13 + -1;
      }
    }
    *(int **)(*(long *)(param_1 + 0x68) + (long)(int)uVar18 * 8) = piVar9;
    if (uVar18 == 0) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = *(int *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar16 * 8) + 0x1c) + iVar7;
    }
    *(int *)(lVar24 + lVar6 * 0x38 + 0x1c) = iVar7;
    FUN_031a1a88(param_1,uVar17 & 0xffffffff);
    FUN_031a1a88(param_1,uVar19 & 0xffffffff);
    FUN_031a1a88(param_1,uVar20);
  }
  FUN_031a1a88(param_1,uVar23 & 0xffffffff);
  return;
}


