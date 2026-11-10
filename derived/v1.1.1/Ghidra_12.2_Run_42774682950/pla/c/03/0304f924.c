/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304f924; name: FUN_0304f924
 */


void FUN_0304f924(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined *local_80;
  undefined *local_78;
  undefined *local_68;
  
  puVar4 = PTR_PTR_0434a080;
  lVar22 = *param_1;
  uVar17 = (uint)param_2;
  if ((~uVar17 & 0xffffff) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)*(uint *)(*(long *)(lVar22 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x80);
  }
  uVar16 = (uint)param_3;
  if ((~uVar16 & 0xffffff) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)*(uint *)(*(long *)(lVar22 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0x80);
  }
  lVar14 = *(long *)(lVar22 + 0x150);
  lVar23 = (long)(int)uVar11;
  lVar13 = (long)(int)uVar12;
  uVar10 = *(uint *)(param_1[0x71] + lVar23 * 0x20 + 0x10);
  uVar18 = *(uint *)(param_1[0x71] + lVar13 * 0x20 + 0x10);
  iVar19 = *(int *)(lVar14 + uVar11 * 0x80 + 0x4c);
  if (iVar19 == 0) {
    if (*(int *)(lVar14 + uVar12 * 0x80 + 0x4c) != 0x7fffffff) {
      return;
    }
    if (uVar18 == 0xffffffff) {
      if ((int)param_1[0x69] == 0) {
        lVar22 = tpidr_el0;
        lVar14 = *(long *)(lVar22 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar22 + 0x38d490) = lVar14;
        }
        plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *(int *)(puVar9 + 4) = (int)param_1[0x74];
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        puVar9[7] = 0x8000000100000000;
        local_68 = PTR_PTR_0434a080;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        uVar10 = *(uint *)((long)param_1 + 0x3a4);
        iVar19 = (int)param_1[0x74];
        lVar22 = (long)iVar19;
        uVar17 = iVar19 + 1;
        if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
          lVar14 = param_1[0x73];
          iVar15 = iVar19;
        }
        else {
          lVar14 = param_1[0x73];
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar17);
            uVar10 = *(uint *)((long)param_1 + 0x3a4);
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar18 = uVar17;
          if ((int)uVar17 <= (int)uVar10) {
            uVar18 = uVar10;
          }
          lVar14 = FUN_032bd1d4(local_68,uVar18,8,lVar14,iVar19,(uint *)((long)param_1 + 0x3a4));
          iVar15 = (int)param_1[0x74];
          param_1[0x73] = lVar14;
        }
        *(undefined8 **)(lVar14 + (long)iVar15 * 8) = puVar9;
        *(uint *)(param_1 + 0x74) = uVar17;
      }
      else {
        iVar15 = (int)param_1[0x69] + -1;
        iVar19 = *(int *)(param_1[0x68] + (long)iVar15 * 4);
        *(int *)(param_1 + 0x69) = iVar15;
        lVar22 = (long)iVar19;
        lVar14 = tpidr_el0;
        lVar23 = *(long *)(lVar14 + 0x38d490);
        if (lVar23 == 0) {
          lVar23 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar23;
        }
        plVar24 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *(int *)(puVar9 + 4) = iVar19;
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        puVar9[7] = 0x8000000100000000;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        local_68 = PTR_PTR_0434a080;
        *(undefined8 **)(param_1[0x73] + lVar22 * 8) = puVar9;
      }
      param_3 = param_3 & 0xffffff;
      *(int *)(param_1[0x71] + lVar13 * 0x20 + 0x10) = iVar19;
      lVar14 = *param_1;
      lVar13 = *(long *)(lVar14 + 0x38);
      plVar24 = *(long **)(param_1[0x73] + lVar22 * 8);
      puVar20 = (uint *)((long)plVar24 + 0xc);
      if ((*(byte *)(lVar13 + param_3 * 0xc0 + 0x88) & 1) != 0) {
        iVar19 = (int)plVar24[1];
        uVar10 = *(uint *)((long)plVar24 + 0xc);
        uVar17 = iVar19 + 1;
        if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
          lVar22 = *plVar24;
        }
        else {
          lVar22 = *plVar24;
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar17);
            uVar10 = *puVar20;
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar18 = uVar17;
          if ((int)uVar17 <= (int)uVar10) {
            uVar18 = uVar10;
          }
          lVar22 = FUN_032bd1d4(local_68,uVar18,4,lVar22,iVar19,puVar20);
          iVar19 = (int)plVar24[1];
          *plVar24 = lVar22;
        }
        lVar13 = lVar13 + param_3 * 0xc0;
        *(undefined4 *)(lVar22 + (long)iVar19 * 4) = *(undefined4 *)(lVar13 + 0x50);
        *(uint *)(plVar24 + 1) = uVar17;
        uVar17 = *(uint *)(lVar13 + 0x50);
        if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
          *(uint *)((long)plVar24 + 0x2c) = uVar17;
          *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
        }
      }
      lVar22 = *(long *)(lVar14 + 0x38);
      uVar17 = *(uint *)(lVar22 + param_3 * 0xc0 + 0x84);
      while (uVar17 != uVar16) {
        uVar11 = (ulong)(uVar17 & 0xffffff);
        if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar10 = *(uint *)((long)plVar24 + 0xc);
          uVar17 = iVar19 + 1;
          if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
            lVar13 = *plVar24;
          }
          else {
            lVar13 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar17);
              uVar10 = *puVar20;
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar18 = uVar17;
            if ((int)uVar17 <= (int)uVar10) {
              uVar18 = uVar10;
            }
            lVar13 = FUN_032bd1d4(local_68,uVar18,4,lVar13,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar13;
          }
          lVar22 = lVar22 + uVar11 * 0xc0;
          *(undefined4 *)(lVar13 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
          *(uint *)(plVar24 + 1) = uVar17;
          uVar17 = *(uint *)(lVar22 + 0x50);
          if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar17;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
          }
        }
        lVar22 = *(long *)(lVar14 + 0x38);
        uVar17 = *(uint *)(lVar22 + uVar11 * 0xc0 + 0x84);
      }
      return;
    }
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    iVar15 = 0x7fffffff;
  }
  else {
    iVar15 = *(int *)(lVar14 + uVar12 * 0x80 + 0x4c);
    bVar5 = iVar15 == 0;
    if (iVar19 != 0x7fffffff && iVar15 == 0) {
      return;
    }
    bVar6 = uVar18 == 0xffffffff;
    bVar3 = uVar10 == 0xffffffff && iVar15 == 0;
    if (iVar19 == 0x7fffffff && bVar3) {
      if ((int)param_1[0x69] == 0) {
        lVar22 = tpidr_el0;
        lVar13 = *(long *)(lVar22 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar22 + 0x38d490) = lVar13;
        }
        plVar24 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *(int *)(puVar9 + 4) = (int)param_1[0x74];
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        puVar9[7] = 0x8000000100000000;
        local_68 = PTR_PTR_0434a080;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        uVar10 = *(uint *)((long)param_1 + 0x3a4);
        iVar19 = (int)param_1[0x74];
        lVar22 = (long)iVar19;
        uVar16 = iVar19 + 1;
        if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
          lVar13 = param_1[0x73];
          iVar15 = iVar19;
        }
        else {
          lVar13 = param_1[0x73];
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar16);
            uVar10 = *(uint *)((long)param_1 + 0x3a4);
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar18 = uVar16;
          if ((int)uVar16 <= (int)uVar10) {
            uVar18 = uVar10;
          }
          lVar13 = FUN_032bd1d4(local_68,uVar18,8,lVar13,iVar19,(uint *)((long)param_1 + 0x3a4));
          iVar15 = (int)param_1[0x74];
          param_1[0x73] = lVar13;
        }
        *(undefined8 **)(lVar13 + (long)iVar15 * 8) = puVar9;
        *(uint *)(param_1 + 0x74) = uVar16;
      }
      else {
        iVar15 = (int)param_1[0x69] + -1;
        iVar19 = *(int *)(param_1[0x68] + (long)iVar15 * 4);
        *(int *)(param_1 + 0x69) = iVar15;
        lVar22 = (long)iVar19;
        lVar13 = tpidr_el0;
        lVar14 = *(long *)(lVar13 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar14;
        }
        plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *(int *)(puVar9 + 4) = iVar19;
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        puVar9[7] = 0x8000000100000000;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        local_68 = PTR_PTR_0434a080;
        *(undefined8 **)(param_1[0x73] + lVar22 * 8) = puVar9;
      }
      *(int *)(param_1[0x71] + lVar23 * 0x20 + 0x10) = iVar19;
      lVar14 = *param_1;
      lVar13 = *(long *)(lVar14 + 0x38);
      plVar24 = *(long **)(param_1[0x73] + lVar22 * 8);
      param_2 = param_2 & 0xffffff;
      puVar20 = (uint *)((long)plVar24 + 0xc);
      if ((*(byte *)(lVar13 + param_2 * 0xc0 + 0x88) & 1) != 0) {
        iVar19 = (int)plVar24[1];
        uVar10 = *(uint *)((long)plVar24 + 0xc);
        uVar16 = iVar19 + 1;
        if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
          lVar22 = *plVar24;
        }
        else {
          lVar22 = *plVar24;
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar16);
            uVar10 = *puVar20;
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar18 = uVar16;
          if ((int)uVar16 <= (int)uVar10) {
            uVar18 = uVar10;
          }
          lVar22 = FUN_032bd1d4(local_68,uVar18,4,lVar22,iVar19,puVar20);
          iVar19 = (int)plVar24[1];
          *plVar24 = lVar22;
        }
        lVar13 = lVar13 + param_2 * 0xc0;
        *(undefined4 *)(lVar22 + (long)iVar19 * 4) = *(undefined4 *)(lVar13 + 0x50);
        *(uint *)(plVar24 + 1) = uVar16;
        uVar16 = *(uint *)(lVar13 + 0x50);
        if (uVar16 < *(uint *)((long)plVar24 + 0x2c)) {
          *(uint *)((long)plVar24 + 0x2c) = uVar16;
          *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
        }
      }
      lVar22 = *(long *)(lVar14 + 0x38);
      uVar16 = *(uint *)(lVar22 + param_2 * 0xc0 + 0x84);
      while (uVar16 != uVar17) {
        uVar11 = (ulong)(uVar16 & 0xffffff);
        if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar10 = *(uint *)((long)plVar24 + 0xc);
          uVar16 = iVar19 + 1;
          if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
            lVar13 = *plVar24;
          }
          else {
            lVar13 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar16);
              uVar10 = *puVar20;
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar18 = uVar16;
            if ((int)uVar16 <= (int)uVar10) {
              uVar18 = uVar10;
            }
            lVar13 = FUN_032bd1d4(local_68,uVar18,4,lVar13,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar13;
          }
          lVar22 = lVar22 + uVar11 * 0xc0;
          *(undefined4 *)(lVar13 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
          *(uint *)(plVar24 + 1) = uVar16;
          uVar16 = *(uint *)(lVar22 + 0x50);
          if (uVar16 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar16;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
          }
        }
        lVar22 = *(long *)(lVar14 + 0x38);
        uVar16 = *(uint *)(lVar22 + uVar11 * 0xc0 + 0x84);
      }
      return;
    }
    bVar3 = iVar19 != 0x7fffffff || bVar3;
  }
  bVar7 = uVar10 == 0xffffffff;
  if ((uVar18 != 0xffffffff && iVar19 == 0) || ((bool)(!bVar7 & bVar5))) {
    lVar13 = *(long *)(param_1[0x73] + (long)(int)(uVar10 ^ uVar18 ^ 0xffffffff) * 8);
  }
  else {
    if ((bool)(bVar3 ^ (iVar15 != 0 && iVar15 != 0x7fffffff))) {
      iVar19 = (int)uVar12;
      if (!bVar3) {
        iVar19 = (int)uVar11;
        uVar16 = uVar17;
        uVar18 = uVar10;
      }
      if (uVar18 == 0xffffffff) {
        if ((int)param_1[0x69] == 0) {
          lVar22 = tpidr_el0;
          lVar13 = *(long *)(lVar22 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar22 + 0x38d490) = lVar13;
          }
          plVar24 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
          *(int *)(puVar9 + 4) = (int)param_1[0x74];
          puVar9[5] = 0xffffffffffffffff;
          puVar9[6] = puVar9 + 8;
          *puVar9 = 0;
          puVar9[1] = 0x8000000000000000;
          *(undefined2 *)((long)puVar9 + 0x24) = 0;
          puVar9[2] = 0;
          puVar9[3] = 0x8000000000000000;
          puVar9[7] = 0x8000000100000000;
          local_78 = PTR_PTR_0434a080;
          *(undefined4 *)(puVar9 + 10) = 0;
          *(undefined4 *)(puVar9 + 0xd) = 0;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0x8000000000000000;
          uVar10 = *(uint *)((long)param_1 + 0x3a4);
          uVar18 = *(uint *)(param_1 + 0x74);
          lVar22 = (long)(int)uVar18;
          uVar17 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar10 & 0x3fffffff)) {
            lVar13 = param_1[0x73];
            uVar10 = uVar18;
          }
          else {
            lVar13 = param_1[0x73];
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar17);
              uVar10 = *(uint *)((long)param_1 + 0x3a4);
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar1 = uVar17;
            if ((int)uVar17 <= (int)uVar10) {
              uVar1 = uVar10;
            }
            lVar13 = FUN_032bd1d4(local_78,uVar1,8,lVar13,uVar18,(uint *)((long)param_1 + 0x3a4));
            uVar10 = *(uint *)(param_1 + 0x74);
            param_1[0x73] = lVar13;
          }
          *(undefined8 **)(lVar13 + (long)(int)uVar10 * 8) = puVar9;
          *(uint *)(param_1 + 0x74) = uVar17;
        }
        else {
          iVar15 = (int)param_1[0x69] + -1;
          uVar18 = *(uint *)(param_1[0x68] + (long)iVar15 * 4);
          *(int *)(param_1 + 0x69) = iVar15;
          lVar22 = (long)(int)uVar18;
          lVar13 = tpidr_el0;
          lVar14 = *(long *)(lVar13 + 0x38d490);
          if (lVar14 == 0) {
            lVar14 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar14;
          }
          plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
          puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
          *(uint *)(puVar9 + 4) = uVar18;
          puVar9[5] = 0xffffffffffffffff;
          puVar9[6] = puVar9 + 8;
          *(undefined2 *)((long)puVar9 + 0x24) = 0;
          puVar9[7] = 0x8000000100000000;
          *(undefined4 *)(puVar9 + 10) = 0;
          *(undefined4 *)(puVar9 + 0xd) = 0;
          *puVar9 = 0;
          puVar9[1] = 0x8000000000000000;
          puVar9[2] = 0;
          puVar9[3] = 0x8000000000000000;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0x8000000000000000;
          local_78 = PTR_PTR_0434a080;
          *(undefined8 **)(param_1[0x73] + lVar22 * 8) = puVar9;
        }
        plVar24 = *(long **)(param_1[0x73] + lVar22 * 8);
        *(uint *)(param_1[0x71] + (long)iVar19 * 0x20 + 0x10) = uVar18;
        lVar13 = *param_1;
        lVar22 = *(long *)(lVar13 + 0x38);
        uVar11 = (ulong)(uVar16 & 0xffffff);
        bVar2 = *(byte *)(lVar22 + uVar11 * 0xc0 + 0x88);
        while( true ) {
          if ((bVar2 & 1) != 0) {
            iVar19 = (int)plVar24[1];
            uVar10 = *(uint *)((long)plVar24 + 0xc);
            uVar17 = iVar19 + 1;
            if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
              lVar14 = *plVar24;
            }
            else {
              lVar14 = *plVar24;
              if (0x3ffffffe < iVar19) {
                FUN_032bd0a8(uVar17);
                uVar10 = *(uint *)((long)plVar24 + 0xc);
              }
              uVar10 = (uVar10 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar10) {
                uVar10 = 0x3fffffff;
              }
              uVar1 = uVar17;
              if ((int)uVar17 <= (int)uVar10) {
                uVar1 = uVar10;
              }
              lVar14 = FUN_032bd1d4(local_78,uVar1,4,lVar14,iVar19,(uint *)((long)plVar24 + 0xc));
              iVar19 = (int)plVar24[1];
              *plVar24 = lVar14;
            }
            lVar22 = lVar22 + uVar11 * 0xc0;
            *(undefined4 *)(lVar14 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
            *(uint *)(plVar24 + 1) = uVar17;
            uVar17 = *(uint *)(lVar22 + 0x50);
            if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
              *(uint *)((long)plVar24 + 0x2c) = uVar17;
              *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar13 + 0x5b8);
            }
          }
          lVar22 = *(long *)(lVar13 + 0x38);
          uVar17 = *(uint *)(lVar22 + uVar11 * 0xc0 + 0x84);
          if (uVar17 == uVar16) break;
          uVar11 = (ulong)(uVar17 & 0xffffff);
          bVar2 = *(byte *)(lVar22 + uVar11 * 0xc0 + 0x88);
        }
        lVar22 = *param_1;
      }
      lVar13 = *(long *)(param_1[0x73] + (long)(int)uVar18 * 8);
      iVar19 = *(int *)(lVar22 + 0x5b8);
      if (*(int *)(lVar13 + 0x68) == iVar19) {
        iVar15 = *(int *)(lVar13 + 0x60);
      }
      else {
        iVar15 = 0;
        *(undefined4 *)(lVar13 + 0x60) = 0;
        *(int *)(lVar13 + 0x68) = iVar19;
      }
      puVar4 = PTR_PTR_0434a080;
      puVar20 = (uint *)(lVar13 + 100);
      uVar16 = *puVar20;
      uVar17 = iVar15 + 1;
      if (iVar15 < (int)(uVar16 & 0x3fffffff)) {
        lVar22 = *(long *)(lVar13 + 0x58);
      }
      else {
        uVar21 = *(undefined8 *)(lVar13 + 0x58);
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar17);
          uVar16 = *puVar20;
        }
        uVar16 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar10 = uVar17;
        if ((int)uVar17 <= (int)uVar16) {
          uVar10 = uVar16;
        }
        lVar22 = FUN_032bd1d4(puVar4,uVar10,8,uVar21,iVar15,puVar20);
        iVar15 = *(int *)(lVar13 + 0x60);
        *(long *)(lVar13 + 0x58) = lVar22;
      }
      *(ulong *)(lVar22 + (long)iVar15 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(uint *)(lVar13 + 0x60) = uVar17;
      if (*(char *)(lVar13 + 0x25) == '\0') {
        uVar16 = *(uint *)((long)param_1 + 0x33c);
        iVar19 = (int)param_1[0x67];
        uVar17 = iVar19 + 1;
        if (iVar19 < (int)(uVar16 & 0x3fffffff)) {
          lVar22 = param_1[0x66];
        }
        else {
          lVar22 = param_1[0x66];
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar17);
            uVar16 = *(uint *)((long)param_1 + 0x33c);
          }
          uVar16 = (uVar16 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar16) {
            uVar16 = 0x3fffffff;
          }
          uVar10 = uVar17;
          if ((int)uVar17 <= (int)uVar16) {
            uVar10 = uVar16;
          }
          lVar22 = FUN_032bd1d4(puVar4,uVar10,4,lVar22,iVar19,(uint *)((long)param_1 + 0x33c));
          iVar19 = (int)param_1[0x67];
          param_1[0x66] = lVar22;
        }
        *(uint *)(lVar22 + (long)iVar19 * 4) = uVar18;
        *(uint *)(param_1 + 0x67) = uVar17;
        *(undefined1 *)(lVar13 + 0x25) = 1;
      }
      *(undefined1 *)(lVar13 + 0x24) = 1;
      return;
    }
    if (bVar3) {
      return;
    }
    if ((iVar15 != 0x7fffffff) && (iVar15 != 0)) {
      return;
    }
    if ((uVar18 & uVar10) == 0xffffffff) {
      if ((int)param_1[0x69] == 0) {
        lVar22 = tpidr_el0;
        lVar14 = *(long *)(lVar22 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar22 + 0x38d490) = lVar14;
        }
        plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *(int *)(puVar9 + 4) = (int)param_1[0x74];
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        puVar9[7] = 0x8000000100000000;
        local_80 = PTR_PTR_0434a080;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        uVar18 = *(uint *)((long)param_1 + 0x3a4);
        local_78._0_4_ = (int)param_1[0x74];
        lVar22 = (long)(int)local_78;
        uVar10 = (int)local_78 + 1;
        if ((int)local_78 < (int)(uVar18 & 0x3fffffff)) {
          lVar14 = param_1[0x73];
          iVar19 = (int)local_78;
        }
        else {
          lVar14 = param_1[0x73];
          if (0x3ffffffe < (int)local_78) {
            FUN_032bd0a8(uVar10);
            uVar18 = *(uint *)((long)param_1 + 0x3a4);
          }
          uVar18 = (uVar18 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar18) {
            uVar18 = 0x3fffffff;
          }
          uVar1 = uVar10;
          if ((int)uVar10 <= (int)uVar18) {
            uVar1 = uVar18;
          }
          lVar14 = FUN_032bd1d4(local_80,uVar1,8,lVar14,(int)local_78,
                                (uint *)((long)param_1 + 0x3a4));
          iVar19 = (int)param_1[0x74];
          param_1[0x73] = lVar14;
        }
        *(undefined8 **)(lVar14 + (long)iVar19 * 8) = puVar9;
        *(uint *)(param_1 + 0x74) = uVar10;
      }
      else {
        iVar19 = (int)param_1[0x69] + -1;
        local_78._0_4_ = *(int *)(param_1[0x68] + (long)iVar19 * 4);
        *(int *)(param_1 + 0x69) = iVar19;
        lVar22 = (long)(int)local_78;
        lVar14 = tpidr_el0;
        lVar8 = *(long *)(lVar14 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar8;
        }
        plVar24 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        puVar9 = (undefined8 *)(**(code **)(*plVar24 + 0x10))(plVar24,0x70,0);
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        *(undefined2 *)((long)puVar9 + 0x24) = 0;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0x8000000000000000;
        *(int *)(puVar9 + 4) = (int)local_78;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0x8000000000000000;
        puVar9[5] = 0xffffffffffffffff;
        puVar9[6] = puVar9 + 8;
        puVar9[7] = 0x8000000100000000;
        local_80 = PTR_PTR_0434a080;
        *(undefined8 **)(param_1[0x73] + lVar22 * 8) = puVar9;
      }
      uVar11 = param_2 & 0xffffff;
      plVar24 = *(long **)(param_1[0x73] + lVar22 * 8);
      lVar14 = *param_1;
      lVar22 = *(long *)(lVar14 + 0x38);
      puVar20 = (uint *)((long)plVar24 + 0xc);
      if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
        iVar19 = (int)plVar24[1];
        uVar18 = *(uint *)((long)plVar24 + 0xc);
        uVar10 = iVar19 + 1;
        if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
          lVar8 = *plVar24;
        }
        else {
          lVar8 = *plVar24;
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar10);
            uVar18 = *puVar20;
          }
          uVar18 = (uVar18 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar18) {
            uVar18 = 0x3fffffff;
          }
          uVar1 = uVar10;
          if ((int)uVar10 <= (int)uVar18) {
            uVar1 = uVar18;
          }
          lVar8 = FUN_032bd1d4(local_80,uVar1,4,lVar8,iVar19,puVar20);
          iVar19 = (int)plVar24[1];
          *plVar24 = lVar8;
        }
        lVar22 = lVar22 + uVar11 * 0xc0;
        *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
        *(uint *)(plVar24 + 1) = uVar10;
        uVar10 = *(uint *)(lVar22 + 0x50);
        if (uVar10 < *(uint *)((long)plVar24 + 0x2c)) {
          *(uint *)((long)plVar24 + 0x2c) = uVar10;
          *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
        }
      }
      lVar22 = *(long *)(lVar14 + 0x38);
      while (uVar10 = *(uint *)(lVar22 + uVar11 * 0xc0 + 0x84), uVar10 != uVar17) {
        uVar11 = (ulong)(uVar10 & 0xffffff);
        if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar18 = *(uint *)((long)plVar24 + 0xc);
          uVar10 = iVar19 + 1;
          if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
            lVar8 = *plVar24;
          }
          else {
            lVar8 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar10);
              uVar18 = *puVar20;
            }
            uVar18 = (uVar18 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar18) {
              uVar18 = 0x3fffffff;
            }
            uVar1 = uVar10;
            if ((int)uVar10 <= (int)uVar18) {
              uVar1 = uVar18;
            }
            lVar8 = FUN_032bd1d4(local_80,uVar1,4,lVar8,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar8;
          }
          lVar22 = lVar22 + uVar11 * 0xc0;
          *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
          *(uint *)(plVar24 + 1) = uVar10;
          uVar10 = *(uint *)(lVar22 + 0x50);
          if (uVar10 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar10;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
          }
        }
        lVar22 = *(long *)(lVar14 + 0x38);
      }
      lVar14 = *param_1;
      uVar11 = param_3 & 0xffffff;
      lVar22 = *(long *)(lVar14 + 0x38);
      if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
        iVar19 = (int)plVar24[1];
        uVar10 = *(uint *)((long)plVar24 + 0xc);
        uVar17 = iVar19 + 1;
        if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
          lVar8 = *plVar24;
        }
        else {
          lVar8 = *plVar24;
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar17);
            uVar10 = *puVar20;
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar18 = uVar17;
          if ((int)uVar17 <= (int)uVar10) {
            uVar18 = uVar10;
          }
          lVar8 = FUN_032bd1d4(local_80,uVar18,4,lVar8,iVar19,puVar20);
          iVar19 = (int)plVar24[1];
          *plVar24 = lVar8;
        }
        lVar22 = lVar22 + uVar11 * 0xc0;
        *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
        *(uint *)(plVar24 + 1) = uVar17;
        uVar17 = *(uint *)(lVar22 + 0x50);
        if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
          *(uint *)((long)plVar24 + 0x2c) = uVar17;
          *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
        }
      }
      lVar22 = *(long *)(lVar14 + 0x38);
      while (uVar17 = *(uint *)(lVar22 + uVar11 * 0xc0 + 0x84), uVar17 != uVar16) {
        uVar11 = (ulong)(uVar17 & 0xffffff);
        if ((*(byte *)(lVar22 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar10 = *(uint *)((long)plVar24 + 0xc);
          uVar17 = iVar19 + 1;
          if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
            lVar8 = *plVar24;
          }
          else {
            lVar8 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar17);
              uVar10 = *puVar20;
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar18 = uVar17;
            if ((int)uVar17 <= (int)uVar10) {
              uVar18 = uVar10;
            }
            lVar8 = FUN_032bd1d4(local_80,uVar18,4,lVar8,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar8;
          }
          lVar22 = lVar22 + uVar11 * 0xc0;
          *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar22 + 0x50);
          *(uint *)(plVar24 + 1) = uVar17;
          uVar17 = *(uint *)(lVar22 + 0x50);
          if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar17;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar14 + 0x5b8);
          }
        }
        lVar22 = *(long *)(lVar14 + 0x38);
      }
      iVar19 = *(int *)(*param_1 + 0x5b8);
      if ((int)plVar24[0xd] == iVar19) {
        iVar15 = (int)plVar24[0xc];
      }
      else {
        iVar15 = 0;
        *(undefined4 *)(plVar24 + 0xc) = 0;
        *(int *)(plVar24 + 0xd) = iVar19;
      }
      puVar20 = (uint *)((long)plVar24 + 100);
      uVar16 = *puVar20;
      uVar17 = iVar15 + 1;
      if (iVar15 < (int)(uVar16 & 0x3fffffff)) {
        lVar22 = plVar24[0xb];
      }
      else {
        lVar22 = plVar24[0xb];
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar17);
          uVar16 = *puVar20;
        }
        uVar16 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar10 = uVar17;
        if ((int)uVar17 <= (int)uVar16) {
          uVar10 = uVar16;
        }
        lVar22 = FUN_032bd1d4(local_80,uVar10,8,lVar22,iVar15,puVar20);
        iVar15 = (int)plVar24[0xc];
        plVar24[0xb] = lVar22;
      }
      *(ulong *)(lVar22 + (long)iVar15 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(uint *)(plVar24 + 0xc) = uVar17;
      *(int *)(param_1[0x71] + lVar23 * 0x20 + 0x10) = (int)local_78;
      *(int *)(param_1[0x71] + lVar13 * 0x20 + 0x10) = (int)local_78;
      return;
    }
    if ((bool)(bVar7 | bVar6)) {
      uVar10 = uVar10 ^ uVar18 ^ 0xffffffff;
      plVar24 = *(long **)(param_1[0x73] + (long)(int)uVar10 * 8);
      lVar14 = *(long *)(lVar22 + 0x38);
      puVar20 = (uint *)((long)plVar24 + 0xc);
      if (bVar7) {
        uVar11 = param_2 & 0xffffff;
        if ((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar18 = *(uint *)((long)plVar24 + 0xc);
          uVar16 = iVar19 + 1;
          if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
            lVar8 = *plVar24;
          }
          else {
            lVar8 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar16);
              uVar18 = *puVar20;
            }
            uVar18 = (uVar18 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar18) {
              uVar18 = 0x3fffffff;
            }
            uVar1 = uVar16;
            if ((int)uVar16 <= (int)uVar18) {
              uVar1 = uVar18;
            }
            lVar8 = FUN_032bd1d4(puVar4,uVar1,4,lVar8,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar8;
          }
          lVar14 = lVar14 + uVar11 * 0xc0;
          *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar14 + 0x50);
          *(uint *)(plVar24 + 1) = uVar16;
          uVar16 = *(uint *)(lVar14 + 0x50);
          if (uVar16 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar16;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar22 + 0x5b8);
          }
        }
        lVar14 = *(long *)(lVar22 + 0x38);
        while (uVar16 = *(uint *)(lVar14 + uVar11 * 0xc0 + 0x84), uVar16 != uVar17) {
          uVar11 = (ulong)(uVar16 & 0xffffff);
          if ((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
            iVar19 = (int)plVar24[1];
            uVar18 = *(uint *)((long)plVar24 + 0xc);
            uVar16 = iVar19 + 1;
            if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
              lVar8 = *plVar24;
            }
            else {
              lVar8 = *plVar24;
              if (0x3ffffffe < iVar19) {
                FUN_032bd0a8(uVar16);
                uVar18 = *puVar20;
              }
              uVar18 = (uVar18 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar18) {
                uVar18 = 0x3fffffff;
              }
              uVar1 = uVar16;
              if ((int)uVar16 <= (int)uVar18) {
                uVar1 = uVar18;
              }
              lVar8 = FUN_032bd1d4(puVar4,uVar1,4,lVar8,iVar19,puVar20);
              iVar19 = (int)plVar24[1];
              *plVar24 = lVar8;
            }
            lVar14 = lVar14 + uVar11 * 0xc0;
            *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar14 + 0x50);
            *(uint *)(plVar24 + 1) = uVar16;
            uVar16 = *(uint *)(lVar14 + 0x50);
            if (uVar16 < *(uint *)((long)plVar24 + 0x2c)) {
              *(uint *)((long)plVar24 + 0x2c) = uVar16;
              *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar22 + 0x5b8);
            }
          }
          lVar14 = *(long *)(lVar22 + 0x38);
        }
      }
      else {
        uVar11 = param_3 & 0xffffff;
        if ((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
          iVar19 = (int)plVar24[1];
          uVar18 = *(uint *)((long)plVar24 + 0xc);
          uVar17 = iVar19 + 1;
          if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
            lVar8 = *plVar24;
          }
          else {
            lVar8 = *plVar24;
            if (0x3ffffffe < iVar19) {
              FUN_032bd0a8(uVar17);
              uVar18 = *puVar20;
            }
            uVar18 = (uVar18 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar18) {
              uVar18 = 0x3fffffff;
            }
            uVar1 = uVar17;
            if ((int)uVar17 <= (int)uVar18) {
              uVar1 = uVar18;
            }
            lVar8 = FUN_032bd1d4(puVar4,uVar1,4,lVar8,iVar19,puVar20);
            iVar19 = (int)plVar24[1];
            *plVar24 = lVar8;
          }
          lVar14 = lVar14 + uVar11 * 0xc0;
          *(undefined4 *)(lVar8 + (long)iVar19 * 4) = *(undefined4 *)(lVar14 + 0x50);
          *(uint *)(plVar24 + 1) = uVar17;
          uVar17 = *(uint *)(lVar14 + 0x50);
          if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
            *(uint *)((long)plVar24 + 0x2c) = uVar17;
            *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar22 + 0x5b8);
          }
        }
        lVar8 = *(long *)(lVar22 + 0x38);
        lVar14 = lVar8 + uVar11 * 0xc0;
        while (*(uint *)(lVar14 + 0x84) != uVar16) {
          uVar11 = (ulong)(*(uint *)(lVar14 + 0x84) & 0xffffff);
          if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
            iVar19 = (int)plVar24[1];
            uVar18 = *(uint *)((long)plVar24 + 0xc);
            uVar17 = iVar19 + 1;
            if (iVar19 < (int)(uVar18 & 0x3fffffff)) {
              lVar14 = *plVar24;
            }
            else {
              lVar14 = *plVar24;
              if (0x3ffffffe < iVar19) {
                FUN_032bd0a8(uVar17);
                uVar18 = *puVar20;
              }
              uVar18 = (uVar18 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar18) {
                uVar18 = 0x3fffffff;
              }
              uVar1 = uVar17;
              if ((int)uVar17 <= (int)uVar18) {
                uVar1 = uVar18;
              }
              lVar14 = FUN_032bd1d4(puVar4,uVar1,4,lVar14,iVar19,puVar20);
              iVar19 = (int)plVar24[1];
              *plVar24 = lVar14;
            }
            lVar8 = lVar8 + uVar11 * 0xc0;
            *(undefined4 *)(lVar14 + (long)iVar19 * 4) = *(undefined4 *)(lVar8 + 0x50);
            *(uint *)(plVar24 + 1) = uVar17;
            uVar17 = *(uint *)(lVar8 + 0x50);
            if (uVar17 < *(uint *)((long)plVar24 + 0x2c)) {
              *(uint *)((long)plVar24 + 0x2c) = uVar17;
              *(undefined4 *)(plVar24 + 5) = *(undefined4 *)(lVar22 + 0x5b8);
            }
          }
          lVar8 = *(long *)(lVar22 + 0x38);
          lVar14 = lVar8 + uVar11 * 0xc0;
        }
      }
      iVar19 = *(int *)(*param_1 + 0x5b8);
      if ((int)plVar24[0xd] == iVar19) {
        iVar15 = (int)plVar24[0xc];
      }
      else {
        iVar15 = 0;
        *(undefined4 *)(plVar24 + 0xc) = 0;
        *(int *)(plVar24 + 0xd) = iVar19;
      }
      puVar20 = (uint *)((long)plVar24 + 100);
      uVar16 = *puVar20;
      uVar17 = iVar15 + 1;
      if (iVar15 < (int)(uVar16 & 0x3fffffff)) {
        lVar22 = plVar24[0xb];
      }
      else {
        lVar22 = plVar24[0xb];
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar17);
          uVar16 = *puVar20;
        }
        uVar16 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar18 = uVar17;
        if ((int)uVar17 <= (int)uVar16) {
          uVar18 = uVar16;
        }
        lVar22 = FUN_032bd1d4(puVar4,uVar18,8,lVar22,iVar15,puVar20);
        iVar15 = (int)plVar24[0xc];
        plVar24[0xb] = lVar22;
      }
      *(ulong *)(lVar22 + (long)iVar15 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(uint *)(plVar24 + 0xc) = uVar17;
      *(uint *)(param_1[0x71] + lVar23 * 0x20 + 0x10) = uVar10;
      *(uint *)(param_1[0x71] + lVar13 * 0x20 + 0x10) = uVar10;
      return;
    }
    if (uVar10 != uVar18) {
      FUN_0304ee3c(param_1,uVar10);
      puVar4 = PTR_PTR_0434a080;
      lVar22 = *(long *)(param_1[0x73] + (long)(int)uVar10 * 8);
      iVar19 = *(int *)(lVar22 + 0x60);
      uVar17 = iVar19 + 1;
      puVar20 = (uint *)(lVar22 + 100);
      uVar16 = *puVar20;
      if (iVar19 < (int)(uVar16 & 0x3fffffff)) {
        lVar13 = *(long *)(lVar22 + 0x58);
      }
      else {
        uVar21 = *(undefined8 *)(lVar22 + 0x58);
        if (0x3ffffffe < iVar19) {
          FUN_032bd0a8(uVar17);
          uVar16 = *puVar20;
        }
        uVar16 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar10 = uVar17;
        if ((int)uVar17 <= (int)uVar16) {
          uVar10 = uVar16;
        }
        lVar13 = FUN_032bd1d4(puVar4,uVar10,8,uVar21,iVar19,puVar20);
        iVar19 = *(int *)(lVar22 + 0x60);
        *(long *)(lVar22 + 0x58) = lVar13;
      }
      *(ulong *)(lVar13 + (long)iVar19 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(uint *)(lVar22 + 0x60) = uVar17;
      iVar19 = *(int *)(*param_1 + 0x5b8);
      if (*(int *)(lVar22 + 0x68) == iVar19) {
        return;
      }
      *(undefined4 *)(lVar22 + 0x60) = 0;
      *(int *)(lVar22 + 0x68) = iVar19;
      return;
    }
    lVar13 = *(long *)(param_1[0x73] + (long)(int)uVar10 * 8);
  }
  iVar19 = *(int *)(lVar22 + 0x5b8);
  if (*(int *)(lVar13 + 0x68) == iVar19) {
    iVar15 = *(int *)(lVar13 + 0x60);
  }
  else {
    iVar15 = 0;
    *(undefined4 *)(lVar13 + 0x60) = 0;
    *(int *)(lVar13 + 0x68) = iVar19;
  }
  puVar4 = PTR_PTR_0434a080;
  puVar20 = (uint *)(lVar13 + 100);
  uVar16 = *puVar20;
  uVar17 = iVar15 + 1;
  if (iVar15 < (int)(uVar16 & 0x3fffffff)) {
    lVar22 = *(long *)(lVar13 + 0x58);
  }
  else {
    uVar21 = *(undefined8 *)(lVar13 + 0x58);
    if (0x3ffffffe < iVar15) {
      FUN_032bd0a8(uVar17);
      uVar16 = *puVar20;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar10 = uVar17;
    if ((int)uVar17 <= (int)uVar16) {
      uVar10 = uVar16;
    }
    lVar22 = FUN_032bd1d4(puVar4,uVar10,8,uVar21,iVar15,puVar20);
    iVar15 = *(int *)(lVar13 + 0x60);
    *(long *)(lVar13 + 0x58) = lVar22;
  }
  *(ulong *)(lVar22 + (long)iVar15 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
  *(uint *)(lVar13 + 0x60) = uVar17;
  return;
}


