/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef139c; name: FUN_02ef139c
 */


long * FUN_02ef139c(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*plVar4 == param_2)) {
    plVar3 = plVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x18;
    plVar6 = plVar4;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) goto LAB_02ef13fc;
      plVar3 = plVar6 + 3;
      plVar1 = plVar6 + 3;
      plVar6 = plVar3;
    } while (*plVar1 != param_2);
  }
  if (plVar3 == plVar4 + (ulong)uVar2 * 3) {
LAB_02ef13fc:
    plVar3 = (long *)FUN_02ef14dc();
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3 + 1;
      *plVar3 = param_2;
    }
  }
  else {
    plVar4 = plVar3 + 1;
  }
  return plVar4;
}


