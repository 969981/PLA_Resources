/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc06b0; name: FUN_02bc06b0
 */


void FUN_02bc06b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  switch(param_2) {
  case 0:
    goto switchD_02bc06e0_caseD_0;
  case 1:
    lVar6 = *param_4;
    if (lVar6 != 0) {
      lVar1 = param_4[2];
      plVar2 = (long *)param_4[3];
      param_4[1] = lVar6;
      uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      if ((uVar5 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar2,lVar6,lVar1 - lVar6,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bc0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,lVar1 - lVar6,8);
      return;
    }
switchD_02bc06e0_caseD_0:
    return;
  default:
    FUN_02bc0810();
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x2bc0808);
    (*pcVar3)();
  }
}


