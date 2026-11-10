/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03212770; name: FUN_03212770
 */


void FUN_03212770(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  lVar17 = tpidr_el0;
  lVar9 = *(long *)(lVar17 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar9;
    lVar18 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x10);
  }
  if (lVar18 != 0) {
    puVar19 = *(undefined8 **)(lVar18 + 8);
    uVar10 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar10, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TthkaiNavigatorUpdateTasks::makeContext";
      uVar6 = nn::os::GetSystemTick();
      puVar19[1] = uVar6;
      lVar9 = *(long *)(lVar17 + 0x38d490);
    }
  }
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar9;
  }
  plVar3 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x98,0);
  puVar4[0xb] = 0;
  puVar4[0x10] = 0;
  puVar4[0x12] = 0;
  puVar4[0xf] = 0;
  puVar4[10] = 0;
  *puVar4 = &PTR_LAB_042f2918;
  puVar4[1] = 0xffffffff;
  puVar4[2] = 1;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[0x11] = 0;
  puVar4[5] = 0x8000000000000000;
  puVar4[6] = 0;
  puVar4[7] = 0x8000000000000000;
  puVar4[8] = puVar4 + 10;
  puVar4[9] = 0x8000000100000000;
  puVar4[0xe] = 0x8000000100000000;
  puVar4[0xc] = 0;
  puVar4[0xd] = puVar4 + 0xf;
  *param_1 = puVar4;
  puVar2 = PTR_PTR_0434a080;
  puVar19 = *(undefined8 **)(*(long *)(param_2 + 0x438) + 0x20);
  uVar8 = *(uint *)(*(long *)(param_2 + 0x438) + 0x28);
  if ((int)uVar8 < 1) {
    uVar20 = 0;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_90 = (long)(int)uVar8 << 3;
    local_84 = uVar8;
    if (uVar8 >> 0x1e == 0) {
      uVar20 = 0x80000000;
    }
    else {
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
      uVar20 = *(uint *)((long)puVar4 + 0x2c);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_90,&local_90);
    if (-1 < (int)uVar20) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,0,(ulong)(uVar20 & 0x3fffffff) << 3);
    }
    if (local_90 < 0x1fffffff8) {
      uVar7 = (undefined4)(local_90 >> 3);
    }
    else {
      uVar7 = 0x3fffffff;
    }
    uVar20 = *(uint *)(puVar4 + 5);
    *(undefined4 *)((long)puVar4 + 0x2c) = uVar7;
    puVar4[4] = puVar5;
  }
  uVar1 = uVar20;
  if ((int)uVar8 <= (int)uVar20) {
    uVar1 = uVar8;
  }
  if ((puVar5 != puVar19) && (0 < (int)uVar1)) {
    uVar10 = (ulong)uVar1;
    puVar11 = puVar19;
    do {
      uVar10 = uVar10 - 1;
      *puVar5 = *puVar11;
      puVar5 = puVar5 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar10 != 0);
    puVar5 = (undefined8 *)puVar4[4];
  }
  if ((int)uVar20 < (int)uVar8) {
    uVar20 = uVar8 - uVar1 & 3;
    puVar19 = puVar19 + (int)uVar1;
    puVar5 = puVar5 + (int)uVar1;
    if (2 < uVar8 + ~uVar1) {
      iVar14 = (uVar8 - uVar1) - uVar20;
      puVar11 = puVar19;
      puVar13 = puVar5;
      do {
        *puVar13 = *puVar11;
        puVar13[1] = puVar11[1];
        puVar13[2] = puVar11[2];
        puVar19 = puVar11 + 4;
        puVar5 = puVar13 + 4;
        iVar14 = iVar14 + -4;
        puVar13[3] = puVar11[3];
        puVar11 = puVar19;
        puVar13 = puVar5;
      } while (iVar14 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *puVar5 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar19 = (undefined8 *)*param_1;
  }
  else {
    puVar19 = puVar4;
  }
  *(uint *)(puVar4 + 5) = uVar8;
  lVar16 = puVar19[6];
  lVar9 = *(long *)(*(long *)(param_2 + 0x478) + 0x20);
  uVar20 = *(uint *)(*(long *)(param_2 + 0x478) + 0x28);
  uVar8 = *(uint *)((long)puVar19 + 0x3c) & 0x3fffffff;
  lVar17 = lVar16;
  if ((int)uVar8 < (int)uVar20) {
    uVar1 = *(uint *)(puVar19 + 7);
    uVar10 = (ulong)uVar1;
    local_90 = (long)(int)uVar20 << 3;
    local_88 = 8;
    local_84 = uVar20;
    if ((int)uVar20 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
    }
    if ((int)local_84 < (int)uVar8 || 0x3fffffff < (int)local_84) {
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    uVar8 = *(uint *)((long)puVar19 + 0x3c);
    lVar17 = (**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_90,&local_90);
    if (0 < (int)uVar1) {
      uVar15 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        puVar4 = (undefined8 *)(lVar17 + 0x10);
        puVar5 = (undefined8 *)(lVar16 + 0x10);
        do {
          puVar4[-2] = puVar5[-2];
          puVar4[-1] = puVar5[-1];
          *puVar4 = *puVar5;
          puVar11 = puVar5 + 1;
          lVar12 = lVar12 + 4;
          puVar5 = puVar5 + 4;
          puVar4[1] = *puVar11;
          puVar4 = puVar4 + 4;
        } while (uVar10 - uVar15 != lVar12);
      }
      if ((uVar1 & 3) != 0) {
        puVar4 = (undefined8 *)(lVar16 + lVar12 * 8);
        puVar5 = (undefined8 *)(lVar17 + lVar12 * 8);
        do {
          uVar15 = uVar15 - 1;
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar15 != 0);
      }
    }
    if (-1 < (int)uVar8) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar16,((ulong)uVar8 & 0x3fffffff) << 3);
    }
    if (local_90 < 0x1fffffff8) {
      uVar7 = (undefined4)(local_90 >> 3);
    }
    else {
      uVar7 = 0x3fffffff;
    }
    *(undefined4 *)((long)puVar19 + 0x3c) = uVar7;
    puVar19[6] = lVar17;
  }
  uVar8 = *(uint *)(puVar19 + 7);
  if ((int)uVar20 <= (int)*(uint *)(puVar19 + 7)) {
    uVar8 = uVar20;
  }
  if ((lVar17 != lVar9) && (0 < (int)uVar8)) {
    uVar15 = (ulong)uVar8;
    uVar10 = uVar15 & 3;
    if (uVar15 - 1 < 3) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      puVar4 = (undefined8 *)(lVar9 + 0x10);
      puVar5 = (undefined8 *)(lVar17 + 0x10);
      do {
        puVar5[-2] = puVar4[-2];
        puVar5[-1] = puVar4[-1];
        *puVar5 = *puVar4;
        puVar11 = puVar4 + 1;
        lVar16 = lVar16 + 4;
        puVar4 = puVar4 + 4;
        puVar5[1] = *puVar11;
        puVar5 = puVar5 + 4;
      } while (uVar15 - uVar10 != lVar16);
    }
    if ((uVar8 & 3) != 0) {
      puVar4 = (undefined8 *)(lVar17 + lVar16 * 8);
      puVar5 = (undefined8 *)(lVar9 + lVar16 * 8);
      do {
        uVar10 = uVar10 - 1;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar10 != 0);
    }
    lVar17 = puVar19[6];
  }
  iVar14 = uVar20 - uVar8;
  puVar4 = puVar19;
  if (0 < iVar14) {
    puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar8 * 8);
    puVar5 = (undefined8 *)(lVar17 + (long)(int)uVar8 * 8);
    do {
      iVar14 = iVar14 + -1;
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar14 != 0);
    puVar4 = (undefined8 *)*param_1;
  }
  *(uint *)(puVar19 + 7) = uVar20;
  *(undefined4 *)(puVar4 + 0x12) = param_5;
  iVar14 = *(int *)(puVar4 + 5);
  if ((int)(*(uint *)((long)puVar4 + 0x4c) & 0x3fffffff) < iVar14) {
    uVar6 = FUN_03206844(puVar2,iVar14,puVar4[8],*(undefined4 *)(puVar4 + 9));
    puVar4[8] = uVar6;
  }
  if (*(int *)(puVar4 + 9) != iVar14) {
    *(int *)(puVar4 + 9) = iVar14;
  }
  iVar14 = *(int *)(puVar4 + 7);
  if ((int)(*(uint *)((long)puVar4 + 0x74) & 0x3fffffff) < iVar14) {
    uVar6 = FUN_031f40b0(puVar2,iVar14,puVar4[0xd],*(undefined4 *)(puVar4 + 0xe));
    puVar4[0xd] = uVar6;
  }
  if (*(int *)(puVar4 + 0xe) != iVar14) {
    *(int *)(puVar4 + 0xe) = iVar14;
  }
  if (lVar18 != 0) {
    puVar19 = *(undefined8 **)(lVar18 + 8);
    uVar10 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar10, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar19[1] = uVar6;
    }
  }
  return;
}


