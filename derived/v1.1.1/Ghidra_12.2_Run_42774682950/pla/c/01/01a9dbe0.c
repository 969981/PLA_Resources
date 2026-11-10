/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9dbe0; name: FUN_01a9dbe0
 */


void FUN_01a9dbe0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 != param_3) {
    lVar3 = *param_3;
    *(undefined8 *)(*param_2 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = *param_2;
    lVar3 = tpidr_el0;
    do {
      plVar1 = *(long **)(param_1 + 0x18);
      plVar4 = (long *)param_2[1];
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
      uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar2 & 1) == 0) {
LAB_01a9dcb0:
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0x30,0x10);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01a9dcb0;
        FUN_02bcc824(plVar1,param_2,0x30,0x10);
      }
      param_2 = plVar4;
    } while (plVar4 != param_3);
  }
  return;
}


