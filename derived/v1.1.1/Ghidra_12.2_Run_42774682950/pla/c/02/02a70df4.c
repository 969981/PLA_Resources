/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a70df4; name: FUN_02a70df4
 */


void FUN_02a70df4(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    *(long *)(param_1 + 0x48) = lVar4;
    lVar5 = *(long *)(param_1 + 0x50) - lVar4;
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar4,lVar5,8);
        lVar4 = *(long *)(param_1 + 8);
        goto joined_r0x02a70f44;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
  lVar4 = *(long *)(param_1 + 8);
joined_r0x02a70f44:
  if (lVar4 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x10) = lVar4;
  lVar5 = *(long *)(param_1 + 0x18) - lVar4;
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar4,lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a70f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  return;
}


