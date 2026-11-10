/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00986394; name: FUN_00986394
 */


void FUN_00986394(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * 0x20;
  lVar6 = *(long *)(lVar1 + -0x20);
  *(undefined8 *)(lVar1 + -0x20) = 0;
  if (lVar6 == 0) goto LAB_009863c4;
  FUN_02bcbe58(auStack_58,0);
  FUN_009840e8(lVar6);
  plVar2 = *(long **)(lVar1 + -0x18);
  uVar3 = *(undefined8 *)(lVar1 + -0x10);
  uVar7 = *(undefined8 *)(lVar1 + -8);
  uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar1 = tpidr_el0;
  if ((uVar5 & 1) == 0) {
LAB_0098645c:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,uVar3,uVar7);
  }
  else {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_0098645c;
    FUN_02bcc824(plVar2,lVar6,uVar3,uVar7);
  }
  if (*(char *)(lVar1 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar1 + 0x38d488) = 1;
    *(undefined8 *)(lVar1 + 0x38d478) = 0;
    *(undefined8 *)(lVar1 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar1 + 0x38d480) + -1;
  *(int *)(lVar1 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar1 + 0x38d484) = 0;
  }
LAB_009863c4:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  return;
}


