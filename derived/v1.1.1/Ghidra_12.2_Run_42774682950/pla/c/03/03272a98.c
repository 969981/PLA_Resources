/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272a98; name: FUN_03272a98
 */


undefined8 FUN_03272a98(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar5 = PTR_PTR_0434a080;
  local_98 = (undefined4 *)0x0;
  local_90 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  puVar13 = (undefined4 *)*param_2;
  local_88 = uVar3;
  if ((int)uVar3 < 1) {
    local_98 = (undefined4 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x30;
    if (((ulong)((long)(int)uVar3 * 3) >> 0x1b & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar3 * 3 >> 0x1b) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 3) & 0xfffffff) << 4;
    local_98 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    iVar9 = 0;
    if (local_84 != 0) {
      iVar9 = (int)local_80 / local_84;
    }
    uVar16 = 0;
    local_90 = CONCAT44(iVar9,uVar3);
    puVar15 = local_98;
    do {
      *puVar15 = *puVar13;
      *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar13 + 2);
      *(undefined8 *)(puVar15 + 4) = 0;
      *(undefined8 *)(puVar15 + 6) = 0x8000000000000000;
      uVar4 = puVar13[6];
      puVar10 = *(undefined8 **)(puVar13 + 4);
      if ((int)uVar4 < 1) {
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)(int)uVar4;
        local_84 = 8;
        local_88 = uVar4;
        if ((uVar12 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar12 >> 0x1c & 1) & 0xffffffff00000000 | (uVar12 & 0x1fffffff) << 3;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        *(undefined8 **)(puVar15 + 4) = puVar6;
        iVar9 = 0;
        if (local_84 != 0) {
          iVar9 = (int)local_80 / local_84;
        }
        puVar15[6] = uVar4;
        puVar15[7] = iVar9;
        uVar1 = uVar4 & 7;
        if (6 < uVar4 - 1) {
          iVar9 = uVar1 - uVar4;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar10;
            puVar7[1] = puVar10[1];
            puVar7[2] = puVar10[2];
            puVar7[3] = puVar10[3];
            puVar7[4] = puVar10[4];
            puVar7[5] = puVar10[5];
            puVar7[6] = puVar10[6];
            puVar14 = puVar10 + 7;
            puVar6 = puVar7 + 8;
            puVar10 = puVar10 + 8;
            iVar9 = iVar9 + 8;
            puVar7[7] = *puVar14;
            puVar7 = puVar6;
          } while (iVar9 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined8 *)(puVar15 + 8) = 0;
      *(undefined8 *)(puVar15 + 10) = 0x8000000000000000;
      uVar4 = puVar13[10];
      puVar10 = *(undefined8 **)(puVar13 + 8);
      local_88 = uVar4;
      if ((int)uVar4 < 1) {
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined8 *)(puVar15 + 10) = 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)(int)uVar4;
        local_84 = 0x10;
        if ((uVar12 & 0xffffffff8000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar12 >> 0x1b & 1) & 0xffffffff00000000 | (uVar12 & 0xfffffff) << 4;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        *(undefined8 **)(puVar15 + 8) = puVar6;
        iVar9 = 0;
        if (local_84 != 0) {
          iVar9 = (int)local_80 / local_84;
        }
        puVar15[10] = uVar4;
        puVar15[0xb] = iVar9;
        uVar1 = uVar4 & 3;
        if (2 < uVar4 - 1) {
          iVar9 = uVar1 - uVar4;
          puVar7 = puVar6;
          puVar14 = puVar10;
          do {
            uVar2 = puVar14[1];
            puVar6 = puVar7 + 8;
            *puVar7 = *puVar14;
            puVar7[1] = uVar2;
            puVar10 = puVar14 + 8;
            uVar2 = puVar14[3];
            iVar9 = iVar9 + 4;
            puVar7[2] = puVar14[2];
            puVar7[3] = uVar2;
            uVar2 = puVar14[5];
            puVar7[4] = puVar14[4];
            puVar7[5] = uVar2;
            uVar2 = puVar14[7];
            puVar7[6] = puVar14[6];
            puVar7[7] = uVar2;
            puVar7 = puVar6;
            puVar14 = puVar10;
          } while (iVar9 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar2 = puVar10[1];
          *puVar6 = *puVar10;
          puVar6[1] = uVar2;
          puVar6 = puVar6 + 2;
          puVar10 = puVar10 + 2;
        }
      }
      uVar16 = uVar16 + 1;
      puVar13 = puVar13 + 0xc;
      puVar15 = puVar15 + 0xc;
    } while (uVar16 != uVar3);
  }
  FUN_03278844(param_1,&local_98);
  lVar8 = (long)(int)local_90;
  if ((int)local_90 != 0) {
    lVar11 = 0;
    puVar13 = local_98;
    do {
      puVar13[lVar8 * 0xc + -2] = 0;
      if ((-1 < (int)puVar13[lVar8 * 0xc + -1]) && (*(long *)(puVar13 + lVar8 * 0xc + -4) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,*(long *)(puVar13 + lVar8 * 0xc + -4),
                   ((ulong)(uint)puVar13[lVar8 * 0xc + -1] & 0x3fffffff) << 4);
      }
      *(undefined8 *)(puVar13 + lVar8 * 0xc + -4) = 0;
      puVar13[lVar8 * 0xc + -1] = 0x80000000;
      puVar13[lVar8 * 0xc + -6] = 0;
      if ((-1 < (int)puVar13[lVar8 * 0xc + -5]) && (*(long *)(puVar13 + lVar8 * 0xc + -8) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,*(long *)(puVar13 + lVar8 * 0xc + -8),
                   ((ulong)(uint)puVar13[lVar8 * 0xc + -5] & 0x3fffffff) << 3);
      }
      lVar11 = lVar11 + 0x30;
      *(undefined8 *)(puVar13 + lVar8 * 0xc + -8) = 0;
      puVar13[lVar8 * 0xc + -5] = 0x80000000;
      puVar13 = puVar13 + -0xc;
    } while (lVar8 * 0x30 != lVar11);
  }
  lVar8 = local_90;
  uVar12 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_98 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar12 & 0x3fffffff) * 0x30);
  }
  return 1;
}


