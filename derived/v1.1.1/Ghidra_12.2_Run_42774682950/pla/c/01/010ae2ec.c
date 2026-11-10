/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ae2ec; name: FUN_010ae2ec
 */


void FUN_010ae2ec(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    lVar1 = tpidr_el0;
    do {
      while( true ) {
        plVar3 = *(long **)(param_1 + 0x38);
        plVar4 = (long *)*param_2;
        uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar2 & 1) != 0) break;
LAB_010ae390:
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x20,8);
        param_2 = plVar4;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_010ae390;
      FUN_02bcc824(plVar3,param_2,0x20,8);
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


