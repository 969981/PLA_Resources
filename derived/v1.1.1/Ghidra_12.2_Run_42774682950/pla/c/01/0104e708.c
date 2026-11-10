/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0104e708; name: FUN_0104e708
 */


void FUN_0104e708(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = (long *)(param_1 + 0x40);
  if (*plVar3 != 0) {
    FUN_01055828(plVar3);
    plVar2 = DAT_043f1798;
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar5 = tpidr_el0;
      plVar3 = *(long **)(lVar5 + 0x20);
      if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
        *(long **)(lVar5 + 0x20) = DAT_043f1798;
        plVar3 = plVar2;
      }
      uVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      if ((uVar1 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar3,lVar4,0,8);
          plVar3 = *(long **)(param_1 + 0x18);
          goto joined_r0x0104ebbc;
        }
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,0,8);
      plVar3 = *(long **)(param_1 + 0x18);
      goto joined_r0x0104ebbc;
    }
  }
  plVar3 = *(long **)(param_1 + 0x18);
joined_r0x0104ebbc:
  if (plVar3 != (long *)0x0) {
    lVar4 = tpidr_el0;
LAB_0104e75c:
    do {
      plVar2 = DAT_043f1798;
      plVar7 = (long *)*plVar3;
      if (((*(byte *)(plVar3 + 2) & 1) != 0) && (lVar5 = plVar3[4], lVar5 != 0)) {
        plVar6 = *(long **)(lVar4 + 0x20);
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
          *(long **)(lVar4 + 0x20) = DAT_043f1798;
          plVar6 = plVar2;
        }
        uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar1 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar6,lVar5,0,8);
            goto LAB_0104e808;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      }
LAB_0104e808:
      plVar2 = DAT_043f1798;
      plVar6 = *(long **)(lVar4 + 0x20);
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
        *(long **)(lVar4 + 0x20) = DAT_043f1798;
        plVar6 = plVar2;
      }
      uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar1 & 1) == 0) {
LAB_0104e884:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar3,0,8);
        plVar3 = plVar7;
        if (plVar7 == (long *)0x0) break;
        goto LAB_0104e75c;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0104e884;
      FUN_02bcc824(plVar6,plVar3,0,8);
      plVar3 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = DAT_043f1798;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = tpidr_el0;
  plVar2 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar2 = plVar3;
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
      FUN_02bcc824(plVar2,lVar4,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0104e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0,8);
  return;
}


