/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cb6ac; name: FUN_028cb6ac
 */


void FUN_028cb6ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    plVar5 = *(long **)(param_1 + 0x38);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x88);
    lVar3 = *(long *)(param_1 + 0x80) << 3;
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
        FUN_02bcc824(plVar5,lVar4,lVar3,1);
        plVar5 = *(long **)(param_1 + 0x38);
        goto joined_r0x028cb8ac;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,1);
    plVar5 = *(long **)(param_1 + 0x38);
  }
joined_r0x028cb8ac:
  if (plVar5 != (long *)0x0) {
    lVar4 = tpidr_el0;
    do {
      while( true ) {
        plVar7 = (long *)*plVar5;
        if ((long *)plVar5[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[10] + 0x20))();
        }
        if ((long *)plVar5[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[5] + 0x20))();
        }
        plVar6 = *(long **)(param_1 + 0x40);
        uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar2 & 1) != 0) break;
LAB_028cb808:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x58,8);
        plVar5 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_028cb8b0;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_028cb808;
      FUN_02bcc824(plVar6,plVar5,0x58,8);
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_028cb8b0:
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar4 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10) << 3;
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
      FUN_02bcc824(plVar5,lVar4,lVar3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028cb94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
  return;
}


