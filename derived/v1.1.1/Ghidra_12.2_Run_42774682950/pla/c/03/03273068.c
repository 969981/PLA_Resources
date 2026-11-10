/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03273068; name: FUN_03273068
 */


undefined8 FUN_03273068(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
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
    local_84 = 0x48;
    if (((ulong)((long)(int)uVar3 * 9) >> 0x1c & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar3 * 9 >> 0x1c) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 9) & 0x1fffffff) << 3;
    local_98 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    iVar10 = 0;
    if (local_84 != 0) {
      iVar10 = (int)local_80 / local_84;
    }
    uVar15 = 0;
    local_90 = CONCAT44(iVar10,uVar3);
    puVar12 = local_98;
    do {
      uVar9 = param_2[1];
      *puVar12 = *param_2;
      puVar12[1] = uVar9;
      puVar12[2] = 0;
      puVar12[3] = 0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 3);
      puVar11 = (undefined4 *)param_2[2];
      if ((int)uVar4 < 1) {
        puVar12[2] = 0;
        puVar12[3] = 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)(int)uVar4;
        local_84 = 4;
        local_88 = uVar4;
        if ((uVar14 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar14 >> 0x1d & 1) & 0xffffffff00000000 | (uVar14 & 0x3fffffff) << 2;
        puVar6 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        puVar12[2] = puVar6;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        *(uint *)(puVar12 + 3) = uVar4;
        *(int *)((long)puVar12 + 0x1c) = iVar10;
        uVar2 = uVar4 & 7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            puVar7[4] = puVar11[4];
            puVar7[5] = puVar11[5];
            puVar7[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar6 = puVar7 + 8;
            puVar11 = puVar11 + 8;
            iVar10 = iVar10 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar11;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(param_2 + 4);
      puVar12[5] = 0;
      puVar12[6] = 0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 6);
      puVar11 = (undefined4 *)param_2[5];
      local_88 = uVar4;
      if ((int)uVar4 < 1) {
        puVar12[5] = 0;
        puVar12[6] = 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)(int)uVar4;
        local_84 = 4;
        if ((uVar14 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar14 >> 0x1d & 1) & 0xffffffff00000000 | (uVar14 & 0x3fffffff) << 2;
        puVar6 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        puVar12[5] = puVar6;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        *(uint *)(puVar12 + 6) = uVar4;
        *(int *)((long)puVar12 + 0x34) = iVar10;
        uVar2 = uVar4 & 7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            puVar7[4] = puVar11[4];
            puVar7[5] = puVar11[5];
            puVar7[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar6 = puVar7 + 8;
            puVar11 = puVar11 + 8;
            iVar10 = iVar10 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar11;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      uVar9 = param_2[7];
      uVar15 = uVar15 + 1;
      *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(param_2 + 8);
      puVar12[7] = uVar9;
      puVar12 = puVar12 + 9;
      param_2 = param_2 + 9;
    } while (uVar15 != uVar3);
  }
  FUN_03278ed4(param_1,&local_98);
  puVar12 = local_98;
  if ((int)local_90 != 0) {
    lVar13 = (long)(int)local_90 * 0x48;
    do {
      iVar10 = *(int *)((long)puVar12 + lVar13 + -0x14);
      *(undefined4 *)((long)puVar12 + lVar13 + -0x18) = 0;
      if ((-1 < iVar10) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x20), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar8,iVar10 << 2);
      }
      iVar10 = *(int *)((long)puVar12 + lVar13 + -0x2c);
      *(undefined8 *)((long)puVar12 + lVar13 + -0x20) = 0;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x30) = 0;
      if ((-1 < iVar10) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x38), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar8,iVar10 << 2);
      }
      lVar8 = lVar13 + -0x48;
      *(undefined8 *)((long)puVar12 + lVar13 + -0x38) = 0;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x2c) = 0x80000000;
      lVar13 = lVar8;
    } while (lVar8 != 0);
  }
  lVar13 = local_90;
  uVar14 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar14 & 0x3fffffff) * 0x48);
  }
  return 1;
}


