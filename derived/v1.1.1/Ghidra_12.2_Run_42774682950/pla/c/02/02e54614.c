/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54614; name: FUN_02e54614
 */


long FUN_02e54614(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(uint *)(param_1 + 0x30) == 0) || (*(uint *)(param_2 + 0x30) == 0)) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  plVar1 = plVar2 + *(uint *)(param_1 + 0x30);
  do {
    lVar3 = (ulong)*(uint *)(param_2 + 0x30) << 3;
    plVar4 = *(long **)(param_2 + 0x28);
    do {
      if (*plVar2 == *plVar4) {
        return *plVar2;
      }
      lVar3 = lVar3 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    plVar2 = plVar2 + 1;
  } while (plVar2 != plVar1);
  return 0;
}


