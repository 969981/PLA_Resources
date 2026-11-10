/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246aa8; name: FUN_03246aa8
 */


undefined8 FUN_03246aa8(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  ulong local_50;
  undefined *puStack_48;
  int *local_40;
  uint *puStack_38;
  
  puVar3 = PTR_PTR_0434a080;
  local_68 = (undefined8 *)0x0;
  local_60 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_58 = uVar1;
  if ((int)uVar1 < 1) {
    local_68 = (undefined8 *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0x80000000;
  }
  else {
    local_54 = 0xc;
    if (((ulong)((long)(int)uVar1 * 3) >> 0x1d & 0x1ffffffff) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &local_54;
      puStack_38 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_50);
    }
    local_50 = -((ulong)(uVar1 * 3 >> 0x1d) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar1 * 3) & 0x3fffffff) << 2;
    local_68 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_50,&local_50);
    local_60._4_4_ = 0;
    if (local_54 != 0) {
      local_60._4_4_ = (int)local_50 / local_54;
    }
    puVar5 = local_68;
    if (uVar1 != 1) {
      iVar7 = (uVar1 & 1) - uVar1;
      puVar4 = local_68;
      puVar9 = param_2;
      do {
        uVar8 = *puVar9;
        puVar5 = puVar4 + 3;
        param_2 = puVar9 + 3;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar4 = uVar8;
        uVar2 = *(undefined4 *)((long)puVar9 + 0x14);
        iVar7 = iVar7 + 2;
        *(undefined8 *)((long)puVar4 + 0xc) = *(undefined8 *)((long)puVar9 + 0xc);
        *(undefined4 *)((long)puVar4 + 0x14) = uVar2;
        puVar4 = puVar5;
        puVar9 = param_2;
      } while (iVar7 != 0);
    }
    local_60._0_4_ = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar8 = *param_2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar5 = uVar8;
    }
  }
  FUN_03252884(param_1,&local_68);
  uVar1 = local_60._4_4_;
  uVar6 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_68 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_68,(uVar6 & 0x3fffffff) * 0xc);
  }
  return 1;
}


