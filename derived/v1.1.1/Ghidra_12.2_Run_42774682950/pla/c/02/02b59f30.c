/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b59f30; name: FUN_02b59f30
 */


void FUN_02b59f30(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_30 [8];
  long local_28;
  
  if (param_5 == 0) {
    param_5 = *(long *)(param_2 + 8);
  }
  local_28 = param_2;
  lVar6 = FUN_02b5a848(auStack_30,param_5,&local_28,param_4);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_1;
  }
  if (**(char **)(param_3 + 8) != '\0') {
    FUN_02bba5e0(&local_28,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x58) + 0x78),param_3
                );
    plVar7 = *(long **)(lVar6 + 0x68);
    *(undefined8 *)(lVar6 + 0x68) = 0;
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
    *(long *)(lVar6 + 0x68) = local_28;
  }
  plVar7 = *(long **)(lVar6 + 0x60);
  if (plVar7 == (long *)0x0) {
    FUN_02ba9aa4(0,3,0,0,0,0);
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02ba9aa4(plVar7,3,0,0,0,0);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


