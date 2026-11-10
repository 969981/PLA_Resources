/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d06a8; name: FUN_011d06a8
 */


void FUN_011d06a8(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 != 0) {
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
    local_50 = 0x3e54de1fdb308e9b;
    pcStack_48 = "anime_L_weather_01_L_weather_00_switch_icon";
    local_40 = 0x2b;
    local_38 = (long *)0x0;
    FUN_0283b1e8(plVar5,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x3e54de1fdb308e9b;
    pcStack_48 = "anime_L_weather_01_L_weather_00_switch_icon";
    local_40 = 0x2b;
    local_38 = (long *)0x0;
    FUN_0283b748((float)(param_2 + -1),plVar5,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
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
  return;
}


