/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289912c; name: FUN_0289912c
 */


void FUN_0289912c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[1];
  if ((long *)param_1[1] == plVar10) {
    plVar6 = plVar10;
  }
  else {
    do {
      plVar5 = (long *)plVar6[-2];
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar9 = plVar5 + 2;
        do {
          lVar8 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      plVar5 = (long *)plVar6[-3];
      plVar9 = plVar6 + -5;
      if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_028991c8:
        plVar6 = (long *)plVar6[-4];
        if (plVar6 == (long *)0x0) goto LAB_0289921c;
LAB_028991d0:
        if (plVar6[1] == 0) goto LAB_0289921c;
        plVar5 = plVar6 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 != 0) goto LAB_0289921c;
        (**(code **)(*plVar6 + 0x18))();
        plVar6 = (long *)*plVar9;
      }
      else {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 != 0) goto LAB_028991c8;
        (**(code **)(*plVar5 + 0x18))();
        plVar6 = (long *)plVar6[-4];
        if (plVar6 != (long *)0x0) goto LAB_028991d0;
LAB_0289921c:
        plVar6 = (long *)*plVar9;
      }
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar5 = plVar6 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = plVar9;
    } while (plVar9 != plVar10);
    plVar6 = (long *)*param_1;
  }
  param_1[1] = plVar10;
  lVar8 = param_1[2];
  plVar10 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar7 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar6,lVar8 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028992e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar6,lVar8 - (long)plVar6,8);
  return;
}


