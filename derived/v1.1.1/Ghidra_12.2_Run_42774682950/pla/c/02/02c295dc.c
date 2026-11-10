/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c295dc; name: FUN_02c295dc
 */


void FUN_02c295dc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_01353c54(param_1 + 200);
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    *(long *)(param_1 + 0x80) = lVar4;
    lVar5 = *(long *)(param_1 + 0x88) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar4,lVar5,0x10);
        lVar4 = *(long *)(param_1 + 0x40);
        goto joined_r0x02c29764;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
  }
  lVar4 = *(long *)(param_1 + 0x40);
joined_r0x02c29764:
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    do {
      lVar3 = lVar5 + -0x38;
      lVar5 = lVar5 + -0x50;
      FUN_01353c54(lVar3);
    } while (lVar4 != lVar5);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x48) = lVar4;
  plVar1 = *(long **)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x50) - lVar5;
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar5,lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02c29748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  return;
}


