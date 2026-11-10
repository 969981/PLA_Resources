/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03141290; name: FUN_03141290
 */


void FUN_03141290(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  puVar3 = PTR_PTR_0434a080;
  uVar2 = *(uint *)(param_2 + 1);
  puVar8 = (undefined8 *)*param_2;
  if ((int)uVar2 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    uVar6 = (ulong)(int)uVar2;
    local_34 = 0x10;
    local_38 = uVar2;
    if ((uVar6 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar6 >> 0x1b & 1) & 0xffffffff00000000 | (uVar6 & 0xfffffff) << 4;
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
    *param_1 = (long)puVar4;
    iVar7 = 0;
    if (local_34 != 0) {
      iVar7 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 1) = uVar2;
    *(int *)((long)param_1 + 0xc) = iVar7;
    if (uVar2 != 1) {
      iVar7 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar8[1];
        *puVar5 = *puVar8;
        puVar5[3] = puVar8[3];
        puVar1 = puVar8 + 2;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar8[1];
      *puVar4 = *puVar8;
    }
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 3);
  puVar8 = (undefined8 *)param_2[2];
  if ((int)uVar2 < 1) {
    param_1[2] = 0;
    param_1[3] = -0x8000000000000000;
  }
  else {
    uVar6 = (ulong)(int)uVar2;
    local_34 = 0x10;
    local_38 = uVar2;
    if ((uVar6 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar6 >> 0x1b & 1) & 0xffffffff00000000 | (uVar6 & 0xfffffff) << 4;
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
    param_1[2] = (long)puVar4;
    iVar7 = 0;
    if (local_34 != 0) {
      iVar7 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 3) = uVar2;
    *(int *)((long)param_1 + 0x1c) = iVar7;
    if (uVar2 != 1) {
      iVar7 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar8[1];
        *puVar5 = *puVar8;
        puVar5[3] = puVar8[3];
        puVar1 = puVar8 + 2;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar8[1];
      *puVar4 = *puVar8;
    }
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 5);
  puVar8 = (undefined8 *)param_2[4];
  if ((int)uVar2 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    uVar6 = (ulong)(int)uVar2;
    local_34 = 0x10;
    local_38 = uVar2;
    if ((uVar6 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar6 >> 0x1b & 1) & 0xffffffff00000000 | (uVar6 & 0xfffffff) << 4;
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
    param_1[4] = (long)puVar4;
    iVar7 = 0;
    if (local_34 != 0) {
      iVar7 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 5) = uVar2;
    *(int *)((long)param_1 + 0x2c) = iVar7;
    if (uVar2 != 1) {
      iVar7 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar8[1];
        *puVar5 = *puVar8;
        puVar5[3] = puVar8[3];
        puVar1 = puVar8 + 2;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar8[1];
      *puVar4 = *puVar8;
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 7);
  puVar8 = (undefined8 *)param_2[6];
  if ((int)uVar2 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    uVar6 = (ulong)(int)uVar2;
    local_34 = 0x10;
    local_38 = uVar2;
    if ((uVar6 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar6 >> 0x1b & 1) & 0xffffffff00000000 | (uVar6 & 0xfffffff) << 4;
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
    param_1[6] = (long)puVar4;
    iVar7 = 0;
    if (local_34 != 0) {
      iVar7 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 7) = uVar2;
    *(int *)((long)param_1 + 0x3c) = iVar7;
    if (uVar2 != 1) {
      iVar7 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar8[1];
        *puVar5 = *puVar8;
        puVar5[3] = puVar8[3];
        puVar1 = puVar8 + 2;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar8[1];
      *puVar4 = *puVar8;
    }
  }
  return;
}


