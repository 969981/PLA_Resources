/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274c18; name: FUN_03274c18
 */


undefined8 FUN_03274c18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  ulong local_50;
  undefined *puStack_48;
  int *local_40;
  uint *puStack_38;
  
  puVar4 = PTR_PTR_0434a080;
  local_68 = (undefined8 *)0x0;
  local_60 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_58 = uVar3;
  if ((int)uVar3 < 1) {
    local_68 = (undefined8 *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0x80000000;
  }
  else {
    local_54 = 0x30;
    if (((ulong)((long)(int)uVar3 * 3) >> 0x1b & 0x1ffffffff) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &local_54;
      puStack_38 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_50);
    }
    local_50 = -((ulong)(uVar3 * 3 >> 0x1b) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 3) & 0xfffffff) << 4;
    local_68 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_50,&local_50);
    local_60._4_4_ = 0;
    if (local_54 != 0) {
      local_60._4_4_ = (int)local_50 / local_54;
    }
    puVar6 = local_68;
    if (uVar3 != 1) {
      iVar8 = (uVar3 & 1) - uVar3;
      puVar5 = local_68;
      puVar10 = param_2;
      do {
        uVar9 = puVar10[5];
        iVar8 = iVar8 + 2;
        puVar5[3] = puVar10[3];
        puVar5[5] = uVar9;
        puVar5[1] = puVar10[1];
        *puVar5 = *puVar10;
        uVar9 = puVar10[2];
        puVar5[4] = puVar10[4];
        puVar5[2] = uVar9;
        puVar5[7] = puVar10[7];
        uVar9 = puVar10[8];
        uVar1 = puVar10[9];
        puVar6 = puVar5 + 0xc;
        uVar2 = puVar10[0xb];
        param_2 = puVar10 + 0xc;
        puVar5[10] = puVar10[10];
        puVar5[0xb] = uVar2;
        puVar5[8] = uVar9;
        puVar5[9] = uVar1;
        puVar5[6] = puVar10[6];
        puVar5 = puVar6;
        puVar10 = param_2;
      } while (iVar8 != 0);
    }
    local_60._0_4_ = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar9 = param_2[5];
      puVar6[3] = param_2[3];
      puVar6[5] = uVar9;
      puVar6[1] = param_2[1];
      *puVar6 = *param_2;
      uVar9 = param_2[2];
      puVar6[4] = param_2[4];
      puVar6[2] = uVar9;
    }
  }
  FUN_0327a1b8(param_1,&local_68);
  uVar3 = local_60._4_4_;
  uVar7 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_68 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_68,(uVar7 & 0x3fffffff) * 0x30);
  }
  return 1;
}


