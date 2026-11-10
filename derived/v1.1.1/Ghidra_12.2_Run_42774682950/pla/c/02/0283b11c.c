/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b11c; name: FUN_0283b11c
 */


void FUN_0283b11c(long param_1,long *param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  lVar8 = *param_2;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = plVar7;
  if ((lVar2 != 0) && (*plVar7 != lVar8)) {
    lVar5 = lVar2 * 0x30;
    plVar4 = plVar7 + lVar2 * 6;
    do {
      lVar5 = lVar5 + -0x30;
      plVar3 = plVar4;
      if (lVar5 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar3 = plVar7;
    } while (*plVar1 != lVar8);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe | param_3 & 1;
  return;
}


