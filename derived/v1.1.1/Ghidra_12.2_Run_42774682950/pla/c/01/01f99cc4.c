/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f99cc4; name: FUN_01f99cc4
 */


void FUN_01f99cc4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  plVar5 = param_1 + 3;
  if ((ulong)((param_1[2] - param_1[1] >> 7) * -0x5555555555555555) < param_2) {
    lVar1 = FUN_01f99f50(param_1,param_2 + (param_1[1] - *param_1 >> 7) * -0x5555555555555555);
    lVar9 = *param_1;
    lVar8 = param_1[1];
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar1 * 0x180,0x10);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xb8))();
      }
    }
    lVar8 = lVar2 + (lVar8 - lVar9 >> 7) * 0x80;
    lVar9 = lVar8;
    do {
      FUN_01f99fb4(plVar5,lVar9);
      lVar9 = lVar9 + 0x180;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    pcVar7 = (char *)*param_1;
    pcVar6 = (char *)param_1[1];
    if (pcVar6 == pcVar7) {
      pcVar6 = pcVar7;
    }
    else {
      do {
        lVar8 = lVar8 + -0x180;
        pcVar6 = pcVar6 + -0x180;
        FUN_019c9284(plVar5,lVar8,pcVar6);
      } while (pcVar7 != pcVar6);
      pcVar7 = (char *)*param_1;
      pcVar6 = (char *)param_1[1];
    }
    lVar4 = param_1[2];
    param_1[2] = lVar2 + lVar1 * 0x180;
    *param_1 = lVar8;
    param_1[1] = lVar9;
    while (pcVar6 != pcVar7) {
      pcVar6 = pcVar6 + -0x180;
      if (*pcVar6 != '\0') {
        *pcVar6 = '\0';
      }
    }
    if (pcVar7 != (char *)0x0) {
      plVar5 = (long *)*plVar5;
      uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar3 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar5,pcVar7,lVar4 - (long)pcVar7,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01f99e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,pcVar7,lVar4 - (long)pcVar7,0x10);
      return;
    }
  }
  else {
    do {
      FUN_01f99fb4(plVar5);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x180;
    } while (param_2 != 0);
  }
  return;
}


