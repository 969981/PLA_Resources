/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03219908; name: FUN_03219908
 */


void FUN_03219908(float param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  float fVar15;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined4 *local_138;
  undefined4 local_130;
  undefined1 local_12c;
  long local_128;
  undefined8 local_120;
  undefined *local_118;
  int local_110;
  undefined1 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f0 [8];
  long local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  int local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 *puStack_68;
  
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar14;
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
  }
  if (lVar14 != 0) {
    puVar2 = *(undefined8 **)(lVar14 + 8);
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar14 + 0x10)) &&
       (*(ulong *)(lVar14 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TthkaiWorld::stepWorld";
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
  }
  local_e8 = 0;
  local_e0 = -0x8000000000000000;
  local_c8 = 0;
  local_c0 = -0x8000000000000000;
  uVar13 = 0xffffffff;
  local_f0[0] = 0;
  local_d0 = 0x7fffffff;
  local_d8 = 0;
  local_cc = 0;
  local_b8 = &DAT_03aad864;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0x7fffffff7fffffff;
  local_9c = 0xffffffff;
  local_98 = 0;
  bVar1 = *(long *)(param_2 + 0x4d8) == 0;
  local_90 = lVar14;
  if (bVar1) {
    local_f0[0] = 1;
    local_d0 = *(undefined4 *)(*(long *)(param_2 + 0x170) + 0x188);
    local_cc = 1;
    FUN_031faa70(&local_c8,param_2 + 0x148);
    local_a4 = CONCAT44(local_a4._4_4_,*(undefined4 *)(param_2 + 0x25c));
  }
  local_98 = 1;
  local_a8 = bVar1;
  if (*(char *)(param_2 + 0x4b8) == '\0') {
    FUN_032195cc(param_2,0);
    plVar7 = (long *)PTR_PTR_0434a080;
    goto LAB_03219b30;
  }
  local_148 = (undefined *)0x0;
  local_140 = (undefined ***)0x8000000000000000;
  local_138 = (undefined4 *)((ulong)local_138 & 0xffffffff00000000);
  local_118 = &DAT_03aad864;
  local_110 = 0;
  local_108 = 0;
  local_fc = 0xffffffff;
  local_f8 = 0;
  local_150 = CONCAT71(local_150._1_7_,1);
  local_128 = 0;
  local_120 = 0x8000000000000000;
  local_104 = 0x7fffffff7fffffff;
  if (*(long *)(param_2 + 0x170) != 0) {
    uVar13 = *(undefined4 *)(*(long *)(param_2 + 0x170) + 0x188);
  }
  local_12c = 1;
  local_130 = uVar13;
  FUN_031faa70(&local_128,param_2 + 0x148);
  local_108 = 1;
  local_104 = CONCAT44(local_104._4_4_,*(undefined4 *)(param_2 + 0x25c));
  local_f8 = 0;
  uVar10 = FUN_0321781c(param_2,&local_150);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_2 + 0x4f0) == 0) goto LAB_03219a64;
