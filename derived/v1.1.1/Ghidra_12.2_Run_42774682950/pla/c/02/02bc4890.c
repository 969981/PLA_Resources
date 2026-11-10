/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc4890; name: FUN_02bc4890
 */


void FUN_02bc4890(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = DAT_043f1798;
  if (((param_1[0x30] & 1) == 0) || (lVar5 = *(long *)(param_1 + 0x40), lVar5 == 0)) {
LAB_02bc495c:
    bVar1 = param_1[0x18];
    plVar3 = DAT_043f1798;
  }
  else {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_02bc4940:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_02bc495c;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02bc4940;
    FUN_02bcc824(plVar6,lVar5,0,8);
    bVar1 = param_1[0x18];
    plVar3 = DAT_043f1798;
  }
  DAT_043f1798 = plVar3;
  if (((bVar1 & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = plVar3;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,0,8);
        bVar1 = *param_1;
        plVar3 = DAT_043f1798;
        goto joined_r0x02bc4a64;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
  }
  bVar1 = *param_1;
  plVar3 = DAT_043f1798;
joined_r0x02bc4a64:
  if (((bVar1 & 1) == 0) || (lVar5 = *(long *)(param_1 + 0x10), lVar5 == 0)) {
    DAT_043f1798 = plVar3;
    return;
  }
  lVar2 = tpidr_el0;
  plVar6 = *(long **)(lVar2 + 0x20);
  DAT_043f1798 = plVar3;
  if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
    *(long **)(lVar2 + 0x20) = plVar3;
    plVar6 = plVar3;
  }
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bc4b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
  return;
}


