/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe8ca4; name: FUN_02fe8ca4
 */


void FUN_02fe8ca4(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *local_48;
  undefined8 local_38;
  
  if (((param_4 == (long *)0x0) ||
      (local_38 = param_2, lVar3 = FUN_02f79850(param_4,&local_38), lVar3 == 0)) ||
     ((int)(*(uint *)(lVar3 + 4) | ((int)lVar3 - (int)param_4[2]) * 0x20000000) < 0)) {
    plVar4 = (long *)FUN_032cf5b0(0x80);
    FUN_02fe8b5c(plVar4,param_2,param_3,param_4);
    if (param_4 != (long *)0x0) {
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_48 = plVar4;
      local_38 = param_2;
      FUN_02f6f888(param_4,&local_38,&local_48);
      if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
        plVar5 = local_48 + 2;
        do {
          lVar3 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          (**(code **)(*local_48 + 0x18))();
        }
      }
    }
    *param_1 = (long)plVar4;
  }
  else {
    local_38 = param_2;
    lVar3 = FUN_02f79850(param_4,&local_38);
    if (lVar3 != 0) {
      plVar5 = (long *)(*param_4 + (long)*(int *)(lVar3 + 4) * 0x10 + 8);
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        if (plVar4[1] == 0) {
          *param_1 = (long)plVar4;
          lVar3 = plVar4[1];
        }
        else {
          plVar4 = plVar4 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = (long *)*plVar5;
          *param_1 = (long)plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar3 = plVar4[1];
        }
        if (lVar3 == 0) {
          return;
        }
        plVar5 = plVar4 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        do {
          lVar3 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
          return;
        }
        return;
      }
    }
    *param_1 = 0;
  }
  return;
}


