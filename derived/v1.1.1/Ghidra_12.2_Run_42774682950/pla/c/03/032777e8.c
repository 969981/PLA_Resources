/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032777e8; name: FUN_032777e8
 */


undefined8 FUN_032777e8(undefined8 param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest_00;
  ulong uVar4;
  void *__src_00;
  int iVar5;
  void *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined *puStack_78;
  int *local_70;
  uint *puStack_68;
  uint local_58;
  int local_54;
  
  puVar2 = PTR_PTR_0434a080;
  local_90 = (void *)0x0;
  local_88 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  __src_00 = (void *)*param_2;
  local_58 = uVar1;
  if ((int)uVar1 < 1) {
    local_90 = (void *)0x0;
    local_88 = -0x8000000000000000;
  }
  else {
    local_54 = 0x84;
    if (((ulong)((long)(int)uVar1 * 0x21) >> 0x1d & 0x1ffffffff) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &local_54;
      puStack_68 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar1 * 0x21 >> 0x1d) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar1 * 0x21) & 0x3fffffff) << 2;
    __dest_00 = (void *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_80,&local_80);
    iVar5 = 0;
    if (local_54 != 0) {
      iVar5 = (int)local_80 / local_54;
    }
    local_88 = CONCAT44(iVar5,uVar1);
    local_90 = __dest_00;
    if (uVar1 != 1) {
      iVar5 = (uVar1 & 1) - uVar1;
      do {
        memcpy(__dest_00,__src_00,0x84);
        __dest = (void *)((long)__dest_00 + 0x84);
        __src = (void *)((long)__src_00 + 0x84);
        __dest_00 = (void *)((long)__dest_00 + 0x108);
        __src_00 = (void *)((long)__src_00 + 0x108);
        memcpy(__dest,__src,0x84);
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
    }
    if ((uVar1 & 1) != 0) {
      memcpy(__dest_00,__src_00,0x84);
    }
  }
  FUN_0327d74c(param_1,&local_90);
  lVar3 = local_88;
  uVar4 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_90 != (void *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_90,(uVar4 & 0x3fffffff) * 0x84);
  }
  return 1;
}


