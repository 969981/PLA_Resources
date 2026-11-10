/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ea748; name: FUN_013ea748
 */


void FUN_013ea748(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_0420c098;
  plVar6 = (long *)param_1[9];
  if (plVar6 == (long *)0x0) {
LAB_013ea784:
    plVar6 = (long *)param_1[8];
    if (plVar6 == (long *)0x0) goto LAB_013ea7a4;
LAB_013ea78c:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_013ea7a4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[7];
    if (plVar6 != (long *)0x0) goto LAB_013ea7ac;
LAB_013ea7c4:
    plVar6 = (long *)param_1[6];
    if (plVar6 == (long *)0x0) goto LAB_013ea7e4;
LAB_013ea7cc:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_013ea7e4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[5];
    if (plVar6 != (long *)0x0) goto LAB_013ea7ec;
LAB_013ea804:
    plVar6 = (long *)param_1[4];
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_013ea784;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[8];
    if (plVar6 != (long *)0x0) goto LAB_013ea78c;
LAB_013ea7a4:
    plVar6 = (long *)param_1[7];
    if (plVar6 == (long *)0x0) goto LAB_013ea7c4;
LAB_013ea7ac:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_013ea7c4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) goto LAB_013ea7cc;
LAB_013ea7e4:
    plVar6 = (long *)param_1[5];
    if (plVar6 == (long *)0x0) goto LAB_013ea804;
LAB_013ea7ec:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_013ea804;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[4];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
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
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[3];
      goto joined_r0x013ea8dc;
    }
  }
  plVar6 = (long *)param_1[3];
joined_r0x013ea8dc:
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x013ea8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


