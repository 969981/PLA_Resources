/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03379058; name: FUN_03379058
 */


void FUN_03379058(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  if ((param_2[2] & 1) == 0) {
    uVar7 = param_1[2];
  }
  else {
    FUN_032e0c28(param_2[2] & 0xfffffffffffffffe);
    uVar7 = param_1[2];
  }
  if ((uVar7 & 1) != 0) {
    plVar6 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  param_1[2] = param_2[2];
  FUN_032c7c38(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 4) = param_4;
  return;
}


