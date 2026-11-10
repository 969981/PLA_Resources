/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242a28; name: FUN_03242a28
 */


undefined8 FUN_03242a28(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  uint local_68;
  int local_64;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  
  puVar5 = PTR_PTR_0434a080;
  local_78 = (undefined4 *)0x0;
  local_70 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  puVar15 = (undefined4 *)*param_2;
  local_68 = uVar1;
  if ((int)uVar1 < 1) {
    local_78 = (undefined4 *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    local_64 = 0x28;
    if (((ulong)((long)(int)uVar1 * 5) >> 0x1c & 0x1ffffffff) != 0) {
      local_50 = &local_64;
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -((ulong)(uVar1 * 5 >> 0x1c) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar1 * 5) & 0x1fffffff) << 3;
    local_78 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
    iVar11 = 0;
    if (local_64 != 0) {
      iVar11 = (int)local_60 / local_64;
    }
    uVar12 = 0;
    local_70 = CONCAT44(iVar11,uVar1);
    puVar6 = local_78;
    do {
      *puVar6 = *puVar15;
      uVar2 = puVar15[2];
      *(undefined2 *)(puVar6 + 3) = *(undefined2 *)(puVar15 + 3);
      puVar6[2] = uVar2;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0x8000000000000000;
      uVar3 = puVar15[6];
      puVar13 = *(undefined4 **)(puVar15 + 4);
      local_68 = uVar3;
      if ((int)uVar3 < 1) {
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 6) = 0x8000000000000000;
      }
      else {
        uVar9 = (ulong)(int)uVar3;
        local_64 = 4;
        if ((uVar9 & 0x3fffffffe0000000) != 0) {
          local_60 = 2;
          puStack_58 = &DAT_0411b3a0;
          local_50 = &local_64;
          puStack_48 = &local_68;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_60);
        }
        local_60 = -(uVar9 >> 0x1d & 1) & 0xffffffff00000000 | (uVar9 & 0x3fffffff) << 2;
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
        iVar11 = 0;
        if (local_64 != 0) {
          iVar11 = (int)local_60 / local_64;
        }
        puVar6[6] = uVar3;
        puVar6[7] = iVar11;
        uVar4 = uVar3 & 7;
        *(undefined4 **)(puVar6 + 4) = puVar7;
        if (6 < uVar3 - 1) {
          iVar11 = (uVar3 & 7) - uVar3;
          puVar10 = puVar7;
          local_80 = puVar13;
          do {
            puVar13 = local_80 + 8;
            *puVar10 = *local_80;
            puVar10[1] = local_80[1];
            puVar10[2] = local_80[2];
            puVar10[3] = local_80[3];
            puVar10[4] = local_80[4];
            puVar10[5] = local_80[5];
            puVar10[6] = local_80[6];
            puVar7 = puVar10 + 8;
            iVar11 = iVar11 + 8;
            puVar10[7] = local_80[7];
            puVar10 = puVar7;
            local_80 = puVar13;
          } while (iVar11 != 0);
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar13;
          puVar7 = puVar7 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      uVar12 = uVar12 + 1;
      puVar6[8] = puVar15[8];
      puVar6 = puVar6 + 10;
      puVar15 = puVar15 + 10;
    } while (uVar12 != uVar1);
  }
  FUN_0324bacc(param_1,&local_78);
  puVar15 = local_78;
  if ((int)local_70 != 0) {
    lVar14 = (long)(int)local_70 * 0x28;
    do {
      iVar11 = *(int *)((long)puVar15 + lVar14 + -0xc);
      *(undefined4 *)((long)puVar15 + lVar14 + -0x10) = 0;
      if ((-1 < iVar11) && (lVar8 = *(long *)((long)puVar15 + lVar14 + -0x18), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar8,iVar11 << 2);
      }
      lVar8 = lVar14 + -0x28;
      *(undefined8 *)((long)puVar15 + lVar14 + -0x18) = 0;
      *(undefined4 *)((long)puVar15 + lVar14 + -0xc) = 0x80000000;
      lVar14 = lVar8;
    } while (lVar8 != 0);
  }
  lVar14 = local_70;
  uVar9 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_78 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_78,(uVar9 & 0x3fffffff) * 0x28);
  }
  return 1;
}


