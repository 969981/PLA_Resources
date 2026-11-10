/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d48458; name: FUN_00d48458
 */


void FUN_00d48458(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  
  *param_1 = &PTR_FUN_041eb328;
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 0x20))();
  }
  pcVar6 = (code *)param_1[0xd];
  if (pcVar6 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar6)(param_1 + 0x10);
  }
  plVar5 = (long *)param_1[10];
  if (plVar5 == (long *)0x0) {
LAB_00d484c0:
    plVar5 = (long *)param_1[9];
    if (plVar5 == (long *)0x0) goto LAB_00d484e0;
LAB_00d484c8:
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
    if (iVar4 != 0) goto LAB_00d484e0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[8];
    if (plVar5 != (long *)0x0) goto LAB_00d484e8;
LAB_00d48500:
    plVar5 = (long *)param_1[7];
    if (plVar5 == (long *)0x0) goto LAB_00d48520;
LAB_00d48508:
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
    if (iVar4 != 0) goto LAB_00d48520;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) goto LAB_00d48528;
LAB_00d48540:
    plVar5 = (long *)param_1[5];
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
    if (iVar4 != 0) goto LAB_00d484c0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) goto LAB_00d484c8;
LAB_00d484e0:
    plVar5 = (long *)param_1[8];
    if (plVar5 == (long *)0x0) goto LAB_00d48500;
LAB_00d484e8:
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
    if (iVar4 != 0) goto LAB_00d48500;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[7];
    if (plVar5 != (long *)0x0) goto LAB_00d48508;
LAB_00d48520:
    plVar5 = (long *)param_1[6];
    if (plVar5 == (long *)0x0) goto LAB_00d48540;
LAB_00d48528:
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
    if (iVar4 != 0) goto LAB_00d48540;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[5];
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
      plVar5 = (long *)param_1[4];
      goto joined_r0x00d48614;
    }
  }
  plVar5 = (long *)param_1[4];
joined_r0x00d48614:
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
                    /* WARNING: Could not recover jumptable at 0x00d4862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


