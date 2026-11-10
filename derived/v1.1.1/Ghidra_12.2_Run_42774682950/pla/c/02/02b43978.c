/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b43978; name: FUN_02b43978
 */


void FUN_02b43978(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
LAB_02b43a58:
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_02b43b20;
LAB_02b43a60:
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x28;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x58);
    }
    plVar3 = *(long **)(param_1 + 0x70);
    *(long *)(param_1 + 0x60) = lVar5;
    lVar5 = *(long *)(param_1 + 0x68) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b43b04:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b43b20;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b43b04;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x28;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x90);
    }
    plVar3 = *(long **)(param_1 + 0xa8);
    *(long *)(param_1 + 0x98) = lVar5;
    lVar5 = *(long *)(param_1 + 0xa0) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) == 0) {
LAB_02b43a3c:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
      goto LAB_02b43a58;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b43a3c;
    FUN_02bcc824(plVar3,lVar4,lVar5,8);
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) goto LAB_02b43a60;
LAB_02b43b20:
    lVar5 = *(long *)(param_1 + 0x20);
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar3 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    plVar3 = *(long **)(param_1 + 0x38);
    *(long *)(param_1 + 0x28) = lVar5;
    lVar5 = *(long *)(param_1 + 0x30) - lVar4;
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar3,lVar4,lVar5,8);
        plVar3 = *(long **)(param_1 + 0x18);
        goto joined_r0x02b43c24;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
  }
  plVar3 = *(long **)(param_1 + 0x18);
joined_r0x02b43c24:
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b43c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


