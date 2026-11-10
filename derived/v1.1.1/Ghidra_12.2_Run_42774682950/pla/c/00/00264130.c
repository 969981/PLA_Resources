/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00264130; name: FUN_00264130
 */


void FUN_00264130(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_2 + 0x48);
  lVar3 = *plVar2;
  plVar1 = (long *)(param_1 + 0x30);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  return;
}


