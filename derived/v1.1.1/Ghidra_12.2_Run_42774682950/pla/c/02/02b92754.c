/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b92754; name: FUN_02b92754
 */


void FUN_02b92754(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  FUN_02b929dc();
  puVar8 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar8 != puVar2) {
    lVar5 = tpidr_el0;
    do {
      plVar7 = (long *)param_1[10];
      uVar6 = *puVar8;
      uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar4 & 1) == 0) {
LAB_02b927fc:
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0xfc0,8);
      }
      else {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02b927fc;
        FUN_02bcc824(plVar7,uVar6,0xfc0,8);
      }
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
    lVar5 = param_1[2] - param_1[1];
    if (lVar5 != 0) {
      param_1[2] = param_1[2] + (lVar5 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar7 = (long *)param_1[4];
  uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar5,lVar1 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b9293c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 - lVar5,8);
  return;
}


