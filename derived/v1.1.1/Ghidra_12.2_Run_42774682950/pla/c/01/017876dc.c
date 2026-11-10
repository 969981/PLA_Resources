/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017876dc; name: FUN_017876dc
 */


void FUN_017876dc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar2 = tpidr_el0;
LAB_01787720:
  do {
    plVar6 = (long *)*param_2;
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      lVar1 = param_2[7];
      plVar5 = (long *)param_2[8];
      param_2[6] = lVar4;
      uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar4,lVar1 - lVar4,0x10);
          goto LAB_017877a0;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,0x10);
    }
LAB_017877a0:
    plVar5 = *(long **)(param_1 + 0x38);
    uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,param_2,0x60,8);
        param_2 = plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
        goto LAB_01787720;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x60,8);
    param_2 = plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while( true );
}


