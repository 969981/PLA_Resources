/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e0d04; name: FUN_006e0d04
 */


void FUN_006e0d04(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_2 = &PTR_LAB_0419ce20;
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar4;
  lVar5 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  param_2[5] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((undefined8 *)(param_1 + 0x10) != param_2 + 2) {
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 == (long *)0x0) {
      param_2[10] = 0;
      plVar3 = *(long **)(param_1 + 0x80);
    }
    else if (plVar3 == (long *)(param_1 + 0x30)) {
      param_2[10] = param_2 + 6;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      plVar3 = *(long **)(param_1 + 0x80);
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x30))();
      param_2[10] = uVar4;
      plVar3 = *(long **)(param_1 + 0x80);
    }
    if (plVar3 == (long *)0x0) {
      param_2[0x10] = 0;
      return;
    }
    if (plVar3 == (long *)(param_1 + 0x60)) {
      param_2[0x10] = param_2 + 0xc;
                    /* WARNING: Could not recover jumptable at 0x006e0e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x80) + 0x28))();
      return;
    }
    uVar4 = (**(code **)(*plVar3 + 0x30))();
    param_2[0x10] = uVar4;
  }
  return;
}


