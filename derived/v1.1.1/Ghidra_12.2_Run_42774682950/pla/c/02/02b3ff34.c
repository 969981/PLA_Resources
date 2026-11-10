/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3ff34; name: FUN_02b3ff34
 */


void FUN_02b3ff34(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[0x12];
  lVar1 = tpidr_el0;
  if (lVar7 != 0) {
    lVar5 = param_1[0x13];
    if (lVar5 != lVar7) {
      plVar2 = *(long **)(lVar5 + -8);
      do {
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        lVar4 = *(long *)(lVar5 + -0x58);
        if (lVar4 != 0) {
          plVar2 = *(long **)(lVar5 + -0x40);
          *(long *)(lVar5 + -0x50) = lVar4;
          lVar6 = *(long *)(lVar5 + -0x48) - lVar4;
          uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
          if ((uVar3 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar2,lVar4,lVar6,4);
              goto LAB_02b3ffac;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar6,4);
        }
LAB_02b3ffac:
        if (lVar7 == lVar5 + -0x58) goto LAB_02b40094;
        plVar2 = *(long **)(lVar5 + -0x60);
        lVar5 = lVar5 + -0x58;
      } while( true );
    }
    lVar5 = lVar7;
    goto LAB_02b400a0;
  }
LAB_02b4011c:
  lVar7 = param_1[0xb];
  goto joined_r0x02b40120;
LAB_02b40094:
  lVar5 = param_1[0x12];
LAB_02b400a0:
  lVar4 = param_1[0x14];
  plVar2 = (long *)param_1[0x15];
  param_1[0x13] = lVar7;
  uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar3 & 1) == 0) {
LAB_02b40100:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar4 - lVar5,8);
    goto LAB_02b4011c;
  }
  if (*(char *)(lVar1 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar1 + 0x38d488) = 1;
    *(undefined8 *)(lVar1 + 0x38d478) = 0;
    *(undefined8 *)(lVar1 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
  }
  if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b40100;
  FUN_02bcc824(plVar2,lVar5,lVar4 - lVar5,8);
  lVar7 = param_1[0xb];
joined_r0x02b40120:
  if (lVar7 != 0) {
    lVar5 = param_1[0xc];
    if (lVar5 == lVar7) {
      lVar5 = lVar7;
    }
    else {
      do {
        plVar2 = (long *)(lVar5 + -8);
        lVar5 = lVar5 + -0x20;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar7 != lVar5);
      lVar5 = param_1[0xb];
    }
    lVar4 = param_1[0xd];
    plVar2 = (long *)param_1[0xe];
    param_1[0xc] = lVar7;
    uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar5,lVar4 - lVar5,8);
        plVar2 = (long *)param_1[10];
        goto joined_r0x02b40304;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar4 - lVar5,8);
  }
  plVar2 = (long *)param_1[10];
joined_r0x02b40304:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar7) {
    lVar5 = lVar7;
  }
  else {
    do {
      plVar2 = (long *)(lVar5 + -8);
      lVar5 = lVar5 + -0x20;
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x20))();
      }
    } while (lVar7 != lVar5);
    lVar5 = *param_1;
  }
  param_1[1] = lVar7;
  lVar7 = param_1[2];
  plVar2 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar5,lVar7 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b402cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar7 - lVar5,8);
  return;
}


