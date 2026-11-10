/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce3ecc; name: FUN_00ce3ecc
 */


void FUN_00ce3ecc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_00ce41d4(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar5 = *param_1;
  lVar8 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 5,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
  }
  lVar8 = lVar2 + (lVar8 - lVar5 >> 5) * 0x20;
  FUN_00ce40ec(plVar6,lVar8,param_2);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = lVar8 + 0x20;
  if (lVar7 != lVar4) {
    do {
      lVar8 = lVar8 + -0x20;
      lVar7 = lVar7 + -0x20;
      FUN_00ce3aac(plVar6,lVar8,lVar7);
    } while (lVar4 != lVar7);
    lVar4 = *param_1;
  }
  *param_1 = lVar8;
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x20;
  if (lVar4 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar4,lVar5 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ce404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5 - lVar4,8);
  return;
}


