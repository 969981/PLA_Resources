/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c80a1c; name: FUN_00c80a1c
 */


void FUN_00c80a1c(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    lVar1 = tpidr_el0;
    do {
      while( true ) {
        plVar5 = (long *)*param_2;
        pcVar3 = (code *)param_2[5];
        if (pcVar3 != (code *)0x0) {
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          (*pcVar3)(param_2 + 8);
        }
        plVar4 = *(long **)(param_1 + 0x38);
        uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        if ((uVar2 & 1) != 0) break;
LAB_00c80ad8:
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0xa0,0x10);
        param_2 = plVar5;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00c80ad8;
      FUN_02bcc824(plVar4,param_2,0xa0,0x10);
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


