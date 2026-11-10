/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01849980; name: FUN_01849980
 */


void FUN_01849980(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
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
      plVar6 = (long *)*plVar9;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
    } while (plVar9 != plVar10);
    plVar9 = (long *)*param_1;
  }
  param_1[1] = plVar10;
  lVar8 = param_1[2];
  plVar10 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar7 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar9,lVar8 - (long)plVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01849a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,lVar8 - (long)plVar9,8);
  return;
}


