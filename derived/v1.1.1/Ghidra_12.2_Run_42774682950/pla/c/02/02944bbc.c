/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02944bbc; name: FUN_02944bbc
 */


void FUN_02944bbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x100);
  if (plVar5 == (long *)0x0) {
LAB_02944bf0:
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 == (long *)0x0) goto LAB_02944c14;
LAB_02944bf8:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944c14;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xd8);
    if (plVar5 != (long *)0x0) goto LAB_02944c1c;
LAB_02944c38:
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_02944c5c;
LAB_02944c40:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944c5c;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xe0);
    if (plVar5 != (long *)0x0) goto LAB_02944c64;
LAB_02944c80:
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 == (long *)0x0) goto LAB_02944ca4;
LAB_02944c88:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944ca4;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 != (long *)0x0) goto LAB_02944cac;
LAB_02944cc8:
    plVar5 = *(long **)(param_1 + 200);
    if (plVar5 == (long *)0x0) goto LAB_02944cec;
LAB_02944cd0:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 200) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944cec;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 != (long *)0x0) goto LAB_02944cf4;
LAB_02944d10:
    plVar5 = *(long **)(param_1 + 0xd0);
  }
  else {
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0x100) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944bf0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) goto LAB_02944bf8;
LAB_02944c14:
    plVar5 = *(long **)(param_1 + 0xd8);
    if (plVar5 == (long *)0x0) goto LAB_02944c38;
LAB_02944c1c:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944c38;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 != (long *)0x0) goto LAB_02944c40;
LAB_02944c5c:
    plVar5 = *(long **)(param_1 + 0xe0);
    if (plVar5 == (long *)0x0) goto LAB_02944c80;
LAB_02944c64:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944c80;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 != (long *)0x0) goto LAB_02944c88;
LAB_02944ca4:
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 == (long *)0x0) goto LAB_02944cc8;
LAB_02944cac:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944cc8;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 200);
    if (plVar5 != (long *)0x0) goto LAB_02944cd0;
LAB_02944cec:
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 == (long *)0x0) goto LAB_02944d10;
LAB_02944cf4:
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02944d10;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xd0);
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xd0) = 0;
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
      plVar5 = *(long **)(param_1 + 0xf8);
      goto joined_r0x02944e4c;
    }
  }
  plVar5 = *(long **)(param_1 + 0xf8);
joined_r0x02944e4c:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    *(undefined8 *)(param_1 + 0xf8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x02944e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


