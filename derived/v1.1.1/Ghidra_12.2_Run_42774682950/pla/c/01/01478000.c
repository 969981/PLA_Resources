/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01478000; name: FUN_01478000
 */


void FUN_01478000(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  char *local_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  char acStack_80 [64];
  
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)plVar7[0x37];
  if (plVar8 == (long *)0x0) {
    uVar5 = FUN_02c5fb2c(param_2);
    FUN_02c395d0(0,0,uVar5,3,0,1);
  }
  else {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar5 = FUN_02c5fb2c(param_2);
    FUN_02c395d0(plVar8,0,uVar5,3,0,1);
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  plVar8 = plVar7 + 10;
  do {
    iVar2 = (int)*plVar8 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  snprintf(acStack_80,0x40,"pane_L_result_plate_%02d_T_lv_00",param_3);
  local_b0 = acStack_80;
  FUN_009313e8(&local_a8,&local_b0);
  plVar7 = local_a8;
  if (local_a8 == (long *)0x0) {
    local_a0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_a0 = local_a8[0xb];
    if (local_a8 != (long *)0x0) {
      lStack_98 = local_a8[0xc];
      goto joined_r0x01478120;
    }
  }
  lStack_98 = *(long *)PTR_PTR_04379d00;
joined_r0x01478120:
  if (local_a8 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_a8[0xd];
  }
  local_88 = (long *)0x0;
  if (local_a8 == (long *)0x0) {
    local_88 = local_a8;
  }
  else {
    (**(code **)(*local_a8 + 0x18))(local_a8);
    plVar8 = local_88;
    local_88 = plVar7;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_0147748c(param_1,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  return;
}


