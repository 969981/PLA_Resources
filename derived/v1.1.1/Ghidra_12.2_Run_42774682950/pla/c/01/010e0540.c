/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0540; name: FUN_010e0540
 */


void FUN_010e0540(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  local_48 = param_5;
  lVar5 = FUN_00e9439c(auStack_38,param_5,&local_48);
  *param_1 = lVar5;
  if (lVar5 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    piVar2 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 10;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = false;
      goto joined_r0x010e0628;
    }
  }
  bVar6 = true;
joined_r0x010e0628:
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    (**(code **)(*param_1 + 0x28))
              (param_1,param_2 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x68);
  }
  if (!bVar6) {
    plVar1 = param_1 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  return;
}


