/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fffe30; name: FUN_02fffe30
 */


undefined8 FUN_02fffe30(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  int iVar21;
  ulong uVar22;
  ulong *puVar23;
  uint *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    FUN_03000d04(lVar10 + 0x6b8,lVar10,param_1);
  }
  uVar2 = *(uint *)(param_1 + 3);
  bVar5 = *(uint *)((long)param_1 + 0x34) < param_3;
  puVar23 = (ulong *)(param_1 + 2);
  uVar25 = *puVar23;
  uVar29 = *(uint *)(param_1 + 3);
  uVar16 = param_3;
  if ((!bVar5 && param_3 <= uVar29) && (bVar5 || uVar29 != param_3)) {
    do {
      if ((*(byte *)(uVar25 + (long)(int)uVar16 * 0xc0 + 0x54) & 0xf) != 0) {
        return 0x80040200;
      }
      uVar16 = uVar16 + 1;
    } while (uVar29 != uVar16);
  }
  lVar10 = param_1[4];
  uVar16 = uVar29;
  if (param_3 <= uVar29) {
    uVar16 = param_3;
  }
  lVar17 = param_1[5];
  if ((param_2 == 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 5) = param_3 * 0xc0;
    lVar6 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                      (PTR_PTR_0434a080,(long)(int)(param_3 * 0xc0),0);
    param_1[4] = lVar6;
    param_2 = lVar6 + 0xfU & 0xfffffffffffffff0;
  }
  else {
    param_1[4] = 0;
  }
  if (uVar25 != 0) {
    if (lVar10 == 0) {
      if (*(int *)((long)param_1 + 0x1c) < 0) {
        if (param_2 != uVar25) {
          FUN_032c4af0(param_2,uVar25,uVar16 * 0xc0);
        }
      }
      else {
        FUN_032c4a00(param_2,uVar25,uVar16 * 0xc0);
        *(undefined4 *)(param_1 + 3) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (*puVar23 != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,*puVar23,
                     ((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) * 0xc0);
        }
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
      }
    }
    else {
      FUN_032c4a00(param_2,uVar25,uVar16 * 0xc0);
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar10,(long)(int)lVar17);
    }
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 3) = param_3;
  *(uint *)((long)param_1 + 0x1c) = param_3 | 0x80000000;
  if (uVar29 < param_3) {
    lVar10 = param_2 + (long)(int)uVar29 * 0xc0;
    *(undefined1 *)(lVar10 + 0x88) = 0;
    *(uint *)(lVar10 + 0x50) = *(uint *)(lVar10 + 0x50) | 0xffffff;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    uVar16 = uVar29;
    while (uVar16 = uVar16 + 1, uVar16 != param_3) {
      lVar10 = *puVar23 + (long)(int)uVar16 * 0xc0;
      *(undefined1 *)(lVar10 + 0x88) = 0;
      *(uint *)(lVar10 + 0x50) = *(uint *)(lVar10 + 0x50) | 0xffffff;
      *(undefined4 *)(lVar10 + 0x54) = 0;
    }
    uVar16 = uVar29;
    if ((param_3 - uVar29 & 1) != 0) {
      uVar16 = uVar29 + 1;
      *(uint *)(*puVar23 + (long)(int)uVar29 * 0xc0) = uVar16;
    }
    if (~uVar29 + param_3 != 0) {
      do {
        lVar10 = (long)(int)uVar16;
        iVar21 = uVar16 + 1;
        uVar16 = uVar16 + 2;
        *(int *)(*puVar23 + lVar10 * 0xc0) = iVar21;
        *(uint *)(*puVar23 + (long)iVar21 * 0xc0) = uVar16;
      } while (param_3 != uVar16);
    }
    *(undefined4 *)(param_1[2] + (long)(int)(param_3 - 1) * 0xc0) = 0xffffffff;
    uVar16 = *(uint *)((long)param_1 + 0x2c);
    if (uVar29 == 0) {
      *(uint *)((long)param_1 + 0x2c) = uVar16 & 0xff000000;
    }
    else {
      uVar13 = uVar16 & 0xffffff;
      if (uVar13 == 0xffffff) {
        *(uint *)((long)param_1 + 0x2c) = uVar16 & 0xff000000 | uVar29 & 0xffffff;
      }
      else {
        do {
          puVar24 = (uint *)(*puVar23 + (long)(int)uVar13 * 0xc0);
          uVar13 = *puVar24;
        } while (uVar13 != 0xffffffff);
        *puVar24 = uVar29;
      }
    }
  }
  else {
    FUN_030018ec(puVar23);
  }
  uVar25 = *puVar23;
  if (uVar2 < param_3) {
    lVar10 = uVar25 + (long)(int)uVar2 * 0xc0;
    *(undefined4 *)(lVar10 + 0x50) = 0xffffff;
    *(undefined2 *)(lVar10 + 0x58) = 0;
    uVar16 = uVar2 + 1;
    if (uVar16 != param_3) {
      if ((~uVar2 + param_3 & 1) != 0) {
        lVar10 = *puVar23 + (long)(int)uVar16 * 0xc0;
        *(undefined4 *)(lVar10 + 0x50) = 0xffffff;
        *(undefined2 *)(lVar10 + 0x58) = 0;
        uVar16 = uVar2 + 2;
      }
      if (param_3 - 2 != uVar2) {
        do {
          lVar10 = *puVar23 + (long)(int)uVar16 * 0xc0;
          *(undefined4 *)(lVar10 + 0x50) = 0xffffff;
          *(undefined2 *)(lVar10 + 0x58) = 0;
          iVar21 = uVar16 + 1;
          uVar16 = uVar16 + 2;
          lVar10 = *puVar23 + (long)iVar21 * 0xc0;
          *(undefined4 *)(lVar10 + 0x50) = 0xffffff;
          *(undefined2 *)(lVar10 + 0x58) = 0;
        } while (param_3 != uVar16);
      }
    }
  }
  if (param_3 < uVar2) {
    lVar10 = tpidr_el0;
    uVar16 = param_3;
    do {
      lVar17 = *(long *)(param_1[0x11] + (long)(int)uVar16 * 8);
      if (lVar17 != 0) {
        lVar6 = *(long *)(lVar10 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar6;
        }
        plVar9 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,0xc0);
      }
      lVar17 = *(long *)(param_1[0xf] + (long)(int)uVar16 * 8);
      if (lVar17 != 0) {
        lVar6 = *(long *)(lVar10 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar6;
        }
        plVar9 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,0x30);
      }
      uVar16 = uVar16 + 1;
    } while (uVar2 != uVar16);
  }
  puVar4 = PTR_PTR_0434a080;
  puVar24 = (uint *)((long)param_1 + 100);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0xb];
    lVar10 = param_1[0xc];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,0x18,lVar17,(int)lVar10,puVar24);
    param_1[0xb] = lVar10;
  }
  if (*(uint *)(param_1 + 0xc) != param_3) {
    *(uint *)(param_1 + 0xc) = param_3;
  }
  puVar24 = (uint *)((long)param_1 + 0xdc);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0x1a];
    lVar10 = param_1[0x1b];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,1,lVar17,(int)lVar10,puVar24);
    param_1[0x1a] = lVar10;
  }
  if (*(uint *)(param_1 + 0x1b) != param_3) {
    *(uint *)(param_1 + 0x1b) = param_3;
  }
  puVar24 = (uint *)((long)param_1 + 0xec);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0x1c];
    lVar10 = param_1[0x1d];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,4,lVar17,(int)lVar10,puVar24);
    param_1[0x1c] = lVar10;
  }
  if (*(uint *)(param_1 + 0x1d) != param_3) {
    *(uint *)(param_1 + 0x1d) = param_3;
  }
  uVar29 = *(uint *)((long)param_1 + 0xfc);
  uVar16 = uVar29 & 0x3fffffff;
  if ((int)uVar16 < (int)param_3) {
    puVar26 = (undefined8 *)param_1[0x1e];
    uVar13 = *(uint *)(param_1 + 0x1f);
    uVar28 = (ulong)uVar13;
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar29 = *(uint *)((long)param_1 + 0xfc);
      uVar16 = uVar29 & 0x3fffffff;
    }
    uVar11 = (uVar29 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    local_7c = param_3;
    if ((int)param_3 <= (int)uVar11) {
      local_7c = uVar11;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar16) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar29 = *(uint *)((long)param_1 + 0xfc);
      uVar16 = uVar29 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_88,&local_88);
    if (0 < (int)uVar13) {
      puVar15 = puVar7;
      puVar14 = puVar26;
      do {
        uVar20 = puVar14[3];
        uVar28 = uVar28 - 1;
        puVar15[1] = puVar14[1];
        puVar15[3] = uVar20;
        uVar20 = *puVar14;
        puVar15[2] = puVar14[2];
        puVar14 = puVar14 + 4;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 4;
      } while (uVar28 != 0);
    }
    if (-1 < (int)uVar29) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar26,(ulong)uVar16 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar12 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xfc) = uVar12;
    param_1[0x1e] = (long)puVar7;
  }
  iVar21 = (int)param_1[0x1f];
  if (iVar21 < (int)param_3) {
    lVar17 = param_1[0x1e];
    uVar28 = -(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | (ulong)param_3 << 5;
    lVar10 = lVar17 + (long)iVar21 * 0x20;
    uVar22 = (uVar28 + (long)iVar21 * -0x20) - 0x20;
    uVar16 = ((uint)(uVar22 >> 5) & 0x7ffffff) + 1;
    *(uint *)(param_1 + 0x1f) = param_3;
    if ((uVar16 & 3) != 0) {
      lVar6 = -((ulong)uVar16 & 3);
      do {
        *(undefined4 *)(lVar10 + 0xc) = 0;
        bVar5 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        lVar10 = lVar10 + 0x20;
      } while (bVar5);
    }
    if (0x5f < uVar22) {
      do {
        *(undefined4 *)(lVar10 + 0xc) = 0;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined4 *)(lVar10 + 0x2c) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined4 *)(lVar10 + 0x4c) = 0;
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined4 *)(lVar10 + 0x6c) = 0;
        *(undefined8 *)(lVar10 + 0x70) = 0;
        lVar10 = lVar10 + 0x80;
      } while (lVar17 + uVar28 != lVar10);
    }
  }
  else if ((int)param_3 < iVar21) {
    *(uint *)(param_1 + 0x1f) = param_3;
  }
  puVar24 = (uint *)((long)param_1 + 0xcc);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0x18];
    lVar10 = param_1[0x19];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,0x10,lVar17,(int)lVar10,puVar24);
    param_1[0x18] = lVar10;
  }
  puVar24 = (uint *)((long)param_1 + 0x94);
  uVar16 = *puVar24;
  *(uint *)(param_1 + 0x15) = param_3;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0x11];
    lVar10 = param_1[0x12];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,8,lVar17,(int)lVar10,puVar24);
    param_1[0x11] = lVar10;
  }
  uVar16 = *(uint *)(param_1 + 0x12);
  if ((int)uVar16 < (int)param_3) {
    *(uint *)(param_1 + 0x12) = param_3;
    memset((void *)(param_1[0x11] + (long)(int)uVar16 * 8),0,(ulong)(~uVar16 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar16) {
    *(uint *)(param_1 + 0x12) = param_3;
  }
  puVar24 = (uint *)((long)param_1 + 0x84);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0xf];
    lVar10 = param_1[0x10];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,8,lVar17,(int)lVar10,puVar24);
    param_1[0xf] = lVar10;
  }
  uVar16 = *(uint *)(param_1 + 0x10);
  if ((int)uVar16 < (int)param_3) {
    *(uint *)(param_1 + 0x10) = param_3;
    memset((void *)(param_1[0xf] + (long)(int)uVar16 * 8),0,(ulong)(~uVar16 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar16) {
    *(uint *)(param_1 + 0x10) = param_3;
  }
  puVar24 = (uint *)((long)param_1 + 0x74);
  uVar16 = *puVar24;
  if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
    lVar17 = param_1[0xd];
    lVar10 = param_1[0xe];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar16 = *puVar24;
    }
    uVar16 = (uVar16 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    uVar29 = param_3;
    if ((int)param_3 <= (int)uVar16) {
      uVar29 = uVar16;
    }
    lVar10 = FUN_032bd1d4(puVar4,uVar29,8,lVar17,(int)lVar10,puVar24);
    param_1[0xd] = lVar10;
  }
  uVar16 = *(uint *)(param_1 + 0xe);
  if ((int)uVar16 < (int)param_3) {
    puVar19 = (undefined4 *)(param_1[0xd] + (long)(int)uVar16 * 8);
    uVar29 = param_3 - uVar16 & 1;
    *(uint *)(param_1 + 0xe) = param_3;
    if (~uVar16 + param_3 != 0) {
      iVar21 = (uVar16 + uVar29) - param_3;
      puVar18 = puVar19;
      do {
        puVar19 = puVar18 + 4;
        *puVar18 = 0xbf800000;
        puVar18[1] = 0xffff;
        iVar21 = iVar21 + 2;
        puVar18[2] = 0xbf800000;
        puVar18[3] = 0xffff;
        puVar18 = puVar19;
      } while (iVar21 != 0);
    }
    if (uVar29 != 0) {
      *puVar19 = 0xbf800000;
      puVar19[1] = 0xffff;
    }
  }
  else if ((int)param_3 < (int)uVar16) {
    *(uint *)(param_1 + 0xe) = param_3;
  }
  uVar29 = *(uint *)((long)param_1 + 0xa4);
  uVar16 = uVar29 & 0x3fffffff;
  if ((int)uVar16 < (int)param_3) {
    puVar26 = (undefined8 *)param_1[0x13];
    uVar13 = *(uint *)(param_1 + 0x14);
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar29 = *(uint *)((long)param_1 + 0xa4);
      uVar16 = uVar29 & 0x3fffffff;
    }
    uVar11 = (uVar29 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    local_7c = param_3;
    if ((int)param_3 <= (int)uVar11) {
      local_7c = uVar11;
    }
    local_88 = (ulong)local_7c << 3;
    if (((int)local_7c < (int)uVar16) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar29 = *(uint *)((long)param_1 + 0xa4);
      uVar16 = uVar29 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_88,&local_88);
    if (0 < (int)uVar13) {
      puVar14 = puVar7;
      puVar15 = puVar26;
      uVar28 = (ulong)uVar13;
      do {
        uVar28 = uVar28 - 1;
        *puVar14 = *puVar15;
        *puVar15 = 0;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (uVar28 != 0);
      uVar28 = 0;
      do {
        plVar9 = (long *)puVar26[uVar28];
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar8 = plVar9 + 2;
          do {
            lVar10 = *plVar8;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar13);
    }
    if (-1 < (int)uVar29) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar26,(ulong)uVar16 << 3);
    }
    if (local_88 < 0x1fffffff8) {
      uVar12 = (undefined4)(local_88 >> 3);
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xa4) = uVar12;
    param_1[0x13] = (long)puVar7;
  }
  uVar16 = *(uint *)(param_1 + 0x14);
  if ((int)uVar16 < (int)param_3) {
    *(uint *)(param_1 + 0x14) = param_3;
    memset((void *)(param_1[0x13] + (long)(int)uVar16 * 8),0,(ulong)(~uVar16 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar16) {
    plVar9 = (long *)(param_1[0x13] + (long)(int)param_3 * 8);
    *(uint *)(param_1 + 0x14) = param_3;
    plVar27 = (long *)(param_1[0x13] + (long)(int)uVar16 * 8 + -8);
    plVar8 = (long *)*plVar27;
    if (plVar8 != (long *)0x0) goto LAB_03000888;
LAB_03000878:
    if (plVar27 != plVar9) {
      while( true ) {
        plVar27 = plVar27 + -1;
        plVar8 = (long *)*plVar27;
        if (plVar8 == (long *)0x0) break;
LAB_03000888:
        if (plVar8[1] == 0) break;
        plVar1 = plVar8 + 2;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 != 0) break;
        (**(code **)(*plVar8 + 0x18))();
        if (plVar27 == plVar9) goto LAB_0300059c;
      }
      goto LAB_03000878;
    }
  }
LAB_0300059c:
  if ((char)param_1[8] != '\0') {
    puVar24 = (uint *)((long)param_1 + 0x54);
    uVar16 = *puVar24;
    if ((int)(uVar16 & 0x3fffffff) < (int)param_3) {
      lVar17 = param_1[9];
      lVar10 = param_1[10];
      if (0x3fffffff < (int)param_3) {
        FUN_032bd0a8(param_3);
        uVar16 = *puVar24;
      }
      uVar16 = (uVar16 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar29 = param_3;
      if ((int)param_3 <= (int)uVar16) {
        uVar29 = uVar16;
      }
      lVar10 = FUN_032bd1d4(puVar4,uVar29,4,lVar17,(int)lVar10,puVar24);
      param_1[9] = lVar10;
    }
    uVar16 = *(uint *)(param_1 + 10);
    if ((int)uVar16 < (int)param_3) {
      uVar29 = param_3 - uVar16 & 3;
      *(uint *)(param_1 + 10) = param_3;
      puVar26 = (undefined8 *)(param_1[9] + (long)(int)uVar16 * 4);
      if (2 < ~uVar16 + param_3) {
        iVar21 = (uVar16 + uVar29) - param_3;
        puVar7 = puVar26;
        do {
          puVar26 = puVar7 + 2;
          *puVar7 = 0xffffff00ffffff;
          puVar7[1] = 0xffffff00ffffff;
          iVar21 = iVar21 + 4;
          puVar7 = puVar26;
        } while (iVar21 != 0);
      }
      for (; uVar29 != 0; uVar29 = uVar29 - 1) {
        *(undefined4 *)puVar26 = 0xffffff;
        puVar26 = (undefined8 *)((long)puVar26 + 4);
      }
    }
    else if ((int)param_3 < (int)uVar16) {
      *(uint *)(param_1 + 10) = param_3;
    }
  }
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    uVar28 = 0;
    puVar24 = (uint *)(uVar25 + 0x54);
    do {
      uVar16 = *puVar24;
      if (((uVar16 & 3) != 0) && (*(long *)(puVar24 + 9) != 0)) {
        uVar29 = uVar16 & 0xff7fffff;
        if (((long)*(short *)(*(long *)(puVar24 + 9) + 0x1a) & 0x80000000U) != 0) {
          uVar29 = uVar16 | 0x800000;
        }
        *puVar24 = uVar29;
      }
      uVar28 = uVar28 + 1;
      puVar24 = puVar24 + 0x30;
    } while (uVar28 < uVar2);
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    FUN_03000d04(lVar10 + 0x6c0,lVar10,param_1);
  }
  return 0;
}


