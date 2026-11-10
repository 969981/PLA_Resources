/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d896c; name: FUN_001d896c
 */


int FUN_001d896c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
  iVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    iVar1 = iVar2 + 1;
  }
  return iVar1 >> 1;
}


