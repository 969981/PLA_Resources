/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb9bbc; name: FUN_02bb9bbc
 */


void FUN_02bb9bbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 0) {
    plVar10 = *(long **)(param_1 + 0x88);
    *(long *)(param_1 + 0x78) = lVar8;
    lVar9 = *(long *)(param_1 + 0x80) - lVar8;
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar8,lVar9,8);
        plVar10 = *(long **)(param_1 + 0x38);
        goto joined_r0x02bb9dd4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar9,8);
  }
  plVar10 = *(long **)(param_1 + 0x38);
joined_r0x02bb9dd4:
  if (plVar10 != (long *)0x0) {
    lVar8 = tpidr_el0;
LAB_02bb9c94:
    do {
      plVar11 = (long *)*plVar10;
      plVar7 = (long *)plVar10[6];
      if (plVar7 == (long *)0x0) {
LAB_02bb9cb8:
        plVar7 = (long *)plVar10[5];
      }
      else {
        plVar1 = plVar7 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 != 0) goto LAB_02bb9cb8;
        (**(code **)(*plVar7 + 0x10))();
        plVar7 = (long *)plVar10[5];
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar7 = *(long **)(param_1 + 0x40);
      uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar10,0x38,8);
          plVar10 = plVar11;
          if (plVar11 == (long *)0x0) break;
          goto LAB_02bb9c94;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,0x38,8);
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  lVar8 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar8 == 0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x18);
  lVar9 = *(long *)(param_1 + 0x10) << 3;
  uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar6 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar10,lVar8,lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bb9e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar9,8);
  return;
}


