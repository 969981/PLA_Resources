/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167e620; name: FUN_0167e620
 */


void FUN_0167e620(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 *local_128;
  undefined1 *puStack_120;
  long *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [48];
  long *local_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [112];
  undefined8 local_38;
  
  local_38 = param_3;
  FUN_0167e870(auStack_b0);
  lVar6 = FUN_0093dcbc(auStack_f8,param_3,&local_38,auStack_b0);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    param_1 = (long *)0x0;
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
    param_1 = (long *)*param_1;
  }
  FUN_0167ed70(auStack_b8,param_2);
  FUN_0167eddc(auStack_f8,param_2);
  local_110 = &DAT_f4b17a579f18960;
  local_108 = 0x82a2b175229d6a5b;
  uStack_100 = 0;
  FUN_00db84c4(&local_110);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_128 = auStack_f8;
  puStack_120 = auStack_b8;
  local_118 = param_1;
  FUN_010974d0(&local_118,local_38,&puStack_120,&local_128,&local_110);
  if (local_118 != (long *)0x0) {
    plVar1 = local_118 + 10;
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
      (**(code **)(*local_118 + 0x10))();
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


