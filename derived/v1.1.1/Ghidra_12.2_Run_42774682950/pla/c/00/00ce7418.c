/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce7418; name: FUN_00ce7418
 */


void FUN_00ce7418(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar10 = *(ulong *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar3 + (uVar10 >> 4 & 0xffffffffffffff8));
  if (lVar2 == lVar3) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar6 + (uVar10 & 0x7f) * 0x20;
  }
  if (param_3 == lVar7) {
    uVar11 = 0;
LAB_00ce74bc:
    plVar8 = plVar6;
    lVar9 = lVar7;
  }
  else {
    uVar1 = (param_3 - *param_2 >> 5) + ((long)param_2 - (long)plVar6) * 0x10;
    uVar11 = uVar1 - (lVar7 - *plVar6 >> 5);
    if (uVar11 == 0) goto LAB_00ce74bc;
    if ((long)uVar1 < 1) {
      uVar4 = 0x7f - uVar1;
      uVar1 = 0xfe - uVar1;
      if (-1 < (long)uVar4) {
        uVar1 = uVar4;
      }
      plVar8 = plVar6 + -((long)uVar1 >> 7);
      lVar9 = plVar6[-((long)uVar1 >> 7)] + ((uVar1 & 0x7ffffffffffff80) - uVar4) * 0x20 + 0xfe0;
    }
    else {
      plVar8 = (long *)((long)plVar6 + (uVar1 >> 4 & 0xffffffffffffff8));
      lVar9 = *plVar8 + (uVar1 & 0x7f) * 0x20;
    }
  }
  lVar12 = *(long *)(param_1 + 0x48);
  auVar13 = FUN_00ce9890(plVar8,lVar9);
  if (uVar11 <= lVar12 - 1U >> 1) {
    FUN_00ce9750(plVar6,lVar7,plVar8,lVar9);
    uVar10 = *(long *)(param_1 + 0x40) + 1;
    *(ulong *)(param_1 + 0x40) = uVar10;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    if (uVar10 < 0x100) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x50);
    uVar5 = **(undefined8 **)(param_1 + 8);
    uVar10 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar10 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar5,0x1000,8);
        goto LAB_00ce7690;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,8);
LAB_00ce7690:
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x80;
    return;
  }
  uVar10 = lVar12 + uVar10;
  plVar6 = (long *)(lVar3 + (uVar10 >> 4 & 0xffffffffffffff8));
  if (lVar2 == lVar3) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar6 + (uVar10 & 0x7f) * 0x20;
  }
  FUN_00ce9900(auVar13._0_8_,auVar13._8_8_,plVar6,lVar3,plVar8,lVar9);
  lVar2 = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2 + -1;
  lVar7 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar3 = 0;
  if (lVar7 != 0) {
    lVar3 = lVar7 * 0x10 + -1;
  }
  if ((lVar3 - (lVar2 + *(long *)(param_1 + 0x40))) + 1U < 0x100) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar10 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar10 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar6,uVar5,0x1000,8);
      goto LAB_00ce75d4;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,8);
LAB_00ce75d4:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


