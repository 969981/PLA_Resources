/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ab1b8; name: FUN_030ab1b8
 */


void FUN_030ab1b8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint *puVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  
  iVar11 = (int)param_1[0x21];
  iVar5 = (int)param_3;
  iVar13 = iVar11 - iVar5;
  if (iVar5 <= iVar11) {
    if (iVar13 == 0 || iVar11 < iVar5) {
      return;
    }
    lVar14 = (long)iVar5 * 0x500;
    do {
      lVar8 = param_1[0x20] + lVar14;
      FUN_032beab0(lVar8 + 0x100,param_2);
      FUN_032beab0(lVar8 + 0x200,param_2);
      FUN_032beab0(lVar8,param_2);
      FUN_032beab0(lVar8 + 0x300,param_2);
      FUN_032beab0(lVar8 + 0x400,param_2);
      iVar13 = iVar13 + -1;
      lVar14 = lVar14 + 0x500;
    } while (iVar13 != 0);
    return;
  }
  if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x3fffffff) < iVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    iVar11 = (int)param_1[0x21];
    lVar14 = (long)iVar11;
    if (iVar11 < 0) {
      puVar7 = (undefined8 *)param_1[0x20];
      puVar9 = puVar7 + lVar14 * 0xa0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined4 *)((long)puVar9 + 0x1c) = 0x80000018;
      puVar9[0x20] = 0;
      puVar9[2] = puVar9 + 6;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 0x23) = 0;
      puVar9[0x22] = puVar9 + 0x26;
      *(undefined4 *)((long)puVar9 + 0x11c) = 0x80000018;
      puVar9[0x40] = 0;
      *(undefined4 *)(puVar9 + 0x43) = 0;
      puVar9[0x42] = puVar9 + 0x46;
      *(undefined4 *)((long)puVar9 + 0x21c) = 0x80000018;
      puVar9[0x62] = puVar9 + 0x66;
      puVar9[0x60] = 0;
      *(undefined4 *)(puVar9 + 99) = 0;
      *(undefined4 *)((long)puVar9 + 0x31c) = 0x80000018;
      puVar9[0x80] = 0;
      *(undefined4 *)(puVar9 + 0x83) = 0;
      puVar9[0x82] = puVar9 + 0x86;
      *(undefined4 *)((long)puVar9 + 0x41c) = 0x80000018;
      puVar10 = puVar9 + 0xa0;
      if (puVar9 + 0xa0 != puVar7) {
        do {
          *puVar10 = 0;
          puVar10[2] = puVar10 + 6;
          iVar11 = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined4 *)((long)puVar10 + 0x1c) = 0x80000018;
          puVar10[0x20] = 0;
          puVar10[0x22] = puVar10 + 0x26;
          *(undefined4 *)(puVar10 + 0x23) = 0;
          *(undefined4 *)((long)puVar10 + 0x11c) = 0x80000018;
          puVar10[0x40] = 0;
          puVar10[0x42] = puVar10 + 0x46;
          *(undefined4 *)(puVar10 + 0x43) = 0;
          *(undefined4 *)((long)puVar10 + 0x21c) = 0x80000018;
          puVar10[0x60] = 0;
          puVar10[0x62] = puVar10 + 0x66;
          *(undefined4 *)(puVar10 + 99) = 0;
          *(undefined4 *)((long)puVar10 + 0x31c) = 0x80000018;
          puVar10[0x82] = puVar10 + 0x86;
          puVar10[0x80] = 0;
          *(undefined4 *)(puVar10 + 0x83) = 0;
          puVar9 = puVar10 + 0xa0;
          *(undefined4 *)((long)puVar10 + 0x41c) = 0x80000018;
          puVar10 = puVar9;
        } while (puVar9 != puVar7);
        goto LAB_030ab34c;
      }
    }
    else if (iVar11 != 0) {
      lVar17 = param_1[0x20];
      lVar8 = lVar17 + lVar14 * 0x500 + -0x500;
      *(undefined4 *)(param_1 + 0x21) = 0;
      FUN_030ac8e0(lVar8);
      if (lVar8 != lVar17) {
        lVar14 = lVar14 * 0x500;
        do {
          FUN_030ac8e0(lVar17 + -0xa00 + lVar14);
          lVar14 = lVar14 + -0x500;
          iVar11 = 0;
        } while (lVar14 != 0x500);
        goto LAB_030ab34c;
      }
    }
    iVar11 = 0;
  }
