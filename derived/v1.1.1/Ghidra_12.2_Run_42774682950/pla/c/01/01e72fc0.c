/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e72fc0; name: FUN_01e72fc0
 */


void FUN_01e72fc0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar2 = tpidr_el0;
LAB_01e73000:
  do {
    plVar6 = (long *)*param_2;
    lVar7 = param_2[6];
    if (lVar7 == 0) {
LAB_01e730c0:
      plVar4 = (long *)param_2[5];
    }
    else {
      lVar5 = param_2[7];
      if (lVar5 == lVar7) {
        lVar5 = lVar7;
      }
      else {
        do {
          plVar4 = (long *)(lVar5 + -8);
          lVar5 = lVar5 + -0x20;
          if ((long *)*plVar4 != (long *)0x0) {
            (**(code **)(*(long *)*plVar4 + 0x20))();
          }
        } while (lVar7 != lVar5);
        lVar5 = param_2[6];
      }
      lVar1 = param_2[8];
      plVar4 = (long *)param_2[9];
      param_2[7] = lVar7;
      uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar3 & 1) == 0) {
LAB_01e730a4:
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar1 - lVar5,8);
        goto LAB_01e730c0;
      }
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01e730a4;
      FUN_02bcc824(plVar4,lVar5,lVar1 - lVar5,8);
      plVar4 = (long *)param_2[5];
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0x38);
    uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar3 & 1) == 0) {
LAB_01e73124:
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x68,8);
      param_2 = plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      goto LAB_01e73000;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01e73124;
    FUN_02bcc824(plVar4,param_2,0x68,8);
    param_2 = plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while( true );
}


