/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028be70c; name: FUN_028be70c
 */


void FUN_028be70c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  *param_2 = &PTR_LAB_042730a8;
  FUN_028be98c(param_2 + 0x16);
  FUN_028bf4c8(param_2 + 9);
  FUN_00936104(param_2 + 2);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar4 = tpidr_el0;
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar1,param_2,uVar2,uVar6);
      goto LAB_028be7e0;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar6);
LAB_028be7e0:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
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


