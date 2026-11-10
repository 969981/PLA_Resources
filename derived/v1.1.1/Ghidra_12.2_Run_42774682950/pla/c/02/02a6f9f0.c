/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6f9f0; name: FUN_02a6f9f0
 */


void FUN_02a6f9f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x84));
  lVar6 = param_1[8];
  if (lVar6 != 0) {
    lVar5 = param_1[9];
    if (param_1[9] == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        pcVar3 = *(code **)(lVar5 + -0x78);
        lVar4 = lVar5 + -0x80;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x70) = 0;
          *(undefined8 *)(lVar5 + -0x68) = 0;
          *(undefined8 *)(lVar5 + -0x80) = 0;
          *(undefined8 *)(lVar5 + -0x78) = 0;
          (*pcVar3)(lVar5 + -0x60);
        }
        lVar5 = lVar4;
      } while (lVar6 != lVar4);
      lVar5 = param_1[8];
    }
    lVar4 = param_1[10];
    plVar1 = (long *)param_1[0xb];
    param_1[9] = lVar6;
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
        FUN_02bcc824(plVar1,lVar5,lVar4 - lVar5,0x10);
        lVar6 = *param_1;
        goto joined_r0x02a6fbd0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,0x10);
  }
  lVar6 = *param_1;
joined_r0x02a6fbd0:
  if (lVar6 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (param_1[1] == lVar6) {
    lVar5 = lVar6;
  }
  else {
    do {
      pcVar3 = *(code **)(lVar5 + -0x78);
      lVar4 = lVar5 + -0x80;
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x70) = 0;
        *(undefined8 *)(lVar5 + -0x68) = 0;
        *(undefined8 *)(lVar5 + -0x80) = 0;
        *(undefined8 *)(lVar5 + -0x78) = 0;
        (*pcVar3)(lVar5 + -0x60);
      }
      lVar5 = lVar4;
    } while (lVar6 != lVar4);
    lVar5 = *param_1;
  }
  param_1[1] = lVar6;
  lVar6 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar5,lVar6 - lVar5,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a6fbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar6 - lVar5,0x10);
  return;
}


