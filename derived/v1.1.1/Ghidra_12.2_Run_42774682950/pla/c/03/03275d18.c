/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03275d18; name: FUN_03275d18
 */


undefined8 FUN_03275d18(undefined8 param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  void *__dest_00;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  void *__src_00;
  undefined8 *puVar11;
  undefined8 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar4 = PTR_PTR_0434a080;
  local_98 = (undefined8 *)0x0;
  local_90 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_88 = uVar2;
  if ((int)uVar2 < 1) {
    local_98 = (undefined8 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x70;
    if ((ulong)((long)(int)uVar2 * 0x70) >> 0x1f != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = (long)(int)uVar2 * 0x7000000000 >> 0x20;
    local_98 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
    iVar10 = 0;
    if (local_84 != 0) {
      iVar10 = (int)local_80 / local_84;
    }
    uVar9 = 0;
    local_90 = CONCAT44(iVar10,uVar2);
    puVar11 = local_98;
    do {
      uVar6 = param_2[0xb];
      puVar11[9] = param_2[9];
      puVar11[0xb] = uVar6;
      uVar6 = param_2[7];
      puVar11[5] = param_2[5];
      puVar11[7] = uVar6;
      uVar6 = param_2[3];
      puVar11[1] = param_2[1];
      puVar11[3] = uVar6;
      uVar6 = *param_2;
      puVar11[2] = param_2[2];
      *puVar11 = uVar6;
      uVar6 = param_2[4];
      puVar11[6] = param_2[6];
      puVar11[4] = uVar6;
      uVar6 = param_2[8];
      puVar11[10] = param_2[10];
      puVar11[8] = uVar6;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0x8000000000000000;
      uVar3 = *(uint *)(param_2 + 0xd);
      __src_00 = (void *)param_2[0xc];
      param_2 = param_2 + 0xe;
      local_88 = uVar3;
      if ((int)uVar3 < 1) {
        puVar11[0xc] = 0;
        puVar11[0xd] = 0x8000000000000000;
      }
      else {
        local_84 = 0x108;
        if (((ulong)((long)(int)uVar3 * 0x21) >> 0x1c & 0x1ffffffff) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -((ulong)(uVar3 * 0x21 >> 0x1c) & 1) & 0xffffffff00000000 |
                   ((ulong)(uVar3 * 0x21) & 0x1fffffff) << 3;
        __dest_00 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        puVar11[0xc] = __dest_00;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        *(uint *)(puVar11 + 0xd) = uVar3;
        *(int *)((long)puVar11 + 0x6c) = iVar10;
        uVar1 = uVar3 & 3;
        if (2 < uVar3 - 1) {
          iVar10 = uVar1 - uVar3;
          do {
            memcpy(__dest_00,__src_00,0x108);
            memcpy((void *)((long)__dest_00 + 0x108),(void *)((long)__src_00 + 0x108),0x108);
            memcpy((void *)((long)__dest_00 + 0x210),(void *)((long)__src_00 + 0x210),0x108);
            __dest = (void *)((long)__dest_00 + 0x318);
            __src = (void *)((long)__src_00 + 0x318);
            __dest_00 = (void *)((long)__dest_00 + 0x420);
            __src_00 = (void *)((long)__src_00 + 0x420);
            memcpy(__dest,__src,0x108);
            iVar10 = iVar10 + 4;
          } while (iVar10 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          memcpy(__dest_00,__src_00,0x108);
          __src_00 = (void *)((long)__src_00 + 0x108);
          __dest_00 = (void *)((long)__dest_00 + 0x108);
        }
      }
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 0xe;
    } while (uVar9 != uVar2);
  }
  FUN_0327b4f4(param_1,&local_98);
  puVar11 = local_98;
  if ((int)local_90 != 0) {
    lVar8 = (long)(int)local_90 * 0x70;
    do {
      uVar2 = *(uint *)((long)puVar11 + lVar8 + -4);
      *(undefined4 *)((long)puVar11 + lVar8 + -8) = 0;
      if ((-1 < (int)uVar2) && (lVar5 = *(long *)((long)puVar11 + lVar8 + -0x10), lVar5 != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar5,((ulong)uVar2 & 0x3fffffff) * 0x108);
      }
      lVar5 = lVar8 + -0x70;
      *(undefined8 *)((long)puVar11 + lVar8 + -0x10) = 0;
      *(undefined4 *)((long)puVar11 + lVar8 + -4) = 0x80000000;
      lVar8 = lVar5;
    } while (lVar5 != 0);
  }
  lVar8 = local_90;
  uVar7 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_98,(uVar7 & 0x3fffffff) * 0x70);
  }
  return 1;
}


