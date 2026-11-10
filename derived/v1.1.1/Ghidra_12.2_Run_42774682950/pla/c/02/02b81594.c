/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b81594; name: FUN_02b81594
 */


void FUN_02b81594(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  if (*(char *)((long)param_2 + 0x39) == '\0') {
    lVar8 = *param_2;
    lVar5 = tpidr_el0;
  }
  else {
    lVar8 = *param_2;
    param_2[1] = lVar8;
    lVar5 = tpidr_el0;
  }
  if (lVar8 != 0) {
    lVar1 = param_2[2];
    plVar2 = (long *)param_2[3];
    param_2[1] = lVar8;
    uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar8,lVar1 - lVar8,4);
        goto LAB_02b81664;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar1 - lVar8,4);
  }
LAB_02b81664:
  plVar2 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar7 = param_1[2];
  uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,param_2,uVar3,uVar7);
      goto LAB_02b816dc;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,uVar3,uVar7);
LAB_02b816dc:
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


