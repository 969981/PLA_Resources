/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d2ac; name: FUN_0020d2ac
 */


void FUN_0020d2ac(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  plVar1[2] = param_3 + param_2;
  plVar1[3] = (param_3 + param_4) - (param_3 + param_2);
  return;
}


