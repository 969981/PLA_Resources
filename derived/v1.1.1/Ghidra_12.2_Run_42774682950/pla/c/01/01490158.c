/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01490158; name: FUN_01490158
 */


void FUN_01490158(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *(undefined1 *)(param_1 + 0x3f21) = 0;
  if (*(char *)(param_1 + 0x21d0) == '\0') {
    *(char *)(param_1 + 0x21d0) = '\x01';
  }
  plVar5 = DAT_043c3a28;
  lVar4 = DAT_043c3a10;
  plVar8 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (DAT_043c3a28 != (long *)0x0) {
    (**(code **)(*DAT_043c3a28 + 0x18))(DAT_043c3a28);
  }
  plVar3 = plVar8;
  if ((lVar2 != 0) && (*plVar8 != lVar4)) {
    lVar7 = lVar2 * 0x30;
    plVar6 = plVar8 + lVar2 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar3 = plVar6;
      if (lVar7 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar3 = plVar8;
    } while (*plVar1 != lVar4);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) | 1;
  return;
}


