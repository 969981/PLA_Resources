/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcc75c; name: FUN_02bcc75c
 */


bool FUN_02bcc75c(long *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0xc0))();
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    bVar2 = 0 < *(int *)(lVar1 + 0x38d480);
  }
  return bVar2;
}


