/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a75b68; name: FUN_01a75b68
 */


void FUN_01a75b68(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 == (undefined8 *)0x0) goto LAB_01a75cb8;
  plVar6 = (long *)*puVar4;
  if ((long *)puVar4[5] != (long *)0x0) {
    (**(code **)(*(long *)puVar4[5] + 0x20))();
  }
  plVar7 = (long *)param_1[7];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_01a75c04:
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,0x38,8);
  }
  else {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01a75c04;
    FUN_02bcc824(plVar7,puVar4,0x38,8);
  }
  if (plVar6 == (long *)0x0) goto LAB_01a75cb8;
  plVar7 = (long *)*plVar6;
  if ((long *)plVar6[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar6[5] + 0x20))();
  }
  plVar8 = (long *)param_1[7];
  uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar3 & 1) == 0) {
LAB_01a75c98:
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x38,8);
  }
  else {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01a75c98;
    FUN_02bcc824(plVar8,plVar6,0x38,8);
  }
  if (plVar7 != (long *)0x0) {
    lVar5 = tpidr_el0;
    do {
      while( true ) {
        plVar6 = (long *)*plVar7;
        if ((long *)plVar7[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar7[5] + 0x20))();
        }
        plVar8 = (long *)param_1[7];
        uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar3 & 1) != 0) break;
LAB_01a75e64:
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x38,8);
        plVar7 = plVar6;
        if (plVar6 == (long *)0x0) goto LAB_01a75cb8;
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01a75e64;
      FUN_02bcc824(plVar8,plVar7,0x38,8);
      plVar7 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB_01a75cb8:
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
      FUN_02bcc824(plVar6,lVar5,lVar1 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01a75d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 << 3,8);
  return;
}


