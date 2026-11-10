/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276228; name: FUN_03276228
 */


undefined8 FUN_03276228(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar5 = PTR_PTR_0434a080;
  local_98 = (undefined8 *)0x0;
  local_90 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_88 = uVar3;
  if ((int)uVar3 < 1) {
    local_98 = (undefined8 *)0x0;
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
    local_98 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    iVar10 = 0;
    if (local_84 != 0) {
      iVar10 = (int)local_80 / local_84;
    }
    uVar15 = 0;
    local_90 = CONCAT44(iVar10,uVar3);
    puVar14 = local_98;
    do {
      uVar9 = param_2[3];
      puVar14[1] = param_2[1];
      puVar14[3] = uVar9;
      uVar9 = *param_2;
      puVar14[2] = param_2[2];
      *puVar14 = uVar9;
      puVar14[4] = 0;
      puVar14[5] = 0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 5);
      puVar13 = (undefined8 *)param_2[4];
      param_2 = param_2 + 6;
      local_88 = uVar4;
      if ((int)uVar4 < 1) {
        puVar14[4] = 0;
        puVar14[5] = 0x8000000000000000;
      }
      else {
        uVar11 = (ulong)(int)uVar4;
        local_84 = 8;
        if ((uVar11 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar11 >> 0x1c & 1) & 0xffffffff00000000 | (uVar11 & 0x1fffffff) << 3;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        puVar14[4] = puVar6;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        *(uint *)(puVar14 + 5) = uVar4;
        *(int *)((long)puVar14 + 0x2c) = iVar10;
        uVar2 = uVar4 & 7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar13;
            puVar7[1] = puVar13[1];
            puVar7[2] = puVar13[2];
            puVar7[3] = puVar13[3];
            puVar7[4] = puVar13[4];
            puVar7[5] = puVar13[5];
            puVar7[6] = puVar13[6];
            puVar1 = puVar13 + 7;
            puVar6 = puVar7 + 8;
            puVar13 = puVar13 + 8;
            iVar10 = iVar10 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar13;
          puVar6 = puVar6 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      uVar15 = uVar15 + 1;
      puVar14 = puVar14 + 6;
    } while (uVar15 != uVar3);
  }
  FUN_0327bb9c(param_1,&local_98);
  puVar14 = local_98;
  if ((int)local_90 != 0) {
    lVar12 = (long)(int)local_90 * 0x30;
    do {
      uVar3 = *(uint *)((long)puVar14 + lVar12 + -4);
      *(undefined4 *)((long)puVar14 + lVar12 + -8) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar14 + lVar12 + -0x10), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar8,((ulong)uVar3 & 0x3fffffff) << 3);
      }
      lVar8 = lVar12 + -0x30;
      *(undefined8 *)((long)puVar14 + lVar12 + -0x10) = 0;
      *(undefined4 *)((long)puVar14 + lVar12 + -4) = 0x80000000;
      lVar12 = lVar8;
    } while (lVar8 != 0);
  }
  lVar12 = local_90;
  uVar11 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar11 & 0x3fffffff) * 0x30);
  }
  return 1;
}


