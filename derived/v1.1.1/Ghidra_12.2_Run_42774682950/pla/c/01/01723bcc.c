/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01723bcc; name: FUN_01723bcc
 */


void FUN_01723bcc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(long **)(param_1 + 0x48) == plVar4) {
      *(long **)(param_1 + 0x48) = plVar4;
      plVar2 = plVar4;
      plVar4 = DAT_043f1798;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x48);
      do {
        plVar7 = plVar2 + -2;
        if ((*plVar7 != 0) && ((int)plVar2[-1] != -2)) {
          FUN_00155150(*plVar7,0xfff0b9d8);
        }
        plVar2 = plVar7;
      } while (plVar4 != plVar7);
      plVar2 = *(long **)(param_1 + 0x40);
      *(long **)(param_1 + 0x48) = plVar4;
      plVar4 = DAT_043f1798;
    }
    DAT_043f1798 = plVar4;
    if (plVar2 != (long *)0x0) {
      lVar3 = tpidr_el0;
      plVar7 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = plVar4;
        plVar7 = plVar4;
      }
      uVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar1 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar2,0,8);
          plVar4 = *(long **)(param_1 + 0x18);
          goto joined_r0x017240c8;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar2,0,8);
      plVar4 = *(long **)(param_1 + 0x18);
      goto joined_r0x017240c8;
    }
  }
  plVar4 = *(long **)(param_1 + 0x18);
joined_r0x017240c8:
  if (plVar4 != (long *)0x0) {
    lVar3 = tpidr_el0;
LAB_01723c1c:
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
            goto LAB_01723cc8;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      }
LAB_01723cc8:
      plVar2 = DAT_043f1798;
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
          FUN_02bcc824(plVar6,plVar4,0,8);
          plVar4 = plVar7;
          if (plVar7 == (long *)0x0) break;
          goto LAB_01723c1c;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0,8);
      plVar4 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x01724010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,0,8);
  return;
}


