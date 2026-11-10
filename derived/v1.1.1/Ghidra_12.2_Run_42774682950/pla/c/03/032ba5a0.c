/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba5a0; name: FUN_032ba5a0
 */


void FUN_032ba5a0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_78;
  int local_74;
  ulong local_70;
  undefined *puStack_68;
  int *local_60;
  uint *puStack_58;
  
  puVar4 = PTR_PTR_0434a090;
  local_78 = param_2;
  if ((int)param_2 < 1) {
    puVar5 = (undefined4 *)0x0;
    uVar15 = 0;
    lVar6 = 0;
    uVar14 = 0x80000000;
    uVar16 = 0x80000000;
  }
  else {
    uVar15 = (ulong)(int)param_2;
    local_74 = 8;
    if ((uVar15 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_70);
    }
    uVar13 = -(uVar15 >> 0x1c & 1) & 0xffffffff00000000 | (uVar15 & 0x1fffffff) << 3;
    local_70 = uVar13;
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,uVar13,&local_70);
    *puVar5 = *(undefined4 *)param_1;
    puVar5[1] = 0;
    if (param_2 != 1) {
      puVar5[2] = *(undefined4 *)(param_1 + 4);
      puVar5[3] = 1;
      if (param_2 != 2) {
        puVar5[4] = *(undefined4 *)(param_1 + 8);
        puVar5[5] = 2;
        if (param_2 != 3) {
          puVar11 = puVar5 + 7;
          uVar12 = 3;
          puVar7 = param_1 + 0xc;
          do {
            puVar11[-1] = *(undefined4 *)puVar7;
            *puVar11 = (int)uVar12;
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 2;
            puVar7 = puVar7 + 4;
          } while (param_2 != uVar12);
        }
      }
    }
    uVar14 = 0;
    if (local_74 != 0) {
      uVar14 = (int)local_70 / local_74;
    }
    local_74 = 8;
    local_78 = param_2;
    if ((uVar15 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_70);
    }
    local_70 = uVar13;
    lVar6 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,uVar13,&local_70);
    uVar16 = 0;
    if (local_74 != 0) {
      uVar16 = (int)local_70 / local_74;
    }
    local_78 = uVar16;
  }
  FUN_032bb2f0(puVar5,puVar5 + uVar15 * 2,lVar6,lVar6 + uVar15 * 8,0);
  if ((lVar6 != 0) && (-1 < (int)uVar16)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar6,(ulong)(uVar16 & 0x3fffffff) << 3);
  }
  if ((int)param_2 < 1) {
    puVar7 = (undefined8 *)0x0;
    uVar16 = 0x80000000;
    local_78 = param_2;
  }
  else {
    uVar15 = (ulong)(int)param_2;
    local_74 = 0x20;
    local_78 = param_2;
    if ((uVar15 & 0x7fffffffc000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_70);
    }
    local_70 = -(uVar15 >> 0x1a & 1) & 0xffffffff00000000 | (uVar15 & 0x7ffffff) << 5;
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_70,&local_70);
    uVar16 = 0;
    if (local_74 != 0) {
      uVar16 = (int)local_70 / local_74;
    }
    puVar9 = param_1 + (ulong)(uint)puVar5[1] * 4;
    uVar17 = *puVar9;
    uVar19 = puVar9[3];
    uVar18 = puVar9[2];
    puVar7[1] = puVar9[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    if (param_2 != 1) {
      puVar9 = param_1 + (ulong)(uint)puVar5[3] * 4;
      uVar17 = *puVar9;
      uVar19 = puVar9[3];
      uVar18 = puVar9[2];
      puVar7[5] = puVar9[1];
      puVar7[4] = uVar17;
      puVar7[7] = uVar19;
      puVar7[6] = uVar18;
      if (param_2 != 2) {
        puVar9 = param_1 + (ulong)(uint)puVar5[5] * 4;
        uVar17 = *puVar9;
        uVar19 = puVar9[3];
        uVar18 = puVar9[2];
        puVar7[9] = puVar9[1];
        puVar7[8] = uVar17;
        puVar7[0xb] = uVar19;
        puVar7[10] = uVar18;
        if (param_2 != 3) {
          lVar6 = (ulong)param_2 - 3;
          puVar9 = puVar7 + 0xe;
          puVar10 = puVar5 + 7;
          do {
            puVar1 = param_1 + (ulong)*puVar10 * 4;
            uVar17 = *puVar1;
            uVar19 = puVar1[3];
            uVar18 = puVar1[2];
            puVar9[-1] = puVar1[1];
            puVar9[-2] = uVar17;
            puVar9[1] = uVar19;
            *puVar9 = uVar18;
            lVar6 = lVar6 + -1;
            puVar9 = puVar9 + 4;
            puVar10 = puVar10 + 2;
          } while (lVar6 != 0);
        }
      }
    }
  }
  iVar8 = param_2 * 2;
  if (0 < iVar8) {
    puVar9 = puVar7;
    do {
      iVar8 = iVar8 + -1;
      uVar2 = *(undefined4 *)(puVar9 + 1);
      uVar3 = *(undefined4 *)((long)puVar9 + 0xc);
      *param_1 = *puVar9;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      puVar9 = puVar9 + 2;
      param_1 = param_1 + 2;
    } while (iVar8 != 0);
  }
  if ((-1 < (int)uVar16) && (puVar7 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar7,(ulong)(uVar16 & 0x3fffffff) << 5);
  }
  if ((puVar5 != (undefined4 *)0x0) && (-1 < (int)uVar14)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar5,(ulong)(uVar14 & 0x3fffffff) << 3);
  }
  return;
}


