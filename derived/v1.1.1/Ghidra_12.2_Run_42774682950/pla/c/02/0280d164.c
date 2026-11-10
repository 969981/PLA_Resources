/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280d164; name: FUN_0280d164
 */


void FUN_0280d164(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  lVar4 = param_2[5];
  if (lVar4 != 0) {
    lVar6 = param_2[4];
    if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x18) + 0x20))();
    }
    if (lVar4 != 1) {
      lVar4 = lVar4 + -2;
      if (*(long **)(lVar6 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 0x40) + 0x20))();
      }
      if (lVar4 != 0) {
        plVar7 = (long *)(lVar6 + 0x68);
        do {
          lVar4 = lVar4 + -1;
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 0x20))();
          }
          plVar7 = plVar7 + 5;
        } while (lVar4 != 0);
      }
    }
  }
  lVar4 = tpidr_el0;
  if (param_2[6] != 0) {
    plVar7 = (long *)*param_2;
    lVar6 = param_2[6] * 0x28;
    uVar5 = param_2[4];
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar5,lVar6,8);
        goto LAB_0280d260;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,lVar6,8);
  }
LAB_0280d260:
  plVar7 = (long *)*param_1;
  uVar5 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar5,uVar3);
      goto LAB_0280d2d8;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar5,uVar3);
LAB_0280d2d8:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  return;
}


