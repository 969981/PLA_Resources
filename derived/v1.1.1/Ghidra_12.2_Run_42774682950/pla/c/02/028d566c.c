/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d566c; name: FUN_028d566c
 */


void FUN_028d566c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar8) {
    param_1[2] = lVar9 + -0xb0;
    if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar9 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + -0x30) + 0x20))();
    }
    if (*(long **)(lVar9 + -0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + -0x50) + 0x20))();
    }
    plVar6 = *(long **)(lVar9 + -0x78);
    *(undefined ***)(lVar9 + -0xb0) = &PTR_LAB_04273578;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    FUN_00936104(lVar9 + -0xa8);
    lVar9 = param_1[2];
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = param_1[3];
  plVar6 = *(long **)param_1[4];
  uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar8,lVar9 - lVar8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028d57b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9 - lVar8,8);
  return;
}


