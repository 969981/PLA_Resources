/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ac054; name: FUN_011ac054
 */


void FUN_011ac054(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041f5258;
  FUN_011ac2c8(param_1 + 0x2f);
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x20))();
  }
  plVar6 = (long *)param_1[0x29];
  if (plVar6 == (long *)0x0) {
LAB_011ac0b0:
    plVar6 = (long *)param_1[0x27];
  }
  else {
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
    if (iVar3 + -1 != 0) goto LAB_011ac0b0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x27];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = (long *)param_1[0x23];
  if (plVar6 == (long *)0x0) {
LAB_011ac0e4:
    plVar6 = (long *)param_1[0x22];
    if (plVar6 == (long *)0x0) goto LAB_011ac104;
LAB_011ac0ec:
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
    if (iVar3 != 0) goto LAB_011ac104;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x18];
  }
  else {
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
    if (iVar3 != 0) goto LAB_011ac0e4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x22];
    if (plVar6 != (long *)0x0) goto LAB_011ac0ec;
LAB_011ac104:
    plVar6 = (long *)param_1[0x18];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  plVar6 = (long *)param_1[5];
  if (plVar6 == (long *)0x0) {
LAB_011ac174:
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) goto LAB_011ac194;
LAB_011ac17c:
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
    if (iVar3 != 0) goto LAB_011ac194;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) goto LAB_011ac19c;
LAB_011ac1b4:
    plVar6 = (long *)param_1[2];
  }
  else {
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
    if (iVar3 != 0) goto LAB_011ac174;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[4];
    if (plVar6 != (long *)0x0) goto LAB_011ac17c;
LAB_011ac194:
    plVar6 = (long *)param_1[3];
    if (plVar6 == (long *)0x0) goto LAB_011ac1b4;
LAB_011ac19c:
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
    if (iVar3 != 0) goto LAB_011ac1b4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[2];
  }
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
      plVar6 = (long *)param_1[1];
      goto joined_r0x011ac2c0;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x011ac2c0:
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
                    /* WARNING: Could not recover jumptable at 0x011ac28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


