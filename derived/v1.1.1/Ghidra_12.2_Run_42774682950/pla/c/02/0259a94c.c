/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259a94c; name: FUN_0259a94c
 */


void FUN_0259a94c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[0xb] == 0) {
    return;
  }
  plVar6 = (long *)param_1[6];
  if (plVar6 == (long *)0x0) goto LAB_0259aafc;
  plVar8 = (long *)param_1[7];
  puVar5 = (undefined8 *)*plVar6;
  uVar1 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar1 & 1) == 0) {
LAB_0259a9dc:
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x58,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0259a9dc;
    FUN_02bcc824(plVar8,plVar6,0x58,8);
  }
  if (puVar5 == (undefined8 *)0x0) goto LAB_0259aafc;
  plVar6 = (long *)param_1[7];
  puVar7 = (undefined8 *)*puVar5;
  uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar1 & 1) == 0) {
LAB_0259aa5c:
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar5,0x58,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0259aa5c;
    FUN_02bcc824(plVar6,puVar5,0x58,8);
  }
  if (puVar7 == (undefined8 *)0x0) goto LAB_0259aafc;
  plVar8 = (long *)param_1[7];
  plVar6 = (long *)*puVar7;
  uVar1 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar1 & 1) == 0) {
LAB_0259aadc:
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,0x58,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0259aadc;
    FUN_02bcc824(plVar8,puVar7,0x58,8);
  }
  if (plVar6 != (long *)0x0) {
    lVar3 = tpidr_el0;
    do {
      while( true ) {
        plVar9 = (long *)param_1[7];
        plVar8 = (long *)*plVar6;
        uVar1 = (**(code **)(*plVar9 + 0xc0))(plVar9);
        if ((uVar1 & 1) != 0) break;
LAB_0259ac70:
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar6,0x58,8);
        plVar6 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0259aafc;
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0259ac70;
      FUN_02bcc824(plVar9,plVar6,0x58,8);
      plVar6 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_0259aafc:
  uVar1 = param_1[1];
  param_1[6] = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 8;
        lVar3 = lVar3 + 4;
        *(undefined8 *)(*param_1 + lVar4) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
      } while (uVar1 - uVar2 != lVar3);
    }
    if (uVar2 != 0) {
      lVar3 = lVar3 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar2 = uVar2 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar2 != 0);
    }
  }
  param_1[0xb] = 0;
  return;
}


