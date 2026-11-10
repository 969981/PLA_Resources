/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305be50; name: FUN_0305be50
 */


void FUN_0305be50(long *param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar21 = (ulong)param_3;
  param_1[4] = 0;
  param_1[6] = (long)(param_1 + 10);
  param_1[7] = -0x7fffffe800000000;
  param_1[0x26] = (long)(param_1 + 0x2a);
  param_1[0x27] = -0x7fffffe800000000;
  param_1[0x46] = (long)(param_1 + 0x4a);
  param_1[0x66] = (long)(param_1 + 0x6a);
  param_1[0x86] = (long)(param_1 + 0x8a);
  param_1[0x24] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = -0x7fffffe800000000;
  param_1[100] = 0;
  param_1[0x67] = -0x7fffffe800000000;
  param_1[0x84] = 0;
  param_1[0x87] = -0x7fffffe800000000;
  puVar15 = (uint *)((long)param_1 + 0x53c);
  param_1[0xa4] = 0;
  param_1[0xaa] = (long)(param_1 + 0xae);
  param_1[0xca] = (long)(param_1 + 0xce);
  param_1[0xea] = (long)(param_1 + 0xee);
  param_1[0x10a] = (long)(param_1 + 0x10e);
  param_1[0xa5] = -0x8000000000000000;
  param_1[0xa6] = 0;
  param_1[0xa7] = -0x8000000000000000;
  param_1[0xa8] = 0;
  param_1[0xab] = -0x7fffffe800000000;
  param_1[200] = 0;
  param_1[0xcb] = -0x7fffffe800000000;
  param_1[0xe8] = 0;
  param_1[0xeb] = -0x7fffffe800000000;
  param_1[0x108] = 0;
  param_1[0x10b] = -0x7fffffe800000000;
  param_1[0x128] = 0;
  param_1[0x129] = -0x8000000000000000;
  puVar16 = (uint *)((long)param_1 + 0x97c);
  param_1[300] = 0;
  param_1[0x12d] = -0x8000000000000000;
  param_1[0x12e] = 0;
  param_1[0x12f] = -0x8000000000000000;
  puVar17 = (uint *)((long)param_1 + 0x99c);
  param_1[0x130] = 0;
  param_1[0x131] = -0x8000000000000000;
  param_1[0x133] = -0x8000000000000000;
  param_1[0x132] = 0;
  param_1[0x134] = 0;
  param_1[0x136] = (long)(param_1 + 0x13a);
  param_1[0x137] = -0x7fffffe800000000;
  param_1[0x156] = 0;
  param_1[0x158] = (long)(param_1 + 0x15c);
  param_1[0x159] = -0x7fffffe800000000;
  FUN_0305bb88(param_1 + 4,param_2,"hknpCollisionCacheManager::m_existingCacheStream");
  FUN_0305bb88(param_1 + 0x44,param_2,"hknpCollisionCacheManager::m_thisFrameOutput");
  plVar5 = (long *)*param_2;
  param_1[0x84] = (long)plVar5;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  iVar24 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar6 = param_2[1];
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar22 = (undefined8 *)(lVar6 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar24;
    puVar22 = (undefined8 *)(param_2[1] + (long)iVar24 * 8);
  }
  puVar22 = (undefined8 *)*puVar22;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *(int *)((long)puVar22 + 4) = (int)param_1[0x87];
  puVar3 = PTR_PTR_0434a080;
  uVar26 = *(uint *)((long)param_1 + 0x43c);
  iVar24 = (int)param_1[0x87];
  uVar10 = iVar24 + 1;
  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
    lVar6 = param_1[0x86];
  }
  else {
    lVar6 = param_1[0x86];
    if (0x3ffffffe < iVar24) {
      FUN_032bd0a8(uVar10);
      uVar26 = *(uint *)((long)param_1 + 0x43c);
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar2 = uVar10;
    if ((int)uVar10 <= (int)uVar26) {
      uVar2 = uVar26;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar2,8,lVar6,iVar24,(uint *)((long)param_1 + 0x43c));
    iVar24 = (int)param_1[0x87];
    param_1[0x86] = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar24 * 8) = puVar22;
  *(uint *)(param_1 + 0x87) = uVar10;
  param_1[0xa2] = (long)"hknpCollisionCacheManager::m_randomAccessCacheStream";
  FUN_0305bb88(param_1 + 0xa8,param_2,"hknpCollisionCacheManager::m_newCacheStream");
  FUN_0305bb88(param_1 + 0xe8,param_2,"hknpCollisionCacheManager::m_inactiveCacheStream");
  plVar5 = (long *)*param_2;
  *(undefined4 *)(param_1 + 0x135) = 0;
  param_1[0x134] = (long)plVar5;
  *(undefined1 *)((long)param_1 + 0x9ac) = 0;
  iVar24 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar6 = param_2[1];
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar22 = (undefined8 *)(lVar6 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar24;
    puVar22 = (undefined8 *)(param_2[1] + (long)iVar24 * 8);
  }
  puVar22 = (undefined8 *)*puVar22;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *(int *)((long)puVar22 + 4) = (int)param_1[0x137];
  uVar26 = *(uint *)((long)param_1 + 0x9bc);
  iVar24 = (int)param_1[0x137];
  uVar10 = iVar24 + 1;
  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
    lVar6 = param_1[0x136];
  }
  else {
    lVar6 = param_1[0x136];
    if (0x3ffffffe < iVar24) {
      FUN_032bd0a8(uVar10);
      uVar26 = *(uint *)((long)param_1 + 0x9bc);
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar2 = uVar10;
    if ((int)uVar10 <= (int)uVar26) {
      uVar2 = uVar26;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar2,8,lVar6,iVar24,(uint *)((long)param_1 + 0x9bc));
    iVar24 = (int)param_1[0x137];
    param_1[0x136] = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar24 * 8) = puVar22;
  *(uint *)(param_1 + 0x137) = uVar10;
  param_1[0x152] = (long)"hknpCollisionCacheManager::m_deferedManifolds";
  plVar5 = (long *)*param_2;
  *(undefined4 *)(param_1 + 0x157) = 0;
  param_1[0x156] = (long)plVar5;
  *(undefined1 *)((long)param_1 + 0xabc) = 0;
  iVar24 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar6 = param_2[1];
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar22 = (undefined8 *)(lVar6 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar24;
    puVar22 = (undefined8 *)(param_2[1] + (long)iVar24 * 8);
  }
  puVar22 = (undefined8 *)*puVar22;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *(int *)((long)puVar22 + 4) = (int)param_1[0x159];
  uVar26 = *(uint *)((long)param_1 + 0xacc);
  iVar24 = (int)param_1[0x159];
  uVar10 = iVar24 + 1;
  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
    lVar6 = param_1[0x158];
  }
  else {
    lVar6 = param_1[0x158];
    if (0x3ffffffe < iVar24) {
      FUN_032bd0a8(uVar10);
      uVar26 = *(uint *)((long)param_1 + 0xacc);
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar2 = uVar10;
    if ((int)uVar10 <= (int)uVar26) {
      uVar2 = uVar26;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar2,8,lVar6,iVar24,(uint *)((long)param_1 + 0xacc));
    iVar24 = (int)param_1[0x159];
    param_1[0x158] = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar24 * 8) = puVar22;
  uVar26 = *(uint *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 0x159) = uVar10;
  uVar10 = uVar26 & 0x3fffffff;
  param_1[0x174] = (long)"hknpCollisionCacheManager::m_lastFrameContactData";
  if ((int)uVar10 < (int)param_3) {
    puVar22 = (undefined8 *)*param_1;
    uVar2 = *(uint *)(param_1 + 1);
    uVar25 = (ulong)uVar2;
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(uVar21);
      uVar26 = *(uint *)((long)param_1 + 0xc);
      uVar10 = uVar26 & 0x3fffffff;
    }
    uVar8 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    local_7c = param_3;
    if ((int)param_3 <= (int)uVar8) {
      local_7c = uVar8;
    }
    local_88 = (ulong)local_7c << 4;
    if (((int)local_7c < (int)uVar10) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar26 = *(uint *)((long)param_1 + 0xc);
      uVar10 = uVar26 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
    if (0 < (int)uVar2) {
      puVar11 = puVar7;
      puVar12 = puVar22;
      do {
        puVar11[1] = puVar12[1];
        uVar25 = uVar25 - 1;
        *puVar11 = *puVar12;
        puVar11 = puVar11 + 2;
        puVar12 = puVar12 + 2;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar26) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar22,(ulong)uVar10 << 4);
    }
    if (local_88 < 0x3fffffff0) {
      uVar9 = (undefined4)(local_88 >> 4);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar9;
    *param_1 = (long)puVar7;
  }
  iVar24 = (int)param_1[1];
  lVar6 = (long)iVar24;
  puVar1 = (uint *)((long)param_1 + 0x1c);
  if (iVar24 < (int)param_3) {
    lVar13 = *param_1;
    lVar18 = lVar13 + lVar6 * 0x10;
    lVar23 = lVar13 + (long)(int)param_3 * 0x10;
    *(uint *)(param_1 + 1) = param_3;
    *(undefined4 *)(lVar18 + 0xc) = 0;
    if ((lVar18 + 0x10 != lVar23) && (*(undefined4 *)(lVar18 + 0x1c) = 0, lVar18 + 0x20 != lVar23))
    {
      lVar23 = (long)(int)param_3 * 0x10 + lVar6 * -0x10 + -0x20;
      puVar14 = (undefined4 *)(lVar6 * 0x10 + lVar13 + 0x2c);
      do {
        lVar23 = lVar23 + -0x10;
        *puVar14 = 0;
        puVar14 = puVar14 + 4;
      } while (lVar23 != 0);
    }
  }
  else if ((int)param_3 < iVar24) {
    *(uint *)(param_1 + 1) = param_3;
  }
  uVar10 = *puVar1;
  if ((int)(uVar10 & 0x3fffffff) < (int)param_3) {
    lVar23 = param_1[2];
    lVar6 = param_1[3];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar10 = *puVar1;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar26 = param_3;
    if ((int)param_3 <= (int)uVar10) {
      uVar26 = uVar10;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar26,8,lVar23,(int)lVar6,puVar1);
    param_1[2] = lVar6;
  }
  if (*(uint *)(param_1 + 3) != param_3) {
    *(uint *)(param_1 + 3) = param_3;
  }
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    lVar23 = 0;
    do {
      lVar18 = *param_1;
      *(undefined8 *)(lVar18 + lVar6) = 0;
      *(undefined4 *)(lVar18 + lVar6 + 0xc) = 0;
      lVar18 = *param_1 + lVar6;
      lVar6 = lVar6 + 0x10;
      *(long *)(param_1[2] + lVar23 * 8) = lVar18;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)param_1[1]);
  }
  uVar26 = *(uint *)((long)param_1 + 0x52c);
  uVar10 = uVar26 & 0x3fffffff;
  if ((int)uVar10 < (int)param_3) {
    puVar22 = (undefined8 *)param_1[0xa4];
    uVar2 = *(uint *)(param_1 + 0xa5);
    uVar25 = (ulong)uVar2;
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(uVar21);
      uVar26 = *(uint *)((long)param_1 + 0x52c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    uVar8 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    local_7c = param_3;
    if ((int)param_3 <= (int)uVar8) {
      local_7c = uVar8;
    }
    local_88 = (ulong)local_7c << 4;
    if (((int)local_7c < (int)uVar10) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar26 = *(uint *)((long)param_1 + 0x52c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
    if (0 < (int)uVar2) {
      puVar11 = puVar7;
      puVar12 = puVar22;
      do {
        puVar11[1] = puVar12[1];
        uVar25 = uVar25 - 1;
        *puVar11 = *puVar12;
        puVar11 = puVar11 + 2;
        puVar12 = puVar12 + 2;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar26) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar22,(ulong)uVar10 << 4);
    }
    if (local_88 < 0x3fffffff0) {
      uVar9 = (undefined4)(local_88 >> 4);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x52c) = uVar9;
    param_1[0xa4] = (long)puVar7;
  }
  iVar24 = (int)param_1[0xa5];
  lVar6 = (long)iVar24;
  if (iVar24 < (int)param_3) {
    lVar13 = param_1[0xa4];
    lVar18 = lVar13 + lVar6 * 0x10;
    lVar23 = lVar13 + (long)(int)param_3 * 0x10;
    *(uint *)(param_1 + 0xa5) = param_3;
    *(undefined4 *)(lVar18 + 0xc) = 0;
    if ((lVar18 + 0x10 != lVar23) && (*(undefined4 *)(lVar18 + 0x1c) = 0, lVar18 + 0x20 != lVar23))
    {
      lVar23 = (long)(int)param_3 * 0x10 + lVar6 * -0x10 + -0x20;
      puVar14 = (undefined4 *)(lVar6 * 0x10 + lVar13 + 0x2c);
      do {
        lVar23 = lVar23 + -0x10;
        *puVar14 = 0;
        puVar14 = puVar14 + 4;
      } while (lVar23 != 0);
    }
  }
  else if ((int)param_3 < iVar24) {
    *(uint *)(param_1 + 0xa5) = param_3;
  }
  uVar10 = *puVar15;
  if ((int)(uVar10 & 0x3fffffff) < (int)param_3) {
    lVar23 = param_1[0xa6];
    lVar6 = param_1[0xa7];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(uVar21);
      uVar10 = *puVar15;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar26 = param_3;
    if ((int)param_3 <= (int)uVar10) {
      uVar26 = uVar10;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar26,8,lVar23,(int)lVar6,puVar15);
    param_1[0xa6] = lVar6;
  }
  if (*(uint *)(param_1 + 0xa7) != param_3) {
    *(uint *)(param_1 + 0xa7) = param_3;
  }
  if (0 < (int)param_1[0xa5]) {
    lVar6 = 0;
    lVar23 = 0;
    do {
      lVar18 = param_1[0xa4];
      *(undefined8 *)(lVar18 + lVar6) = 0;
      *(undefined4 *)(lVar18 + lVar6 + 0xc) = 0;
      lVar18 = param_1[0xa4] + lVar6;
      lVar6 = lVar6 + 0x10;
      *(long *)(param_1[0xa6] + lVar23 * 8) = lVar18;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)param_1[0xa5]);
  }
  uVar26 = *(uint *)((long)param_1 + 0x96c);
  uVar10 = uVar26 & 0x3fffffff;
  if ((int)uVar10 < (int)param_3) {
    puVar22 = (undefined8 *)param_1[300];
    uVar2 = *(uint *)(param_1 + 0x12d);
    uVar25 = (ulong)uVar2;
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(uVar21);
      uVar26 = *(uint *)((long)param_1 + 0x96c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    uVar8 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    local_7c = param_3;
    if ((int)param_3 <= (int)uVar8) {
      local_7c = uVar8;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar10) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar26 = *(uint *)((long)param_1 + 0x96c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
    if (0 < (int)uVar2) {
      puVar12 = puVar7;
      puVar11 = puVar22;
      do {
        uVar19 = puVar11[3];
        uVar25 = uVar25 - 1;
        puVar12[1] = puVar11[1];
        puVar12[3] = uVar19;
        uVar19 = *puVar11;
        puVar12[2] = puVar11[2];
        puVar11 = puVar11 + 4;
        *puVar12 = uVar19;
        puVar12 = puVar12 + 4;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar26) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar22,(ulong)uVar10 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar9 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x96c) = uVar9;
    param_1[300] = (long)puVar7;
  }
  iVar24 = (int)param_1[0x12d];
  if (iVar24 < (int)param_3) {
    lVar23 = param_1[300];
    uVar25 = -(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | uVar21 << 5;
    lVar6 = lVar23 + (long)iVar24 * 0x20;
    uVar20 = (uVar25 + (long)iVar24 * -0x20) - 0x20;
    *(uint *)(param_1 + 0x12d) = param_3;
    uVar10 = ((uint)(uVar20 >> 5) & 0x7ffffff) + 1;
    if ((uVar10 & 3) != 0) {
      lVar18 = -((ulong)uVar10 & 3);
      do {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        bVar4 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar6 = lVar6 + 0x20;
      } while (bVar4);
    }
    if (0x5f < uVar20) {
      do {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined4 *)(lVar6 + 0x4c) = 0;
        *(undefined8 *)(lVar6 + 0x50) = 0;
        *(undefined4 *)(lVar6 + 0x6c) = 0;
        *(undefined8 *)(lVar6 + 0x70) = 0;
        lVar6 = lVar6 + 0x80;
      } while (lVar23 + uVar25 != lVar6);
    }
  }
  else if ((int)param_3 < iVar24) {
    *(uint *)(param_1 + 0x12d) = param_3;
  }
  uVar10 = *puVar16;
  if ((int)(uVar10 & 0x3fffffff) < (int)param_3) {
    lVar23 = param_1[0x12e];
    lVar6 = param_1[0x12f];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar10 = *puVar16;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    uVar25 = (ulong)uVar10;
    if (0x3ffffffe < uVar10) {
      uVar25 = 0x3fffffff;
    }
    uVar20 = uVar21;
    if ((int)param_3 <= (int)uVar25) {
      uVar20 = uVar25;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar20,8,lVar23,(int)lVar6,puVar16);
    param_1[0x12e] = lVar6;
  }
  if (*(uint *)(param_1 + 0x12f) != param_3) {
    *(uint *)(param_1 + 0x12f) = param_3;
  }
  if (0 < (int)param_1[0x12d]) {
    lVar6 = 0;
    lVar23 = 0;
    do {
      puVar22 = (undefined8 *)(param_1[300] + lVar6);
      *puVar22 = 0;
      *(undefined4 *)((long)puVar22 + 0xc) = 0;
      puVar22[2] = 0;
      lVar18 = param_1[300] + lVar6;
      lVar6 = lVar6 + 0x20;
      *(long *)(param_1[0x12e] + lVar23 * 8) = lVar18;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)param_1[0x12d]);
  }
  uVar26 = *(uint *)((long)param_1 + 0x98c);
  uVar10 = uVar26 & 0x3fffffff;
  if ((int)uVar10 < (int)param_3) {
    puVar22 = (undefined8 *)param_1[0x130];
    uVar2 = *(uint *)(param_1 + 0x131);
    uVar25 = (ulong)uVar2;
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(uVar21);
      uVar26 = *(uint *)((long)param_1 + 0x98c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    uVar8 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar20 = uVar21;
    if ((int)param_3 <= (int)uVar8) {
      uVar20 = (ulong)uVar8;
    }
    local_88 = uVar20 << 5;
    local_7c = (uint)uVar20;
    if (((int)local_7c < (int)uVar10) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_70 = &DAT_0411b3b8;
      local_68 = &local_7c;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar26 = *(uint *)((long)param_1 + 0x98c);
      uVar10 = uVar26 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
    if (0 < (int)uVar2) {
      puVar12 = puVar7;
      puVar11 = puVar22;
      do {
        uVar19 = puVar11[3];
        uVar25 = uVar25 - 1;
        puVar12[1] = puVar11[1];
        puVar12[3] = uVar19;
        uVar19 = *puVar11;
        puVar12[2] = puVar11[2];
        puVar11 = puVar11 + 4;
        *puVar12 = uVar19;
        puVar12 = puVar12 + 4;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar26) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar22,(ulong)uVar10 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar9 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x98c) = uVar9;
    param_1[0x130] = (long)puVar7;
  }
  iVar24 = (int)param_1[0x131];
  if (iVar24 < (int)param_3) {
    lVar23 = param_1[0x130];
    uVar21 = -(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | uVar21 << 5;
    lVar6 = lVar23 + (long)iVar24 * 0x20;
    uVar25 = (uVar21 + (long)iVar24 * -0x20) - 0x20;
    *(uint *)(param_1 + 0x131) = param_3;
    uVar10 = ((uint)(uVar25 >> 5) & 0x7ffffff) + 1;
    if ((uVar10 & 3) != 0) {
      lVar18 = -((ulong)uVar10 & 3);
      do {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        bVar4 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar6 = lVar6 + 0x20;
      } while (bVar4);
    }
    if (0x5f < uVar25) {
      do {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined4 *)(lVar6 + 0x4c) = 0;
        *(undefined8 *)(lVar6 + 0x50) = 0;
        *(undefined4 *)(lVar6 + 0x6c) = 0;
        *(undefined8 *)(lVar6 + 0x70) = 0;
        lVar6 = lVar6 + 0x80;
      } while (lVar23 + uVar21 != lVar6);
    }
  }
  else if ((int)param_3 < iVar24) {
    *(uint *)(param_1 + 0x131) = param_3;
  }
  uVar10 = *puVar17;
  if ((int)(uVar10 & 0x3fffffff) < (int)param_3) {
    lVar23 = param_1[0x132];
    lVar6 = param_1[0x133];
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar10 = *puVar17;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar26 = param_3;
    if ((int)param_3 <= (int)uVar10) {
      uVar26 = uVar10;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar26,8,lVar23,(int)lVar6,puVar17);
    param_1[0x132] = lVar6;
  }
  if (*(uint *)(param_1 + 0x133) != param_3) {
    *(uint *)(param_1 + 0x133) = param_3;
  }
  if (0 < (int)param_1[0x131]) {
    lVar6 = 0;
    lVar23 = 0;
    do {
      puVar22 = (undefined8 *)(param_1[0x130] + lVar6);
      *puVar22 = 0;
      *(undefined4 *)((long)puVar22 + 0xc) = 0;
      puVar22[2] = 0;
      lVar18 = param_1[0x130] + lVar6;
      lVar6 = lVar6 + 0x20;
      *(long *)(param_1[0x132] + lVar23 * 8) = lVar18;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)param_1[0x131]);
  }
  return;
}


