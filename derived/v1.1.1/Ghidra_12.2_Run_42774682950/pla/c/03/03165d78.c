/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03165d78; name: FUN_03165d78
 */


void FUN_03165d78(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined2 *puVar19;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  *param_1 = &PTR_LAB_0430b128;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar6;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  puVar8 = PTR_PTR_0434a080;
  uVar7 = *(uint *)(param_2 + 0x30);
  puVar17 = *(undefined4 **)(param_2 + 0x28);
  local_38 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    uVar15 = (ulong)(int)uVar7;
    local_34 = 4;
    if ((uVar15 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar15 >> 0x1d & 1) & 0xffffffff00000000 | (uVar15 & 0x3fffffff) << 2;
    puVar9 = (undefined4 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_60,&local_60);
    param_1[5] = puVar9;
    iVar16 = 0;
    if (local_34 != 0) {
      iVar16 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 6) = uVar7;
    *(int *)((long)param_1 + 0x34) = iVar16;
    uVar4 = uVar7 & 3;
    if (2 < uVar7 - 1) {
      iVar16 = uVar4 - uVar7;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar3 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        iVar16 = iVar16 + 4;
        puVar10[3] = *puVar3;
        puVar10 = puVar9;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = *puVar17;
      puVar17 = puVar17 + 1;
      *puVar9 = uVar5;
      puVar9 = puVar9 + 1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x40);
  if ((int)uVar7 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_60 = (ulong)(int)uVar7;
    puVar18 = *(undefined1 **)(param_2 + 0x38);
    puVar11 = (undefined1 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_60,&local_60);
    *(uint *)(param_1 + 8) = uVar7;
    *(int *)((long)param_1 + 0x44) = (int)local_60;
    uVar4 = uVar7 & 3;
    param_1[7] = puVar11;
    if (2 < uVar7 - 1) {
      iVar16 = uVar4 - uVar7;
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar18;
        puVar14[1] = puVar18[1];
        puVar14[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar11 = puVar14 + 4;
        puVar18 = puVar18 + 4;
        iVar16 = iVar16 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar18;
      puVar11 = puVar11 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x58);
  puVar19 = *(undefined2 **)(param_2 + 0x50);
  local_38 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    uVar15 = (ulong)(int)uVar7;
    local_34 = 2;
    if ((uVar15 & 0x7fffffffc0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar15 >> 0x1e & 1) & 0xffffffff00000000 | (uVar15 & 0x7fffffff) << 1;
    puVar12 = (undefined2 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_60,&local_60);
    param_1[10] = puVar12;
    iVar16 = 0;
    if (local_34 != 0) {
      iVar16 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0xb) = uVar7;
    *(int *)((long)param_1 + 0x5c) = iVar16;
    uVar4 = uVar7 & 3;
    if (2 < uVar7 - 1) {
      iVar16 = uVar4 - uVar7;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar19;
        puVar13[1] = puVar19[1];
        puVar13[2] = puVar19[2];
        puVar2 = puVar19 + 3;
        puVar12 = puVar13 + 4;
        puVar19 = puVar19 + 4;
        iVar16 = iVar16 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar19;
      puVar12 = puVar12 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x68);
  if ((int)uVar7 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_60 = (ulong)(int)uVar7;
    puVar18 = *(undefined1 **)(param_2 + 0x60);
    puVar11 = (undefined1 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_60,&local_60);
    *(uint *)(param_1 + 0xd) = uVar7;
    *(int *)((long)param_1 + 0x6c) = (int)local_60;
    uVar4 = uVar7 & 3;
    param_1[0xc] = puVar11;
    if (2 < uVar7 - 1) {
      iVar16 = uVar4 - uVar7;
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar18;
        puVar14[1] = puVar18[1];
        puVar14[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar11 = puVar14 + 4;
        puVar18 = puVar18 + 4;
        iVar16 = iVar16 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar18;
      puVar11 = puVar11 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  return;
}


