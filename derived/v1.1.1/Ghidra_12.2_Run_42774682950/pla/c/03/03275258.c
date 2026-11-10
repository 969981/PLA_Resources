/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03275258; name: FUN_03275258
 */


undefined8 FUN_03275258(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
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
  puVar15 = (undefined4 *)*param_2;
  local_88 = uVar3;
  if ((int)uVar3 < 1) {
    local_98 = (undefined4 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x18;
    if (((ulong)((long)(int)uVar3 * 3) >> 0x1c & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar3 * 3 >> 0x1c) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 3) & 0x1fffffff) << 3;
    local_98 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    iVar10 = 0;
    if (local_84 != 0) {
      iVar10 = (int)local_80 / local_84;
    }
    uVar16 = 0;
    local_90 = CONCAT44(iVar10,uVar3);
    puVar14 = local_98;
    do {
      *puVar14 = *puVar15;
      *(undefined8 *)(puVar14 + 2) = 0;
      *(undefined8 *)(puVar14 + 4) = 0x8000000000000000;
      uVar4 = puVar15[4];
      puVar13 = *(undefined8 **)(puVar15 + 2);
      puVar15 = puVar15 + 6;
      local_88 = uVar4;
      if ((int)uVar4 < 1) {
        *(undefined8 *)(puVar14 + 2) = 0;
        *(undefined8 *)(puVar14 + 4) = 0x8000000000000000;
      }
      else {
        local_84 = 0xc;
        if (((ulong)((long)(int)uVar4 * 3) >> 0x1d & 0x1ffffffff) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -((ulong)(uVar4 * 3 >> 0x1d) & 1) & 0xffffffff00000000 |
                   ((ulong)(uVar4 * 3) & 0x3fffffff) << 2;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        *(undefined8 **)(puVar14 + 2) = puVar6;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        puVar14[4] = uVar4;
        puVar14[5] = iVar10;
        uVar2 = uVar4 & 3;
        if (2 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            uVar11 = *puVar13;
            puVar6 = puVar7 + 6;
            iVar10 = iVar10 + 4;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar13 + 1);
            *puVar7 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar13 + 0xc);
            *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)((long)puVar13 + 0x14);
            *(undefined8 *)((long)puVar7 + 0xc) = uVar11;
            uVar11 = puVar13[3];
            *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar13 + 4);
            puVar7[3] = uVar11;
            uVar11 = *(undefined8 *)((long)puVar13 + 0x24);
            puVar1 = (undefined4 *)((long)puVar13 + 0x2c);
            puVar13 = puVar13 + 6;
            *(undefined4 *)((long)puVar7 + 0x2c) = *puVar1;
            *(undefined8 *)((long)puVar7 + 0x24) = uVar11;
            puVar7 = puVar6;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar11 = *puVar13;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar13 + 1);
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          *puVar6 = uVar11;
          puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        }
      }
      uVar16 = uVar16 + 1;
      puVar14 = puVar14 + 6;
    } while (uVar16 != uVar3);
  }
  FUN_0327a7e4(param_1,&local_98);
  puVar15 = local_98;
  if ((int)local_90 != 0) {
    lVar12 = (long)(int)local_90 * 0x18;
    do {
      uVar3 = *(uint *)((long)puVar15 + lVar12 + -4);
      *(undefined4 *)((long)puVar15 + lVar12 + -8) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar15 + lVar12 + -0x10), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar8,((ulong)uVar3 & 0x3fffffff) * 0xc);
      }
      lVar8 = lVar12 + -0x18;
      *(undefined8 *)((long)puVar15 + lVar12 + -0x10) = 0;
      *(undefined4 *)((long)puVar15 + lVar12 + -4) = 0x80000000;
      lVar12 = lVar8;
    } while (lVar8 != 0);
  }
  lVar12 = local_90;
  uVar9 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_98 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar9 & 0x3fffffff) * 0x18);
  }
  return 1;
}


