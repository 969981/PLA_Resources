/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022b74c; name: FUN_0022b74c
 */


void FUN_0022b74c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_00232654(0x18);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar1[2] = 0;
  }
  plVar1[2] = param_2;
  lVar2 = *plVar1;
  plVar3 = (long *)(param_1 + 8);
  *plVar1 = *plVar3;
  *(long **)(lVar2 + 8) = plVar3;
  *(long **)(*plVar3 + 8) = plVar1;
  *plVar3 = lVar2;
  return;
}


