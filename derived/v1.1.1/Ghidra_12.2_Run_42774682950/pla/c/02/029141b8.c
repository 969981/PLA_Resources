/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029141b8; name: FUN_029141b8
 */


void FUN_029141b8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_1[10];
  if (lVar6 == 0) {
LAB_029142a0:
    lVar6 = param_1[3];
  }
  else {
    lVar3 = param_1[0xb];
    if (param_1[0xb] == lVar6) {
      lVar3 = lVar6;
    }
    else {
      do {
        pcVar4 = *(code **)(lVar3 + -0x88);
        lVar5 = lVar3 + -0x90;
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          *(undefined8 *)(lVar3 + -0x90) = 0;
          *(undefined8 *)(lVar3 + -0x88) = 0;
          (*pcVar4)(lVar3 + -0x70);
        }
        lVar3 = lVar5;
      } while (lVar6 != lVar5);
      lVar3 = param_1[10];
    }
    lVar5 = param_1[0xc];
    plVar1 = (long *)param_1[0xd];
    param_1[0xb] = lVar6;
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar2 & 1) == 0) {
LAB_02914284:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar5 - lVar3,0x10);
      goto LAB_029142a0;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02914284;
    FUN_02bcc824(plVar1,lVar3,lVar5 - lVar3,0x10);
    lVar6 = param_1[3];
  }
  if (lVar6 != 0) {
    lVar3 = param_1[4];
    if (param_1[4] == lVar6) {
      lVar3 = lVar6;
    }
    else {
      do {
        pcVar4 = *(code **)(lVar3 + -0x88);
        lVar5 = lVar3 + -0x90;
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          *(undefined8 *)(lVar3 + -0x90) = 0;
          *(undefined8 *)(lVar3 + -0x88) = 0;
          (*pcVar4)(lVar3 + -0x70);
        }
        lVar3 = lVar5;
      } while (lVar6 != lVar5);
      lVar3 = param_1[3];
    }
    lVar5 = param_1[5];
    plVar1 = (long *)param_1[6];
    param_1[4] = lVar6;
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar3,lVar5 - lVar3,0x10);
        param_1 = (long *)*param_1;
        goto joined_r0x029143cc;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar5 - lVar3,0x10);
  }
  param_1 = (long *)*param_1;
joined_r0x029143cc:
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02914390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


