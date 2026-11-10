/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028798b0; name: free
 */


void free(void *__ptr)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar2 = DAT_043f1798;
  if (__ptr == (void *)0x0) {
    return;
  }
  lVar1 = tpidr_el0;
  plVar4 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar4,__ptr,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02879978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,__ptr,0,8);
  return;
}


