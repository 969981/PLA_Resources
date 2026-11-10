/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008be788; name: FUN_008be788
 */


void FUN_008be788(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar8 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
  plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                     (uVar8 & 0x1ff) * 8);
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar3 = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3 + -1;
  lVar6 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar9 = 0;
  if (lVar6 != 0) {
    lVar9 = lVar6 * 0x40 + -1;
  }
  if ((lVar9 - (lVar3 + *(long *)(param_1 + 0x40))) + 1U < 0x400) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar7,uVar10,0x1000,8);
      goto LAB_008be8b4;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,uVar10,0x1000,8);
LAB_008be8b4:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


