/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aeb944; name: FUN_02aeb944
 */


void FUN_02aeb944(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_042830e0;
  param_1[9] = &PTR_LAB_04283140;
  param_1[0xb] = &PTR_LAB_04283170;
  plVar6 = (long *)param_1[0x84];
  if (plVar6 == (long *)0x0) {
LAB_02aeb994:
    plVar6 = (long *)param_1[0x83];
    if (plVar6 == (long *)0x0) goto LAB_02aeb9b4;
LAB_02aeb99c:
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02aeb9b4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x82];
    if (plVar6 != (long *)0x0) goto LAB_02aeb9bc;
LAB_02aeb9d4:
    plVar6 = (long *)param_1[0x81];
  }
  else {
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02aeb994;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x83];
    if (plVar6 != (long *)0x0) goto LAB_02aeb99c;
LAB_02aeb9b4:
    plVar6 = (long *)param_1[0x82];
    if (plVar6 == (long *)0x0) goto LAB_02aeb9d4;
LAB_02aeb9bc:
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_02aeb9d4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x81];
  }
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[0x80];
      goto joined_r0x02aebb98;
    }
  }
  plVar6 = (long *)param_1[0x80];
joined_r0x02aebb98:
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_00db72dc(param_1 + 0x6a);
  plVar6 = (long *)param_1[0x68];
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_02aebf10(param_1 + 0x14);
  plVar6 = (long *)param_1[0xc];
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[0xd];
  if (plVar10 == plVar6) {
    plVar10 = plVar6;
  }
  else {
    do {
      plVar10 = plVar10 + -1;
      plVar7 = (long *)*plVar10;
      if (plVar7 != (long *)0x0) {
        lVar9 = plVar7[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
    } while (plVar10 != plVar6);
    plVar10 = (long *)param_1[0xc];
  }
  param_1[0xd] = plVar6;
  lVar9 = param_1[0xe];
  plVar6 = (long *)param_1[0xf];
  uVar8 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar8 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,plVar10,lVar9 - (long)plVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02aebb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,lVar9 - (long)plVar10,8);
  return;
}


