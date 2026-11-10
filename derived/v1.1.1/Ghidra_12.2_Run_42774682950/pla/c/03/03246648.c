/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246648; name: FUN_03246648
 */


undefined8 FUN_03246648(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_70;
  undefined8 local_68;
  long local_60;
  undefined *puStack_58;
  int *local_50;
  int *piStack_48;
  int local_38;
  int local_34;
  
  puVar2 = PTR_PTR_0434a080;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  iVar6 = *(int *)(param_2 + 1);
  puVar7 = (undefined4 *)*param_2;
  local_38 = iVar6;
  if (iVar6 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    local_34 = 0x68;
    if ((ulong)((long)iVar6 * 0x68) >> 0x1f != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      piStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = (long)iVar6 * 0x6800000000 >> 0x20;
    local_70 = (undefined4 *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_60,&local_60);
    iVar1 = 0;
    if (local_34 != 0) {
      iVar1 = (int)local_60 / local_34;
    }
    local_68 = CONCAT44(iVar1,iVar6);
    puVar4 = local_70;
    do {
      *puVar4 = *puVar7;
      FUN_031cf1bc(puVar4 + 2,puVar7 + 2);
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 0x1a;
      puVar7 = puVar7 + 0x1a;
    } while (iVar6 != 0);
  }
  FUN_032524d0(param_1,&local_70);
  puVar7 = local_70;
  if ((int)local_68 != 0) {
    lVar5 = (long)(int)local_68 * 0x68;
    do {
      FUN_031cd728((long)puVar7 + lVar5 + -0x60);
      lVar5 = lVar5 + -0x68;
    } while (lVar5 != 0);
  }
  lVar5 = local_68;
  uVar3 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_70,(uVar3 & 0x3fffffff) * 0x68);
  }
  return 1;
}


