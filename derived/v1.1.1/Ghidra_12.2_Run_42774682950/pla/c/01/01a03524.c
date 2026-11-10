/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a03524; name: FUN_01a03524
 */


void FUN_01a03524(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined ***)(param_1 + 0x2c0) = &PTR_FUN_04236268;
  pcVar3 = *(code **)(param_1 + 0x308);
  if (pcVar3 == (code *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x2c8);
  }
  else {
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    (*pcVar3)(param_1 + 800);
    puVar5 = *(undefined8 **)(param_1 + 0x2c8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x2d0);
    if (puVar4 == puVar5) {
      puVar4 = puVar5;
    }
    else {
      pcVar3 = (code *)puVar4[-0xf];
      if (pcVar3 != (code *)0x0) {
        puVar4[-0xe] = 0;
        puVar4[-0xd] = 0;
        puVar4[-0x10] = 0;
        puVar4[-0xf] = 0;
        (*pcVar3)(puVar4 + -0xc);
      }
      if (puVar4 + -0x10 != puVar5) {
        pcVar3 = (code *)puVar4[-0x1f];
        if (pcVar3 != (code *)0x0) {
          puVar4[-0x1e] = 0;
          puVar4[-0x1d] = 0;
          puVar4[-0x20] = 0;
          puVar4[-0x1f] = 0;
          (*pcVar3)(puVar4 + -0x1c);
        }
        if (puVar4 + -0x20 != puVar5) {
          do {
            pcVar3 = (code *)puVar4[-0x2f];
            if (pcVar3 != (code *)0x0) {
              puVar4[-0x2e] = 0;
              puVar4[-0x2d] = 0;
              puVar4[-0x30] = 0;
              puVar4[-0x2f] = 0;
              (*pcVar3)(puVar4 + -0x2c);
            }
            puVar4 = puVar4 + -0x10;
          } while (puVar5 + 0x20 != puVar4);
        }
      }
      puVar4 = *(undefined8 **)(param_1 + 0x2c8);
    }
    *(undefined8 **)(param_1 + 0x2d0) = puVar5;
    lVar6 = *(long *)(param_1 + 0x2d8) - (long)puVar4;
    plVar7 = *(long **)(param_1 + 0x2e0);
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,puVar4,lVar6,0x10);
        goto LAB_01a03558;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,lVar6,0x10);
  }
LAB_01a03558:
  FUN_01c3489c(param_1);
  return;
}


