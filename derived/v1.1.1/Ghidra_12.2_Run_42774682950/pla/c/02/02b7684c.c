/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7684c; name: FUN_02b7684c
 */


void FUN_02b7684c(long param_1,long *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong local_50 [2];
  undefined4 local_40;
  long local_38;
  undefined1 auStack_28 [8];
  
  *(int *)(param_1 + 0x44) = param_3;
  local_50[1] = 4;
  local_40 = 0;
  local_50[0] = (ulong)(uint)(*(int *)(param_1 + 0x40) * param_3);
  local_38 = *param_2;
  lVar6 = FUN_01b34908(auStack_28,*(undefined8 *)(local_38 + 8),&local_38);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02bbfe84(lVar6,local_50,param_4,0,0);
  plVar7 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x38) = lVar6;
  return;
}


