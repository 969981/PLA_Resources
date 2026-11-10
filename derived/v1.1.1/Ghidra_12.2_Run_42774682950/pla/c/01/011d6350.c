/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d6350; name: FUN_011d6350
 */


void FUN_011d6350(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = -0x620e2e271c5ff1b2;
  if ((char)param_1[7] != '\0') {
    lVar3 = -0x620e2d271c5fefff;
  }
  plVar4 = *(long **)(*param_1 + 0x148);
  lVar6 = *(long *)(*param_1 + 0x150);
  if ((lVar6 != 0) && (*plVar4 != lVar3)) {
    plVar5 = plVar4 + lVar6 * 6;
    lVar6 = lVar6 * 0x30;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        plVar4 = plVar5;
        break;
      }
      plVar2 = plVar4 + 6;
      plVar1 = plVar4 + 6;
      plVar4 = plVar2;
    } while (*plVar1 != lVar3);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) & 0xfe | param_2 & 1;
  return;
}


