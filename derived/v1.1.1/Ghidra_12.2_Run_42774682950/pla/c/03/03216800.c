/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03216800; name: FUN_03216800
 */


void FUN_03216800(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined **local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  int local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 *puStack_48;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar13;
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtdisableAsyncProcessing";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
  }
  plVar9 = *(long **)(param_1 + 0x4e8);
  local_70 = lVar13;
  if (plVar9 != (long *)0x0) {
    if (*(long *)(param_1 + 0x4f0) != 0) {
      FUN_03216c8c(param_1);
      local_c0 = -0x8000000000000000;
      local_d0 = &PTR_LAB_04350d48;
      local_c8 = 0;
      FUN_03216dec(param_1,&local_d0);
      lVar12 = local_c0;
      uVar11 = (ulong)local_c0._4_4_;
      local_d0 = &PTR_LAB_04350d48;
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      if ((-1 < lVar12) && (local_c8 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_c8,(uVar11 & 0x3fffffff) << 3);
      }
      plVar9 = *(long **)(param_1 + 0x4e8);
    }
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = *(long **)(param_1 + 0x4e8);
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar1 = plVar9 + 2;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  if (0 < *(int *)(**(long **)(param_1 + 0x4e0) + 8) +
          *(int *)((long)*(long **)(param_1 + 0x4e0) + 0x1c)) {
    local_84 = 0x7fffffff7fffffff;
    local_7c = 0xffffffff;
    local_b0 = 0;
    local_b8 = 0;
    local_ac = 0;
    local_c8 = 0;
    local_c0 = -0x8000000000000000;
    local_98 = &DAT_03aad864;
    local_90 = 0;
    local_88 = 0;
    local_78 = 0;
    local_d0 = (undefined **)CONCAT71(local_d0._1_7_,1);
    local_50 = (undefined4 *)0x8000000000000000;
    local_a8 = 0;
    local_a0 = -0x8000000000000000;
    local_60 = &PTR_LAB_04350d48;
    local_58 = (undefined *)0x0;
    FUN_03217060(param_1,&local_d0,&local_60,1);
    lVar12 = (long)local_50;
    puVar6 = PTR_PTR_0434a080;
    local_60 = &PTR_LAB_04350d48;
    uVar11 = (ulong)local_50._4_4_;
    local_50 = (undefined4 *)((ulong)local_50._4_4_ << 0x20);
    if ((-1 < lVar12) && (local_58 != (undefined *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_58,(uVar11 & 0x3fffffff) << 3);
    }
    puVar8 = local_98;
    if ((local_98 != (undefined *)0x0) && (*(int *)(local_98 + 4) != -2)) {
      uVar11 = (long)local_90 + 1;
      lVar12 = *(long *)(lVar5 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar12;
      }
      plVar9 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      local_68 = (undefined4)uVar11;
      uStack_64 = 8;
      if ((uVar11 & 0x1ffffffff0000000) != 0) {
        local_60 = (undefined **)0x2;
        local_58 = &DAT_0411b3a0;
        local_50 = &uStack_64;
        puStack_48 = &local_68;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_60);
      }
      (**(code **)(*plVar9 + 0x18))
                (plVar9,puVar8,
                 -(uVar11 >> 0x1c & 1) & 0xffffffff00000000 | (uVar11 & 0x1fffffff) << 3);
      local_98 = &DAT_03aad864;
      local_90 = 0;
    }
    lVar5 = local_a0;
    uVar11 = (ulong)local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_a8 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,(uVar11 & 0x3fffffff) << 4);
    }
    lVar5 = local_c0;
    local_a0 = CONCAT44(0x80000000,(undefined4)local_a0);
    uVar7 = local_c0._4_4_;
    local_a8 = 0;
    local_c0 = (ulong)local_c0._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_c8 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_c8,uVar7 << 2);
    }
  }
  local_d0 = (undefined **)CONCAT26(local_d0._6_2_,0x1a08000010);
  FUN_031aa380(param_1 + 0x28,param_1,&local_d0);
  FUN_032bf564(*(undefined8 *)(param_1 + 0x4e0));
  plVar9 = *(long **)(param_1 + 0x4e0);
  if (plVar9 != (long *)0x0) {
    if (*plVar9 != 0) {
      FUN_032bf564(plVar9);
    }
    FUN_032cf640(plVar9,0x28);
  }
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  FUN_032beab0(*(undefined8 *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 0x4d0));
  plVar9 = *(long **)(param_1 + 0x4d8);
  if (plVar9 != (long *)0x0) {
    if (*plVar9 != 0) {
      FUN_032beab0(plVar9,0);
    }
    *(undefined4 *)(plVar9 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar9 + 0x1c)) && (plVar9[2] != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,plVar9[2],
                 ((ulong)*(uint *)((long)plVar9 + 0x1c) & 0x3fffffff) << 3);
    }
    plVar9[2] = 0;
    *(undefined4 *)((long)plVar9 + 0x1c) = 0x80000000;
    FUN_032cf640(plVar9,0x100);
  }
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
  }
  return;
}


