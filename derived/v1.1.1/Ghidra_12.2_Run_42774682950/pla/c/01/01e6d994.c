/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e6d994; name: FUN_01e6d994
 */


void FUN_01e6d994(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar2 = tpidr_el0;
LAB_01e6d9d4:
  do {
    plVar4 = (long *)*param_2;
    lVar5 = param_2[3];
    if (lVar5 != 0) {
      lVar1 = param_2[5];
      plVar6 = (long *)param_2[6];
      param_2[4] = lVar5;
      uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar5,lVar1 - lVar5,8);
          goto LAB_01e6da54;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 - lVar5,8);
    }
LAB_01e6da54:
    plVar6 = *(long **)(param_1 + 0x38);
    uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,param_2,0x50,8);
        param_2 = plVar4;
        if (plVar4 == (long *)0x0) {
          return;
        }
        goto LAB_01e6d9d4;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0x50,8);
    param_2 = plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
  } while( true );
}


