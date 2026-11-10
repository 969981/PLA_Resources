/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e14048; name: FUN_01e14048
 */


void FUN_01e14048(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[6];
  if (plVar6 == (long *)0x0) goto LAB_01e14460;
  plVar7 = (long *)param_1[7];
  puVar5 = (undefined8 *)*plVar6;
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_01e140d0:
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x20,8);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01e140d0;
    FUN_02bcc824(plVar7,plVar6,0x20,8);
  }
  if (puVar5 == (undefined8 *)0x0) goto LAB_01e14460;
  plVar7 = (long *)param_1[7];
  plVar6 = (long *)*puVar5;
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_01e14150:
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar5,0x20,8);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01e14150;
    FUN_02bcc824(plVar7,puVar5,0x20,8);
  }
  if (plVar6 == (long *)0x0) goto LAB_01e14460;
  plVar8 = (long *)param_1[7];
  plVar7 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar3 & 1) == 0) {
LAB_01e141d0:
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x20,8);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01e141d0;
    FUN_02bcc824(plVar8,plVar6,0x20,8);
  }
  if (plVar7 != (long *)0x0) {
    lVar4 = tpidr_el0;
    do {
      while( true ) {
        plVar6 = (long *)param_1[7];
        plVar8 = (long *)*plVar7;
        uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar3 & 1) != 0) break;
LAB_01e142dc:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x20,8);
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_01e14460;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01e142dc;
      FUN_02bcc824(plVar6,plVar7,0x20,8);
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_01e14460:
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
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
      FUN_02bcc824(plVar6,lVar4,lVar1 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01e14500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar1 << 3,8);
  return;
}


