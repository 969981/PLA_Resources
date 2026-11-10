/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1174; name: FUN_001e1174
 */


int FUN_001e1174(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 0x28)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


