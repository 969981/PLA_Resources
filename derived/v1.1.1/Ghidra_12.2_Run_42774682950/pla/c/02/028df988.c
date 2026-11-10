/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028df988; name: FUN_028df988
 */


void FUN_028df988(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  lVar9 = *param_2;
  lVar5 = tpidr_el0;
  if (lVar9 != 0) {
    lVar7 = param_2[1];
    if (lVar7 == lVar9) {
      lVar7 = lVar9;
    }
    else {
      do {
        plVar2 = (long *)(lVar7 + -8);
        lVar7 = lVar7 + -0x20;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar9 != lVar7);
      lVar7 = *param_2;
    }
    lVar1 = param_2[2];
    plVar2 = (long *)param_2[3];
    param_2[1] = lVar9;
    uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar7,lVar1 - lVar7,8);
        goto LAB_028dfa7c;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar1 - lVar7,8);
  }
LAB_028dfa7c:
  plVar2 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,param_2,uVar3,uVar8);
      goto LAB_028dfaf4;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,uVar3,uVar8);
LAB_028dfaf4:
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
  return;
}


