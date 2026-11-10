/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01792ef8; name: FUN_01792ef8
 */


void FUN_01792ef8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  puVar4 = PTR_DAT_04379660;
  local_70 = 0x3bcb2629130f5e28;
  pcStack_68 = "search_ball_out_point_check_distance";
  local_60 = 0x24;
  local_58 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar6 = PTR_DAT_04379670;
  puVar5 = PTR_DAT_04379668;
  uVar8 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d7905c(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xf3a30ebed888eaf6;
  pcStack_68 = "search_ball_out_point_check_count";
  local_60 = 0x21;
  local_58 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d78f50(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x8c97de5a94e8efd;
  pcStack_68 = "search_ball_out_point_division_count";
  local_60 = 0x24;
  local_58 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d78f50(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x10a82516323452cb;
  pcStack_68 = "search_ball_out_point_check_range_upper";
  local_60 = 0x27;
  local_58 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d7905c(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x91d536bb4aab94de;
  pcStack_68 = "search_ball_out_point_check_range_lower";
  local_60 = 0x27;
  local_58 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d7905c(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x8d8a1f90fcac0eef;
  pcStack_68 = "search_ball_out_point_line_check_offset_y";
  local_60 = 0x29;
  local_58 = (long *)0x0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_00d7d9e4(&local_48,uVar8,param_2);
  if (local_48 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d7905c(local_48,&local_70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 100) = uVar9;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


