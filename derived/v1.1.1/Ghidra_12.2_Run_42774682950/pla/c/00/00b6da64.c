/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6da64; name: FUN_00b6da64
 */


void FUN_00b6da64(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != puVar1) {
    puVar6 = puVar3 + -0x10;
    param_1[2] = (long)puVar6;
    pcVar7 = (code *)puVar3[-0xf];
    if (pcVar7 != (code *)0x0) {
      puVar3[-0xe] = 0;
      puVar3[-0xd] = 0;
      *puVar6 = 0;
      puVar3[-0xf] = 0;
      (*pcVar7)(puVar3 + -0xc);
      puVar6 = (undefined8 *)param_1[2];
    }
    while (puVar3 = puVar6, puVar3 != puVar1) {
      puVar6 = puVar3 + -0x10;
      param_1[2] = (long)puVar6;
      pcVar7 = (code *)puVar3[-0xf];
      if (pcVar7 != (code *)0x0) {
        puVar3[-0xe] = 0;
        puVar3[-0xd] = 0;
        *puVar6 = 0;
        puVar3[-0xf] = 0;
        (*pcVar7)(puVar3 + -0xc);
        puVar6 = (undefined8 *)param_1[2];
      }
    }
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar9 = *(long **)param_1[4];
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar9,lVar8,lVar2 - lVar8,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b6db24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar2 - lVar8,0x10);
  return;
}


