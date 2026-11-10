/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baffb4; name: FUN_01baffb4
 */


void FUN_01baffb4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_04243700;
  param_1[9] = &PTR_LAB_04243af8;
  param_1[10] = &PTR_LAB_04243bd8;
  if (*(char *)(param_1 + 0x172) == '\0') goto LAB_01bb00d0;
  lVar4 = param_1[0x177];
  if (lVar4 == 0) {
LAB_01bb00b8:
    plVar5 = (long *)param_1[0x176];
  }
  else {
    lVar2 = param_1[0x178];
    if (lVar2 == lVar4) {
      lVar2 = lVar4;
    }
    else {
      do {
        plVar5 = (long *)(lVar2 + -0x18);
        lVar2 = lVar2 + -0x30;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar4 != lVar2);
      lVar2 = param_1[0x177];
    }
    lVar3 = param_1[0x179];
    param_1[0x178] = lVar4;
    plVar5 = (long *)param_1[0x17a];
    uVar1 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar1 & 1) == 0) {
LAB_01bb009c:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar3 - lVar2,8);
      goto LAB_01bb00b8;
    }
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01bb009c;
    FUN_02bcc824(plVar5,lVar2,lVar3 - lVar2,8);
    plVar5 = (long *)param_1[0x176];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x172) = 0;
LAB_01bb00d0:
  if ((long *)param_1[0x16f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16f] + 0x20))();
  }
  FUN_01a63380(param_1);
  return;
}


