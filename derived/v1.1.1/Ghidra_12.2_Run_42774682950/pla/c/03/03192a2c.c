/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03192a2c; name: FUN_03192a2c
 */


void FUN_03192a2c(long *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  ulong local_c8;
  ulong local_c0;
  ulong local_b0;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar1 = param_2[1];
  lVar17 = (long)(int)uVar1;
  if (uVar1 != (uint)lVar7) {
    lVar7 = FUN_031920dc(param_1,*param_1 + lVar7 * 0x38);
    *(uint *)(lVar7 + 4) = uVar1;
  }
  puVar4 = PTR_PTR_0434a080;
  lVar7 = *param_1;
  lVar15 = lVar7 + lVar17 * 0x38;
  iVar2 = *(int *)(lVar15 + 0x34);
  *(undefined4 *)(lVar15 + 0x30) = 0;
  if ((-1 < iVar2) && (lVar6 = *(long *)(lVar15 + 0x28), lVar6 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar6,iVar2 << 2);
  }
  lVar6 = lVar7 + lVar17 * 0x38;
  *(long *)(lVar15 + 0x28) = 0;
  *(int *)(lVar15 + 0x34) = -0x80000000;
  iVar2 = *(int *)(lVar6 + 0x24);
  *(undefined4 *)(lVar6 + 0x20) = 0;
  if ((-1 < iVar2) && (lVar20 = *(long *)(lVar6 + 0x18), lVar20 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar20,iVar2 << 2);
  }
  lVar7 = lVar7 + lVar17 * 0x38;
  *(long *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x24) = -0x80000000;
  puVar12 = (uint *)(lVar7 + 0x14);
  uVar3 = *puVar12;
  *(undefined4 *)(lVar7 + 0x10) = 0;
  if ((-1 < (int)uVar3) && (lVar7 = *(long *)(lVar15 + 8), lVar7 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar7,((ulong)uVar3 & 0x3fffffff) * 0x14);
  }
  *(long *)(lVar15 + 8) = 0;
  *puVar12 = 0x80000000;
  lVar7 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar7;
  if ((uint)lVar7 != uVar1) {
    lVar15 = *param_1;
    puVar10 = (undefined4 *)(lVar15 + lVar7 * 0x38);
    puVar19 = (undefined4 *)(lVar15 + lVar17 * 0x38);
    *puVar19 = *puVar10;
    *(long *)(puVar19 + 2) = 0;
    *(undefined8 *)(puVar19 + 4) = 0x8000000000000000;
    puVar12 = puVar10 + 5;
    plVar11 = (long *)(puVar10 + 2);
    if ((int)*puVar12 < 0) {
      local_84 = 0x14;
      piVar21 = (int *)(lVar15 + lVar7 * 0x38 + 0x10);
      iVar2 = *piVar21;
      local_90 = (long)iVar2 * 0x14;
      if (iVar2 < 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        puStack_68 = &local_84;
        local_70 = piVar21;
        FUN_03320b50(0x77a36e5f,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x27,"Array size overflow {}*{}",&local_80);
        iVar2 = *piVar21;
      }
      if (iVar2 == 0) {
        *puVar12 = 0;
        *plVar11 = 0;
      }
      else {
        pvVar5 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
        if (pvVar5 != (void *)0x0) {
          local_b0 = local_90 / 0x14;
          if (0x3ffffffe < local_b0) {
            local_b0 = 0x3fffffff;
          }
          memcpy(pvVar5,(void *)*plVar11,local_90);
          *plVar11 = (long)pvVar5;
          *puVar12 = (uint)local_b0;
        }
      }
    }
    *(long *)(puVar19 + 2) = *plVar11;
    lVar20 = lVar15 + lVar7 * 0x38;
    lVar6 = lVar15 + lVar17 * 0x38;
    puVar19[4] = *(undefined4 *)(lVar20 + 0x10);
    puVar19[5] = *puVar12;
    *plVar11 = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(long *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0x8000000000000000;
    piVar21 = (int *)(lVar20 + 0x24);
    plVar22 = (long *)(lVar20 + 0x18);
    if (*piVar21 < 0) {
      local_84 = 4;
      piVar13 = (int *)(lVar15 + lVar7 * 0x38 + 0x20);
      iVar2 = *piVar13;
      local_90 = (long)iVar2 << 2;
      if (iVar2 < 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        puStack_68 = &local_84;
        local_70 = piVar13;
        FUN_03320b50(0x77a36e5f,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x27,"Array size overflow {}*{}",&local_80);
        iVar2 = *piVar13;
      }
      if (iVar2 == 0) {
        *piVar21 = 0;
        *plVar22 = 0;
      }
      else {
        pvVar5 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
        if (pvVar5 != (void *)0x0) {
          local_c0 = local_90 >> 2;
          if (0x3ffffffe < local_c0) {
            local_c0 = 0x3fffffff;
          }
          memcpy(pvVar5,(void *)*plVar22,local_90);
          *plVar22 = (long)pvVar5;
          *piVar21 = (int)local_c0;
        }
      }
    }
    *(long *)(lVar6 + 0x18) = *plVar22;
    lVar14 = lVar15 + lVar7 * 0x38;
    lVar17 = lVar15 + lVar17 * 0x38;
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar14 + 0x20);
    *(int *)(lVar6 + 0x24) = *piVar21;
    *plVar22 = 0;
    *(undefined8 *)(lVar20 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined8 *)(lVar17 + 0x30) = 0x8000000000000000;
    piVar13 = (int *)(lVar14 + 0x34);
    puVar18 = (undefined8 *)(lVar14 + 0x28);
    if (*piVar13 < 0) {
      local_84 = 4;
      piVar16 = (int *)(lVar15 + lVar7 * 0x38 + 0x30);
      iVar2 = *piVar16;
      local_90 = (long)iVar2 << 2;
      if (iVar2 < 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        puStack_68 = &local_84;
        local_70 = piVar16;
        FUN_03320b50(0x77a36e5f,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x27,"Array size overflow {}*{}",&local_80);
        iVar2 = *piVar16;
      }
      if (iVar2 == 0) {
        *piVar13 = 0;
        *puVar18 = 0;
      }
      else {
        pvVar5 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
        if (pvVar5 != (void *)0x0) {
          local_c8 = local_90 >> 2;
          if (0x3ffffffe < local_c8) {
            local_c8 = 0x3fffffff;
          }
          memcpy(pvVar5,(void *)*puVar18,local_90);
          *puVar18 = pvVar5;
          *piVar13 = (int)local_c8;
        }
      }
    }
    *(undefined8 *)(lVar17 + 0x28) = *puVar18;
    *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(lVar15 + lVar7 * 0x38 + 0x30);
    *(int *)(lVar17 + 0x34) = *piVar13;
    *puVar18 = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *piVar13 = -0x80000000;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    if ((-1 < *piVar21) && (*plVar22 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*plVar22,*piVar21 << 2);
    }
    *plVar22 = 0;
    *piVar21 = -0x80000000;
    *(undefined4 *)(lVar20 + 0x10) = 0;
    if ((-1 < (int)*puVar12) && (*plVar11 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*plVar11,((ulong)*puVar12 & 0x3fffffff) * 0x14);
    }
    *plVar11 = 0;
    *puVar12 = 0x80000000;
  }
  lVar7 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar9 = ((long)param_2 - lVar7 >> 3) + 1U & uVar8;
  while (puVar12 = (uint *)(lVar7 + uVar9 * 8), -1 < (int)puVar12[1]) {
    lVar17 = lVar7 + ((ulong)*puVar12 & uVar8 & 0xffffffff) * 8;
    uVar9 = (ulong)(int)uVar8;
    if ((uVar9 & (long)param_2 - lVar17 >> 3) < (uVar9 & (long)puVar12 - lVar17 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar12;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar9 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar12;
    }
    uVar9 = ((ulong)((long)puVar12 - lVar7) >> 3) + 1 & uVar9;
  }
  param_2[1] = 0xffffffff;
  return;
}


