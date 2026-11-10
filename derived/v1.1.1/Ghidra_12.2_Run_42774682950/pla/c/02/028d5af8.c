/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d5af8; name: FUN_028d5af8
 */


void FUN_028d5af8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar3) {
    param_1[2] = lVar5 + -0x1d0;
    if (*(long **)(lVar5 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar5 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar5 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x60) + 0x20))();
    }
    FUN_028d5028(lVar5 + -0x1d0);
    lVar5 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar5 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar4,lVar3,lVar5 - lVar3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028d5ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar5 - lVar3,8);
  return;
}


