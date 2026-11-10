/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301b3b4; name: FUN_0301b3b4
 */


void FUN_0301b3b4(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  puVar3 = PTR_PTR_0434a080;
  uVar23 = *(uint *)((long)param_1 + 0x52c);
  uVar12 = uVar23 & 0x3fffffff;
  uVar1 = *(uint *)(*(long *)(param_2 + 0x4b0) + 0x20);
  if ((int)uVar12 < (int)uVar1) {
    puVar22 = (undefined8 *)param_1[0xa4];
    uVar2 = *(uint *)(param_1 + 0xa5);
    uVar19 = (ulong)uVar2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar23 = *(uint *)((long)param_1 + 0x52c);
      uVar12 = uVar23 & 0x3fffffff;
    }
    uVar10 = (uVar23 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    local_7c = uVar1;
    if ((int)uVar1 <= (int)uVar10) {
      local_7c = uVar10;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar12) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar23 = *(uint *)((long)param_1 + 0x52c);
      uVar12 = uVar23 & 0x3fffffff;
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_88,&local_88);
    if (0 < (int)uVar2) {
      puVar13 = puVar5;
      puVar16 = puVar22;
      do {
        uVar17 = puVar16[3];
        uVar19 = uVar19 - 1;
        puVar13[1] = puVar16[1];
        puVar13[3] = uVar17;
        uVar17 = *puVar16;
        puVar13[2] = puVar16[2];
        puVar16 = puVar16 + 4;
        *puVar13 = uVar17;
        puVar13 = puVar13 + 4;
      } while (uVar19 != 0);
    }
    if (-1 < (int)uVar23) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar22,(ulong)uVar12 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar11 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x52c) = uVar11;
    param_1[0xa4] = (long)puVar5;
  }
  iVar14 = (int)param_1[0xa5];
  if (iVar14 < (int)uVar1) {
    lVar15 = param_1[0xa4];
    *(uint *)(param_1 + 0xa5) = uVar1;
    lVar6 = lVar15 + (long)iVar14 * 0x20;
    uVar19 = ((long)(int)uVar1 * 0x20 + (long)iVar14 * -0x20) - 0x20;
    uVar12 = ((uint)(uVar19 >> 5) & 0x7ffffff) + 1;
    if ((uVar12 & 3) != 0) {
      lVar18 = -((ulong)uVar12 & 3);
      do {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        bVar4 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar6 = lVar6 + 0x20;
      } while (bVar4);
    }
    if (0x5f < uVar19) {
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
      } while (lVar15 + (long)(int)uVar1 * 0x20 != lVar6);
    }
  }
  else if ((int)uVar1 < iVar14) {
    *(uint *)(param_1 + 0xa5) = uVar1;
  }
  uVar12 = *(uint *)((long)param_1 + 0x53c);
  if ((int)(uVar12 & 0x3fffffff) < (int)uVar1) {
    lVar15 = param_1[0xa6];
    lVar6 = param_1[0xa7];
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar12 = *(uint *)((long)param_1 + 0x53c);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar23 = uVar1;
    if ((int)uVar1 <= (int)uVar12) {
      uVar23 = uVar12;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar23,8,lVar15,(int)lVar6,(uint *)((long)param_1 + 0x53c));
    param_1[0xa6] = lVar6;
  }
  if (*(uint *)(param_1 + 0xa7) != uVar1) {
    *(uint *)(param_1 + 0xa7) = uVar1;
  }
  if (0 < (int)param_1[0xa5]) {
    lVar6 = 0;
    lVar15 = 0;
    do {
      puVar22 = (undefined8 *)(param_1[0xa4] + lVar6);
      *puVar22 = 0;
      *(undefined4 *)((long)puVar22 + 0xc) = 0;
      puVar22[2] = 0;
      lVar18 = param_1[0xa4] + lVar6;
      lVar6 = lVar6 + 0x20;
      *(long *)(param_1[0xa6] + lVar15 * 8) = lVar18;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_1[0xa5]);
  }
  puVar21 = (uint *)((long)param_1 + 0xc);
  if ((int)(*puVar21 & 0x3fffffff) < (int)param_3) {
    lVar6 = FUN_0301dac4(puVar3,param_3,*param_1,(int)param_1[1],puVar21);
    *param_1 = lVar6;
  }
  if (0 < (int)param_3) {
    uVar19 = 0;
    lVar6 = tpidr_el0;
    do {
      lVar15 = *(long *)(lVar6 + 0x38d490);
      if (lVar15 == 0) {
        lVar15 = FUN_0333d16c(0,1);
        *(long *)(lVar6 + 0x38d490) = lVar15;
      }
      plVar7 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
      puVar8 = (undefined4 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x7c0,0);
      *puVar8 = (int)uVar19;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *(undefined8 *)(puVar8 + 10) = 0;
      *(undefined8 *)(puVar8 + 0xc) = 0;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      FUN_02fd9898(puVar8 + 0x14);
      FUN_02fd9898(puVar8 + 0x58);
      FUN_02fd9898(puVar8 + 0x9c);
      FUN_02fd9898(puVar8 + 0xe0);
      *(undefined4 **)(puVar8 + 0x14c) = puVar8 + 0x154;
      puVar8[0x14f] = 0x80000018;
      *(undefined8 *)(puVar8 + 0x136) = 0;
      *(undefined8 *)(puVar8 + 0x134) = 0;
      *(undefined8 *)(puVar8 + 0x132) = 0;
      *(undefined8 *)(puVar8 + 0x130) = 0;
      *(undefined8 *)(puVar8 + 0x12e) = 0;
      *(undefined8 *)(puVar8 + 300) = 0;
      *(undefined8 *)(puVar8 + 0x140) = 0;
      *(undefined8 *)(puVar8 + 0x142) = 0;
      *(undefined8 *)(puVar8 + 0x144) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x146) = 0;
      *(undefined8 *)(puVar8 + 0x148) = 0;
      puVar8[0x14e] = 0;
      *(undefined8 *)(puVar8 + 0x188) = 0;
      *(undefined4 **)(puVar8 + 0x18c) = puVar8 + 0x194;
      puVar8[0x18e] = 0;
      puVar8[399] = 0x80000018;
      puVar8[0x1cf] = 0;
      *(undefined8 *)(puVar8 + 0x1d0) = 0;
      *(undefined8 *)(puVar8 + 0x1d6) = 0;
      *(undefined8 *)(puVar8 + 0x1d8) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x1da) = 0;
      *(undefined8 *)(puVar8 + 0x1dc) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x1de) = 0;
      *(undefined8 *)(puVar8 + 0x1e0) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x1e2) = 0;
      *(undefined8 *)(puVar8 + 0x1e4) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x1e6) = 0;
      *(undefined8 *)(puVar8 + 0x1e8) = 0x8000000000000000;
      *(undefined8 *)(puVar8 + 0x1ea) = 0;
      *(undefined8 *)(puVar8 + 0x1ec) = 0x8000000000000000;
      iVar9 = (int)param_1[1];
      lVar15 = *param_1;
      iVar14 = iVar9 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar9) {
        lVar15 = FUN_0301dac4(puVar3,iVar14,lVar15,iVar9,puVar21);
        iVar9 = (int)param_1[1];
        *param_1 = lVar15;
      }
      *(undefined4 **)(lVar15 + (long)iVar9 * 8) = puVar8;
      *(int *)(param_1 + 1) = iVar14;
      FUN_0301dfd0(*(undefined8 *)(*param_1 + uVar19 * 8),*(undefined8 *)(param_2 + 0x4a0),param_2,
                   param_1 + 0xa4);
      uVar19 = uVar19 + 1;
    } while (param_3 != uVar19);
  }
  lVar6 = -0x100;
  plVar7 = param_1 + 0x24;
  do {
    iVar14 = (int)lVar6;
    *(int *)((long)plVar7 + -0xc) = iVar14 + 0x101;
    *(int *)(plVar7 + -1) = iVar14 + 0x102;
    *(int *)((long)plVar7 + -4) = iVar14 + 0x103;
    lVar6 = lVar6 + 4;
    *(int *)plVar7 = iVar14 + 0x104;
    plVar7 = plVar7 + 2;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar20 = *(long **)(*(long *)*param_1 + 0x4e0);
  plVar7 = (long *)*plVar20;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xa8] = (long)plVar7;
  *(undefined1 *)((long)param_1 + 0x54c) = 0;
  iVar14 = (int)plVar20[0xb] + -1;
  if ((int)plVar20[0xb] < 1) {
    lVar6 = plVar20[1];
    (**(code **)(*plVar7 + 0x20))(plVar7,lVar6,6);
    *(undefined4 *)(plVar20 + 0xb) = 5;
    puVar22 = (undefined8 *)(lVar6 + 0x28);
  }
  else {
    *(int *)(plVar20 + 0xb) = iVar14;
    puVar22 = (undefined8 *)(plVar20[1] + (long)iVar14 * 8);
  }
  puVar22 = (undefined8 *)*puVar22;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *(int *)((long)puVar22 + 4) = (int)param_1[0xab];
  uVar23 = *(uint *)((long)param_1 + 0x55c);
  iVar14 = (int)param_1[0xab];
  uVar12 = iVar14 + 1;
  if (iVar14 < (int)(uVar23 & 0x3fffffff)) {
    lVar6 = param_1[0xaa];
  }
  else {
    lVar6 = param_1[0xaa];
    if (0x3ffffffe < iVar14) {
      FUN_032bd0a8(uVar12);
      uVar23 = *(uint *)((long)param_1 + 0x55c);
    }
    uVar23 = (uVar23 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar23) {
      uVar23 = 0x3fffffff;
    }
    uVar1 = uVar12;
    if ((int)uVar12 <= (int)uVar23) {
      uVar1 = uVar23;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar1,8,lVar6,iVar14,(uint *)((long)param_1 + 0x55c));
    iVar14 = (int)param_1[0xab];
    param_1[0xaa] = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar14 * 8) = puVar22;
  *(uint *)(param_1 + 0xab) = uVar12;
  param_1[0xc6] = (long)"hknpSimulationContext::m_deferredCommandStream";
  return;
}


