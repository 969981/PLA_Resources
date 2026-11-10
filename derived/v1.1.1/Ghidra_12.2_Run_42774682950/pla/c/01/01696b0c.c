/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01696b0c; name: FUN_01696b0c
 */


void FUN_01696b0c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_04224308;
  param_1[9] = &PTR_FUN_04224340;
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x20))();
  }
  plVar9 = (long *)param_1[0xb];
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[0xc];
  plVar7 = plVar9;
  if (plVar10 != plVar9) {
    do {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar7 = (long *)*plVar10;
        if (plVar7 != (long *)0x0) break;
LAB_01696b80:
        if (plVar10 == plVar9) goto LAB_01696ba0;
      }
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
      if (iVar5 != 0) goto LAB_01696b80;
      (**(code **)(*plVar7 + 0x10))();
    } while (plVar10 != plVar9);
LAB_01696ba0:
    plVar7 = (long *)param_1[0xb];
  }
  param_1[0xc] = plVar9;
  lVar2 = param_1[0xd];
  plVar9 = (long *)param_1[0xe];
  uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar8 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar9,plVar7,lVar2 - (long)plVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01696c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,lVar2 - (long)plVar7,8);
  return;
}


