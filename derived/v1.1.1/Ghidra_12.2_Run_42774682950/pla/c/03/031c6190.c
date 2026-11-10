/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c6190; name: FUN_031c6190
 */


void FUN_031c6190(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar2 = *param_1;
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  plVar5 = *(long **)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = uVar6;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = *(long **)(param_2 + 2);
  *param_2 = uVar2;
  *(undefined8 *)(param_2 + 2) = uVar8;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031c6254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


