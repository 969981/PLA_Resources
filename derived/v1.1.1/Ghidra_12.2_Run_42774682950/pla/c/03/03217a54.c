/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03217a54; name: FUN_03217a54
 */


void FUN_03217a54(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  long local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154;
  long local_150;
  undefined8 local_148;
  undefined *local_140;
  int local_138;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_108;
  void *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  long local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  int local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined *puStack_80;
  undefined4 *local_78;
  undefined4 *puStack_70;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar9 = *(undefined8 **)(lVar15 + 8);
    uVar12 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar12, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = "TtstartAsyncProcessingRun";
      uVar10 = nn::os::GetSystemTick();
      puVar9[1] = uVar10;
    }
  }
  local_10c = 0x1b;
  local_100 = (void *)0x0;
  local_f8 = -0x8000000000000000;
  local_e0 = 0;
  local_d8 = -0x8000000000000000;
  local_e8 = 0x7fffffff;
  uStack_bc = 0x7fffffff;
  uStack_b8 = 0x7fffffff;
  local_110 = 0x8000070;
  local_f0 = 0;
  local_e4 = 0;
  local_d0 = &DAT_03aad864;
  local_c8 = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_b4 = 0xffffffff;
  local_b0 = 0;
  local_108 = (undefined1)*param_2;
  local_98 = lVar15;
  if ((long *)((ulong)&local_110 | 8) != param_2) {
    iVar1 = (int)param_2[2];
    pvVar16 = (void *)param_2[1];
    if (0 < iVar1) {
      local_100 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,0,0,(long)&local_f8 + 4);
    }
    memcpy(local_100,pvVar16,(long)iVar1 << 2);
    local_f8 = CONCAT44(local_f8._4_4_,iVar1);
  }
  local_f0 = (undefined4)param_2[3];
  local_e8 = (undefined4)param_2[4];
  local_e4 = *(undefined1 *)((long)param_2 + 0x24);
  FUN_031faa70(&local_e0);
  lVar13 = param_2[9];
  local_b0 = (undefined1)param_2[0xb];
  local_c0 = (uint)lVar13;
  uStack_bc = (undefined4)((ulong)lVar13 >> 0x20);
  uStack_b8 = (undefined4)param_2[10];
  local_b4 = (undefined4)((ulong)param_2[10] >> 0x20);
  FUN_031aa380(param_1 + 0x28,param_1,&local_110);
  FUN_031f94a0(&local_118,param_1,param_2,1,*(undefined4 *)(*(long *)(param_1 + 0x4e8) + 0x28));
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar13;
    local_178 = *(long *)(lVar13 + 0x10);
  }
  else {
    local_178 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (local_178 == 0) {
    local_178 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(local_178 + 8);
    uVar12 = *(ulong *)(local_178 + 0x10);
    uVar14 = (ulong)((long)puVar9 + 0x17) & 0xfffffffffffffff8;
    if (uVar14 <= uVar12) {
      *(ulong *)(local_178 + 8) = uVar14;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar9 = "TthkaiWorldProcessingTasks::makeInitialProcessingTaskGraph";
        uVar10 = nn::os::GetSystemTick();
        puVar9[1] = uVar10;
        puVar9 = *(undefined8 **)(local_178 + 8);
        uVar12 = *(ulong *)(local_178 + 0x10);
      }
    }
    uVar14 = (ulong)((long)puVar9 + 0x17) & 0xfffffffffffffff8;
    if ((uVar14 <= uVar12) && (*(ulong *)(local_178 + 8) = uVar14, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar9[1] = uVar10;
    }
  }
  lVar13 = *(long *)(lVar4 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar13;
  }
  plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,0);
  lVar13 = CONCAT44(uStack_114,local_118);
  *puVar9 = &PTR_LAB_042f2e20;
  puVar9[1] = 0xffffffff;
  puVar9[2] = 1;
  puVar9[4] = &PTR_LAB_042f2e68;
  puVar9[5] = param_1;
  puVar9[6] = lVar13;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
    plVar8 = (long *)(lVar13 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(puVar9 + 7) = 0;
  plVar8 = *(long **)(param_1 + 0x4f0);
  *(undefined8 **)(param_1 + 0x4f0) = puVar9;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar11 = plVar8 + 2;
    do {
      lVar13 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x68);
  plVar8 = (long *)0x0;
  if (lVar13 != 0) {
    plVar8 = (long *)(lVar13 + 0x18);
  }
  lVar13 = 0;
  if (*(long *)(param_1 + 0x4f0) != 0) {
    lVar13 = *(long *)(param_1 + 0x4f0) + 0x20;
  }
  uVar10 = (**(code **)(*plVar8 + 0xa0))(plVar8,lVar13,1,1,0x40);
  *(undefined8 *)(param_1 + 0x4f8) = uVar10;
  plVar11 = *(long **)(param_1 + 0x500);
  plVar8 = (long *)CONCAT44(uStack_114,local_118);
  if (plVar11 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar11 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(param_1 + 0x500);
    }
    *(long **)(param_1 + 0x500) = plVar8;
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar8 = plVar11 + 2;
      do {
        lVar13 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  local_160 = (undefined4 *)((ulong)local_160._4_4_ << 0x20);
  local_170 = (undefined *)0x0;
  local_168 = (undefined8 *)0x8000000000000000;
  local_158 = 0x7fffffff;
  local_150 = 0;
  local_148 = -0x8000000000000000;
  local_154 = 0;
  local_140 = &DAT_03aad864;
  local_138 = 0;
  local_130 = local_130 & 0xffffff00;
  uStack_12c = 0x7fffffff;
  uStack_128 = 0x7fffffff;
  local_124 = 0xffffffff;
  local_120 = 0;
  local_178 = CONCAT71(local_178._1_7_,(char)*param_2);
  if (&local_178 != param_2) {
    iVar1 = (int)param_2[2];
    pvVar16 = (void *)param_2[1];
    if (0 < iVar1) {
      local_170 = (undefined *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,0,0,(long)&local_168 + 4);
    }
    memcpy(local_170,pvVar16,(long)iVar1 << 2);
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,iVar1);
  }
  local_160 = (undefined4 *)CONCAT44(local_160._4_4_,(int)param_2[3]);
  local_158 = (undefined4)param_2[4];
  local_154 = *(undefined1 *)((long)param_2 + 0x24);
  FUN_031faa70(&local_150,param_2 + 5);
  local_120 = (undefined1)param_2[0xb];
  lVar13 = param_2[9];
  local_130 = (uint)lVar13;
  uStack_12c = (undefined4)((ulong)lVar13 >> 0x20);
  uStack_128 = (undefined4)param_2[10];
  local_124 = (undefined4)((ulong)param_2[10] >> 0x20);
  FUN_032182cc(param_1 + 0xd8,param_1,&local_178);
  puVar6 = local_140;
  if ((local_140 != (undefined *)0x0) && (*(int *)(local_140 + 4) != -2)) {
    uVar12 = (long)local_138 + 1;
    lVar13 = *(long *)(lVar4 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar13;
    }
    plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    local_90 = (undefined4)uVar12;
    uStack_8c = 8;
    if ((uVar12 & 0x1ffffffff0000000) != 0) {
      local_88 = 2;
      puStack_80 = &DAT_0411b3a0;
      local_78 = &uStack_8c;
      puStack_70 = &local_90;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_88);
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,puVar6,-(uVar12 >> 0x1c & 1) & 0xffffffff00000000 | uVar12 * 8 & 0xfffffff8);
    local_140 = &DAT_03aad864;
    local_138 = 0;
  }
  lVar13 = local_148;
  puVar6 = PTR_PTR_0434a080;
  uVar12 = (ulong)local_148._4_4_;
  local_148 = (ulong)local_148._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_150 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_150,(uVar12 & 0x3fffffff) << 4);
  }
  lVar13 = (long)local_168;
  local_148 = CONCAT44(0x80000000,(undefined4)local_148);
  uVar7 = local_168._4_4_;
  local_150 = 0;
  local_168 = (undefined8 *)((ulong)local_168._4_4_ << 0x20);
  if ((-1 < lVar13) && (local_170 != (undefined *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_170,uVar7 << 2);
  }
  plVar8 = (long *)CONCAT44(uStack_114,local_118);
  puVar5 = local_d0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar11 = plVar8 + 2;
    do {
      lVar13 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
      puVar5 = local_d0;
    }
  }
  local_d0 = puVar5;
  if ((puVar5 != (undefined *)0x0) && (*(int *)(puVar5 + 4) != -2)) {
    uVar12 = (long)local_c8 + 1;
    lVar13 = *(long *)(lVar4 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar13;
    }
    plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    local_88 = CONCAT44(local_88._4_4_,8);
    local_118 = (undefined4)uVar12;
    if ((uVar12 & 0x1ffffffff0000000) != 0) {
      local_178 = 2;
      local_170 = &DAT_0411b3a0;
      local_168 = &local_88;
      local_160 = &local_118;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_178);
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,puVar5,-(uVar12 >> 0x1c & 1) & 0xffffffff00000000 | uVar12 * 8 & 0xfffffff8);
    local_d0 = &DAT_03aad864;
    local_c8 = 0;
  }
  lVar4 = local_d8;
  uVar12 = (ulong)local_d8._4_4_;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_e0 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_e0,(uVar12 & 0x3fffffff) << 4);
  }
  lVar4 = local_f8;
  local_d8 = CONCAT44(0x80000000,(undefined4)local_d8);
  uVar7 = local_f8._4_4_;
  local_e0 = 0;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_100 != (void *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_100,uVar7 << 2);
  }
  if (lVar15 != 0) {
    puVar9 = *(undefined8 **)(lVar15 + 8);
    uVar12 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar12, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar9[1] = uVar10;
    }
  }
  return;
}


