/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281f700; name: FUN_0281f700
 */


void FUN_0281f700(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  *param_2 = &PTR_FUN_0426e5a0;
  lVar2 = tpidr_el0;
  if (param_2[0xe] != 0) {
    plVar7 = (long *)param_2[8];
    lVar6 = param_2[0xe] * 0x30;
    uVar5 = param_2[0xc];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar5,lVar6,0x10);
        goto LAB_0281f7c4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,lVar6,0x10);
  }
LAB_0281f7c4:
  plVar7 = (long *)*param_1;
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar5,uVar4);
      goto LAB_0281f83c;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar5,uVar4);
LAB_0281f83c:
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  return;
}


