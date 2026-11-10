/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c130c8; name: FUN_02c130c8
 */


void FUN_02c130c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *local_30 [2];
  
  plVar6 = param_1 + 1;
  *param_1 = &PTR_LAB_04288ae0;
  FUN_02c12d94(local_30,plVar6);
  if (local_30[0] != (long *)0x0) {
    FUN_02a77334(local_30[0],param_1);
  }
  plVar5 = param_1 + 2;
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    do {
      if (*plVar5 != lVar7) {
        ClearExclusiveLocal();
        goto LAB_02c13168;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
  }
LAB_02c13168:
  plVar6 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar6 == (long *)0x0) {
LAB_02c13190:
    if (local_30[0] == (long *)0x0) goto LAB_02c131b4;
LAB_02c13198:
    lVar7 = local_30[0][0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02c131b4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_30[0] + 0x20))();
    plVar6 = (long *)param_1[5];
    if (plVar6 != (long *)0x0) goto LAB_02c131bc;
LAB_02c131d8:
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) goto LAB_02c131f8;
LAB_02c131e0:
    plVar5 = plVar6 + 10;
    do {
      iVar2 = (int)*plVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 != 0) goto LAB_02c131f8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[3];
  }
  else {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02c13190;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    if (local_30[0] != (long *)0x0) goto LAB_02c13198;
LAB_02c131b4:
    plVar6 = (long *)param_1[5];
    if (plVar6 == (long *)0x0) goto LAB_02c131d8;
LAB_02c131bc:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02c131d8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[4];
    if (plVar6 != (long *)0x0) goto LAB_02c131e0;
LAB_02c131f8:
    plVar6 = (long *)param_1[3];
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 10;
    do {
      iVar2 = (int)*plVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[1];
      goto joined_r0x02c1321c;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x02c1321c:
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02c132e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


