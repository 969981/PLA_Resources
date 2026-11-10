/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cabdd4; name: FUN_02cabdd4
 */


void FUN_02cabdd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  lVar8 = *(long *)(param_2 + 0x20);
  lVar3 = tpidr_el0;
  if (lVar8 == 0) {
LAB_02cabeb4:
    plVar5 = *(long **)(param_2 + 0x18);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 == lVar8) {
      lVar7 = lVar8;
    }
    else {
      do {
        lVar7 = lVar7 + -0x20;
        FUN_02caa9c0(lVar7);
      } while (lVar8 != lVar7);
      lVar7 = *(long *)(param_2 + 0x20);
    }
    plVar5 = *(long **)(param_2 + 0x38);
    *(long *)(param_2 + 0x28) = lVar8;
    lVar8 = *(long *)(param_2 + 0x30) - lVar7;
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) == 0) {
LAB_02cabe98:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar8,8);
      goto LAB_02cabeb4;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02cabe98;
    FUN_02bcc824(plVar5,lVar7,lVar8,8);
    plVar5 = *(long **)(param_2 + 0x18);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = (long *)*param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar5,param_2,uVar1,uVar6);
      goto LAB_02cabf40;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,uVar1,uVar6);
LAB_02cabf40:
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
  return;
}