LAB_03219ccc:
    *(float *)(param_2 + 0x4c4) = *(float *)(param_2 + 0x4c4) + param_1;
  }
  else {
    *(float *)(param_2 + 0x4c0) = *(float *)(param_2 + 0x4c0) + param_1;
    if (*(long *)(param_2 + 0x4f0) != 0) goto LAB_03219ccc;
LAB_03219a64:
    if ((int)local_138 == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar9 = &local_148;
    }
    FUN_032195cc(param_2,ppuVar9);
    uVar10 = FUN_0321781c(param_2,&local_150);
    if ((uVar10 & 1) != 0) {
      FUN_03217a54(param_2,&local_150,param_3,param_4);
      uVar13 = *(undefined4 *)(param_2 + 0x4c0);
      *(undefined4 *)(param_2 + 0x4c0) = 0;
      *(undefined4 *)(param_2 + 0x4c4) = uVar13;
    }
  }
  if (*(long *)(param_2 + 0x4f0) != 0) {
    lVar11 = *(long *)(*(long *)(param_2 + 0x4e8) + 0x68);
    plVar7 = (long *)0x0;
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0x18);
    }
    uVar10 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined8 *)(param_2 + 0x4f8));
    if ((uVar10 & 1) == 0) {
      FUN_03218388(*(undefined4 *)(param_2 + 0x4bc),param_2);
    }
    lVar11 = *(long *)(*(long *)(param_2 + 0x4e8) + 0x68);
    plVar7 = (long *)0x0;
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0x18);
    }
    uVar10 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined8 *)(param_2 + 0x4f8));
    if ((uVar10 & 1) != 0) {
      local_80 = &PTR_LAB_04350d48;
      local_78 = (undefined *)0x0;
      local_70 = (undefined4 *)0x8000000000000000;
      FUN_03216dec(param_2,&local_80,1);
      lVar11 = (long)local_70;
      *(undefined4 *)(param_2 + 0x4c4) = 0;
      uVar10 = (ulong)local_70._4_4_;
      local_80 = &PTR_LAB_04350d48;
      local_70 = (undefined4 *)((ulong)local_70._4_4_ << 0x20);
      if ((-1 < lVar11) && (local_78 != (undefined *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_78,(uVar10 & 0x3fffffff) << 3);
      }
    }
  }
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar11;
    lVar11 = *(long *)(lVar11 + 0x10);
    puVar4 = local_118;
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
    puVar4 = local_118;
  }
  if (lVar11 != 0) {
    puVar2 = *(undefined8 **)(lVar11 + 8);
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    fVar15 = *(float *)(param_2 + 0x4c4);
    if (*(float *)(param_2 + 0x4c4) <= *(float *)(param_2 + 0x4c0)) {
      fVar15 = *(float *)(param_2 + 0x4c0);
    }
    if ((uVar10 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "MfAsync latency";
      *(float *)(puVar2 + 1) = fVar15 * 1000.0;
    }
  }
  local_118 = puVar4;
  if ((puVar4 != (undefined *)0x0) && (*(int *)(puVar4 + 4) != -2)) {
    uVar10 = (long)local_110 + 1;
    lVar11 = *(long *)(lVar3 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    local_88 = (undefined4)uVar10;
    local_84 = 8;
    if ((uVar10 & 0x1ffffffff0000000) != 0) {
      local_80 = (undefined **)0x2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,puVar4,-(uVar10 >> 0x1c & 1) & 0xffffffff00000000 | (uVar10 & 0x1fffffff) << 3
              );
    local_118 = &DAT_03aad864;
    local_110 = 0;
  }
  uVar6 = local_120;
  plVar7 = (long *)PTR_PTR_0434a080;
  uVar10 = local_120 >> 0x20;
  local_120 = uVar10 << 0x20;
  if ((-1 < (long)uVar6) && (local_128 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_128,(uVar10 & 0x3fffffff) << 4);
  }
  lVar11 = (long)local_140;
  local_120 = CONCAT44(0x80000000,(undefined4)local_120);
  uVar5 = local_140._4_4_;
  local_128 = 0;
  local_140 = (undefined ***)((ulong)local_140._4_4_ << 0x20);
  if ((-1 < lVar11) && (local_148 != (undefined *)0x0)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,local_148,uVar5 << 2);
  }
LAB_03219b30:
  FUN_03217060(param_2,local_f0,param_3,param_4);
  puVar4 = local_b8;
  if ((local_b8 != (undefined *)0x0) && (*(int *)(local_b8 + 4) != -2)) {
    uVar10 = (long)local_b0 + 1;
    lVar11 = *(long *)(lVar3 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar11;
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    local_84 = (undefined4)uVar10;
    local_80 = (undefined **)CONCAT44(local_80._4_4_,8);
    if ((uVar10 & 0x1ffffffff0000000) != 0) {
      local_150 = 2;
      local_148 = &DAT_0411b3a0;
      local_140 = &local_80;
      local_138 = &local_84;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_150);
    }
    (**(code **)(*plVar12 + 0x18))
              (plVar12,puVar4,-(uVar10 >> 0x1c & 1) & 0xffffffff00000000 | uVar10 * 8 & 0xfffffff8);
    local_b8 = &DAT_03aad864;
    local_b0 = 0;
  }
  lVar3 = local_c0;
  uVar10 = (ulong)local_c0._4_4_;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_c8 != 0)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,local_c8,(uVar10 & 0x3fffffff) << 4);
  }
  lVar3 = local_e0;
  local_c0 = CONCAT44(0x80000000,(undefined4)local_c0);
  uVar5 = local_e0._4_4_;
  local_c8 = 0;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_e8 != 0)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,local_e8,uVar5 << 2);
  }
  if (lVar14 != 0) {
    puVar2 = *(undefined8 **)(lVar14 + 8);
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar14 + 0x10)) &&
       (*(ulong *)(lVar14 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
  }
  return;
}


