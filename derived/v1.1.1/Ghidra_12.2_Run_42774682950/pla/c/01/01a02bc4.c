/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a02bc4; name: FUN_01a02bc4
 */


void FUN_01a02bc4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_04236268;
  pcVar5 = (code *)param_1[9];
  if (pcVar5 == (code *)0x0) {
    puVar7 = (undefined8 *)param_1[1];
  }
  else {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    (*pcVar5)(param_1 + 0xc);
    puVar7 = (undefined8 *)param_1[1];
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 == puVar7) {
    puVar6 = puVar7;
  }
  else {
    pcVar5 = (code *)puVar6[-0xf];
    if (pcVar5 != (code *)0x0) {
      puVar6[-0xe] = 0;
      puVar6[-0xd] = 0;
      puVar6[-0x10] = 0;
      puVar6[-0xf] = 0;
      (*pcVar5)(puVar6 + -0xc);
    }
    if (puVar6 + -0x10 != puVar7) {
      pcVar5 = (code *)puVar6[-0x1f];
      if (pcVar5 != (code *)0x0) {
        puVar6[-0x1e] = 0;
        puVar6[-0x1d] = 0;
        puVar6[-0x20] = 0;
        puVar6[-0x1f] = 0;
        (*pcVar5)(puVar6 + -0x1c);
      }
      if (puVar6 + -0x20 != puVar7) {
        do {
          pcVar5 = (code *)puVar6[-0x2f];
          if (pcVar5 != (code *)0x0) {
            puVar6[-0x2e] = 0;
            puVar6[-0x2d] = 0;
            puVar6[-0x30] = 0;
            puVar6[-0x2f] = 0;
            (*pcVar5)(puVar6 + -0x2c);
          }
          puVar6 = puVar6 + -0x10;
        } while (puVar7 + 0x20 != puVar6);
      }
    }
    puVar6 = (undefined8 *)param_1[1];
  }
  param_1[2] = puVar7;
  lVar1 = param_1[3];
  plVar2 = (long *)param_1[4];
  uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar2,puVar6,lVar1 - (long)puVar6,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01a02cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,lVar1 - (long)puVar6,0x10);
  return;
}


