/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5b6f0; name: FUN_01e5b6f0
 */


int FUN_01e5b6f0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (*(long *)(param_1 + 0x148) != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


