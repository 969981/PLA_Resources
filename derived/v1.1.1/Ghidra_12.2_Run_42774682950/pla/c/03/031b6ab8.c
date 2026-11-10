/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b6ab8; name: FUN_031b6ab8
 */


undefined8 FUN_031b6ab8(long param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  undefined8 uVar22;
  long *plVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int local_48 [2];
  
  plVar23 = *(long **)(param_1 + 8);
  uVar6 = param_2 >> 0x16 & 0x3ff;
  *(int *)((long)plVar23 + 0x74) = (int)param_2;
  iVar5 = (int)uVar6;
  if ((*plVar23 != 0) && ((int)plVar23[0xd] != iVar5)) {
    plVar23[1] = *(long *)(*(long *)(*plVar23 + 0x38) + uVar6 * 0xf0 + 0x10);
    *(int *)(plVar23 + 0xd) = iVar5;
  }
  *(int *)(plVar23 + 0xd) = iVar5;
  lVar7 = plVar23[1];
  uVar6 = param_2 & 0x3fffff;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x18) + uVar6 * 8);
  plVar23[6] = lVar9;
  lVar14 = *(long *)(lVar7 + 0x20);
  if ((*(int *)(lVar14 + 0x78) == 0) ||
     (iVar5 = *(int *)(*(long *)(lVar14 + 0x70) + uVar6 * 4), iVar5 == -1)) {
    iVar5 = 0;
    plVar23[7] = 0xffffffff;
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar14 + 0x80) + (long)iVar5 * 8);
    plVar23[7] = lVar14;
    iVar5 = (int)((ulong)lVar14 >> 0x20);
  }
  iVar5 = iVar5 + (int)((ulong)lVar9 >> 0x20);
  uVar28 = *(undefined8 *)(lVar7 + 0x40);
  uVar29 = *(undefined8 *)(lVar7 + 0x50);
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x38) + uVar6 * 0x10);
  uVar22 = *puVar2;
  uVar30 = *(undefined8 *)(lVar7 + 0x60);
  uVar31 = *(undefined8 *)(lVar7 + 0x70);
  fVar24 = (float)uVar22;
  fVar26 = (float)((ulong)uVar22 >> 0x20);
  fVar27 = (float)puVar2[1];
  plVar23[9] = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar7 + 0x68) >> 0x20) * fVar27 +
                        (float)((ulong)*(undefined8 *)(lVar7 + 0x48) >> 0x20) * fVar24 +
                        (float)((ulong)*(undefined8 *)(lVar7 + 0x58) >> 0x20) * fVar26,
                        (float)*(undefined8 *)(lVar7 + 0x78) +
                        (float)*(undefined8 *)(lVar7 + 0x68) * fVar27 +
                        (float)*(undefined8 *)(lVar7 + 0x48) * fVar24 +
                        (float)*(undefined8 *)(lVar7 + 0x58) * fVar26);
  plVar23[8] = CONCAT44((float)((ulong)uVar31 >> 0x20) +
                        (float)((ulong)uVar30 >> 0x20) * fVar27 +
                        (float)((ulong)uVar28 >> 0x20) * fVar24 +
                        (float)((ulong)uVar29 >> 0x20) * fVar26,
                        (float)uVar31 +
                        (float)uVar30 * fVar27 + (float)uVar28 * fVar24 + (float)uVar29 * fVar26);
  if ((int)(*(uint *)((long)plVar23 + 0x9c) & 0x3fffffff) < iVar5) {
    lVar7 = FUN_0315c8fc(PTR_PTR_0434a080,iVar5,plVar23[0x12],(int)plVar23[0x13]);
    plVar23[0x12] = lVar7;
  }
  if ((int)plVar23[0x13] != iVar5) {
    *(int *)(plVar23 + 0x13) = iVar5;
  }
  lVar7 = *(long *)(plVar23[1] + 0x20);
  lVar9 = *(long *)(lVar7 + 0x90);
  iVar5 = *(int *)(lVar7 + 0x60);
  if (*(long *)(lVar7 + 0x28) != 0) {
    uVar20 = *(uint *)((long)plVar23 + 0x34);
    uVar8 = uVar20 * 2;
    if (0 < (int)uVar8) {
      puVar11 = (undefined4 *)(*(long *)(lVar7 + 0x28) + (long)(int)plVar23[6] * 8);
      puVar12 = (undefined4 *)plVar23[0x12];
      if (2 < uVar8 - 1) {
        iVar19 = (uVar8 & 2) + uVar20 * -2;
        puVar10 = puVar12;
        puVar13 = puVar11;
        do {
          *puVar10 = *puVar13;
          puVar10[1] = puVar13[1];
          puVar10[2] = puVar13[2];
          puVar11 = puVar13 + 4;
          puVar12 = puVar10 + 4;
          iVar19 = iVar19 + 4;
          puVar10[3] = puVar13[3];
          puVar10 = puVar12;
          puVar13 = puVar11;
        } while (iVar19 != 0);
      }
      if ((uVar8 & 2) != 0) {
        iVar19 = (uVar20 & 1) * -2;
        do {
          bVar3 = iVar19 != -1;
          iVar19 = iVar19 + 1;
          *puVar12 = *puVar11;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (bVar3);
      }
    }
  }
  if ((lVar9 != 0) && (uVar20 = *(uint *)((long)plVar23 + 0x3c), 0 < (int)uVar20)) {
    uVar8 = uVar20 * 2;
    if (0 < (int)uVar8) {
      puVar12 = (undefined4 *)(plVar23[0x12] + (long)*(int *)((long)plVar23 + 0x34) * 8);
      puVar11 = (undefined4 *)
                (lVar9 + (long)((int)plVar23[7] - *(int *)(*(long *)(plVar23[1] + 0x20) + 0x30)) * 8
                );
      if (2 < uVar8 - 1) {
        iVar19 = (uVar8 & 2) + uVar20 * -2;
        puVar10 = puVar11;
        puVar13 = puVar12;
        do {
          *puVar13 = *puVar10;
          puVar13[1] = puVar10[1];
          puVar13[2] = puVar10[2];
          puVar11 = puVar10 + 4;
          puVar12 = puVar13 + 4;
          iVar19 = iVar19 + 4;
          puVar13[3] = puVar10[3];
          puVar10 = puVar11;
          puVar13 = puVar12;
        } while (iVar19 != 0);
      }
      if ((uVar8 & 2) != 0) {
        iVar19 = (uVar20 & 1) * -2;
        do {
          bVar3 = iVar19 != -1;
          iVar19 = iVar19 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (bVar3);
      }
    }
  }
  lVar7 = plVar23[0x12];
  plVar23[0xc] = lVar7 + -8;
  uVar20 = *(int *)((long)plVar23 + 0x3c) + *(int *)((long)plVar23 + 0x34);
  if (0 < (int)uVar20) {
    uVar6 = (ulong)uVar20;
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + lVar9;
      if ((*(byte *)(lVar7 + 2) >> 6 & 1) == 0) {
        *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) & 0x3fffff | iVar5 << 0x16;
      }
      if (uVar6 == 0) break;
      lVar7 = plVar23[0x12];
      lVar9 = lVar9 + 8;
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar20 = *(uint *)(lVar9 + 0x34);
  uVar8 = *(uint *)(lVar9 + 0x3c);
  lVar7 = tpidr_el0;
  iVar5 = (uVar8 + uVar20) * 4;
  if (uVar8 + uVar20 == 0) {
    piVar4 = (int *)0x0;
    iVar19 = 0;
    goto LAB_031b6df0;
  }
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  lVar9 = *(long *)(lVar9 + 8);
  uVar6 = (ulong)(int)(iVar5 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar9 + 0x10) < uVar6) {
LAB_031b6f20:
    piVar4 = (int *)FUN_032ce670();
  }
  else {
    piVar4 = *(int **)(lVar9 + 0x18);
    uVar6 = (long)piVar4 + uVar6;
    if (*(ulong *)(lVar9 + 0x20) < uVar6) goto LAB_031b6f20;
    *(ulong *)(lVar9 + 0x18) = uVar6;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar20 = *(uint *)(lVar9 + 0x34);
  uVar8 = *(uint *)(lVar9 + 0x3c);
  iVar19 = uVar8 + uVar20;
LAB_031b6df0:
  piVar16 = piVar4;
  if (0 < (int)uVar20) {
    iVar18 = *(int *)(lVar9 + 0x30);
    uVar17 = uVar20 & 3;
    if (uVar20 - 1 < 3) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        piVar15 = piVar16;
        iVar1 = iVar18 + (int)lVar14;
        piVar16 = piVar4 + lVar14;
        lVar14 = lVar14 + 4;
        *piVar16 = iVar1;
        piVar16[1] = iVar1 + 1;
        piVar16[2] = iVar1 + 2;
        piVar16[3] = iVar1 + 3;
        piVar16 = piVar16 + 4;
      } while (uVar20 - uVar17 != (int)lVar14);
      piVar16 = piVar15 + 4;
    }
    if (uVar17 != 0) {
      iVar18 = (int)lVar14 + iVar18;
      piVar15 = piVar16;
      do {
        piVar16 = piVar15 + 1;
        *piVar15 = iVar18;
        uVar17 = uVar17 - 1;
        iVar18 = iVar18 + 1;
        piVar15 = piVar16;
      } while (uVar17 != 0);
    }
  }
  if (0 < (int)uVar8) {
    iVar18 = *(int *)(lVar9 + 0x38);
    uVar20 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      piVar15 = piVar16;
      do {
        piVar21 = piVar15;
        iVar1 = iVar18 + (int)lVar9;
        piVar15 = piVar16 + lVar9;
        lVar9 = lVar9 + 4;
        *piVar15 = iVar1;
        piVar15[1] = iVar1 + 1;
        piVar15[2] = iVar1 + 2;
        piVar15[3] = iVar1 + 3;
        piVar15 = piVar15 + 4;
      } while (uVar8 - uVar20 != (int)lVar9);
      piVar16 = piVar21 + 4;
    }
    if (uVar20 != 0) {
      iVar18 = (int)lVar9 + iVar18;
      do {
        *piVar16 = iVar18;
        uVar20 = uVar20 - 1;
        iVar18 = iVar18 + 1;
        piVar16 = piVar16 + 1;
      } while (uVar20 != 0);
    }
  }
  if (0 < iVar19) {
    plVar23 = *(long **)(param_1 + 8);
    lVar9 = plVar23[0xc];
    piVar16 = piVar4;
    do {
      iVar18 = *piVar16;
      plVar23[0xc] = lVar9 + 8;
      uVar20 = *(uint *)(lVar9 + 0xc) >> 0x16;
      if (*plVar23 == 0) {
        plVar23[2] = plVar23[1];
      }
      else if (*(uint *)((long)plVar23 + 0x6c) != uVar20) {
        plVar23[2] = *(long *)(*(long *)(*plVar23 + 0x38) + (ulong)uVar20 * 0xf0 + 0x10);
        *(uint *)((long)plVar23 + 0x6c) = uVar20;
      }
      *(uint *)((long)plVar23 + 0x6c) = uVar20;
      plVar23 = *(long **)(param_1 + 8);
      lVar9 = plVar23[0xc];
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar1 = *(int *)(lVar9 + 4);
        lVar14 = 0;
        do {
          if (iVar1 == *(int *)(param_1 + 0x1c + lVar14 * 4)) {
            *param_3 = (int)lVar14;
            local_48[0] = iVar18;
            uVar25 = FUN_031b71e4(0,*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff,iVar1,local_48
                                 );
            *param_4 = uVar25;
            uVar22 = 1;
            goto LAB_031b700c;
          }
          lVar14 = lVar14 + 1;
        } while (*(int *)(param_1 + 0x10) != lVar14);
      }
      piVar16 = piVar16 + 1;
    } while (piVar16 < piVar4 + iVar19);
  }
  uVar22 = 0;
LAB_031b700c:
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  lVar7 = *(long *)(lVar9 + 8);
  uVar6 = (ulong)(int)(iVar5 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar7 + 0x10) < uVar6) || (*(long *)(lVar7 + 0x18) != (long)piVar4 + uVar6)) ||
     (*(int **)(lVar7 + 0x28) == piVar4)) {
    FUN_032cedf0(lVar7,piVar4);
  }
  else {
    *(int **)(lVar7 + 0x18) = piVar4;
  }
  return uVar22;
}


