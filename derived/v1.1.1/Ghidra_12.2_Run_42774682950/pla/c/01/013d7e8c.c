/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d7e8c; name: FUN_013d7e8c
 */


void FUN_013d7e8c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  
  if (*(long *)(param_1 + 0x5b0) == 0) {
    local_58[0] = *(long **)(param_1 + 8);
    lVar6 = FUN_013d89dc(local_58[0],local_58);
    if (lVar6 != 0) {
      piVar2 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x5b0);
    *(undefined8 *)(param_1 + 0x5b0) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x5b0) = lVar6;
    local_28 = "bin/effect/field/particle/uiux/game_start/ef_uiux_game_start00.ptcl";
    FUN_009f1b84(local_58,&local_28);
    FUN_02850d78(lVar6,local_58,*(undefined8 *)(param_1 + 8));
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_58[0] != (long *)0x0) {
      (**(code **)(*local_58[0] + 0x20))();
    }
    FUN_02850488(local_58,*(undefined8 *)(param_1 + 8));
    plVar7 = *(long **)(param_1 + 0x5b8);
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x5b8) = local_58[0];
  }
  return;
}


