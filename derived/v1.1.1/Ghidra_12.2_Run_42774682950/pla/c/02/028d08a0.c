/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d08a0; name: FUN_028d08a0
 */


void FUN_028d08a0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_042734d0;
  if (param_1[7] != 0) {
    FUN_028d0d64();
    lVar7 = param_1[7];
    lVar8 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar7,lVar8 - lVar7,8);
        goto LAB_028d0954;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar8 - lVar7,8);
  }
LAB_028d0954:
  lVar8 = param_1[2];
  param_1[2] = 0;
  if (lVar8 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_028d0ffc(lVar8);
  plVar1 = (long *)param_1[3];
  uVar2 = param_1[4];
  uVar6 = param_1[5];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar5 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar8,uVar2,uVar6);
      goto LAB_028d09f0;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,uVar2,uVar6);
LAB_028d09f0:
  lVar8 = tpidr_el0;
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  return;
}


