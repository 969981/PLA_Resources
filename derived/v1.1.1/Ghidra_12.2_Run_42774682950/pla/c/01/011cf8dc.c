/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cf8dc; name: FUN_011cf8dc
 */


void FUN_011cf8dc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0x660) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x5b0) + (ulong)*(byte *)(param_1 + 0x658) * 0x40);
    *(undefined8 *)(param_1 + 0x5e8) = *puVar2;
    FUN_011d0dac(param_1 + 0x5f0,puVar2 + 1);
  }
  lVar6 = *(long *)(param_1 + 0x5f0);
  lVar7 = *(long *)(param_1 + 0x5f8);
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_50 = 0x90deee52f021a3c6;
  pcStack_48 = "pane_N_no_info_00";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  FUN_0283b11c(plVar8,&local_50,lVar6 == lVar7);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x011cf9b0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x2c8);
joined_r0x011cf9b0:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_50 = 0xfbfd619be4b9e9b0;
  pcStack_48 = "pane_N_info_00";
  local_40 = 0xe;
  local_38 = (long *)0x0;
  FUN_0283b11c(plVar8,&local_50,lVar6 != lVar7);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


