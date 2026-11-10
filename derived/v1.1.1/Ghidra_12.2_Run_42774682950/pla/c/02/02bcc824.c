/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcc824; name: FUN_02bcc824
 */


void FUN_02bcc824(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  char *__s1;
  
  __s1 = (char *)param_1[2];
  if (((__s1 == (char *)0x0) || (iVar4 = strcmp(__s1,"UNFOLD_RESOURCE"), iVar4 == 0)) ||
     (iVar4 = strcmp(__s1,"FILE_RESOURCE"), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x02bcca04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
    return;
  }
  lVar3 = tpidr_el0;
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  if (*(long *)(lVar3 + 0x38d478) == 100000) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    uVar2 = *(undefined4 *)(lVar3 + 0x38d480);
    *(undefined4 *)(lVar3 + 0x38d480) = 0;
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d480) = uVar2;
  }
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  if (99999 < *(ulong *)(lVar3 + 0x38d478)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = (long *)(lVar3 + 0x80078 + *(ulong *)(lVar3 + 0x38d478) * 0x20);
  *plVar1 = (long)param_1;
  plVar1[1] = param_2;
  plVar1[2] = param_3;
  plVar1[3] = param_4;
  *(long *)(lVar3 + 0x38d478) = *(long *)(lVar3 + 0x38d478) + 1;
                    /* WARNING: Could not recover jumptable at 0x02bcc9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}


