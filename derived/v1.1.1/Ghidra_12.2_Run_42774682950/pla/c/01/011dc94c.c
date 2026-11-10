/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dc94c; name: FUN_011dc94c
 */


void FUN_011dc94c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(long *)(param_1 + 0x6f0) != 0) {
    FUN_0115b058(*(long *)(param_1 + 0x6f0),1);
  }
  if (*(long *)(param_1 + 0x5b0) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x5d8));
    FUN_00256608(*(undefined8 *)(param_1 + 0x5e0));
  }
  if (*(char *)(param_1 + 0x6fa) != '\0') {
    plVar5 = *(long **)(param_1 + 0x2c8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    FUN_0283d6dc(plVar5);
    local_40 = &DAT_5ff521b38bac66dd;
    pcStack_38 = "pane_L_pokeplate_player_00";
    local_30 = 0x1a;
    local_28 = (long *)0x0;
    lVar6 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
    if (lVar6 != 0) {
      FUN_002350e8(*(undefined8 *)(lVar6 + 0xe8),"T_pokename_00");
    }
    *(undefined1 *)(param_1 + 0x6fa) = 0;
  }
  return;
}


