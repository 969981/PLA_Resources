/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcbe58; name: FUN_02bcbe58
 */


void FUN_02bcbe58(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  
  param_1[2] = 0;
  *param_1 = param_2;
  lVar3 = tpidr_el0;
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    cVar2 = *(char *)(lVar3 + 0x38d488);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x38d480);
    param_1[2] = *(undefined8 *)(lVar3 + 0x38d478);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x38d480);
    param_1[2] = *(undefined8 *)(lVar3 + 0x38d478);
  }
  iVar1 = *(int *)(lVar3 + 0x38d480);
  iVar4 = iVar1 + 1;
  *(int *)(lVar3 + 0x38d480) = iVar4;
  if (*(int *)(lVar3 + 0x38d484) <= iVar1) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      iVar4 = *(int *)(lVar3 + 0x38d480);
    }
    *(int *)(lVar3 + 0x38d484) = iVar4;
  }
  return;
}


