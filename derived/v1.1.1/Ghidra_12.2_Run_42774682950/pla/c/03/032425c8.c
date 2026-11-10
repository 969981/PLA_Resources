/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032425c8; name: FUN_032425c8
 */


undefined8 FUN_032425c8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  ulong local_50;
  undefined *puStack_48;
  int *local_40;
  uint *puStack_38;
  
  puVar5 = PTR_PTR_0434a080;
  local_68 = (undefined8 *)0x0;
  local_60 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  puVar9 = (undefined8 *)*param_2;
  local_58 = uVar4;
  if ((int)uVar4 < 1) {
    local_68 = (undefined8 *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0x80000000;
  }
  else {
    uVar7 = (ulong)(int)uVar4;
    local_54 = 8;
    if ((uVar7 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &local_54;
      puStack_38 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_50);
    }
    local_50 = -(uVar7 >> 0x1c & 1) & 0xffffffff00000000 | (uVar7 & 0x1fffffff) << 3;
    local_68 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_50,&local_50);
    local_60._4_4_ = 0;
    if (local_54 != 0) {
      local_60._4_4_ = (int)local_50 / local_54;
    }
    uVar3 = uVar4 & 3;
    puVar2 = local_68;
    if (2 < uVar4 - 1) {
      iVar8 = uVar3 - uVar4;
      puVar6 = local_68;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar2 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar2;
      } while (iVar8 != 0);
    }
    for (; local_60._0_4_ = uVar4, uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar9;
      puVar2 = puVar2 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  FUN_0324b7d0(param_1,&local_68);
  uVar4 = local_60._4_4_;
  uVar7 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (local_68 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_68,(uVar7 & 0x3fffffff) << 3);
  }
  return 1;
}


