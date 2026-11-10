/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00942774; name: FUN_00942774
 */


/* WARNING: Removing unreachable block (ram,0x009427d0) */
/* WARNING: Removing unreachable block (ram,0x009427d4) */
/* WARNING: Removing unreachable block (ram,0x009427dc) */
/* WARNING: Removing unreachable block (ram,0x009427e4) */
/* WARNING: Removing unreachable block (ram,0x0094295c) */
/* WARNING: Removing unreachable block (ram,0x00942970) */

void FUN_00942774(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_40 = (long *)0x0;
  local_60 = *(undefined8 *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(long **)(param_1 + 0x10);
  if (local_48 == (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar7 = local_48 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar7 = *(long **)(param_1 + 0x18);
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      lVar8 = *local_40;
      local_40 = plVar7;
      (**(code **)(lVar8 + 0x20))();
      plVar2 = *(long **)(param_1 + 0x20);
      plVar7 = local_38;
      goto joined_r0x00942854;
    }
  }
  plVar2 = *(long **)(param_1 + 0x20);
  local_40 = plVar7;
  plVar7 = local_38;
joined_r0x00942854:
  local_38 = plVar2;
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_009237f0(*(undefined8 *)(param_1 + 0x28),&local_60);
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    plVar7 = local_48 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


