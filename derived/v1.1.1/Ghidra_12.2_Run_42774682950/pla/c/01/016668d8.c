/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016668d8; name: FUN_016668d8
 */


void FUN_016668d8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_2) {
    plVar6 = param_1 + 3;
    lVar5 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 3,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xb8))();
    }
    lVar3 = lVar1 + (lVar5 - lVar3 >> 3) * 8;
    lVar5 = *param_1;
    lVar4 = param_1[1];
    lVar7 = lVar3;
    if (lVar4 != lVar5) {
      do {
        lVar7 = lVar7 + -8;
        lVar4 = lVar4 + -8;
        FUN_01666d2c(plVar6,lVar7,lVar4);
      } while (lVar5 != lVar4);
      lVar5 = *param_1;
    }
    lVar4 = param_1[2];
    *param_1 = lVar7;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + param_2 * 8;
    if (lVar5 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar5,lVar4 - lVar5,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01666a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
      return;
    }
  }
  return;
}


