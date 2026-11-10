/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032756d8; name: FUN_032756d8
 */


undefined8 FUN_032756d8(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *__dest;
  void *__src;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *__dest_00;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__src_00;
  undefined8 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar8 = PTR_PTR_0434a080;
  local_98 = (undefined8 *)0x0;
  local_90 = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_88 = uVar6;
  if ((int)uVar6 < 1) {
    local_98 = (undefined8 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x50;
    if (((ulong)((long)(int)uVar6 * 5) >> 0x1b & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar6 * 5 >> 0x1b) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar6 * 5) & 0xfffffff) << 4;
    local_98 = (undefined8 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_80,&local_80);
    iVar12 = 0;
    if (local_84 != 0) {
      iVar12 = (int)local_80 / local_84;
    }
    uVar16 = 0;
    local_90 = CONCAT44(iVar12,uVar6);
    puVar18 = local_98;
    do {
      *puVar18 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[4];
      puVar18[3] = param_2[3];
      puVar18[4] = uVar5;
      puVar18[1] = uVar3;
      puVar18[2] = uVar4;
      puVar18[5] = 0;
      puVar18[6] = 0x8000000000000000;
      uVar7 = *(uint *)(param_2 + 6);
      puVar14 = (undefined4 *)param_2[5];
      if ((int)uVar7 < 1) {
        puVar18[5] = 0;
        puVar18[6] = 0x8000000000000000;
      }
      else {
        uVar13 = (ulong)(int)uVar7;
        local_84 = 4;
        local_88 = uVar7;
        if ((uVar13 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar13 >> 0x1d & 1) & 0xffffffff00000000 | (uVar13 & 0x3fffffff) << 2;
        puVar9 = (undefined4 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_80,&local_80);
        puVar18[5] = puVar9;
        iVar12 = 0;
        if (local_84 != 0) {
          iVar12 = (int)local_80 / local_84;
        }
        *(uint *)(puVar18 + 6) = uVar7;
        *(int *)((long)puVar18 + 0x34) = iVar12;
        uVar2 = uVar7 & 7;
        if (6 < uVar7 - 1) {
          iVar12 = uVar2 - uVar7;
          puVar10 = puVar9;
          do {
            *puVar10 = *puVar14;
            puVar10[1] = puVar14[1];
            puVar10[2] = puVar14[2];
            puVar10[3] = puVar14[3];
            puVar10[4] = puVar14[4];
            puVar10[5] = puVar14[5];
            puVar10[6] = puVar14[6];
            puVar1 = puVar14 + 7;
            puVar9 = puVar10 + 8;
            puVar14 = puVar14 + 8;
            iVar12 = iVar12 + 8;
            puVar10[7] = *puVar1;
            puVar10 = puVar9;
          } while (iVar12 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar9 = *puVar14;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      *(undefined4 *)(puVar18 + 7) = *(undefined4 *)(param_2 + 7);
      puVar18[8] = 0;
      puVar18[9] = 0x8000000000000000;
      uVar7 = *(uint *)(param_2 + 9);
      __src_00 = (void *)param_2[8];
      local_88 = uVar7;
      if ((int)uVar7 < 1) {
        puVar18[8] = 0;
        puVar18[9] = 0x8000000000000000;
      }
      else {
        local_84 = 0xc4;
        if ((ulong)((long)(int)uVar7 * 0xc4) >> 0x1f != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = (long)(int)uVar7 * 0xc400000000 >> 0x20;
        __dest_00 = (void *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_80,&local_80);
        puVar18[8] = __dest_00;
        iVar12 = 0;
        if (local_84 != 0) {
          iVar12 = (int)local_80 / local_84;
        }
        *(uint *)(puVar18 + 9) = uVar7;
        *(int *)((long)puVar18 + 0x4c) = iVar12;
        uVar2 = uVar7 & 3;
        if (2 < uVar7 - 1) {
          iVar12 = uVar2 - uVar7;
          do {
            memcpy(__dest_00,__src_00,0xc4);
            memcpy((void *)((long)__dest_00 + 0xc4),(void *)((long)__src_00 + 0xc4),0xc4);
            memcpy((void *)((long)__dest_00 + 0x188),(void *)((long)__src_00 + 0x188),0xc4);
            __dest = (void *)((long)__dest_00 + 0x24c);
            __src = (void *)((long)__src_00 + 0x24c);
            __dest_00 = (void *)((long)__dest_00 + 0x310);
            __src_00 = (void *)((long)__src_00 + 0x310);
            memcpy(__dest,__src,0xc4);
            iVar12 = iVar12 + 4;
          } while (iVar12 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          memcpy(__dest_00,__src_00,0xc4);
          __src_00 = (void *)((long)__src_00 + 0xc4);
          __dest_00 = (void *)((long)__dest_00 + 0xc4);
        }
      }
      uVar16 = uVar16 + 1;
      puVar18 = puVar18 + 10;
      param_2 = param_2 + 10;
    } while (uVar16 != uVar6);
  }
  FUN_0327adb0(param_1,&local_98);
  lVar11 = (long)(int)local_90;
  if ((int)local_90 != 0) {
    lVar15 = 0;
    lVar17 = lVar11 * 0x50;
    puVar18 = local_98;
    do {
      uVar6 = *(uint *)((long)puVar18 + lVar17 + -4);
      *(undefined4 *)(puVar18 + lVar11 * 10 + -1) = 0;
      if ((-1 < (int)uVar6) && (puVar18[lVar11 * 10 + -2] != 0)) {
        (**(code **)(*(long *)puVar8 + 0x18))
                  (puVar8,puVar18[lVar11 * 10 + -2],((ulong)uVar6 & 0x3fffffff) * 0xc4);
      }
      iVar12 = *(int *)((long)puVar18 + lVar17 + -0x1c);
      puVar18[lVar11 * 10 + -2] = 0;
      *(undefined4 *)((long)puVar18 + lVar17 + -4) = 0x80000000;
      *(undefined4 *)(puVar18 + lVar11 * 10 + -4) = 0;
      if ((-1 < iVar12) && (puVar18[lVar11 * 10 + -5] != 0)) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar18[lVar11 * 10 + -5],iVar12 << 2);
      }
      lVar15 = lVar15 + 0x50;
      puVar18[lVar11 * 10 + -5] = 0;
      *(undefined4 *)((long)puVar18 + lVar17 + -0x1c) = 0x80000000;
      puVar18 = puVar18 + -10;
    } while (lVar17 != lVar15);
  }
  lVar11 = local_90;
  uVar13 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_98,(uVar13 & 0x3fffffff) * 0x50);
  }
  return 1;
}


