/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f247c; name: FUN_007f247c
 */


bool FUN_007f247c(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return false;
  }
  iVar1 = memcmp((void *)(*(long *)(param_1 + 0x20) + 5),&DAT_03a72247,0x10);
  return iVar1 != 0;
}


