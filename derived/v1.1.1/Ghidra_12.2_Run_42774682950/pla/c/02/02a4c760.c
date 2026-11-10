/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4c760; name: FUN_02a4c760
 */


void FUN_02a4c760(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0xe8);
  if (plVar5 == (long *)0x0) {
LAB_02a4c838:
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 == (long *)0x0) goto LAB_02a4c8f8;
LAB_02a4c840:
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 == plVar5) {
      plVar4 = plVar5;
    }
    else {
      do {
        plVar4 = plVar4 + -1;
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 0x18))();
        }
      } while (plVar5 != plVar4);
      plVar4 = *(long **)(param_1 + 0xb0);
    }
    plVar1 = *(long **)(param_1 + 200);
    *(long **)(param_1 + 0xb8) = plVar5;
    lVar6 = *(long *)(param_1 + 0xc0) - (long)plVar4;
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) == 0) {
LAB_02a4c8dc:
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar4,lVar6,8);
      goto LAB_02a4c8f8;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a4c8dc;
    FUN_02bcc824(plVar1,plVar4,lVar6,8);
    plVar5 = *(long **)(param_1 + 0x78);
  }
  else {
    plVar4 = *(long **)(param_1 + 0xf0);
    if (plVar4 == plVar5) {
      plVar4 = plVar5;
    }
    else {
      do {
        plVar4 = plVar4 + -1;
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 0x18))();
        }
      } while (plVar5 != plVar4);
      plVar4 = *(long **)(param_1 + 0xe8);
    }
    plVar1 = *(long **)(param_1 + 0x100);
    *(long **)(param_1 + 0xf0) = plVar5;
    lVar6 = *(long *)(param_1 + 0xf8) - (long)plVar4;
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar3 & 1) == 0) {
LAB_02a4c81c:
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar4,lVar6,8);
      goto LAB_02a4c838;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a4c81c;
    FUN_02bcc824(plVar1,plVar4,lVar6,8);
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) goto LAB_02a4c840;
LAB_02a4c8f8:
    plVar5 = *(long **)(param_1 + 0x78);
  }
  if (plVar5 != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x80);
    if (plVar4 == plVar5) {
      plVar4 = plVar5;
    }
    else {
      do {
        plVar4 = plVar4 + -1;
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 0x18))();
        }
      } while (plVar5 != plVar4);
      plVar4 = *(long **)(param_1 + 0x78);
    }
    plVar1 = *(long **)(param_1 + 0x90);
    *(long **)(param_1 + 0x80) = plVar5;
    lVar6 = *(long *)(param_1 + 0x88) - (long)plVar4;
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
        FUN_02bcc824(plVar1,plVar4,lVar6,8);
        goto LAB_02a4c9b8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar4,lVar6,8);
  }
LAB_02a4c9b8:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 100));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x44));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x24));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xc));
  return;
}


