/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01343978; name: FUN_01343978
 */


undefined8 FUN_01343978(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
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
      lVar5 = *param_2;
    }
    local_40 = 0x21aa6ba2e5282d6;
    pcStack_38 = "pane_L_window_popup_lmap_00_T_info_01";
    local_30 = 0x25;
    local_28 = (long *)0x0;
    FUN_0283ce7c(plVar6,&local_40,lVar5,10);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_00d2e2f0(0x40a00000,param_1 + 0x180,"anime_L_window_popup_lmap_00_ptn_window");
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    uVar4 = 5;
  }
  return uVar4;
}


