/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024882c; name: FUN_0024882c
 */


void FUN_0024882c(long param_1)

{
  if (((*(byte *)(param_1 + 0x228) >> 3 & 1) == 0) ||
     (((*(long *)(param_1 + 0x48) == 0 || (*(int *)(*(long *)(param_1 + 0x48) + 0xd4) != 1)) &&
      ((*(long *)(param_1 + 0x78) == 0 || (*(int *)(*(long *)(param_1 + 0x78) + 0xd4) != 1)))))) {
    return;
  }
  FUN_002479a4();
  return;
}


