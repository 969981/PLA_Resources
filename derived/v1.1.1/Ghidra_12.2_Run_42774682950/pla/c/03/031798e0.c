/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031798e0; name: FUN_031798e0
 */


void FUN_031798e0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a090;
  uVar4 = *(uint *)(param_3 + 1);
  puVar12 = (undefined2 *)*param_3;
  if ((int)uVar4 < 1) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  }
  else {
    uVar10 = (ulong)(int)uVar4;
    local_34 = 2;
    local_38 = uVar4;
    if ((uVar10 & 0x7fffffffc0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar10 >> 0x1e & 1) & 0xffffffff00000000 | (uVar10 & 0x7fffffff) << 1;
    puVar6 = (undefined2 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
    *(undefined2 **)(param_1 + 2) = puVar6;
    iVar11 = 0;
    if (local_34 != 0) {
      iVar11 = (int)local_60 / local_34;
    }
    param_1[4] = uVar4;
    param_1[5] = iVar11;
    uVar3 = uVar4 & 3;
    if (2 < uVar4 - 1) {
      iVar11 = uVar3 - uVar4;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar12;
        puVar7[1] = puVar12[1];
        puVar7[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar6 = puVar7 + 4;
        puVar12 = puVar12 + 4;
        iVar11 = iVar11 + 4;
        puVar7[3] = *puVar1;
        puVar7 = puVar6;
      } while (iVar11 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a080;
  uVar4 = *(uint *)(param_3 + 3);
  puVar13 = (undefined4 *)param_3[2];
  if ((int)uVar4 < 1) {
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  }
  else {
    uVar10 = (ulong)(int)uVar4;
    local_34 = 4;
    local_38 = uVar4;
    if ((uVar10 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar10 >> 0x1d & 1) & 0xffffffff00000000 | (uVar10 & 0x3fffffff) << 2;
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
    *(undefined4 **)(param_1 + 6) = puVar8;
    iVar11 = 0;
    if (local_34 != 0) {
      iVar11 = (int)local_60 / local_34;
    }
    param_1[8] = uVar4;
    param_1[9] = iVar11;
    uVar3 = uVar4 & 3;
    if (2 < uVar4 - 1) {
      iVar11 = (uVar4 & 3) - uVar4;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar13;
        puVar9[1] = puVar13[1];
        puVar9[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar8 = puVar9 + 4;
        puVar13 = puVar13 + 4;
        iVar11 = iVar11 + 4;
        puVar9[3] = *puVar2;
        puVar9 = puVar8;
      } while (iVar11 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar13;
      puVar8 = puVar8 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  param_1[10] = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_3 + 5);
  return;
}


