/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032766a8; name: FUN_032766a8
 */


undefined8 FUN_032766a8(undefined8 param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  void *__dest_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  void *__src_00;
  undefined8 *puVar13;
  undefined8 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar7 = PTR_PTR_0434a080;
  local_98 = (undefined8 *)0x0;
  local_90 = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_88 = uVar5;
  if ((int)uVar5 < 1) {
    local_98 = (undefined8 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    uVar9 = (ulong)(int)uVar5;
    local_84 = 0x40;
    if ((uVar9 & 0x3fffffffe000000) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -(uVar9 >> 0x19 & 1) & 0xffffffff00000000 | (uVar9 & 0x3ffffff) << 6;
    local_98 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
    iVar12 = 0;
    if (local_84 != 0) {
      iVar12 = (int)local_80 / local_84;
    }
    uVar11 = 0;
    local_90 = CONCAT44(iVar12,uVar5);
    puVar13 = local_98;
    do {
      uVar2 = param_2[1];
      *puVar13 = *param_2;
      puVar13[1] = uVar2;
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[5];
      puVar13[4] = param_2[4];
      puVar13[5] = uVar4;
      puVar13[2] = uVar2;
      puVar13[3] = uVar3;
      puVar13[6] = 0;
      puVar13[7] = 0x8000000000000000;
      uVar6 = *(uint *)(param_2 + 7);
      __src_00 = (void *)param_2[6];
      param_2 = param_2 + 8;
      local_88 = uVar6;
      if ((int)uVar6 < 1) {
        puVar13[6] = 0;
        puVar13[7] = 0x8000000000000000;
      }
      else {
        local_84 = 0xb8;
        if ((ulong)((long)(int)uVar6 * 0xb8) >> 0x1f != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = (long)(int)uVar6 * 0xb800000000 >> 0x20;
        __dest_00 = (void *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
        puVar13[6] = __dest_00;
        iVar12 = 0;
        if (local_84 != 0) {
          iVar12 = (int)local_80 / local_84;
        }
        *(uint *)(puVar13 + 7) = uVar6;
        *(int *)((long)puVar13 + 0x3c) = iVar12;
        uVar1 = uVar6 & 3;
        if (2 < uVar6 - 1) {
          iVar12 = uVar1 - uVar6;
          do {
            memcpy(__dest_00,__src_00,0xb8);
            memcpy((void *)((long)__dest_00 + 0xb8),(void *)((long)__src_00 + 0xb8),0xb8);
            memcpy((void *)((long)__dest_00 + 0x170),(void *)((long)__src_00 + 0x170),0xb8);
            __dest = (void *)((long)__dest_00 + 0x228);
            __src = (void *)((long)__src_00 + 0x228);
            __dest_00 = (void *)((long)__dest_00 + 0x2e0);
            __src_00 = (void *)((long)__src_00 + 0x2e0);
            memcpy(__dest,__src,0xb8);
            iVar12 = iVar12 + 4;
          } while (iVar12 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          memcpy(__dest_00,__src_00,0xb8);
          __src_00 = (void *)((long)__src_00 + 0xb8);
          __dest_00 = (void *)((long)__dest_00 + 0xb8);
        }
      }
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 8;
    } while (uVar11 != uVar5);
  }
  FUN_0327c0ec(param_1,&local_98);
  puVar13 = local_98;
  if ((int)local_90 != 0) {
    lVar10 = (long)(int)local_90 << 6;
    do {
      uVar5 = *(uint *)((long)puVar13 + lVar10 + -4);
      *(undefined4 *)((long)puVar13 + lVar10 + -8) = 0;
      if ((-1 < (int)uVar5) && (lVar8 = *(long *)((long)puVar13 + lVar10 + -0x10), lVar8 != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar8,((ulong)uVar5 & 0x3fffffff) * 0xb8);
      }
      lVar8 = lVar10 + -0x40;
      *(undefined8 *)((long)puVar13 + lVar10 + -0x10) = 0;
      *(undefined4 *)((long)puVar13 + lVar10 + -4) = 0x80000000;
      lVar10 = lVar8;
    } while (lVar8 != 0);
  }
  lVar10 = local_90;
  uVar9 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_98,(uVar9 & 0x3fffffff) << 6);
  }
  return 1;
}


