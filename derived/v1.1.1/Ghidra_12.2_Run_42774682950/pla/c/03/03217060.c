/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03217060; name: FUN_03217060
 */


void FUN_03217060(long param_1,undefined1 *param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  void *__src;
  long *local_118;
  long local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  int local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  long local_90;
  long *local_88;
  undefined *puStack_80;
  undefined4 *local_78;
  long *plStack_70;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar13 = *(undefined8 **)(lVar15 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtdoSynchronousProcessingRun";
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  local_fc = 0x1f;
  local_f0 = (void *)0x0;
  local_e8 = -0x8000000000000000;
  local_d0 = 0;
  local_c8 = -0x8000000000000000;
  local_d8 = 0x7fffffff;
  uStack_ac = 0x7fffffff;
  uStack_a8 = 0x7fffffff;
  local_100 = 0x8000070;
  local_e0 = 0;
  local_d4 = 0;
  local_c0 = &DAT_03aad864;
  local_b8 = 0;
  local_b0 = local_b0 & 0xffffff00;
  local_a4 = 0xffffffff;
  local_a0 = 0;
  local_f8 = *param_2;
  local_90 = lVar15;
  if ((undefined1 *)((ulong)&local_100 | 8) != param_2) {
    iVar2 = *(int *)(param_2 + 0x10);
    __src = *(void **)(param_2 + 8);
    if (0 < iVar2) {
      local_f0 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar2,4,0,0,(long)&local_e8 + 4);
    }
    memcpy(local_f0,__src,(long)iVar2 << 2);
    local_e8 = CONCAT44(local_e8._4_4_,iVar2);
  }
  local_e0 = *(undefined4 *)(param_2 + 0x18);
  local_d8 = *(undefined4 *)(param_2 + 0x20);
  local_d4 = param_2[0x24];
  FUN_031faa70(&local_d0,param_2 + 0x28);
  local_a0 = param_2[0x58];
  local_b0 = (uint)*(undefined8 *)(param_2 + 0x48);
  uStack_ac = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  uStack_a8 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  local_a4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  FUN_031aa380(param_1 + 0x28,param_1,&local_100);
  FUN_031f94a0(&local_108,param_1,param_2,0,param_4);
  lVar10 = *(long *)(lVar5 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar10;
    local_110 = *(long *)(lVar10 + 0x10);
    if (local_110 != 0) goto LAB_032171ec;
LAB_03217200:
    if (lVar10 != 0) goto LAB_03217208;
LAB_0321762c:
    lVar10 = local_110;
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar12;
    local_88 = *(long **)(lVar12 + 0x10);
    if (local_88 == (long *)0x0) goto LAB_03217658;
LAB_03217210:
    puVar13 = (undefined8 *)local_88[1];
    uVar9 = local_88[2];
    uVar11 = (ulong)((long)puVar13 + 0x17) & 0xfffffffffffffff8;
    if (uVar11 <= uVar9) {
      local_88[1] = uVar11;
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar13 = "TthkaiWorldProcessingTasks::makeInitialProcessingTaskGraph";
        uVar8 = nn::os::GetSystemTick();
        puVar13[1] = uVar8;
        puVar13 = (undefined8 *)local_88[1];
        uVar9 = local_88[2];
      }
    }
    uVar11 = (ulong)((long)puVar13 + 0x17) & 0xfffffffffffffff8;
    if ((uVar11 <= uVar9) && (local_88[1] = uVar11, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  else {
    local_110 = *(long *)(lVar10 + 0x10);
    if (local_110 == 0) goto LAB_03217200;
LAB_032171ec:
    puVar13 = *(undefined8 **)(local_110 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(local_110 + 0x10) < uVar9) ||
       (*(ulong *)(local_110 + 8) = uVar9, puVar13 == (undefined8 *)0x0)) goto LAB_03217200;
    *puVar13 = "TtInitialProcessing";
    uVar8 = nn::os::GetSystemTick();
    puVar13[1] = uVar8;
    lVar10 = *(long *)(lVar5 + 0x38d490);
    if (lVar10 == 0) goto LAB_0321762c;
LAB_03217208:
    local_88 = *(long **)(lVar10 + 0x10);
    lVar10 = local_110;
    if (local_88 != (long *)0x0) goto LAB_03217210;
LAB_03217658:
    local_88 = (long *)0x0;
  }
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  while( true ) {
    if (*(long *)(lVar5 + 0x38d490) == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar10;
      lVar10 = *(long *)(lVar10 + 0x10);
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
    }
    if (lVar10 != 0) {
      puVar13 = *(undefined8 **)(lVar10 + 8);
      uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
         (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = "TtPhases";
        uVar8 = nn::os::GetSystemTick();
        puVar13[1] = uVar8;
      }
    }
    FUN_031f9b80(&local_88,CONCAT44(uStack_104,local_108));
    if (local_88 == (long *)0x0) break;
    (**(code **)(*param_3 + 0xb0))(param_3,local_88,0);
    if ((local_88 != (long *)0x0) && (local_88[1] != 0)) {
      plVar14 = local_88 + 2;
      do {
        lVar12 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_88 + 0x18))();
      }
    }
    if (lVar10 != 0) {
      puVar13 = *(undefined8 **)(lVar10 + 8);
      uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
         (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_0390f40e;
        uVar8 = nn::os::GetSystemTick();
        puVar13[1] = uVar8;
      }
    }
  }
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar10;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtFinalProcessing";
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  local_110 = lVar10;
  FUN_031fa4e0(&local_118,CONCAT44(uStack_104,local_108));
  if (((local_118 != (long *)0x0) && (FUN_0333ab70(&local_88,local_118,0), local_118 != (long *)0x0)
      ) && (local_118[1] != 0)) {
    plVar14 = local_118 + 2;
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*local_118 + 0x18))();
    }
  }
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
      plVar14 = (long *)CONCAT44(uStack_104,local_108);
      goto joined_r0x032175b4;
    }
  }
  plVar14 = (long *)CONCAT44(uStack_104,local_108);
joined_r0x032175b4:
  puVar6 = local_c0;
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    plVar1 = plVar14 + 2;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))();
      puVar6 = local_c0;
    }
  }
  local_c0 = puVar6;
  if ((puVar6 != (undefined *)0x0) && (*(int *)(puVar6 + 4) != -2)) {
    uVar9 = (long)local_b8 + 1;
    lVar10 = *(long *)(lVar5 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    local_108 = 8;
    local_110 = CONCAT44(local_110._4_4_,(int)uVar9);
    if ((uVar9 & 0x1ffffffff0000000) != 0) {
      local_88 = (long *)0x2;
      puStack_80 = &DAT_0411b3a0;
      local_78 = &local_108;
      plStack_70 = &local_110;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_88);
    }
    (**(code **)(*plVar14 + 0x18))
              (plVar14,puVar6,-(uVar9 >> 0x1c & 1) & 0xffffffff00000000 | uVar9 * 8 & 0xfffffff8);
    local_c0 = &DAT_03aad864;
    local_b8 = 0;
  }
  lVar5 = local_c8;
  puVar6 = PTR_PTR_0434a080;
  uVar9 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_d0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_d0,(uVar9 & 0x3fffffff) << 4);
  }
  lVar5 = local_e8;
  local_c8 = CONCAT44(0x80000000,(undefined4)local_c8);
  uVar7 = local_e8._4_4_;
  local_d0 = 0;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_f0 != (void *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_f0,uVar7 << 2);
  }
  if (lVar15 != 0) {
    puVar13 = *(undefined8 **)(lVar15 + 8);
    uVar9 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar9, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar13[1] = uVar8;
    }
  }
  return;
}


