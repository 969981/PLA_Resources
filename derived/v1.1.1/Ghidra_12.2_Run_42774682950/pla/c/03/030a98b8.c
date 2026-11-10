/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a98b8; name: FUN_030a98b8
 */


void FUN_030a98b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 uint param_5,uint param_6)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  param_1[10] = 0;
  *param_1 = &PTR_LAB_042b4470;
  uVar20 = (ulong)param_6;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x14] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x8000000000000000;
  if ((int)param_4 < 1) {
    lVar4 = 0;
    uVar22 = 0;
    bVar2 = SBORROW4(0,param_4);
    iVar9 = -param_4;
    bVar3 = param_4 == 0;
    if ((int)param_4 < 1) goto LAB_030aab10;
  }
  else {
    lVar4 = FUN_030ace04(PTR_PTR_0434a080,param_4,0,0,(long)param_1 + 0x10c);
    uVar22 = *(uint *)(param_1 + 0x21);
    param_1[0x20] = lVar4;
    bVar2 = SBORROW4(uVar22,param_4);
    iVar9 = uVar22 - param_4;
    bVar3 = uVar22 == param_4;
    if ((int)param_4 <= (int)uVar22) {
LAB_030aab10:
      if (!bVar3 && iVar9 < 0 == bVar2) {
        lVar14 = lVar4 + (long)(int)uVar22 * 0x500 + -0x500;
        *(uint *)(param_1 + 0x21) = param_4;
        FUN_030ac8e0(lVar14);
        if (lVar14 != lVar4 + (long)(int)param_4 * 0x500) {
          lVar14 = (long)(int)uVar22 * -0x500 + (long)(int)param_4 * 0x500 + 0x500;
          lVar4 = (long)(int)uVar22 * 0x500 + lVar4 + -0xa00;
          do {
            FUN_030ac8e0(lVar4);
            lVar14 = lVar14 + 0x500;
            lVar4 = lVar4 + -0x500;
          } while (lVar14 != 0);
        }
      }
      goto LAB_030a9a64;
    }
  }
  puVar17 = (undefined8 *)(lVar4 + (long)(int)uVar22 * 0x500);
  *(uint *)(param_1 + 0x21) = param_4;
  *puVar17 = 0;
  puVar17[0x20] = 0;
  puVar17[2] = puVar17 + 6;
  puVar17[3] = 0x8000001800000000;
  puVar17[0x42] = puVar17 + 0x46;
  puVar17[0x62] = puVar17 + 0x66;
  puVar17[0x82] = puVar17 + 0x86;
  puVar17[0x22] = puVar17 + 0x26;
  puVar17[0x23] = 0x8000001800000000;
  puVar17[0x40] = 0;
  puVar17[0x43] = 0x8000001800000000;
  puVar17[0x60] = 0;
  puVar17[99] = 0x8000001800000000;
  puVar17[0x80] = 0;
  puVar17[0x83] = 0x8000001800000000;
  while (puVar7 = puVar17 + 0xa0, puVar7 != (undefined8 *)(lVar4 + (long)(int)param_4 * 0x500)) {
    *puVar7 = 0;
    puVar7[2] = puVar7 + 6;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)((long)puVar17 + 0x51c) = 0x80000018;
    puVar7[0x20] = 0;
    puVar7[0x22] = puVar7 + 0x26;
    *(undefined4 *)(puVar7 + 0x23) = 0;
    *(undefined4 *)((long)puVar17 + 0x61c) = 0x80000018;
    puVar7[0x40] = 0;
    puVar7[0x42] = puVar7 + 0x46;
    *(undefined4 *)(puVar7 + 0x43) = 0;
    *(undefined4 *)((long)puVar17 + 0x71c) = 0x80000018;
    puVar7[0x60] = 0;
    puVar7[0x62] = puVar7 + 0x66;
    *(undefined4 *)(puVar7 + 99) = 0;
    *(undefined4 *)((long)puVar17 + 0x81c) = 0x80000018;
    puVar7[0x80] = 0;
    puVar7[0x82] = puVar7 + 0x86;
    *(undefined4 *)(puVar7 + 0x83) = 0;
    *(undefined4 *)((long)puVar17 + 0x91c) = 0x80000018;
    puVar17 = puVar7;
  }
