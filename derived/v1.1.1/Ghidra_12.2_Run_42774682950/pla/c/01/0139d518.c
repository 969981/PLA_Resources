/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139d518; name: FUN_0139d518
 */


void FUN_0139d518(uint *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *local_308;
  char local_300 [8];
  undefined1 auStack_2f8 [15];
  char local_2e9;
  
  uVar5 = *param_2;
  FUN_013a3a1c(local_300,param_2[1]);
  if ((local_300[0] == '\0') || (local_2e9 != '\x01')) {
    *param_1 = 1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar5 = FUN_00d39d00(uVar5);
    FUN_01397ba0(&local_308,uVar5,auStack_2f8);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (uint)(local_308 == (long *)0x0);
    if (local_308 == (long *)0x0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      plVar6 = local_308 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)*plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = *(long **)(param_1 + 2);
      *(long **)(param_1 + 2) = local_308;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
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
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (local_308 != (long *)0x0) {
      plVar6 = local_308 + 10;
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_308 + 0x10))();
      }
    }
  }
  return;
}


