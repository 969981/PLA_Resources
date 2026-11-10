/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242d3c; name: FUN_00242d3c
 */


void FUN_00242d3c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 8);
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x20);
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar3;
  *(long *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 0x10;
  return;
}


