/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bc1dc; name: FUN_027bc1dc
 */


void FUN_027bc1dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  
  pcVar6 = (code *)param_1[0x25];
  if (pcVar6 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar6)(param_1 + 0x28);
  }
  pcVar6 = (code *)param_1[0x15];
  if (pcVar6 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar6)(param_1 + 0x18);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 == (long *)0x0) {
LAB_027bc23c:
    plVar5 = (long *)param_1[5];
    if (plVar5 == (long *)0x0) goto LAB_027bc25c;
LAB_027bc244:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_027bc25c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[4];
    if (plVar5 != (long *)0x0) goto LAB_027bc264;
LAB_027bc27c:
    plVar5 = (long *)param_1[3];
    if (plVar5 == (long *)0x0) goto LAB_027bc29c;
LAB_027bc284:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_027bc29c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) goto LAB_027bc2a4;
LAB_027bc2bc:
    plVar5 = (long *)param_1[1];
  }
  else {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_027bc23c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[5];
    if (plVar5 != (long *)0x0) goto LAB_027bc244;
LAB_027bc25c:
    plVar5 = (long *)param_1[4];
    if (plVar5 == (long *)0x0) goto LAB_027bc27c;
LAB_027bc264:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_027bc27c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) goto LAB_027bc284;
LAB_027bc29c:
    plVar5 = (long *)param_1[2];
    if (plVar5 == (long *)0x0) goto LAB_027bc2bc;
LAB_027bc2a4:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_027bc2bc;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[1];
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      param_1 = (long *)*param_1;
      goto joined_r0x027bc390;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x027bc390:
  if (param_1 != (long *)0x0) {
    plVar5 = param_1 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x027bc3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


