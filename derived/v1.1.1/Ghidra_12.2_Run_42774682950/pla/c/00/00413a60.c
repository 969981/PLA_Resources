/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413a60; name: FUN_00413a60
 */


int FUN_00413a60(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                   (long)*(int *)(param_1 + 0x14));
    return iVar1;
  }
  return iVar1;
}


