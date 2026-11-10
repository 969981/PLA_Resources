/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c5c1c; name: FUN_028c5c1c
 */


void FUN_028c5c1c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = tpidr_el0;
LAB_028c5c58:
  do {
    lVar7 = param_2[6];
    param_2[6] = 0;
    plVar6 = (long *)*param_2;
    if (lVar7 == 0) {
LAB_028c5d20:
      plVar5 = (long *)param_2[5];
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      plVar5 = (long *)param_2[7];
      lVar1 = param_2[8];
      lVar8 = param_2[9];
      uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar4 & 1) == 0) {
LAB_028c5cc8:
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar1,lVar8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028c5cc8;
        FUN_02bcc824(plVar5,lVar7,lVar1,lVar8);
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
      *(int *)(lVar3 + 0x38d480) = iVar2;
      if (iVar2 != 0) goto LAB_028c5d20;
      FUN_02bcc320();
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar3 + 0x38d484) = 0;
      plVar5 = (long *)param_2[5];
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)(param_1 + 0x38);
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) == 0) {
LAB_028c5d84:
      (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x50,8);
      param_2 = plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      goto LAB_028c5c58;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028c5d84;
    FUN_02bcc824(plVar5,param_2,0x50,8);
    param_2 = plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while( true );
}


