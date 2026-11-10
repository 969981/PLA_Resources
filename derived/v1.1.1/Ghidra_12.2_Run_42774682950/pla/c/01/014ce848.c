/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ce848; name: FUN_014ce848
 */


void FUN_014ce848(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *local_a0;
  char *local_98;
  long *local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  char acStack_70 [64];
  long *local_28;
  
  snprintf(acStack_70,0x40,"pane_L_list_menu_%02d_L_icon_new_00",param_3);
  FUN_00d702d8(&local_90,*(undefined8 *)(param_1 + 0x5b8));
  uVar6 = FUN_00d6e818(local_90,param_1 + (ulong)param_2 * 8 + 0x5c0);
  if (local_90 == (long *)0x0) {
LAB_014ce8bc:
    plVar10 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar10 = local_90 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_014ce8bc;
    (**(code **)(*local_90 + 0x10))();
    plVar10 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_98 = acStack_70;
  FUN_009313e8(&local_28,&local_98);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    local_90 = *(long **)PTR_DAT_04379c88;
  }
  else {
    local_90 = (long *)local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_88 = local_28[0xc];
      goto joined_r0x014ceab4;
    }
  }
  lStack_88 = *(long *)PTR_PTR_04379d00;
joined_r0x014ceab4:
  if (local_28 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_28[0xd];
  }
  local_78 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_78 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar5 = local_78;
    local_78 = plVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_011490f0(&local_a0);
  uVar7 = FUN_01143280(local_a0,uVar6);
  FUN_0283b11c(plVar10,&local_90,uVar7 & 1);
  if (local_a0 != (long *)0x0) {
    lVar9 = local_a0[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


