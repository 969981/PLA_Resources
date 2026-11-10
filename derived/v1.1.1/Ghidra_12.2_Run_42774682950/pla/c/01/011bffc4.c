/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bffc4; name: FUN_011bffc4
 */


void FUN_011bffc4(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(*param_1 + 0x148);
  lVar5 = *(long *)(*param_1 + 0x150);
  if ((lVar5 != 0) && (*plVar3 != *(long *)(&DAT_041f6808 + (ulong)*(byte *)(param_1 + 4) * 0x150)))
  {
    plVar4 = plVar3 + lVar5 * 6;
    lVar5 = lVar5 * 0x30;
    do {
      lVar5 = lVar5 + -0x30;
      if (lVar5 == 0) {
        plVar3 = plVar4;
        break;
      }
      plVar2 = plVar3 + 6;
      plVar1 = plVar3 + 6;
      plVar3 = plVar2;
    } while (*plVar1 != *(long *)(&DAT_041f6808 + (ulong)*(byte *)(param_1 + 4) * 0x150));
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe | param_2 & 1;
  return;
}


