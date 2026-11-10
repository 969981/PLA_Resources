/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280cee4; name: FUN_0280cee4
 */


void FUN_0280cee4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar6 = param_1[8];
  *param_1 = &PTR_FUN_0426ece8;
  param_1[8] = 0;
  if (lVar6 != 0) {
    FUN_0280d164(param_1 + 9);
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  if (lVar6 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  plVar1 = (long *)param_1[5];
  uVar2 = param_1[6];
  uVar7 = param_1[7];
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
      FUN_02bcc824(plVar1,lVar6,uVar2,uVar7);
      goto LAB_0280cfb4;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar7);
LAB_0280cfb4:
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


