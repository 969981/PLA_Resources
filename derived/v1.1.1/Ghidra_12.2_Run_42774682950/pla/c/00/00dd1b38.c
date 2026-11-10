/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dd1b38; name: FUN_00dd1b38
 */


void FUN_00dd1b38(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = (long *)(param_1 + 0x40);
  lVar1 = tpidr_el0;
  if (*plVar3 != 0) {
    FUN_00dd78e8(plVar3);
    plVar4 = DAT_043f1798;
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      plVar3 = *(long **)(lVar1 + 0x20);
      if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
        *(long **)(lVar1 + 0x20) = DAT_043f1798;
        plVar3 = plVar4;
      }
      uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      if ((uVar2 & 1) == 0) {
LAB_00dd1e44:
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,0,8);
        plVar3 = (long *)*(long *)(param_1 + 0x18);
        goto joined_r0x00dd1e64;
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00dd1e44;
      FUN_02bcc824(plVar3,lVar5,0,8);
      plVar3 = *(long **)(param_1 + 0x18);
      goto joined_r0x00dd20d8;
    }
  }
  plVar3 = *(long **)(param_1 + 0x18);
joined_r0x00dd20d8:
  if (plVar3 != (long *)0x0) {
    do {
      plVar4 = DAT_043f1798;
      plVar7 = (long *)*plVar3;
      if (((*(byte *)(plVar3 + 2) & 1) != 0) && (lVar5 = plVar3[4], lVar5 != 0)) {
        plVar6 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar6 = plVar4;
        }
        uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar2 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar6,lVar5,0,8);
            goto LAB_00dd1c38;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      }
LAB_00dd1c38:
      plVar4 = DAT_043f1798;
      plVar6 = *(long **)(lVar1 + 0x20);
      if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
        *(long **)(lVar1 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar2 & 1) == 0) goto LAB_00dd1cb4;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00dd1cb4;
      FUN_02bcc824(plVar6,plVar3,0,8);
      plVar3 = plVar7;
joined_r0x00dd1e64:
      if (plVar3 == (long *)0x0) break;
    } while( true );
  }
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = DAT_043f1798;
  if (lVar5 != 0) {
    plVar4 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar4 = plVar3;
    }
    uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar4,lVar5,0,8);
        goto LAB_00dd1f18;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,0,8);
  }
LAB_00dd1f18:
  plVar3 = DAT_043f1798;
  plVar4 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar4 = plVar3;
  }
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar4,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00dd1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1,0,8);
  return;
LAB_00dd1cb4:
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar3,0,8);
  plVar3 = plVar7;
  goto joined_r0x00dd20d8;
}


