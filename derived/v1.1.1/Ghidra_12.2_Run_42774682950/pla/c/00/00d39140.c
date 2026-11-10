/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d39140; name: FUN_00d39140
 */


void FUN_00d39140(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 8) +
                               (*(ulong *)(param_1 + 0x40) >> 6 & 0x3fffffffffffff8)) +
                     (*(ulong *)(param_1 + 0x40) & 0x1ff) * 8);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  uVar6 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar6;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar6 < 0x400) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  uVar8 = **(undefined8 **)(param_1 + 8);
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar5,uVar8,0x1000,8);
      goto LAB_00d3924c;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,0x1000,8);
LAB_00d3924c:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x200;
  return;
}


