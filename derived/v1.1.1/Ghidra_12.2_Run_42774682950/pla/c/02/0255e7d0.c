/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255e7d0; name: FUN_0255e7d0
 */


void FUN_0255e7d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar8 = plVar9;
  if ((long *)param_1[1] != plVar9) {
    plVar10 = (long *)param_1[1] + -1;
    plVar8 = (long *)*plVar10;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) goto LAB_0255e8d0;
    }
LAB_0255e8a8:
    if (plVar10 != plVar9) {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
        if (plVar8 == (long *)0x0) break;
        plVar1 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != 0) break;
LAB_0255e8d0:
        (**(code **)(*plVar8 + 0x10))();
        if (plVar10 == plVar9) goto LAB_0255e8e4;
      }
      goto LAB_0255e8a8;
    }
LAB_0255e8e4:
    plVar8 = (long *)*param_1;
  }
  param_1[1] = plVar9;
  lVar2 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar7 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar9,plVar8,lVar2 - (long)plVar8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0255e884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,lVar2 - (long)plVar8,8);
  return;
}


