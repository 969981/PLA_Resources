/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b46530; name: FUN_02b46530
 */


void FUN_02b46530(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x3333333333333333) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,param_2 * 0x28,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
    lVar4 = lVar1 + (lVar4 - lVar3 >> 3) * 8;
    pcVar7 = (char *)*param_1;
    pcVar6 = (char *)param_1[1];
    lVar3 = lVar4;
    if (pcVar6 == pcVar7) {
      pcVar6 = pcVar7;
    }
    else {
      do {
        lVar3 = lVar3 + -0x28;
        pcVar6 = pcVar6 + -0x28;
        FUN_02b2e00c(plVar5,lVar3,pcVar6);
      } while (pcVar7 != pcVar6);
      pcVar7 = (char *)*param_1;
      pcVar6 = (char *)param_1[1];
    }
    *param_1 = lVar3;
    param_1[1] = lVar4;
    lVar3 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0x28;
    if (pcVar6 != pcVar7) {
      do {
        pcVar8 = pcVar6 + -0x28;
        if (*pcVar8 != '\0') {
          if (*(long **)(pcVar6 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar6 + -8) + 0x20))();
          }
          pcVar6[-0x28] = '\0';
        }
        pcVar6 = pcVar8;
      } while (pcVar7 != pcVar8);
    }
    if (pcVar7 != (char *)0x0) {
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
          FUN_02bcc824(plVar5,pcVar7,lVar3 - (long)pcVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b466d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,pcVar7,lVar3 - (long)pcVar7,8);
      return;
    }
  }
  return;
}


