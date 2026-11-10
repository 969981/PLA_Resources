/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cf1bc; name: FUN_031cf1bc
 */


void FUN_031cf1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint local_68;
  int local_64;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar7 = PTR_PTR_0434a080;
  uVar3 = *(uint *)(param_2 + 1);
  puVar18 = (undefined4 *)*param_2;
  local_68 = uVar3;
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar3;
    local_64 = 4;
    if ((uVar21 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1d & 1) & 0xffffffff00000000 | (uVar21 & 0x3fffffff) << 2;
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_60,&local_60);
    *param_1 = puVar8;
    iVar15 = 0;
    if (local_64 != 0) {
      iVar15 = (int)local_60 / local_64;
    }
    *(uint *)(param_1 + 1) = uVar3;
    *(int *)((long)param_1 + 0xc) = iVar15;
    uVar13 = uVar3 & 3;
    if (2 < uVar3 - 1) {
      iVar15 = uVar13 - uVar3;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar18;
        puVar9[1] = puVar18[1];
        puVar9[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar8 = puVar9 + 4;
        puVar18 = puVar18 + 4;
        iVar15 = iVar15 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar15 != 0);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar8 = *puVar18;
      puVar8 = puVar8 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  if (*(int *)(param_2[2] + 4) == -2) {
    param_1[2] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    iVar15 = *(int *)(param_2 + 3);
    lVar16 = tpidr_el0;
    lVar14 = *(long *)(lVar16 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
    }
    pvVar12 = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x58),8,iVar15 + 1);
    param_1[2] = pvVar12;
    memcpy(pvVar12,(void *)param_2[2],(long)*(int *)(param_2 + 3) * 8 + 8);
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 5);
  puVar19 = (undefined8 *)param_2[4];
  local_68 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_64 = 0xc;
    if (((ulong)((long)(int)uVar3 * 3) >> 0x1d & 0x1ffffffff) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -((ulong)(uVar3 * 3 >> 0x1d) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 3) & 0x3fffffff) << 2;
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_60,&local_60);
    param_1[4] = puVar10;
    iVar15 = 0;
    if (local_64 != 0) {
      iVar15 = (int)local_60 / local_64;
    }
    *(uint *)(param_1 + 5) = uVar3;
    *(int *)((long)param_1 + 0x2c) = iVar15;
    if (uVar3 != 1) {
      iVar15 = (uVar3 & 1) - uVar3;
      puVar11 = puVar10;
      puVar20 = puVar19;
      do {
        uVar17 = *puVar20;
        puVar10 = puVar11 + 3;
        puVar19 = puVar20 + 3;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 1);
        *puVar11 = uVar17;
        uVar4 = *(undefined4 *)((long)puVar20 + 0x14);
        iVar15 = iVar15 + 2;
        *(undefined8 *)((long)puVar11 + 0xc) = *(undefined8 *)((long)puVar20 + 0xc);
        *(undefined4 *)((long)puVar11 + 0x14) = uVar4;
        puVar11 = puVar10;
        puVar20 = puVar19;
      } while (iVar15 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar17 = *puVar19;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar19 + 1);
      *puVar10 = uVar17;
    }
  }
  if (*(int *)(param_2[6] + 4) == -2) {
    param_1[6] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    iVar15 = *(int *)(param_2 + 7);
    lVar16 = tpidr_el0;
    lVar14 = *(long *)(lVar16 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
    }
    pvVar12 = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x58),8,iVar15 + 1);
    param_1[6] = pvVar12;
    memcpy(pvVar12,(void *)param_2[6],(long)*(int *)(param_2 + 7) * 8 + 8);
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 9);
  puVar18 = (undefined4 *)param_2[8];
  local_68 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar3;
    local_64 = 0x10;
    if ((uVar21 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1b & 1) & 0xffffffff00000000 | (uVar21 & 0xfffffff) << 4;
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_60,&local_60);
    param_1[8] = puVar8;
    iVar15 = 0;
    if (local_64 != 0) {
      iVar15 = (int)local_60 / local_64;
    }
    uVar13 = 0;
    *(uint *)(param_1 + 9) = uVar3;
    *(int *)((long)param_1 + 0x4c) = iVar15;
    do {
      *puVar8 = *puVar18;
      lVar16 = *(long *)(puVar18 + 2);
      *(long *)(puVar8 + 2) = lVar16;
      puVar8 = puVar8 + 4;
      puVar18 = puVar18 + 4;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
        plVar2 = (long *)(lVar16 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  if (*(int *)(param_2[10] + 4) == -2) {
    param_1[10] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    iVar15 = *(int *)(param_2 + 0xb);
    lVar16 = tpidr_el0;
    lVar14 = *(long *)(lVar16 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
    }
    pvVar12 = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x58),8,iVar15 + 1);
    param_1[10] = pvVar12;
    memcpy(pvVar12,(void *)param_2[10],(long)*(int *)(param_2 + 0xb) * 8 + 8);
  }
  return;
}


