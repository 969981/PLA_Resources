/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006df108; name: FUN_006df108
 */


void FUN_006df108(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  *param_2 = &PTR_LAB_0419ccc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  param_2[5] = lVar4;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((undefined8 *)(param_1 + 0x10) != param_2 + 2) {
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) {
      param_2[10] = 0;
      return;
    }
    if (plVar5 == (long *)(param_1 + 0x30)) {
      param_2[10] = param_2 + 6;
                    /* WARNING: Could not recover jumptable at 0x006df1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return;
    }
    uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
    param_2[10] = uVar3;
  }
  return;
}


