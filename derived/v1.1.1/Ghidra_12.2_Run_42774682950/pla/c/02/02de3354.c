/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de3354; name: FUN_02de3354
 */


void FUN_02de3354(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x20))();
  }
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x20))();
  }
  if (*(long **)(param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x20))();
  }
  if (*(long **)(param_1 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x150) + 0x20))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x20))();
  }
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x20))();
  }
  if (*(long **)(param_1 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
  }
  if (*(long **)(param_1 + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x20))();
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 != (long *)0x0) {
    plVar8 = *(long **)(param_1 + 0x48);
    if (plVar8 == plVar9) {
      plVar8 = plVar9;
    }
    else {
      do {
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
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
      } while (plVar8 != plVar9);
      plVar8 = *(long **)(param_1 + 0x40);
    }
    plVar6 = *(long **)(param_1 + 0x58);
    *(long **)(param_1 + 0x48) = plVar9;
    lVar10 = *(long *)(param_1 + 0x50) - (long)plVar8;
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
        FUN_02bcc824(plVar6,plVar8,lVar10,8);
        plVar9 = *(long **)(param_1 + 0x38);
        goto joined_r0x02de34e8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar10,8);
  }
  plVar9 = *(long **)(param_1 + 0x38);
joined_r0x02de34e8:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02de3518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