LAB_030ab34c:
  if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x3fffffff) < iVar5) {
    lVar14 = FUN_030ace04(PTR_PTR_0434a080,param_3,param_1[0x20],(int)param_1[0x21],
                          (uint *)((long)param_1 + 0x10c));
    param_1[0x20] = lVar14;
  }
  iVar13 = (int)param_1[0x21];
  lVar14 = (long)iVar13;
  if (iVar13 < iVar5) {
    lVar8 = param_1[0x20];
    puVar10 = (undefined8 *)(lVar8 + lVar14 * 0x500);
    *(int *)(param_1 + 0x21) = iVar5;
    puVar10[2] = puVar10 + 6;
    *puVar10 = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)((long)puVar10 + 0x1c) = 0x80000018;
    puVar10[0x20] = 0;
    *(undefined4 *)(puVar10 + 0x23) = 0;
    puVar10[0x22] = puVar10 + 0x26;
    *(undefined4 *)((long)puVar10 + 0x11c) = 0x80000018;
    puVar10[0x40] = 0;
    *(undefined4 *)(puVar10 + 0x43) = 0;
    puVar10[0x42] = puVar10 + 0x46;
    *(undefined4 *)((long)puVar10 + 0x21c) = 0x80000018;
    puVar10[0x60] = 0;
    puVar10[0x62] = puVar10 + 0x66;
    *(undefined4 *)(puVar10 + 99) = 0;
    *(undefined4 *)((long)puVar10 + 0x31c) = 0x80000018;
    puVar10[0x82] = puVar10 + 0x86;
    puVar10[0x80] = 0;
    *(undefined4 *)(puVar10 + 0x83) = 0;
    *(undefined4 *)((long)puVar10 + 0x41c) = 0x80000018;
    while (puVar7 = puVar10 + 0xa0, puVar7 != (undefined8 *)(lVar8 + (long)iVar5 * 0x500)) {
      *puVar7 = 0;
      puVar10[0xa2] = puVar10 + 0xa6;
      *(undefined4 *)(puVar10 + 0xa3) = 0;
      *(undefined4 *)((long)puVar10 + 0x51c) = 0x80000018;
      puVar10[0xc0] = 0;
      puVar10[0xc2] = puVar10 + 0xc6;
      *(undefined4 *)(puVar10 + 0xc3) = 0;
      *(undefined4 *)((long)puVar10 + 0x61c) = 0x80000018;
      puVar10[0xe0] = 0;
      puVar10[0xe2] = puVar10 + 0xe6;
      *(undefined4 *)(puVar10 + 0xe3) = 0;
      *(undefined4 *)((long)puVar10 + 0x71c) = 0x80000018;
      puVar10[0x100] = 0;
      puVar10[0x102] = puVar10 + 0x106;
      *(undefined4 *)(puVar10 + 0x103) = 0;
      *(undefined4 *)((long)puVar10 + 0x81c) = 0x80000018;
      puVar10[0x120] = 0;
      puVar10[0x122] = puVar10 + 0x126;
      *(undefined4 *)(puVar10 + 0x123) = 0;
      *(undefined4 *)((long)puVar10 + 0x91c) = 0x80000018;
      puVar10 = puVar7;
    }
  }
  else if (iVar5 < iVar13) {
    lVar17 = param_1[0x20];
    lVar8 = lVar17 + lVar14 * 0x500 + -0x500;
    *(int *)(param_1 + 0x21) = iVar5;
    FUN_030ac8e0(lVar8);
    if (lVar8 != lVar17 + (long)iVar5 * 0x500) {
      lVar8 = (long)iVar5 * 0x500 + lVar14 * -0x500 + 0x500;
      lVar14 = lVar14 * 0x500 + lVar17 + -0xa00;
      do {
        FUN_030ac8e0(lVar14);
        lVar8 = lVar8 + 0x500;
        lVar14 = lVar14 + -0x500;
      } while (lVar8 != 0);
    }
  }
  if (iVar11 < iVar5) {
    iVar5 = iVar5 - iVar11;
    lVar14 = (long)iVar11 * 0x500 + 0x4f0;
    do {
      lVar17 = param_1[0x20];
      lVar8 = lVar17 + lVar14;
      plVar3 = (long *)*param_2;
      *(long **)(lVar8 + -0x3f0) = plVar3;
      *(undefined4 *)(lVar8 + -1000) = 0;
      *(undefined1 *)(lVar8 + -0x3e4) = 0;
      iVar11 = *(int *)(param_2 + 0xb) + -1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar10 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(int *)(param_2 + 0xb) = iVar11;
        puVar10 = (undefined8 *)(param_2[1] + (long)iVar11 * 8);
      }
      puVar10 = (undefined8 *)*puVar10;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar15 = (uint *)(lVar8 + -0x3d8);
      *(uint *)((long)puVar10 + 4) = *puVar15;
      puVar18 = (uint *)(lVar8 + -0x3d4);
      uVar6 = *puVar18;
      uVar12 = *puVar15;
      uVar1 = uVar12 + 1;
      if ((int)uVar12 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *(long *)(lVar8 + -0x3e0);
      }
      else {
        lVar4 = *(long *)(lVar8 + -0x3e0);
        if (0x3ffffffe < (int)uVar12) {
          FUN_032bd0a8(uVar1);
          uVar6 = *puVar18;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar4,uVar12,puVar18);
        *(long *)(lVar8 + -0x3e0) = lVar4;
        uVar12 = *puVar15;
      }
      *(undefined8 **)(lVar4 + (long)(int)uVar12 * 8) = puVar10;
      *puVar15 = uVar1;
      *(char **)(lVar8 + -0x300) = "hknpSolverData::ThreadData::m_jacMovingStream";
      plVar3 = (long *)*param_2;
      *(long **)(lVar8 + -0x2f0) = plVar3;
      *(undefined4 *)(lVar8 + -0x2e8) = 0;
      *(undefined1 *)(lVar8 + -0x2e4) = 0;
      iVar11 = *(int *)(param_2 + 0xb) + -1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar10 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(int *)(param_2 + 0xb) = iVar11;
        puVar10 = (undefined8 *)(param_2[1] + (long)iVar11 * 8);
      }
      puVar10 = (undefined8 *)*puVar10;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar15 = (uint *)(lVar8 + -0x2d8);
      *(uint *)((long)puVar10 + 4) = *puVar15;
      puVar18 = (uint *)(lVar8 + -0x2d4);
      uVar6 = *puVar18;
      uVar12 = *puVar15;
      uVar1 = uVar12 + 1;
      if ((int)uVar12 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *(long *)(lVar8 + -0x2e0);
      }
      else {
        lVar4 = *(long *)(lVar8 + -0x2e0);
        if (0x3ffffffe < (int)uVar12) {
          FUN_032bd0a8(uVar1);
          uVar6 = *puVar18;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar4,uVar12,puVar18);
        *(long *)(lVar8 + -0x2e0) = lVar4;
        uVar12 = *puVar15;
      }
      *(undefined8 **)(lVar4 + (long)(int)uVar12 * 8) = puVar10;
      *puVar15 = uVar1;
      *(char **)(lVar8 + -0x200) = "hknpSolverData::ThreadData::m_jacFixedStream";
      plVar3 = (long *)*param_2;
      *(long **)(lVar8 + -0x4f0) = plVar3;
      *(undefined4 *)(lVar8 + -0x4e8) = 0;
      *(undefined1 *)(lVar8 + -0x4e4) = 0;
      iVar11 = *(int *)(param_2 + 0xb) + -1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar10 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(int *)(param_2 + 0xb) = iVar11;
        puVar10 = (undefined8 *)(param_2[1] + (long)iVar11 * 8);
      }
      puVar10 = (undefined8 *)*puVar10;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar15 = (uint *)(lVar8 + -0x4d8);
      *(uint *)((long)puVar10 + 4) = *puVar15;
      puVar18 = (uint *)(lVar8 + -0x4d4);
      uVar6 = *puVar18;
      uVar12 = *puVar15;
      uVar1 = uVar12 + 1;
      if ((int)uVar12 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *(long *)(lVar8 + -0x4e0);
      }
      else {
        lVar4 = *(long *)(lVar8 + -0x4e0);
        if (0x3ffffffe < (int)uVar12) {
          FUN_032bd0a8(uVar1);
          uVar6 = *puVar18;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar4,uVar12,puVar18);
        *(long *)(lVar8 + -0x4e0) = lVar4;
        uVar12 = *puVar15;
      }
      *(undefined8 **)(lVar4 + (long)(int)uVar12 * 8) = puVar10;
      *puVar15 = uVar1;
      *(char **)(lVar8 + -0x400) = "hknpSolverData::ThreadData::m_activePairStream";
      plVar3 = (long *)*param_2;
      *(long **)(lVar8 + -0x1f0) = plVar3;
      *(undefined4 *)(lVar8 + -0x1e8) = 0;
      *(undefined1 *)(lVar8 + -0x1e4) = 0;
      iVar11 = *(int *)(param_2 + 0xb) + -1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar10 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(int *)(param_2 + 0xb) = iVar11;
        puVar10 = (undefined8 *)(param_2[1] + (long)iVar11 * 8);
      }
      puVar10 = (undefined8 *)*puVar10;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar15 = (uint *)(lVar8 + -0x1d8);
      *(uint *)((long)puVar10 + 4) = *puVar15;
      puVar18 = (uint *)(lVar8 + -0x1d4);
      uVar6 = *puVar18;
      uVar12 = *puVar15;
      uVar1 = uVar12 + 1;
      if ((int)uVar12 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *(long *)(lVar8 + -0x1e0);
      }
      else {
        lVar4 = *(long *)(lVar8 + -0x1e0);
        if (0x3ffffffe < (int)uVar12) {
          FUN_032bd0a8(uVar1);
          uVar6 = *puVar18;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar4,uVar12,puVar18);
        *(long *)(lVar8 + -0x1e0) = lVar4;
        uVar12 = *puVar15;
      }
      *(undefined8 **)(lVar4 + (long)(int)uVar12 * 8) = puVar10;
      *puVar15 = uVar1;
      *(char **)(lVar8 + -0x100) = "hknpSolverData::ThreadData::m_jacConstraintsStream";
      plVar3 = (long *)*param_2;
      *(long **)(lVar8 + -0xf0) = plVar3;
      *(undefined4 *)(lVar8 + -0xe8) = 0;
      *(undefined1 *)(lVar8 + -0xe4) = 0;
      iVar11 = *(int *)(param_2 + 0xb) + -1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar10 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(int *)(param_2 + 0xb) = iVar11;
        puVar10 = (undefined8 *)(param_2[1] + (long)iVar11 * 8);
      }
      puVar10 = (undefined8 *)*puVar10;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(lVar8 + -0xd8);
      iVar11 = *(int *)(lVar8 + -0xd8);
      puVar15 = (uint *)(lVar8 + -0xd4);
      uVar6 = *puVar15;
      uVar1 = iVar11 + 1;
      if (iVar11 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *(long *)(lVar8 + -0xe0);
      }
      else {
        uVar16 = *(undefined8 *)(lVar8 + -0xe0);
        if (0x3ffffffe < iVar11) {
          FUN_032bd0a8(uVar1);
          uVar6 = *puVar15;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar12 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar12 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar12,8,uVar16,iVar11,puVar15);
        iVar11 = *(int *)(lVar8 + -0xd8);
        *(long *)(lVar8 + -0xe0) = lVar4;
      }
      iVar5 = iVar5 + -1;
      *(undefined8 **)(lVar4 + (long)iVar11 * 8) = puVar10;
      *(uint *)(lVar8 + -0xd8) = uVar1;
      *(char **)(lVar17 + lVar14) = "hknpSolverData::ThreadData::m_solverTempsStream";
      lVar14 = lVar14 + 0x500;
    } while (iVar5 != 0);
  }
  return;
}


