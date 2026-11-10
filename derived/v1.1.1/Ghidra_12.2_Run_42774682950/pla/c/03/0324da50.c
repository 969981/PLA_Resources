/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324da50; name: FUN_0324da50
 */


void FUN_0324da50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  *param_1 = *param_2;
  lVar13 = *(long *)(param_2 + 2);
  *(long *)(param_1 + 2) = lVar13;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
    plVar2 = (long *)(lVar13 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar13 = *(long *)(param_2 + 4);
  *(long *)(param_1 + 4) = lVar13;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
    plVar2 = (long *)(lVar13 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar14 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x16) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 8) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = uVar14;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000000;
  puVar9 = PTR_PTR_0434a080;
  uVar4 = param_2[0x2c];
  puVar19 = *(undefined8 **)(param_2 + 0x2a);
  if ((int)uVar4 < 1) {
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000000;
  }
  else {
    uVar16 = (ulong)(int)uVar4;
    local_84 = 0x10;
    local_88 = uVar4;
    if ((uVar16 & 0xffffffff8000000) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -(uVar16 >> 0x1b & 1) & 0xffffffff00000000 | (uVar16 & 0xfffffff) << 4;
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_80,&local_80);
    *(undefined8 **)(param_1 + 0x2a) = puVar10;
    iVar15 = 0;
    if (local_84 != 0) {
      iVar15 = (int)local_80 / local_84;
    }
    uVar18 = 0;
    param_1[0x2c] = uVar4;
    param_1[0x2d] = iVar15;
    do {
      *puVar10 = 0;
      puVar10[1] = 0x8000000000000000;
      uVar5 = *(uint *)(puVar19 + 1);
      puVar17 = (undefined4 *)*puVar19;
      if ((int)uVar5 < 1) {
        *puVar10 = 0;
        puVar10[1] = 0x8000000000000000;
      }
      else {
        uVar16 = (ulong)(int)uVar5;
        local_84 = 4;
        local_88 = uVar5;
        if ((uVar16 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar16 >> 0x1d & 1) & 0xffffffff00000000 | (uVar16 & 0x3fffffff) << 2;
        puVar11 = (undefined4 *)(**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_80,&local_80);
        *puVar10 = puVar11;
        iVar15 = 0;
        if (local_84 != 0) {
          iVar15 = (int)local_80 / local_84;
        }
        *(uint *)(puVar10 + 1) = uVar5;
        *(int *)((long)puVar10 + 0xc) = iVar15;
        uVar3 = uVar5 & 7;
        if (6 < uVar5 - 1) {
          iVar15 = uVar3 - uVar5;
          puVar12 = puVar11;
          do {
            *puVar12 = *puVar17;
            puVar12[1] = puVar17[1];
            puVar12[2] = puVar17[2];
            puVar12[3] = puVar17[3];
            puVar12[4] = puVar17[4];
            puVar12[5] = puVar17[5];
            puVar12[6] = puVar17[6];
            puVar1 = puVar17 + 7;
            puVar11 = puVar12 + 8;
            puVar17 = puVar17 + 8;
            iVar15 = iVar15 + 8;
            puVar12[7] = *puVar1;
            puVar12 = puVar11;
          } while (iVar15 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar11 = *puVar17;
          puVar11 = puVar11 + 1;
          puVar17 = puVar17 + 1;
        }
      }
      uVar18 = uVar18 + 1;
      puVar10 = puVar10 + 2;
      puVar19 = puVar19 + 2;
    } while (uVar18 != uVar4);
  }
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  uVar4 = param_2[0x30];
  puVar19 = *(undefined8 **)(param_2 + 0x2e);
  if ((int)uVar4 < 1) {
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  }
  else {
    uVar16 = (ulong)(int)uVar4;
    local_84 = 0x40;
    local_88 = uVar4;
    if ((uVar16 & 0x3fffffffe000000) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -(uVar16 >> 0x19 & 1) & 0xffffffff00000000 | (uVar16 & 0x3ffffff) << 6;
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_80,&local_80);
    *(undefined8 **)(param_1 + 0x2e) = puVar10;
    iVar15 = 0;
    if (local_84 != 0) {
      iVar15 = (int)local_80 / local_84;
    }
    uVar18 = 0;
    param_1[0x30] = uVar4;
    param_1[0x31] = iVar15;
    do {
      uVar14 = puVar19[5];
      puVar10[3] = puVar19[3];
      puVar10[5] = uVar14;
      puVar10[1] = puVar19[1];
      *puVar10 = *puVar19;
      uVar14 = puVar19[2];
      puVar10[4] = puVar19[4];
      puVar10[2] = uVar14;
      puVar10[6] = 0;
      puVar10[7] = 0x8000000000000000;
      uVar5 = *(uint *)(puVar19 + 7);
      puVar17 = (undefined4 *)puVar19[6];
      puVar19 = puVar19 + 8;
      if ((int)uVar5 < 1) {
        puVar10[6] = 0;
        puVar10[7] = 0x8000000000000000;
      }
      else {
        uVar16 = (ulong)(int)uVar5;
        local_84 = 4;
        local_88 = uVar5;
        if ((uVar16 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar16 >> 0x1d & 1) & 0xffffffff00000000 | (uVar16 & 0x3fffffff) << 2;
        puVar11 = (undefined4 *)(**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_80,&local_80);
        puVar10[6] = puVar11;
        iVar15 = 0;
        if (local_84 != 0) {
          iVar15 = (int)local_80 / local_84;
        }
        *(uint *)(puVar10 + 7) = uVar5;
        *(int *)((long)puVar10 + 0x3c) = iVar15;
        uVar3 = uVar5 & 7;
        if (6 < uVar5 - 1) {
          iVar15 = uVar3 - uVar5;
          puVar12 = puVar11;
          do {
            *puVar12 = *puVar17;
            puVar12[1] = puVar17[1];
            puVar12[2] = puVar17[2];
            puVar12[3] = puVar17[3];
            puVar12[4] = puVar17[4];
            puVar12[5] = puVar17[5];
            puVar12[6] = puVar17[6];
            puVar1 = puVar17 + 7;
            puVar11 = puVar12 + 8;
            puVar17 = puVar17 + 8;
            iVar15 = iVar15 + 8;
            puVar12[7] = *puVar1;
            puVar12 = puVar11;
          } while (iVar15 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar11 = *puVar17;
          puVar11 = puVar11 + 1;
          puVar17 = puVar17 + 1;
        }
      }
      uVar18 = uVar18 + 1;
      puVar10 = puVar10 + 8;
    } while (uVar18 != uVar4);
  }
  uVar6 = *(undefined2 *)(param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  *(undefined2 *)(param_1 + 0x32) = uVar6;
  return;
}


