/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ff1e0; name: FUN_008ff1e0
 */


void FUN_008ff1e0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 7;
  if (*plVar4 != 0) {
    FUN_008ff6f0(plVar4);
    plVar2 = DAT_043f1798;
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      lVar5 = tpidr_el0;
      plVar4 = *(long **)(lVar5 + 0x20);
      if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
        *(long **)(lVar5 + 0x20) = DAT_043f1798;
        plVar4 = plVar2;
      }
      uVar1 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar1 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar4,lVar3,0,8);
          plVar4 = (long *)param_1[2];
          goto joined_r0x008ff694;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,0,8);
      plVar4 = (long *)param_1[2];
      goto joined_r0x008ff694;
    }
  }
  plVar4 = (long *)param_1[2];
joined_r0x008ff694:
  if (plVar4 != (long *)0x0) {
    lVar3 = tpidr_el0;
LAB_008ff234:
    do {
      plVar2 = DAT_043f1798;
      plVar7 = (long *)*plVar4;
      if (((*(byte *)(plVar4 + 2) & 1) != 0) && (lVar5 = plVar4[4], lVar5 != 0)) {
        plVar6 = *(long **)(lVar3 + 0x20);
        if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
          *(long **)(lVar3 + 0x20) = DAT_043f1798;
          plVar6 = plVar2;
        }
        uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar1 & 1) != 0) {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar3 + 0x38d480)) {
            FUN_02bcc824(plVar6,lVar5,0,8);
            goto LAB_008ff2e0;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      }
LAB_008ff2e0:
      plVar2 = DAT_043f1798;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar2;
      }
      uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar1 & 1) == 0) {
LAB_008ff35c:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0,8);
        plVar4 = plVar7;
        if (plVar7 == (long *)0x0) break;
        goto LAB_008ff234;
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_008ff35c;
      FUN_02bcc824(plVar6,plVar4,0,8);
      plVar4 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  plVar4 = DAT_043f1798;
  if (lVar3 == 0) {
    return;
  }
  lVar5 = tpidr_el0;
  plVar2 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar2 = plVar4;
  }
  uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar3,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008ff5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,0,8);
  return;
}


