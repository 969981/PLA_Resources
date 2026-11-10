/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2b604; name: FUN_01b2b604
 */


void FUN_01b2b604(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x368);
  if (plVar5 == (long *)0x0) {
LAB_01b2b638:
    plVar5 = *(long **)(param_1 + 0x360);
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_01b2b638;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = *(long **)(param_1 + 0x360);
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      plVar5 = *(long **)(param_1 + 0x358);
      goto joined_r0x01b2b754;
    }
  }
  plVar5 = *(long **)(param_1 + 0x358);
joined_r0x01b2b754:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (*(long **)(param_1 + 0x338) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x338) + 0x20))();
  }
  if (*(long **)(param_1 + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x310) + 0x20))();
  }
  if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x20))();
  }
  if (*(long **)(param_1 + 0x2e0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x20))();
  }
  if (*(long **)(param_1 + 0x2c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x20))();
  }
  if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 0x20))();
  }
  if (*(long **)(param_1 + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x290) + 0x20))();
  }
  if (*(long **)(param_1 + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x288) + 0x20))();
  }
  FUN_01b2b168(param_1 + 0x28);
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01b2b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}


