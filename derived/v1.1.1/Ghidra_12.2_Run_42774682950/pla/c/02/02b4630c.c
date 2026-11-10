/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b4630c; name: FUN_02b4630c
 */


void FUN_02b4630c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * -0x5555555555555555) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,param_2 * 0x30,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
    lVar7 = lVar1 + (lVar4 - lVar3 >> 4) * 0x10;
    lVar3 = *param_1;
    lVar4 = param_1[1];
    lVar6 = lVar7;
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        lVar6 = lVar6 + -0x30;
        lVar4 = lVar4 + -0x30;
        FUN_02b4a19c(plVar5,lVar6,lVar4);
      } while (lVar3 != lVar4);
      lVar3 = *param_1;
      lVar4 = param_1[1];
    }
    *param_1 = lVar6;
    param_1[1] = lVar7;
    lVar6 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0x30;
    while (lVar4 != lVar3) {
      lVar4 = lVar4 + -0x30;
      FUN_02b46ab0(lVar4);
    }
    if (lVar3 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar3,lVar6 - lVar3,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b46498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar6 - lVar3,8);
      return;
    }
  }
  return;
}


