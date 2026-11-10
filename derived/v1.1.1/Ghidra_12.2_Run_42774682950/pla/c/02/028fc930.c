/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fc930; name: FUN_028fc930
 */


void FUN_028fc930(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    lVar4 = tpidr_el0;
    plVar5 = *(long **)(param_1 + 0x38);
    do {
      while( true ) {
        lVar3 = plVar5[6];
        plVar5[6] = 0;
        plVar7 = (long *)*plVar5;
        if (lVar3 != 0) {
          FUN_028d4718(plVar5 + 7);
        }
        if ((long *)plVar5[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[5] + 0x20))();
        }
        plVar6 = *(long **)(param_1 + 0x40);
        uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar2 & 1) != 0) break;
LAB_028fc9fc:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x50,8);
        plVar5 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_028fca88;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_028fc9fc;
      FUN_02bcc824(plVar6,plVar5,0x50,8);
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_028fca88:
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
                    /* WARNING: Could not recover jumptable at 0x028fcb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3,8);
  return;
}


