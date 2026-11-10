/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2047c; name: FUN_00d2047c
 */


void FUN_00d2047c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041ea428;
  param_1[9] = &PTR_LAB_041ea4f0;
  param_1[0xb] = &PTR_LAB_041ea520;
  plVar6 = (long *)param_1[0x9f];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = (long *)param_1[0x9e];
      goto joined_r0x00d204d0;
    }
  }
  plVar6 = (long *)param_1[0x9e];
joined_r0x00d204d0:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_00d20548(param_1 + 0x98);
  if ((long *)param_1[0x7b] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d2050c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x7b] + 0x20))();
  return;
}


