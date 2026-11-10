/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c545f0; name: FUN_02c545f0
 */


void FUN_02c545f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_0428ac68;
  plVar5 = (long *)param_1[0xb];
  if (plVar5 == (long *)0x0) {
LAB_02c5462c:
    plVar5 = (long *)param_1[10];
    if (plVar5 == (long *)0x0) goto LAB_02c5464c;
LAB_02c54634:
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
    if (iVar4 != 0) goto LAB_02c5464c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) goto LAB_02c54654;
LAB_02c5466c:
    plVar5 = (long *)param_1[8];
    if (plVar5 == (long *)0x0) goto LAB_02c5468c;
LAB_02c54674:
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
    if (iVar4 != 0) goto LAB_02c5468c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[7];
    if (plVar5 != (long *)0x0) goto LAB_02c54694;
LAB_02c546ac:
    plVar5 = (long *)param_1[6];
    if (plVar5 == (long *)0x0) goto LAB_02c546cc;
LAB_02c546b4:
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
    if (iVar4 != 0) goto LAB_02c546cc;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[5];
    if (plVar5 != (long *)0x0) goto LAB_02c546d4;
LAB_02c546ec:
    plVar5 = (long *)param_1[4];
    if (plVar5 == (long *)0x0) goto LAB_02c5470c;
LAB_02c546f4:
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
    if (iVar4 != 0) goto LAB_02c5470c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) goto LAB_02c54714;
LAB_02c5472c:
    plVar5 = (long *)param_1[2];
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
    if (iVar4 != 0) goto LAB_02c5462c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[10];
    if (plVar5 != (long *)0x0) goto LAB_02c54634;
LAB_02c5464c:
    plVar5 = (long *)param_1[9];
    if (plVar5 == (long *)0x0) goto LAB_02c5466c;
LAB_02c54654:
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
    if (iVar4 != 0) goto LAB_02c5466c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[8];
    if (plVar5 != (long *)0x0) goto LAB_02c54674;
LAB_02c5468c:
    plVar5 = (long *)param_1[7];
    if (plVar5 == (long *)0x0) goto LAB_02c546ac;
LAB_02c54694:
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
    if (iVar4 != 0) goto LAB_02c546ac;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) goto LAB_02c546b4;
LAB_02c546cc:
    plVar5 = (long *)param_1[5];
    if (plVar5 == (long *)0x0) goto LAB_02c546ec;
LAB_02c546d4:
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
    if (iVar4 != 0) goto LAB_02c546ec;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[4];
    if (plVar5 != (long *)0x0) goto LAB_02c546f4;
LAB_02c5470c:
    plVar5 = (long *)param_1[3];
    if (plVar5 == (long *)0x0) goto LAB_02c5472c;
LAB_02c54714:
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
    if (iVar4 != 0) goto LAB_02c5472c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[2];
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
      plVar5 = (long *)param_1[1];
      goto joined_r0x02c54860;
    }
  }
  plVar5 = (long *)param_1[1];
joined_r0x02c54860:
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
                    /* WARNING: Could not recover jumptable at 0x02c54878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


