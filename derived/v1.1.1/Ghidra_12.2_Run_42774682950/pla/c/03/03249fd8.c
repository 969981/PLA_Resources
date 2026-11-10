/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249fd8; name: FUN_03249fd8
 */


undefined8 FUN_03249fd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  ulong local_50;
  undefined *puStack_48;
  int *local_40;
  int *piStack_38;
  
  puVar3 = PTR_PTR_0434a080;
  local_68 = (undefined8 *)0x0;
  local_60 = 0x8000000000000000;
  iVar2 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_58 = iVar2;
  if (iVar2 < 1) {
    local_68 = (undefined8 *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0x80000000;
  }
  else {
    uVar6 = (ulong)iVar2;
    local_54 = 0x10;
    if ((uVar6 & 0xffffffff8000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &local_54;
      piStack_38 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_50);
    }
    local_50 = -(uVar6 >> 0x1b & 1) & 0xffffffff00000000 | (uVar6 & 0xfffffff) << 4;
    local_68 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_50,&local_50);
    local_60._4_4_ = 0;
    puVar5 = local_68;
    iVar7 = iVar2;
    if (local_54 != 0) {
      local_60._4_4_ = (int)local_50 / local_54;
    }
    do {
      uVar1 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar1;
      iVar7 = iVar7 + -1;
      puVar5 = puVar5 + 2;
      param_2 = param_2 + 2;
      local_60._0_4_ = iVar2;
    } while (iVar7 != 0);
  }
  FUN_03258924(param_1,&local_68);
  uVar4 = local_60._4_4_;
  uVar6 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (local_68 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_68,(uVar6 & 0x3fffffff) << 4);
  }
  return 1;
}


