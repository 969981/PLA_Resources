/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0bac0; name: FUN_01a0bac0
 */


void FUN_01a0bac0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined ***)(param_1 + 0x2c0) = &PTR_LAB_04236a40;
  pcVar2 = *(code **)(param_1 + 0x308);
  if (pcVar2 == (code *)0x0) {
    lVar4 = *(long *)(param_1 + 0x2c8);
  }
  else {
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    (*pcVar2)(param_1 + 800);
    lVar4 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x2d0);
    if (*(long *)(param_1 + 0x2d0) == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        pcVar2 = *(code **)(lVar3 + -0x78);
        lVar5 = lVar3 + -0x80;
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar2)(lVar3 + -0x60);
        }
        lVar3 = lVar5;
      } while (lVar4 != lVar5);
      lVar3 = *(long *)(param_1 + 0x2c8);
    }
    *(long *)(param_1 + 0x2d0) = lVar4;
    plVar6 = *(long **)(param_1 + 0x2e0);
    lVar4 = *(long *)(param_1 + 0x2d8) - lVar3;
    uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar1 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar3,lVar4,0x10);
        goto LAB_01a0baf4;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar4,0x10);
  }
LAB_01a0baf4:
  FUN_01c3489c(param_1);
  return;
}


