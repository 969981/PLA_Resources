/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255e65c; name: FUN_0255e65c
 */


void FUN_0255e65c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((long *)param_1[6] != (long *)0x0) {
    lVar2 = tpidr_el0;
    plVar3 = (long *)param_1[6];
    do {
      while( true ) {
        plVar4 = (long *)param_1[7];
        plVar5 = (long *)*plVar3;
        uVar1 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        if ((uVar1 & 1) != 0) break;
LAB_0255e700:
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x28,8);
        plVar3 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0255e724;
      }
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_0255e700;
      FUN_02bcc824(plVar4,plVar3,0x28,8);
      plVar3 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_0255e724:
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_02557ed0(param_1 + 1);
  return;
}


