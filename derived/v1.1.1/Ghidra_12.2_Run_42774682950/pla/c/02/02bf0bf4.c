/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf0bf4; name: FUN_02bf0bf4
 */


void FUN_02bf0bf4(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  plVar4 = (long *)param_1[0x22];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_02bf0c2c:
    plVar4 = (long *)param_1[0x1a];
    if (plVar4 == (long *)0x0) goto LAB_02bf0c80;
LAB_02bf0c34:
    if (plVar4[1] == 0) goto LAB_02bf0c80;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0c80;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0x19];
    if (plVar4 != (long *)0x0) goto LAB_02bf0c88;
LAB_02bf0ca8:
    plVar4 = (long *)param_1[0x18];
    if (plVar4 == (long *)0x0) goto LAB_02bf0cfc;
LAB_02bf0cb0:
    if (plVar4[1] == 0) goto LAB_02bf0cfc;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0cfc;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd];
    if (plVar4 != (long *)0x0) goto LAB_02bf0d04;
LAB_02bf0d24:
    plVar4 = (long *)param_1[0xc];
    if (plVar4 == (long *)0x0) goto LAB_02bf0d78;
LAB_02bf0d2c:
    if (plVar4[1] == 0) goto LAB_02bf0d78;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0d78;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xb];
  }
  else {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0c2c;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0x1a];
    if (plVar4 != (long *)0x0) goto LAB_02bf0c34;
LAB_02bf0c80:
    plVar4 = (long *)param_1[0x19];
    if (plVar4 == (long *)0x0) goto LAB_02bf0ca8;
LAB_02bf0c88:
    if (plVar4[1] == 0) goto LAB_02bf0ca8;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0ca8;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0x18];
    if (plVar4 != (long *)0x0) goto LAB_02bf0cb0;
LAB_02bf0cfc:
    plVar4 = (long *)param_1[0xd];
    if (plVar4 == (long *)0x0) goto LAB_02bf0d24;
LAB_02bf0d04:
    if (plVar4[1] == 0) goto LAB_02bf0d24;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02bf0d24;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xc];
    if (plVar4 != (long *)0x0) goto LAB_02bf0d2c;
LAB_02bf0d78:
    plVar4 = (long *)param_1[0xb];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
      uVar7 = *param_1;
      goto joined_r0x02bf0dc4;
    }
  }
  uVar7 = *param_1;
joined_r0x02bf0dc4:
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar5;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  *(undefined8 *)(uVar7 - 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x02bf0e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))
            (plVar4,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
  return;
}


