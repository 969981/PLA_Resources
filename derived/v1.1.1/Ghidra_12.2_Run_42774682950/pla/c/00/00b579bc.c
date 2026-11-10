/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b579bc; name: FUN_00b579bc
 */


void FUN_00b579bc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_00b57d28(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 * 0x90,0x10), lVar2 == 0)
     ) {
    (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
  }
  lVar8 = lVar2 + (lVar4 - lVar9 >> 4) * 0x10;
  FUN_00b578a8(param_1[3],lVar8,param_2);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar9 = lVar8 + 0x90;
  if (lVar7 == lVar4) {
    lVar7 = lVar4;
  }
  else {
    do {
      lVar8 = lVar8 + -0x90;
      lVar7 = lVar7 + -0x90;
      FUN_00b57d94(plVar6,lVar8,lVar7);
    } while (lVar4 != lVar7);
    lVar4 = *param_1;
    lVar7 = param_1[1];
  }
  *param_1 = lVar8;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x90;
  while (lVar2 = lVar7, lVar2 != lVar4) {
    pcVar5 = *(code **)(lVar2 + -0x88);
    lVar7 = lVar2 + -0x90;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      *(undefined8 *)(lVar2 + -0x90) = 0;
      *(undefined8 *)(lVar2 + -0x88) = 0;
      (*pcVar5)(lVar2 + -0x70);
    }
  }
  if (lVar4 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar4,lVar9 - lVar4,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b57b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar9 - lVar4,0x10);
  return;
}


