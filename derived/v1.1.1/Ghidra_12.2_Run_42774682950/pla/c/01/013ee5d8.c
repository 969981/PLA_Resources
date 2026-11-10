/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ee5d8; name: FUN_013ee5d8
 */


void FUN_013ee5d8(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_28;
  
  FUN_02814e04(*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x10),&DAT_03a7b7d0,*(undefined8 *)(param_1 + 0x18));
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x10),&DAT_03a7b7d8,*(undefined8 *)(param_1 + 0x20));
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x10),&DAT_03a7b7e0,*(undefined8 *)(param_1 + 0x28));
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x10),&DAT_03a7b7e8,*(undefined8 *)(param_1 + 0x30));
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_28 = *(long **)(param_1 + 0x18);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_02814858(uVar5,0,1,&local_28);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_38 = *(long **)(param_1 + 0x20);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_02814858(uVar5,1,0,&local_38);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_40 = *(long **)(param_1 + 0x28);
    if (local_40 != (long *)0x0) {
      plVar1 = local_40 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_02814858(uVar5,2,2,&local_40);
    if (local_40 != (long *)0x0) {
      plVar1 = local_40 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if ((param_2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      local_48 = *(long **)(param_1 + 0x30);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_02814858(uVar5,3,5,&local_48);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
    }
  }
  FUN_02814a44(*(undefined8 *)(param_1 + 8),1);
  return;
}


