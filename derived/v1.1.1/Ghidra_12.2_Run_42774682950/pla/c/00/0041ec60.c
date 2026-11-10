/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ec60; name: FUN_0041ec60
 */


int FUN_0041ec60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(long *)(param_1 + 2) == 0) && (iVar1 != 5)) {
    iVar1 = 0;
  }
  return iVar1;
}


