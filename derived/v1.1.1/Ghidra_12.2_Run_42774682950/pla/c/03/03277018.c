/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03277018; name: FUN_03277018
 */


undefined8 FUN_03277018(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar5 = PTR_PTR_0434a080;
  local_98 = (long *)0x0;
  local_90 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  local_88 = uVar3;
  if ((int)uVar3 < 1) {
    local_98 = (long *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x60;
    if (((ulong)((long)(int)uVar3 * 3) >> 0x1a & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar3 * 3 >> 0x1a) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar3 * 3) & 0x7ffffff) << 5;
    local_98 = (long *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    iVar9 = 0;
    if (local_84 != 0) {
      iVar9 = (int)local_80 / local_84;
    }
    uVar18 = 0;
    local_90 = CONCAT44(iVar9,uVar3);
    plVar15 = local_98;
    do {
      *plVar15 = 0;
      plVar15[1] = -0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 1);
      puVar13 = (undefined8 *)*param_2;
      if ((int)uVar4 < 1) {
        *plVar15 = 0;
        plVar15[1] = -0x8000000000000000;
      }
      else {
        uVar17 = (ulong)(int)uVar4;
        local_84 = 0x40;
        local_88 = uVar4;
        if ((uVar17 & 0x3fffffffe000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar17 >> 0x19 & 1) & 0xffffffff00000000 | (uVar17 & 0x3ffffff) << 6;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        *plVar15 = (long)puVar6;
        iVar9 = 0;
        if (local_84 != 0) {
          iVar9 = (int)local_80 / local_84;
        }
        *(uint *)(plVar15 + 1) = uVar4;
        *(int *)((long)plVar15 + 0xc) = iVar9;
        uVar2 = uVar4 & 3;
        if (2 < uVar4 - 1) {
          iVar9 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            uVar10 = *puVar13;
            uVar11 = puVar13[1];
            iVar9 = iVar9 + 4;
            uVar12 = puVar13[3];
            puVar7[2] = puVar13[2];
            puVar7[3] = uVar12;
            *puVar7 = uVar10;
            puVar7[1] = uVar11;
            uVar10 = puVar13[4];
            uVar11 = puVar13[5];
            uVar12 = puVar13[7];
            puVar7[6] = puVar13[6];
            puVar7[7] = uVar12;
            puVar7[4] = uVar10;
            puVar7[5] = uVar11;
            uVar10 = puVar13[0xc];
            uVar11 = puVar13[0xd];
            uVar12 = puVar13[0xf];
            puVar7[0xe] = puVar13[0xe];
            puVar7[0xf] = uVar12;
            puVar7[0xc] = uVar10;
            puVar7[0xd] = uVar11;
            uVar10 = puVar13[8];
            uVar11 = puVar13[9];
            uVar12 = puVar13[0xb];
            puVar7[10] = puVar13[10];
            puVar7[0xb] = uVar12;
            puVar7[8] = uVar10;
            puVar7[9] = uVar11;
            uVar10 = puVar13[0x10];
            uVar11 = puVar13[0x11];
            uVar12 = puVar13[0x13];
            puVar7[0x12] = puVar13[0x12];
            puVar7[0x13] = uVar12;
            puVar7[0x10] = uVar10;
            puVar7[0x11] = uVar11;
            uVar10 = puVar13[0x14];
            uVar11 = puVar13[0x15];
            uVar12 = puVar13[0x17];
            puVar7[0x16] = puVar13[0x16];
            puVar7[0x17] = uVar12;
            puVar7[0x14] = uVar10;
            puVar7[0x15] = uVar11;
            uVar10 = puVar13[0x18];
            uVar11 = puVar13[0x19];
            uVar12 = puVar13[0x1b];
            puVar7[0x1a] = puVar13[0x1a];
            puVar7[0x1b] = uVar12;
            puVar6 = puVar7 + 0x20;
            puVar7[0x18] = uVar10;
            puVar7[0x19] = uVar11;
            uVar11 = puVar13[0x1f];
            uVar10 = puVar13[0x1c];
            uVar12 = puVar13[0x1d];
            puVar7[0x1e] = puVar13[0x1e];
            puVar7[0x1f] = uVar11;
            puVar13 = puVar13 + 0x20;
            puVar7[0x1c] = uVar10;
            puVar7[0x1d] = uVar12;
            puVar7 = puVar6;
          } while (iVar9 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar10 = *puVar13;
          uVar11 = puVar13[1];
          uVar12 = puVar13[3];
          puVar6[2] = puVar13[2];
          puVar6[3] = uVar12;
          *puVar6 = uVar10;
          puVar6[1] = uVar11;
          uVar10 = puVar13[4];
          uVar11 = puVar13[5];
          puVar7 = puVar13 + 6;
          uVar12 = puVar13[7];
          puVar13 = puVar13 + 8;
          puVar6[6] = *puVar7;
          puVar6[7] = uVar12;
          puVar6[4] = uVar10;
          puVar6[5] = uVar11;
          puVar6 = puVar6 + 8;
        }
      }
      plVar15[2] = 0;
      plVar15[3] = -0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 3);
      puVar13 = (undefined8 *)param_2[2];
      local_88 = uVar4;
      if ((int)uVar4 < 1) {
        plVar15[2] = 0;
        plVar15[3] = -0x8000000000000000;
      }
      else {
        local_84 = 100;
        if ((ulong)((long)(int)uVar4 * 100) >> 0x1f != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = (long)(int)uVar4 * 0x6400000000 >> 0x20;
        puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
        plVar15[2] = (long)puVar6;
        iVar9 = 0;
        if (local_84 != 0) {
          iVar9 = (int)local_80 / local_84;
        }
        *(uint *)(plVar15 + 3) = uVar4;
        *(int *)((long)plVar15 + 0x1c) = iVar9;
        uVar2 = uVar4 & 3;
        if (2 < uVar4 - 1) {
          iVar9 = uVar2 - uVar4;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar13;
            iVar9 = iVar9 + 4;
            uVar10 = puVar13[1];
            uVar11 = puVar13[2];
            uVar12 = puVar13[4];
            puVar7[3] = puVar13[3];
            puVar7[4] = uVar12;
            puVar7[1] = uVar10;
            puVar7[2] = uVar11;
            uVar10 = puVar13[5];
            uVar11 = puVar13[6];
            uVar12 = puVar13[8];
            puVar7[7] = puVar13[7];
            puVar7[8] = uVar12;
            puVar7[5] = uVar10;
            puVar7[6] = uVar11;
            uVar12 = puVar13[0xb];
            uVar10 = puVar13[9];
            uVar11 = puVar13[10];
            *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
            puVar7[10] = uVar11;
            puVar7[0xb] = uVar12;
            puVar7[9] = uVar10;
            *(undefined8 *)((long)puVar7 + 100) = *(undefined8 *)((long)puVar13 + 100);
            uVar10 = *(undefined8 *)((long)puVar13 + 0x6c);
            uVar11 = *(undefined8 *)((long)puVar13 + 0x74);
            uVar12 = *(undefined8 *)((long)puVar13 + 0x7c);
            *(undefined8 *)((long)puVar7 + 0x84) = *(undefined8 *)((long)puVar13 + 0x84);
            *(undefined8 *)((long)puVar7 + 0x7c) = uVar12;
            *(undefined8 *)((long)puVar7 + 0x74) = uVar11;
            *(undefined8 *)((long)puVar7 + 0x6c) = uVar10;
            uVar10 = *(undefined8 *)((long)puVar13 + 0x8c);
            uVar11 = *(undefined8 *)((long)puVar13 + 0x94);
            uVar12 = *(undefined8 *)((long)puVar13 + 0x9c);
            *(undefined8 *)((long)puVar7 + 0xa4) = *(undefined8 *)((long)puVar13 + 0xa4);
            *(undefined8 *)((long)puVar7 + 0x9c) = uVar12;
            *(undefined8 *)((long)puVar7 + 0x94) = uVar11;
            *(undefined8 *)((long)puVar7 + 0x8c) = uVar10;
            uVar10 = *(undefined8 *)((long)puVar13 + 0xac);
            uVar11 = *(undefined8 *)((long)puVar13 + 0xb4);
            uVar12 = *(undefined8 *)((long)puVar13 + 0xbc);
            *(undefined4 *)((long)puVar7 + 0xc4) = *(undefined4 *)((long)puVar13 + 0xc4);
            *(undefined8 *)((long)puVar7 + 0xbc) = uVar12;
            *(undefined8 *)((long)puVar7 + 0xb4) = uVar11;
            *(undefined8 *)((long)puVar7 + 0xac) = uVar10;
            puVar7[0x19] = puVar13[0x19];
            uVar10 = puVar13[0x1a];
            uVar11 = puVar13[0x1b];
            uVar12 = puVar13[0x1d];
            puVar7[0x1c] = puVar13[0x1c];
            puVar7[0x1d] = uVar12;
            puVar7[0x1a] = uVar10;
            puVar7[0x1b] = uVar11;
            uVar10 = puVar13[0x1e];
            uVar11 = puVar13[0x1f];
            uVar12 = puVar13[0x21];
            puVar7[0x20] = puVar13[0x20];
            puVar7[0x21] = uVar12;
            puVar7[0x1e] = uVar10;
            puVar7[0x1f] = uVar11;
            uVar12 = puVar13[0x24];
            uVar10 = puVar13[0x22];
            uVar11 = puVar13[0x23];
            *(undefined4 *)(puVar7 + 0x25) = *(undefined4 *)(puVar13 + 0x25);
            puVar7[0x23] = uVar11;
            puVar7[0x24] = uVar12;
            puVar7[0x22] = uVar10;
            *(undefined8 *)((long)puVar7 + 300) = *(undefined8 *)((long)puVar13 + 300);
            uVar10 = *(undefined8 *)((long)puVar13 + 0x134);
            uVar11 = *(undefined8 *)((long)puVar13 + 0x13c);
            uVar12 = *(undefined8 *)((long)puVar13 + 0x14c);
            *(undefined8 *)((long)puVar7 + 0x144) = *(undefined8 *)((long)puVar13 + 0x144);
            *(undefined8 *)((long)puVar7 + 0x14c) = uVar12;
            *(undefined8 *)((long)puVar7 + 0x134) = uVar10;
            *(undefined8 *)((long)puVar7 + 0x13c) = uVar11;
            uVar10 = *(undefined8 *)((long)puVar13 + 0x154);
            uVar11 = *(undefined8 *)((long)puVar13 + 0x15c);
            uVar12 = *(undefined8 *)((long)puVar13 + 0x16c);
            *(undefined8 *)((long)puVar7 + 0x164) = *(undefined8 *)((long)puVar13 + 0x164);
            *(undefined8 *)((long)puVar7 + 0x16c) = uVar12;
            puVar6 = puVar7 + 0x32;
            *(undefined8 *)((long)puVar7 + 0x154) = uVar10;
            *(undefined8 *)((long)puVar7 + 0x15c) = uVar11;
            uVar12 = *(undefined8 *)((long)puVar13 + 0x184);
            uVar10 = *(undefined8 *)((long)puVar13 + 0x174);
            uVar11 = *(undefined8 *)((long)puVar13 + 0x17c);
            puVar1 = (undefined4 *)((long)puVar13 + 0x18c);
            puVar13 = puVar13 + 0x32;
            *(undefined4 *)((long)puVar7 + 0x18c) = *puVar1;
            *(undefined8 *)((long)puVar7 + 0x17c) = uVar11;
            *(undefined8 *)((long)puVar7 + 0x184) = uVar12;
            *(undefined8 *)((long)puVar7 + 0x174) = uVar10;
            puVar7 = puVar6;
          } while (iVar9 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar13;
          uVar10 = puVar13[1];
          uVar11 = puVar13[2];
          uVar12 = puVar13[4];
          puVar6[3] = puVar13[3];
          puVar6[4] = uVar12;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          uVar10 = puVar13[5];
          uVar11 = puVar13[6];
          uVar12 = puVar13[8];
          puVar6[7] = puVar13[7];
          puVar6[8] = uVar12;
          puVar6[5] = uVar10;
          puVar6[6] = uVar11;
          uVar12 = puVar13[0xb];
          uVar10 = puVar13[9];
          uVar11 = puVar13[10];
          *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
          puVar6[10] = uVar11;
          puVar6[0xb] = uVar12;
          puVar6[9] = uVar10;
          puVar6 = (undefined8 *)((long)puVar6 + 100);
          puVar13 = (undefined8 *)((long)puVar13 + 100);
        }
      }
      plVar15[4] = param_2[4];
      lVar8 = param_2[9];
      plVar15[7] = param_2[7];
      plVar15[9] = lVar8;
      lVar8 = param_2[6];
      plVar15[8] = param_2[8];
      plVar15[6] = lVar8;
      uVar18 = uVar18 + 1;
      *(undefined1 *)(plVar15 + 10) = *(undefined1 *)(param_2 + 10);
      plVar15 = plVar15 + 0xc;
      param_2 = param_2 + 0xc;
    } while (uVar18 != uVar3);
  }
  FUN_0327cce0(param_1,&local_98);
  lVar8 = (long)(int)local_90;
  if ((int)local_90 != 0) {
    lVar14 = 0;
    lVar16 = lVar8 * 0x60;
    plVar15 = local_98;
    do {
      uVar3 = *(uint *)((long)plVar15 + lVar16 + -0x44);
      *(undefined4 *)(plVar15 + lVar8 * 0xc + -9) = 0;
      if ((-1 < (int)uVar3) && (plVar15[lVar8 * 0xc + -10] != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,plVar15[lVar8 * 0xc + -10],((ulong)uVar3 & 0x3fffffff) * 100);
      }
      uVar3 = *(uint *)((long)plVar15 + lVar16 + -0x54);
      plVar15[lVar8 * 0xc + -10] = 0;
      *(undefined4 *)((long)plVar15 + lVar16 + -0x44) = 0x80000000;
      *(undefined4 *)(plVar15 + lVar8 * 0xc + -0xb) = 0;
      if ((-1 < (int)uVar3) && (plVar15[lVar8 * 0xc + -0xc] != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,plVar15[lVar8 * 0xc + -0xc],((ulong)uVar3 & 0x3fffffff) << 6);
      }
      lVar14 = lVar14 + 0x60;
      plVar15[lVar8 * 0xc + -0xc] = 0;
      *(undefined4 *)((long)plVar15 + lVar16 + -0x54) = 0x80000000;
      plVar15 = plVar15 + -0xc;
    } while (lVar16 != lVar14);
  }
  lVar8 = local_90;
  uVar17 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_98 != (long *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar17 & 0x3fffffff) * 0x60);
  }
  return 1;
}


