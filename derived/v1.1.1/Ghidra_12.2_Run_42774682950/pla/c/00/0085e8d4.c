/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e8d4; name: FUN_0085e8d4
 */


long * FUN_0085e8d4(ushort *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_2 < 0) || ((int)(uint)*param_1 <= param_2)) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 4) + (long)param_2 * 8);
  plVar1 = (long *)0x0;
  if (*plVar2 != -1) {
    plVar1 = plVar2;
  }
  return plVar1;
}


