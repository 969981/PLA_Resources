/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9e348; name: FUN_02e9e348
 */


long * FUN_02e9e348(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0x90);
  if ((uVar2 == 0) || (*plVar3 == param_2)) {
    plVar5 = plVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x30;
    plVar6 = plVar3;
    do {
      lVar4 = lVar4 + -0x30;
      if (lVar4 == 0) goto LAB_02e9e3b4;
      plVar5 = plVar6 + 6;
      plVar1 = plVar6 + 6;
      plVar6 = plVar5;
    } while (*plVar1 != param_2);
  }
  if (plVar5 != plVar3 + (ulong)uVar2 * 6) {
    return plVar5 + 1;
  }
LAB_02e9e3b4:
  plVar3 = (long *)FUN_02edc048();
  return plVar3;
}


