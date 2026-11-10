/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a8f34; name: FUN_009a8f34
 */


void FUN_009a8f34(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[6];
  if (plVar6 == (long *)0x0) goto LAB_009a90dc;
  plVar7 = (long *)param_1[7];
  puVar4 = (undefined8 *)*plVar6;
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_009a8fbc:
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x18,4);
  }
  else {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_009a8fbc;
    FUN_02bcc824(plVar7,plVar6,0x18,4);
  }
  if (puVar4 == (undefined8 *)0x0) goto LAB_009a90dc;
  plVar7 = (long *)param_1[7];
  plVar6 = (long *)*puVar4;
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_009a903c:
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,0x18,4);
  }
  else {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_009a903c;
    FUN_02bcc824(plVar7,puVar4,0x18,4);
  }
  if (plVar6 == (long *)0x0) goto LAB_009a90dc;
  plVar8 = (long *)param_1[7];
  plVar7 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar3 & 1) == 0) {
LAB_009a90bc:
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x18,4);
  }
  else {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_009a90bc;
    FUN_02bcc824(plVar8,plVar6,0x18,4);
  }
  if (plVar7 != (long *)0x0) {
    lVar5 = tpidr_el0;
    do {
      while( true ) {
        plVar6 = (long *)param_1[7];
        plVar8 = (long *)*plVar7;
        uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar3 & 1) != 0) break;
LAB_009a9264:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x18,4);
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_009a90dc;
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_009a9264;
      FUN_02bcc824(plVar6,plVar7,0x18,4);
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_009a90dc:
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar6 = (long *)param_1[2];
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,lVar1 << 3,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x009a9194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 << 3,4);
  return;
}


