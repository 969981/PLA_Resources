/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b912a8; name: FUN_02b912a8
 */


void FUN_02b912a8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(Display **)(param_1 + 0x180) != (Display *)0x0) {
    nn::vi::CloseDisplay(*(Display **)(param_1 + 0x180));
  }
  DAT_043f1098 = DAT_043f1098 + -1;
  if (DAT_043f1098 == 0) {
    nn::vi::Finalize();
    lVar4 = *(long *)(param_1 + 0x198);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x198);
  }
  if (lVar4 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x1b0);
  *(long *)(param_1 + 0x1a0) = lVar4;
  lVar5 = *(long *)(param_1 + 0x1a8) - lVar4;
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar4,lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b9136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  return;
}


