/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cfa70; name: FUN_011cfa70
 */


void FUN_011cfa70(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar4 = *(int *)(param_2 + 0x1e8) - 3;
  if (uVar4 < 6) {
    FUN_011d06a8(param_1);
    FUN_011d07a4(param_1,*(undefined4 *)(param_2 + 0x1e8));
  }
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = 0x997b0f82aacc15af;
  pcStack_48 = "pane_L_weather_01";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_50,uVar4 < 6);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


