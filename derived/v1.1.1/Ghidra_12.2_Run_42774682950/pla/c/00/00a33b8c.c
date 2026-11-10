/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a33b8c; name: FUN_00a33b8c
 */


void FUN_00a33b8c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = *(long **)param_1[1];
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
      FUN_02bcc824(plVar4,lVar3,0x18,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a33c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,0x18,4);
  return;
}


