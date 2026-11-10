/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c084c; name: FUN_032c084c
 */


void FUN_032c084c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04348c38;
  plVar4 = (long *)param_1[9];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_032c0870:
    plVar4 = (long *)param_1[8];
    if (plVar4 == (long *)0x0) goto LAB_032c0878;
LAB_032c08f0:
    if (plVar4[1] == 0) goto LAB_032c0878;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0878;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[7];
    if (plVar4 != (long *)0x0) goto LAB_032c0924;
LAB_032c0880:
    plVar4 = (long *)param_1[6];
    if (plVar4 == (long *)0x0) goto LAB_032c0888;
LAB_032c0958:
    if (plVar4[1] == 0) goto LAB_032c0888;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0888;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[5];
    if (plVar4 != (long *)0x0) goto LAB_032c098c;
LAB_032c0890:
    plVar4 = (long *)param_1[4];
    if (plVar4 == (long *)0x0) goto LAB_032c0898;
LAB_032c09c0:
    if (plVar4[1] == 0) goto LAB_032c0898;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0898;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[3];
    if (plVar4 != (long *)0x0) goto LAB_032c09f4;
LAB_032c08a0:
    plVar4 = (long *)param_1[2];
  }
  else {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0870;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[8];
    if (plVar4 != (long *)0x0) goto LAB_032c08f0;
LAB_032c0878:
    plVar4 = (long *)param_1[7];
    if (plVar4 == (long *)0x0) goto LAB_032c0880;
LAB_032c0924:
    if (plVar4[1] == 0) goto LAB_032c0880;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0880;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[6];
    if (plVar4 != (long *)0x0) goto LAB_032c0958;
LAB_032c0888:
    plVar4 = (long *)param_1[5];
    if (plVar4 == (long *)0x0) goto LAB_032c0890;
LAB_032c098c:
    if (plVar4[1] == 0) goto LAB_032c0890;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c0890;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[4];
    if (plVar4 != (long *)0x0) goto LAB_032c09c0;
LAB_032c0898:
    plVar4 = (long *)param_1[3];
    if (plVar4 == (long *)0x0) goto LAB_032c08a0;
LAB_032c09f4:
    if (plVar4[1] == 0) goto LAB_032c08a0;
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_032c08a0;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[2];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
      plVar4 = (long *)param_1[1];
      goto joined_r0x032c0a58;
    }
  }
  plVar4 = (long *)param_1[1];
joined_r0x032c0a58:
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x032c0a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))();
      return;
    }
  }
  return;
}


