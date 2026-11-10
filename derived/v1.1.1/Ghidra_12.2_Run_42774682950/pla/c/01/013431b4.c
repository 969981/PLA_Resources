/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013431b4; name: FUN_013431b4
 */


int FUN_013431b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*param_2 == 0) {
    iVar6 = -1;
  }
  else {
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
    }
    if ((*param_3 == 0) || (*(short *)(*param_3 + 0x7a) == 0)) {
      local_50 = 0x3f5ff91416c1e1ba;
      pcStack_48 = "pane_L_window_popup_lmap_00_T_area_name_00";
      local_40 = 0x2a;
      local_38 = (long *)0x0;
      FUN_0283ce7c(plVar5,&local_50,*param_2,10);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      iVar6 = 0;
    }
    else {
      local_50 = 0x3f5ffa1416c1e36d;
      pcStack_48 = "pane_L_window_popup_lmap_00_T_area_name_01";
      local_40 = 0x2a;
      local_38 = (long *)0x0;
      FUN_0283ce7c(plVar5,&local_50,*param_2,10);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      local_50 = 0x21aa7ba2e528489;
      pcStack_48 = "pane_L_window_popup_lmap_00_T_info_00";
      local_40 = 0x25;
      local_38 = (long *)0x0;
      FUN_0283ce7c(plVar5,&local_50,*param_3,10);
      if (local_38 == (long *)0x0) {
        iVar6 = 1;
      }
      else {
        (**(code **)(*local_38 + 0x20))();
        iVar6 = 1;
      }
    }
    FUN_00d2e2f0((float)iVar6,param_1 + 0x180,"anime_L_window_popup_lmap_00_ptn_window");
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return iVar6;
}


