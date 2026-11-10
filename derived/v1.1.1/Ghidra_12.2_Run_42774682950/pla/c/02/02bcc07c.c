/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcc07c; name: FUN_02bcc07c
 */


void FUN_02bcc07c(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = tpidr_el0;
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480);
  iVar3 = iVar1 + 1;
  *(int *)(lVar2 + 0x38d480) = iVar3;
  if (*(int *)(lVar2 + 0x38d484) <= iVar1) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      iVar3 = *(int *)(lVar2 + 0x38d480);
    }
    *(int *)(lVar2 + 0x38d484) = iVar3;
  }
  return;
}