LAB_030a9a64:
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    uVar18 = (ulong)param_4;
    lVar4 = 0x4f0;
    do {
      lVar19 = param_1[0x20];
      lVar14 = lVar19 + lVar4;
      plVar5 = (long *)*param_3;
      *(long **)(lVar14 + -0x3f0) = plVar5;
      *(undefined4 *)(lVar14 + -1000) = 0;
      *(undefined1 *)(lVar14 + -0x3e4) = 0;
      iVar9 = *(int *)(param_3 + 0xb) + -1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar6 = param_3[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
        *(undefined4 *)(param_3 + 0xb) = 5;
        puVar17 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        *(int *)(param_3 + 0xb) = iVar9;
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar9 * 8);
      }
      puVar17 = (undefined8 *)*puVar17;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar24 = (uint *)(lVar14 + -0x3d8);
      *(uint *)((long)puVar17 + 4) = *puVar24;
      puVar23 = (uint *)(lVar14 + -0x3d4);
      uVar13 = *puVar23;
      uVar8 = *puVar24;
      uVar22 = uVar8 + 1;
      if ((int)uVar8 < (int)(uVar13 & 0x3fffffff)) {
        lVar6 = *(long *)(lVar14 + -0x3e0);
      }
      else {
        lVar6 = *(long *)(lVar14 + -0x3e0);
        if (0x3ffffffe < (int)uVar8) {
          FUN_032bd0a8(uVar22);
          uVar13 = *puVar23;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar10 = uVar22;
        if ((int)uVar22 <= (int)uVar13) {
          uVar10 = uVar13;
        }
        lVar6 = FUN_032bd1d4(puVar1,uVar10,8,lVar6,uVar8,puVar23);
        *(long *)(lVar14 + -0x3e0) = lVar6;
        uVar8 = *puVar24;
      }
      *(undefined8 **)(lVar6 + (long)(int)uVar8 * 8) = puVar17;
      *puVar24 = uVar22;
      *(char **)(lVar14 + -0x300) = "hknpSolverData::ThreadData::m_jacMovingStream";
      plVar5 = (long *)*param_3;
      *(long **)(lVar14 + -0x2f0) = plVar5;
      *(undefined4 *)(lVar14 + -0x2e8) = 0;
      *(undefined1 *)(lVar14 + -0x2e4) = 0;
      iVar9 = *(int *)(param_3 + 0xb) + -1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar6 = param_3[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
        *(undefined4 *)(param_3 + 0xb) = 5;
        puVar17 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        *(int *)(param_3 + 0xb) = iVar9;
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar9 * 8);
      }
      puVar17 = (undefined8 *)*puVar17;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar24 = (uint *)(lVar14 + -0x2d8);
      *(uint *)((long)puVar17 + 4) = *puVar24;
      puVar23 = (uint *)(lVar14 + -0x2d4);
      uVar13 = *puVar23;
      uVar8 = *puVar24;
      uVar22 = uVar8 + 1;
      if ((int)uVar8 < (int)(uVar13 & 0x3fffffff)) {
        lVar6 = *(long *)(lVar14 + -0x2e0);
      }
      else {
        lVar6 = *(long *)(lVar14 + -0x2e0);
        if (0x3ffffffe < (int)uVar8) {
          FUN_032bd0a8(uVar22);
          uVar13 = *puVar23;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar10 = uVar22;
        if ((int)uVar22 <= (int)uVar13) {
          uVar10 = uVar13;
        }
        lVar6 = FUN_032bd1d4(puVar1,uVar10,8,lVar6,uVar8,puVar23);
        *(long *)(lVar14 + -0x2e0) = lVar6;
        uVar8 = *puVar24;
      }
      *(undefined8 **)(lVar6 + (long)(int)uVar8 * 8) = puVar17;
      *puVar24 = uVar22;
      *(char **)(lVar14 + -0x200) = "hknpSolverData::ThreadData::m_jacFixedStream";
      plVar5 = (long *)*param_3;
      *(long **)(lVar14 + -0x4f0) = plVar5;
      *(undefined4 *)(lVar14 + -0x4e8) = 0;
      *(undefined1 *)(lVar14 + -0x4e4) = 0;
      iVar9 = *(int *)(param_3 + 0xb) + -1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar6 = param_3[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
        *(undefined4 *)(param_3 + 0xb) = 5;
        puVar17 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        *(int *)(param_3 + 0xb) = iVar9;
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar9 * 8);
      }
      puVar17 = (undefined8 *)*puVar17;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar24 = (uint *)(lVar14 + -0x4d8);
      *(uint *)((long)puVar17 + 4) = *puVar24;
      puVar23 = (uint *)(lVar14 + -0x4d4);
      uVar13 = *puVar23;
      uVar8 = *puVar24;
      uVar22 = uVar8 + 1;
      if ((int)uVar8 < (int)(uVar13 & 0x3fffffff)) {
        lVar6 = *(long *)(lVar14 + -0x4e0);
      }
      else {
        lVar6 = *(long *)(lVar14 + -0x4e0);
        if (0x3ffffffe < (int)uVar8) {
          FUN_032bd0a8(uVar22);
          uVar13 = *puVar23;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar10 = uVar22;
        if ((int)uVar22 <= (int)uVar13) {
          uVar10 = uVar13;
        }
        lVar6 = FUN_032bd1d4(puVar1,uVar10,8,lVar6,uVar8,puVar23);
        *(long *)(lVar14 + -0x4e0) = lVar6;
        uVar8 = *puVar24;
      }
      *(undefined8 **)(lVar6 + (long)(int)uVar8 * 8) = puVar17;
      *puVar24 = uVar22;
      *(char **)(lVar14 + -0x400) = "hknpSolverData::ThreadData::m_activePairStream";
      plVar5 = (long *)*param_3;
      *(long **)(lVar14 + -0x1f0) = plVar5;
      *(undefined4 *)(lVar14 + -0x1e8) = 0;
      *(undefined1 *)(lVar14 + -0x1e4) = 0;
      iVar9 = *(int *)(param_3 + 0xb) + -1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar6 = param_3[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
        *(undefined4 *)(param_3 + 0xb) = 5;
        puVar17 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        *(int *)(param_3 + 0xb) = iVar9;
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar9 * 8);
      }
      puVar17 = (undefined8 *)*puVar17;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar24 = (uint *)(lVar14 + -0x1d8);
      *(uint *)((long)puVar17 + 4) = *puVar24;
      puVar23 = (uint *)(lVar14 + -0x1d4);
      uVar13 = *puVar23;
      uVar8 = *puVar24;
      uVar22 = uVar8 + 1;
      if ((int)uVar8 < (int)(uVar13 & 0x3fffffff)) {
        lVar6 = *(long *)(lVar14 + -0x1e0);
      }
      else {
        lVar6 = *(long *)(lVar14 + -0x1e0);
        if (0x3ffffffe < (int)uVar8) {
          FUN_032bd0a8(uVar22);
          uVar13 = *puVar23;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar10 = uVar22;
        if ((int)uVar22 <= (int)uVar13) {
          uVar10 = uVar13;
        }
        lVar6 = FUN_032bd1d4(puVar1,uVar10,8,lVar6,uVar8,puVar23);
        *(long *)(lVar14 + -0x1e0) = lVar6;
        uVar8 = *puVar24;
      }
      *(undefined8 **)(lVar6 + (long)(int)uVar8 * 8) = puVar17;
      *puVar24 = uVar22;
      *(char **)(lVar14 + -0x100) = "hknpSolverData::ThreadData::m_jacConstraintsStream";
      plVar5 = (long *)*param_3;
      *(long **)(lVar14 + -0xf0) = plVar5;
      *(undefined4 *)(lVar14 + -0xe8) = 0;
      *(undefined1 *)(lVar14 + -0xe4) = 0;
      iVar9 = *(int *)(param_3 + 0xb) + -1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar6 = param_3[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
        *(undefined4 *)(param_3 + 0xb) = 5;
        puVar17 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        *(int *)(param_3 + 0xb) = iVar9;
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar9 * 8);
      }
      puVar17 = (undefined8 *)*puVar17;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined4 *)((long)puVar17 + 4) = *(undefined4 *)(lVar14 + -0xd8);
      iVar9 = *(int *)(lVar14 + -0xd8);
      puVar23 = (uint *)(lVar14 + -0xd4);
      uVar13 = *puVar23;
      uVar22 = iVar9 + 1;
      if (iVar9 < (int)(uVar13 & 0x3fffffff)) {
        lVar6 = *(long *)(lVar14 + -0xe0);
      }
      else {
        uVar21 = *(undefined8 *)(lVar14 + -0xe0);
        if (0x3ffffffe < iVar9) {
          FUN_032bd0a8(uVar22);
          uVar13 = *puVar23;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar8 = uVar22;
        if ((int)uVar22 <= (int)uVar13) {
          uVar8 = uVar13;
        }
        lVar6 = FUN_032bd1d4(puVar1,uVar8,8,uVar21,iVar9,puVar23);
        iVar9 = *(int *)(lVar14 + -0xd8);
        *(long *)(lVar14 + -0xe0) = lVar6;
      }
      *(undefined8 **)(lVar6 + (long)iVar9 * 8) = puVar17;
      *(uint *)(lVar14 + -0xd8) = uVar22;
      uVar18 = uVar18 - 1;
      *(char **)(lVar19 + lVar4) = "hknpSolverData::ThreadData::m_solverTempsStream";
      lVar4 = lVar4 + 0x500;
    } while (uVar18 != 0);
  }
  uVar13 = *(uint *)((long)param_1 + 0x1c);
  uVar22 = uVar13 & 0x3fffffff;
  if ((int)uVar22 < (int)param_6) {
    puVar17 = (undefined8 *)param_1[2];
    uVar8 = *(uint *)(param_1 + 3);
    uVar18 = (ulong)uVar8;
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar13 = *(uint *)((long)param_1 + 0x1c);
      uVar22 = uVar13 & 0x3fffffff;
    }
    uVar10 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    local_7c = param_6;
    if ((int)param_6 <= (int)uVar10) {
      local_7c = uVar10;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar22) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar13 = *(uint *)((long)param_1 + 0x1c);
      uVar22 = uVar13 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,local_88,&local_88);
    if (0 < (int)uVar8) {
      puVar12 = puVar7;
      puVar16 = puVar17;
      do {
        uVar21 = puVar16[3];
        uVar18 = uVar18 - 1;
        puVar12[1] = puVar16[1];
        puVar12[3] = uVar21;
        uVar21 = *puVar16;
        puVar12[2] = puVar16[2];
        puVar16 = puVar16 + 4;
        *puVar12 = uVar21;
        puVar12 = puVar12 + 4;
      } while (uVar18 != 0);
    }
    if (-1 < (int)uVar13) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1,puVar17,(ulong)uVar22 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar11 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x1c) = uVar11;
    param_1[2] = puVar7;
  }
  iVar9 = *(int *)(param_1 + 3);
  lVar4 = (long)iVar9;
  puVar23 = (uint *)((long)param_1 + 0x2c);
  if (iVar9 < (int)param_6) {
    lVar6 = param_1[2];
    lVar14 = lVar6 + lVar4 * 0x20;
    lVar19 = lVar6 + (long)(int)param_6 * 0x20;
    *(uint *)(param_1 + 3) = param_6;
    *(undefined4 *)(lVar14 + 0xc) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    if (lVar14 + 0x20 != lVar19) {
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      if (lVar14 + 0x40 != lVar19) {
        lVar14 = (long)(int)param_6 * 0x20 + lVar4 * -0x20 + -0x40;
        puVar17 = (undefined8 *)(lVar4 * 0x20 + lVar6 + 0x50);
        do {
          *(undefined4 *)((long)puVar17 + -4) = 0;
          lVar14 = lVar14 + -0x20;
          *puVar17 = 0;
          puVar17 = puVar17 + 4;
        } while (lVar14 != 0);
      }
    }
  }
  else if ((int)param_6 < iVar9) {
    *(uint *)(param_1 + 3) = param_6;
  }
  uVar22 = *puVar23;
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[4];
    uVar11 = *(undefined4 *)(param_1 + 5);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(param_6);
      uVar22 = *puVar23;
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar22) {
      uVar22 = 0x3fffffff;
    }
    uVar13 = param_6;
    if ((int)param_6 <= (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar13,8,uVar21,uVar11,puVar23);
    param_1[4] = uVar21;
  }
  if (*(uint *)(param_1 + 5) != param_6) {
    *(uint *)(param_1 + 5) = param_6;
  }
  if (0 < *(int *)(param_1 + 3)) {
    puVar17 = (undefined8 *)param_1[2];
    *puVar17 = 0;
    *(undefined4 *)((long)puVar17 + 0xc) = 0;
    puVar17[2] = 0;
    *(undefined4 *)((long)puVar17 + 0x1c) = 0;
    *(undefined8 *)param_1[4] = param_1[2];
    if (1 < *(int *)(param_1 + 3)) {
      lVar4 = param_1[2];
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      *(long *)(param_1[4] + 8) = param_1[2] + 0x20;
      if (2 < *(int *)(param_1 + 3)) {
        lVar4 = 0;
        lVar14 = 2;
        do {
          lVar19 = param_1[2] + lVar4;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined4 *)(lVar19 + 0x4c) = 0;
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined4 *)(lVar19 + 0x5c) = 0;
          lVar19 = param_1[2] + lVar4;
          lVar4 = lVar4 + 0x20;
          *(long *)(param_1[4] + lVar14 * 8) = lVar19 + 0x40;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 3));
      }
    }
  }
  uVar22 = *(uint *)((long)param_1 + 0x3c);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[6];
    uVar11 = *(undefined4 *)(param_1 + 7);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar22 = *(uint *)((long)param_1 + 0x3c);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar22) {
      uVar22 = 0x3fffffff;
    }
    uVar13 = param_6;
    if ((int)param_6 <= (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar13,1,uVar21,uVar11,(uint *)((long)param_1 + 0x3c));
    param_1[6] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 7);
  if ((int)uVar22 < (int)param_6) {
    *(uint *)(param_1 + 7) = param_6;
    memset((void *)(param_1[6] + (long)(int)uVar22),0,(ulong)(~uVar22 + param_6) + 1);
  }
  else if ((int)param_6 < (int)uVar22) {
    *(uint *)(param_1 + 7) = param_6;
  }
  uVar22 = *(uint *)((long)param_1 + 0x4c);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[8];
    uVar11 = *(undefined4 *)(param_1 + 9);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(param_6);
      uVar22 = *(uint *)((long)param_1 + 0x4c);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    uVar18 = (ulong)uVar22;
    if (0x3ffffffe < uVar22) {
      uVar18 = 0x3fffffff;
    }
    uVar15 = uVar20;
    if ((int)param_6 <= (int)uVar18) {
      uVar15 = uVar18;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar15,4,uVar21,uVar11,(uint *)((long)param_1 + 0x4c));
    param_1[8] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 9);
  if ((int)uVar22 < (int)param_6) {
    *(uint *)(param_1 + 9) = param_6;
    memset((void *)(param_1[8] + (long)(int)uVar22 * 4),0,(ulong)(~uVar22 + param_6) * 4 + 4);
  }
  else if ((int)param_6 < (int)uVar22) {
    *(uint *)(param_1 + 9) = param_6;
  }
  uVar13 = *(uint *)((long)param_1 + 0x6c);
  uVar22 = uVar13 & 0x3fffffff;
  if ((int)uVar22 < (int)param_5) {
    puVar17 = (undefined8 *)param_1[0xc];
    uVar8 = *(uint *)(param_1 + 0xd);
    uVar18 = (ulong)uVar8;
    if (0x3fffffff < (int)param_5) {
      FUN_032bd0a8(param_5);
      uVar13 = *(uint *)((long)param_1 + 0x6c);
      uVar22 = uVar13 & 0x3fffffff;
    }
    uVar10 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    local_7c = param_5;
    if ((int)param_5 <= (int)uVar10) {
      local_7c = uVar10;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar22) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar13 = *(uint *)((long)param_1 + 0x6c);
      uVar22 = uVar13 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,local_88,&local_88);
    if (0 < (int)uVar8) {
      puVar12 = puVar7;
      puVar16 = puVar17;
      do {
        uVar21 = puVar16[3];
        uVar18 = uVar18 - 1;
        puVar12[1] = puVar16[1];
        puVar12[3] = uVar21;
        uVar21 = *puVar16;
        puVar12[2] = puVar16[2];
        puVar16 = puVar16 + 4;
        *puVar12 = uVar21;
        puVar12 = puVar12 + 4;
      } while (uVar18 != 0);
    }
    if (-1 < (int)uVar13) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1,puVar17,(ulong)uVar22 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar11 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x6c) = uVar11;
    param_1[0xc] = puVar7;
  }
  iVar9 = *(int *)(param_1 + 0xd);
  lVar4 = (long)iVar9;
  puVar23 = (uint *)((long)param_1 + 0x7c);
  if (iVar9 < (int)param_5) {
    lVar6 = param_1[0xc];
    lVar14 = lVar6 + lVar4 * 0x20;
    lVar19 = lVar6 + (long)(int)param_5 * 0x20;
    *(uint *)(param_1 + 0xd) = param_5;
    *(undefined4 *)(lVar14 + 0xc) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    if (lVar14 + 0x20 != lVar19) {
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      if (lVar14 + 0x40 != lVar19) {
        lVar14 = (long)(int)param_5 * 0x20 + lVar4 * -0x20 + -0x40;
        puVar17 = (undefined8 *)(lVar4 * 0x20 + lVar6 + 0x50);
        do {
          *(undefined4 *)((long)puVar17 + -4) = 0;
          lVar14 = lVar14 + -0x20;
          *puVar17 = 0;
          puVar17 = puVar17 + 4;
        } while (lVar14 != 0);
      }
    }
  }
  else if ((int)param_5 < iVar9) {
    *(uint *)(param_1 + 0xd) = param_5;
  }
  uVar22 = *puVar23;
  if ((int)(uVar22 & 0x3fffffff) < (int)param_5) {
    uVar21 = param_1[0xe];
    uVar11 = *(undefined4 *)(param_1 + 0xf);
    if (0x3fffffff < (int)param_5) {
      FUN_032bd0a8(param_5);
      uVar22 = *puVar23;
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar22) {
      uVar22 = 0x3fffffff;
    }
    uVar13 = param_5;
    if ((int)param_5 <= (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar13,8,uVar21,uVar11,puVar23);
    param_1[0xe] = uVar21;
  }
  if (*(uint *)(param_1 + 0xf) != param_5) {
    *(uint *)(param_1 + 0xf) = param_5;
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    puVar17 = (undefined8 *)param_1[0xc];
    *puVar17 = 0;
    *(undefined4 *)((long)puVar17 + 0xc) = 0;
    puVar17[2] = 0;
    *(undefined4 *)((long)puVar17 + 0x1c) = 0;
    *(undefined8 *)param_1[0xe] = param_1[0xc];
    if (1 < *(int *)(param_1 + 0xd)) {
      lVar4 = param_1[0xc];
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      *(long *)(param_1[0xe] + 8) = param_1[0xc] + 0x20;
      if (2 < *(int *)(param_1 + 0xd)) {
        lVar4 = 0;
        lVar14 = 2;
        do {
          lVar19 = param_1[0xc] + lVar4;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined4 *)(lVar19 + 0x4c) = 0;
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined4 *)(lVar19 + 0x5c) = 0;
          lVar19 = param_1[0xc] + lVar4;
          lVar4 = lVar4 + 0x20;
          *(long *)(param_1[0xe] + lVar14 * 8) = lVar19 + 0x40;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 0xd));
      }
    }
  }
  uVar22 = *(uint *)((long)param_1 + 0x8c);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_5) {
    uVar21 = param_1[0x10];
    uVar11 = *(undefined4 *)(param_1 + 0x11);
    if (0x3fffffff < (int)param_5) {
      FUN_032bd0a8(param_5);
      uVar22 = *(uint *)((long)param_1 + 0x8c);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar22) {
      uVar22 = 0x3fffffff;
    }
    uVar13 = param_5;
    if ((int)param_5 <= (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar13,1,uVar21,uVar11,(uint *)((long)param_1 + 0x8c));
    param_1[0x10] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 0x11);
  if ((int)uVar22 < (int)param_5) {
    *(uint *)(param_1 + 0x11) = param_5;
    memset((void *)(param_1[0x10] + (long)(int)uVar22),0,(ulong)(~uVar22 + param_5) + 1);
  }
  else if ((int)param_5 < (int)uVar22) {
    *(uint *)(param_1 + 0x11) = param_5;
  }
  uVar22 = *(uint *)((long)param_1 + 0x9c);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_5) {
    uVar21 = param_1[0x12];
    uVar11 = *(undefined4 *)(param_1 + 0x13);
    if (0x3fffffff < (int)param_5) {
      FUN_032bd0a8(param_5);
      uVar22 = *(uint *)((long)param_1 + 0x9c);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar22) {
      uVar22 = 0x3fffffff;
    }
    uVar13 = param_5;
    if ((int)param_5 <= (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar13,4,uVar21,uVar11,(uint *)((long)param_1 + 0x9c));
    param_1[0x12] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 0x13);
  if ((int)uVar22 < (int)param_5) {
    *(uint *)(param_1 + 0x13) = param_5;
    memset((void *)(param_1[0x12] + (long)(int)uVar22 * 4),0,(ulong)(~uVar22 + param_5) * 4 + 4);
  }
  else if ((int)param_5 < (int)uVar22) {
    *(uint *)(param_1 + 0x13) = param_5;
  }
  uVar13 = *(uint *)((long)param_1 + 0xbc);
  uVar22 = uVar13 & 0x3fffffff;
  if ((int)uVar22 < (int)param_6) {
    puVar17 = (undefined8 *)param_1[0x16];
    uVar8 = *(uint *)(param_1 + 0x17);
    uVar18 = (ulong)uVar8;
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar13 = *(uint *)((long)param_1 + 0xbc);
      uVar22 = uVar13 & 0x3fffffff;
    }
    uVar10 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar15 = uVar20;
    if ((int)param_6 <= (int)uVar10) {
      uVar15 = (ulong)uVar10;
    }
    local_88 = uVar15 << 5;
    local_7c = (uint)uVar15;
    if (((int)local_7c < (int)uVar22) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar13 = *(uint *)((long)param_1 + 0xbc);
      uVar22 = uVar13 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,local_88,&local_88);
    if (0 < (int)uVar8) {
      puVar12 = puVar7;
      puVar16 = puVar17;
      do {
        uVar21 = puVar16[3];
        uVar18 = uVar18 - 1;
        puVar12[1] = puVar16[1];
        puVar12[3] = uVar21;
        uVar21 = *puVar16;
        puVar12[2] = puVar16[2];
        puVar16 = puVar16 + 4;
        *puVar12 = uVar21;
        puVar12 = puVar12 + 4;
      } while (uVar18 != 0);
    }
    if (-1 < (int)uVar13) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1,puVar17,(ulong)uVar22 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar11 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xbc) = uVar11;
    param_1[0x16] = puVar7;
  }
  iVar9 = *(int *)(param_1 + 0x17);
  lVar4 = (long)iVar9;
  puVar23 = (uint *)((long)param_1 + 0xcc);
  if (iVar9 < (int)param_6) {
    lVar6 = param_1[0x16];
    lVar14 = lVar6 + lVar4 * 0x20;
    lVar19 = lVar6 + (long)(int)param_6 * 0x20;
    *(uint *)(param_1 + 0x17) = param_6;
    *(undefined4 *)(lVar14 + 0xc) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    if (lVar14 + 0x20 != lVar19) {
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      if (lVar14 + 0x40 != lVar19) {
        lVar14 = (long)(int)param_6 * 0x20 + lVar4 * -0x20 + -0x40;
        puVar17 = (undefined8 *)(lVar4 * 0x20 + lVar6 + 0x50);
        do {
          *(undefined4 *)((long)puVar17 + -4) = 0;
          lVar14 = lVar14 + -0x20;
          *puVar17 = 0;
          puVar17 = puVar17 + 4;
        } while (lVar14 != 0);
      }
    }
  }
  else if ((int)param_6 < iVar9) {
    *(uint *)(param_1 + 0x17) = param_6;
  }
  uVar22 = *puVar23;
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[0x18];
    uVar11 = *(undefined4 *)(param_1 + 0x19);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar22 = *puVar23;
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    uVar18 = (ulong)uVar22;
    if (0x3ffffffe < uVar22) {
      uVar18 = 0x3fffffff;
    }
    uVar15 = uVar20;
    if ((int)param_6 <= (int)uVar18) {
      uVar15 = uVar18;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar15,8,uVar21,uVar11,puVar23);
    param_1[0x18] = uVar21;
  }
  if (*(uint *)(param_1 + 0x19) != param_6) {
    *(uint *)(param_1 + 0x19) = param_6;
  }
  if (0 < *(int *)(param_1 + 0x17)) {
    puVar17 = (undefined8 *)param_1[0x16];
    *puVar17 = 0;
    *(undefined4 *)((long)puVar17 + 0xc) = 0;
    puVar17[2] = 0;
    *(undefined4 *)((long)puVar17 + 0x1c) = 0;
    *(undefined8 *)param_1[0x18] = param_1[0x16];
    if (1 < *(int *)(param_1 + 0x17)) {
      lVar4 = param_1[0x16];
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      *(long *)(param_1[0x18] + 8) = param_1[0x16] + 0x20;
      if (2 < *(int *)(param_1 + 0x17)) {
        lVar4 = 0;
        lVar14 = 2;
        do {
          lVar19 = param_1[0x16] + lVar4;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined4 *)(lVar19 + 0x4c) = 0;
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined4 *)(lVar19 + 0x5c) = 0;
          lVar19 = param_1[0x16] + lVar4;
          lVar4 = lVar4 + 0x20;
          *(long *)(param_1[0x18] + lVar14 * 8) = lVar19 + 0x40;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 0x17));
      }
    }
  }
  uVar22 = *(uint *)((long)param_1 + 0xdc);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[0x1a];
    uVar11 = *(undefined4 *)(param_1 + 0x1b);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar22 = *(uint *)((long)param_1 + 0xdc);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    uVar18 = (ulong)uVar22;
    if (0x3ffffffe < uVar22) {
      uVar18 = 0x3fffffff;
    }
    uVar15 = uVar20;
    if ((int)param_6 <= (int)uVar18) {
      uVar15 = uVar18;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar15,1,uVar21,uVar11,(uint *)((long)param_1 + 0xdc));
    param_1[0x1a] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 0x1b);
  if ((int)uVar22 < (int)param_6) {
    *(uint *)(param_1 + 0x1b) = param_6;
    memset((void *)(param_1[0x1a] + (long)(int)uVar22),0,(ulong)(~uVar22 + param_6) + 1);
  }
  else if ((int)param_6 < (int)uVar22) {
    *(uint *)(param_1 + 0x1b) = param_6;
  }
  uVar22 = *(uint *)((long)param_1 + 0xec);
  if ((int)(uVar22 & 0x3fffffff) < (int)param_6) {
    uVar21 = param_1[0x1c];
    uVar11 = *(undefined4 *)(param_1 + 0x1d);
    if (0x3fffffff < (int)param_6) {
      FUN_032bd0a8(uVar20);
      uVar22 = *(uint *)((long)param_1 + 0xec);
    }
    uVar22 = (uVar22 & 0x3fffffff) << 1;
    uVar18 = (ulong)uVar22;
    if (0x3ffffffe < uVar22) {
      uVar18 = 0x3fffffff;
    }
    if ((int)param_6 <= (int)uVar18) {
      uVar20 = uVar18;
    }
    uVar21 = FUN_032bd1d4(puVar1,uVar20,4,uVar21,uVar11,(uint *)((long)param_1 + 0xec));
    param_1[0x1c] = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 0x1d);
  if ((int)uVar22 < (int)param_6) {
    *(uint *)(param_1 + 0x1d) = param_6;
    memset((void *)(param_1[0x1c] + (long)(int)uVar22 * 4),0,(ulong)(~uVar22 + param_6) * 4 + 4);
  }
  else if ((int)param_6 < (int)uVar22) {
    *(uint *)(param_1 + 0x1d) = param_6;
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}


