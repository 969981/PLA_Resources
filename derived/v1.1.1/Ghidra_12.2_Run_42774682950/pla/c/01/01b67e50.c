/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b67e50; name: FUN_01b67e50
 */


void FUN_01b67e50(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar4) {
    while( true ) {
      lVar3 = lVar2 + -0x80;
      param_1[2] = lVar3;
      if (*(long **)(lVar2 + -0x48) != (long *)0x0) break;
      lVar2 = lVar3;
      if (lVar3 == lVar4) goto LAB_01b67e70;
    }
    (**(code **)(**(long **)(lVar2 + -0x48) + 0x20))();
    lVar2 = param_1[2];
  }
LAB_01b67e70:
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar1 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar1 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar4,lVar2 - lVar4,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01b67f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar2 - lVar4,0x10);
  return;
}


