/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01699cd4; name: FUN_01699cd4
 */


void FUN_01699cd4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 == plVar10) {
    plVar9 = plVar10;
  }
  else {
    do {
      plVar9 = plVar9 + -1;
      plVar7 = (long *)*plVar9;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
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
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    } while (plVar9 != plVar10);
    plVar9 = (long *)*param_1;
  }
  param_1[1] = plVar10;
  lVar2 = param_1[2];
  plVar10 = (long *)param_1[3];
  uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar8 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar9,lVar2 - (long)plVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01699dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,lVar2 - (long)plVar9,8);
  return;
}


