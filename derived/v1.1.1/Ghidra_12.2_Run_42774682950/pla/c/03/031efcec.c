/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031efcec; name: FUN_031efcec
 */


void FUN_031efcec(long *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  uint *puVar10;
  uint **ppuVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long local_c8;
  undefined8 local_c0;
  uint *puStack_b8;
  uint *local_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  int local_98;
  int local_94 [9];
  ulong local_70;
  uint local_64;
  
  puVar3 = PTR_PTR_0434a090;
  uVar9 = (ulong)((long)param_3 - (long)param_2) >> 2;
  uVar15 = (ulong)((long)param_5 - (long)param_4) >> 2;
  uVar5 = (int)uVar9 + 4;
  if ((int)uVar5 < 1) {
    local_c8 = 0;
    uVar5 = 0x80000000;
  }
  else {
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5);
    }
    local_70 = -(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5;
    local_64 = uVar5;
    if (uVar5 >> 0x1e != 0) {
      local_c0 = 1;
      puStack_b8 = (uint *)&DAT_0411b3b8;
      local_b0 = &local_64;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_c0);
    }
    local_c8 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_70,&local_70);
    if (local_70 < 0x7ffffffe0) {
      uVar5 = (uint)(local_70 >> 5);
    }
    else {
      uVar5 = 0x3fffffff;
    }
  }
  if (param_2 == param_3) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    lVar4 = local_c8;
    do {
      piVar12 = param_2 + 1;
      pauVar8 = (undefined1 (*) [16])(*param_1 + (long)*param_2 * 0x50);
      auVar18 = NEON_fmin(*pauVar8,pauVar8[2],4);
      puStack_b8 = auVar18._8_8_;
      local_c0 = auVar18._0_8_;
      auVar18 = NEON_fmax(pauVar8[1],pauVar8[3],4);
      uVar16 = uVar16 + 1;
      puStack_a8 = auVar18._8_8_;
      local_b0 = auVar18._0_8_;
      FUN_032bab40(lVar4,&local_c0);
      lVar4 = lVar4 + 0x20;
      param_2 = piVar12;
    } while (param_3 != piVar12);
    uVar16 = uVar16 & 0xffffffff;
  }
  uVar6 = (int)uVar15 + 4;
  if ((int)uVar6 < 1) {
    lVar4 = 0;
    uVar6 = 0x80000000;
  }
  else {
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
    }
    local_70 = -(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5;
    local_64 = uVar6;
    if (uVar6 >> 0x1e != 0) {
      local_c0 = 1;
      local_b0 = &local_64;
      puStack_b8 = (uint *)&DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_c0);
    }
    lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_70,&local_70);
    if (local_70 < 0x7ffffffe0) {
      uVar6 = (uint)(local_70 >> 5);
    }
    else {
      uVar6 = 0x3fffffff;
    }
  }
  if (param_4 == param_5) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    lVar14 = lVar4;
    do {
      piVar12 = param_4 + 1;
      pauVar8 = (undefined1 (*) [16])(param_1[2] + (long)*param_4 * 0x50);
      auVar18 = NEON_fmin(*pauVar8,pauVar8[2],4);
      puStack_b8 = auVar18._8_8_;
      local_c0 = auVar18._0_8_;
      auVar18 = NEON_fmax(pauVar8[1],pauVar8[3],4);
      uVar17 = uVar17 + 1;
      puStack_a8 = auVar18._8_8_;
      local_b0 = auVar18._0_8_;
      FUN_032bab40(lVar14,&local_c0);
      lVar14 = lVar14 + 0x20;
      param_4 = piVar12;
    } while (param_5 != piVar12);
    uVar17 = uVar17 & 0xffffffff;
  }
  puVar1 = (undefined4 *)(local_c8 + uVar16 * 0x20);
  puVar2 = (undefined4 *)(lVar4 + uVar17 * 0x20);
  *puVar1 = 0xffffffff;
  *puVar2 = 0xffffffff;
  puVar1[8] = 0xffffffff;
  puVar2[8] = 0xffffffff;
  puVar1[0x10] = 0xffffffff;
  puVar2[0x10] = 0xffffffff;
  puVar1[0x18] = 0xffffffff;
  puVar2[0x18] = 0xffffffff;
  FUN_032ba5a0(local_c8,uVar9 & 0xffffffff);
  FUN_032ba5a0(lVar4,uVar15 & 0xffffffff);
  FUN_032baa30(&local_c0,local_c8,uVar9 & 0xffffffff,lVar4,uVar15 & 0xffffffff);
  if (0 < local_98) {
    while (0 < local_94[0]) {
      puVar13 = local_b0;
      puVar10 = puStack_a8;
      if ((uint)local_c0 != 0) {
        puVar13 = puStack_a0;
        puVar10 = local_b0;
      }
      FUN_031f01b4(param_1,CONCAT44(puVar13[3],puVar10[3]),param_6);
      local_b0 = local_b0 + 8;
      puVar10 = local_b0;
      puVar13 = puStack_b8;
      uVar7 = (uint)local_c0;
      do {
        if (*puVar10 < puVar13[4]) {
          do {
            if (-1 < (int)(puVar10[5] - puVar13[1] | puVar13[5] - puVar10[1] |
                           puVar13[6] - puVar10[2] | puVar10[6] - puVar13[2])) {
              local_c0 = CONCAT44(local_c0._4_4_,uVar7);
              puStack_b8 = puVar13;
              local_b0 = puVar10;
              goto LAB_031f00ec;
            }
            puVar10 = puVar10 + 8;
          } while (*puVar10 < puVar13[4]);
        }
        ppuVar11 = &puStack_a0;
        if (uVar7 == 0) {
          ppuVar11 = &puStack_a8;
        }
        *ppuVar11 = *ppuVar11 + 8;
        piVar12 = local_94;
        if (uVar7 == 0) {
          piVar12 = &local_98;
        }
        *piVar12 = *piVar12 + -1;
        if (local_98 < 1) goto LAB_031f00f4;
        puVar13 = puStack_a0;
        puVar10 = puStack_a8;
        if (*puStack_a8 <= *puStack_a0) {
          puVar13 = puStack_a8;
          puVar10 = puStack_a0;
        }
        uVar7 = (uint)(*puStack_a0 < *puStack_a8);
      } while (0 < local_94[0]);
LAB_031f00ec:
      if (local_98 < 1) break;
    }
  }
LAB_031f00f4:
  if ((lVar4 != 0) && (-1 < (int)uVar6)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar4,(ulong)(uVar6 & 0x3fffffff) << 5);
  }
  if ((local_c8 != 0) && (-1 < (int)uVar5)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_c8,(ulong)(uVar5 & 0x3fffffff) << 5);
  }
  return;
}


