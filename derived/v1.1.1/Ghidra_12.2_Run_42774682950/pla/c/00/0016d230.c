/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d230; name: FUN_0016d230
 */


bool FUN_0016d230(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*(size_t *)(param_1 + 0x10) == *(size_t *)(param_2 + 0x10)) {
    iVar1 = memcmp((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),*(size_t *)(param_1 + 0x10));
    return iVar1 == 0;
  }
  return false;
}


