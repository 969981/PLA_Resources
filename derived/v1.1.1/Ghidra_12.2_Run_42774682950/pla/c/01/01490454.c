/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01490454; name: FUN_01490454
 */


void FUN_01490454(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x3f23) != '\0') {
    FUN_0148cc94(param_1,9);
    FUN_00d2e2f0(0,param_1 + 0x180,"anime_L_wnhd_00_wake");
    if (*(char *)(param_1 + 0x2540) == '\0') {
      *(char *)(param_1 + 0x2540) = '\x01';
    }
    plVar5 = DAT_043c3a88;
    lVar4 = DAT_043c3a70;
    plVar8 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if (DAT_043c3a88 != (long *)0x0) {
      (**(code **)(*DAT_043c3a88 + 0x18))(DAT_043c3a88);
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
  }
  return;
}


