/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032483f8; name: FUN_032483f8
 */


undefined8 FUN_032483f8(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_70;
  undefined8 local_68;
  long local_60;
  undefined *puStack_58;
  int *local_50;
  int *piStack_48;
  int local_38;
  int local_34;
  
  puVar3 = PTR_PTR_0434a080;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  iVar8 = *(int *)(param_2 + 1);
  puVar9 = (undefined4 *)*param_2;
  local_38 = iVar8;
  if (iVar8 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    local_34 = 0x38;
    if ((ulong)((long)iVar8 * 0x38) >> 0x1f != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      piStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = (long)iVar8 * 0x3800000000 >> 0x20;
    local_70 = (undefined4 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
    iVar2 = 0;
    if (local_34 != 0) {
      iVar2 = (int)local_60 / local_34;
    }
    local_68 = CONCAT44(iVar2,iVar8);
    puVar6 = local_70;
    do {
      *puVar6 = *puVar9;
      FUN_03191d80(puVar6 + 2,puVar9 + 2);
      iVar8 = iVar8 + -1;
      puVar6 = puVar6 + 0xe;
      puVar9 = puVar9 + 0xe;
    } while (iVar8 != 0);
  }
  FUN_03254a00(param_1,&local_70);
  puVar9 = local_70;
  if ((int)local_68 != 0) {
    lVar7 = (long)(int)local_68 * 0x38;
    do {
      iVar8 = *(int *)((long)puVar9 + lVar7 + -4);
      *(undefined4 *)((long)puVar9 + lVar7 + -8) = 0;
      if ((-1 < iVar8) && (lVar4 = *(long *)((long)puVar9 + lVar7 + -0x10), lVar4 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar4,iVar8 << 2);
      }
      iVar8 = *(int *)((long)puVar9 + lVar7 + -0x14);
      *(undefined8 *)((long)puVar9 + lVar7 + -0x10) = 0;
      *(undefined4 *)((long)puVar9 + lVar7 + -4) = 0x80000000;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x18) = 0;
      if ((-1 < iVar8) && (lVar4 = *(long *)((long)puVar9 + lVar7 + -0x20), lVar4 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar4,iVar8 << 2);
      }
      uVar1 = *(uint *)((long)puVar9 + lVar7 + -0x24);
      *(undefined8 *)((long)puVar9 + lVar7 + -0x20) = 0;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x28) = 0;
      if ((-1 < (int)uVar1) && (lVar4 = *(long *)((long)puVar9 + lVar7 + -0x30), lVar4 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar4,((ulong)uVar1 & 0x3fffffff) * 0x14);
      }
      lVar4 = lVar7 + -0x38;
      *(undefined8 *)((long)puVar9 + lVar7 + -0x30) = 0;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x24) = 0x80000000;
      lVar7 = lVar4;
    } while (lVar4 != 0);
  }
  lVar7 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_70,(uVar5 & 0x3fffffff) * 0x38);
  }
  return 1;
}


