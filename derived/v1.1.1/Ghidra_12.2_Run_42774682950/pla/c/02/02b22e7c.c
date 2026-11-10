/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b22e7c; name: FUN_02b22e7c
 */


void FUN_02b22e7c(long param_1)

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
  long *plVar10;
  long *plVar11;
  
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(param_1 + 0x170);
LAB_02b22ecc:
    do {
      plVar11 = (long *)*plVar10;
      plVar6 = (long *)plVar10[6];
      if (plVar6 == (long *)0x0) {
LAB_02b22ef0:
        plVar6 = (long *)plVar10[5];
      }
      else {
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
        if (iVar4 != 0) goto LAB_02b22ef0;
        (**(code **)(*plVar6 + 0x10))();
        plVar6 = (long *)plVar10[5];
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_1 + 0x178);
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar7 & 1) == 0) {
LAB_02b22f54:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,0x38,8);
        plVar10 = plVar11;
        if (plVar11 == (long *)0x0) break;
        goto LAB_02b22ecc;
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02b22f54;
      FUN_02bcc824(plVar6,plVar10,0x38,8);
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar8 != 0) {
    plVar10 = *(long **)(param_1 + 0x150);
    lVar9 = *(long *)(param_1 + 0x148) << 3;
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
        FUN_02bcc824(plVar10,lVar8,lVar9,8);
        goto LAB_02b2307c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar9,8);
  }
LAB_02b2307c:
  FUN_00af2598(param_1 + 0xd8);
  FUN_00af221c(param_1 + 0x70);
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b230c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


