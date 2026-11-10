/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03191d80; name: FUN_03191d80
 */


void FUN_03191d80(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar4 = PTR_PTR_0434a080;
  uVar9 = *(uint *)(param_2 + 1);
  puVar10 = (undefined4 *)*param_2;
  if ((int)uVar9 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    local_34 = 0x14;
    local_38 = uVar9;
    if (((ulong)((long)(int)uVar9 * 5) >> 0x1d & 0x1ffffffff) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -((ulong)(uVar9 * 5 >> 0x1d) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar9 * 5) & 0x3fffffff) << 2;
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_60,&local_60);
    *param_1 = puVar5;
    iVar8 = 0;
    if (local_34 != 0) {
      iVar8 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 1) = uVar9;
    *(int *)((long)param_1 + 0xc) = iVar8;
    do {
      *puVar5 = *puVar10;
      puVar5[1] = puVar10[1];
      uVar3 = puVar10[4];
      uVar9 = uVar9 - 1;
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar10 + 2);
      puVar5[4] = uVar3;
      puVar10 = puVar10 + 5;
      puVar5 = puVar5 + 5;
    } while (uVar9 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 3);
  puVar10 = (undefined4 *)param_2[2];
  if ((int)uVar9 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    uVar7 = (ulong)(int)uVar9;
    local_34 = 4;
    local_38 = uVar9;
    if ((uVar7 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar7 >> 0x1d & 1) & 0xffffffff00000000 | (uVar7 & 0x3fffffff) << 2;
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_60,&local_60);
    param_1[2] = puVar5;
    iVar8 = 0;
    if (local_34 != 0) {
      iVar8 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 3) = uVar9;
    *(int *)((long)param_1 + 0x1c) = iVar8;
    uVar2 = uVar9 & 3;
    if (2 < uVar9 - 1) {
      iVar8 = uVar2 - uVar9;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar10;
        puVar6[1] = puVar10[1];
        puVar6[2] = puVar10[2];
        puVar1 = puVar10 + 3;
        puVar5 = puVar6 + 4;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar10;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 5);
  puVar10 = (undefined4 *)param_2[4];
  if ((int)uVar9 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    uVar7 = (ulong)(int)uVar9;
    local_34 = 4;
    local_38 = uVar9;
    if ((uVar7 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar7 >> 0x1d & 1) & 0xffffffff00000000 | (uVar7 & 0x3fffffff) << 2;
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_60,&local_60);
    param_1[4] = puVar5;
    iVar8 = 0;
    if (local_34 != 0) {
      iVar8 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 5) = uVar9;
    *(int *)((long)param_1 + 0x2c) = iVar8;
    uVar2 = uVar9 & 3;
    if (2 < uVar9 - 1) {
      iVar8 = uVar2 - uVar9;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar10;
        puVar6[1] = puVar10[1];
        puVar6[2] = puVar10[2];
        puVar1 = puVar10 + 3;
        puVar5 = puVar6 + 4;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar10;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return;
}


