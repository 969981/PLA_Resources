/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd876c; name: FUN_02dd876c
 */


void FUN_02dd876c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar7 = param_1[1];
  if (lVar7 == lVar8) {
    lVar7 = lVar8;
  }
  else {
    do {
      plVar4 = *(long **)(lVar7 + -0x20);
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
        }
      }
      plVar4 = *(long **)(lVar7 + -0x28);
      lVar7 = lVar7 + -0x30;
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
        }
      }
    } while (lVar7 != lVar8);
    lVar7 = *param_1;
  }
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  plVar4 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar5 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar4,lVar7,lVar8 - lVar7,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02dd88a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,lVar8 - lVar7,0x10);
  return;
}


