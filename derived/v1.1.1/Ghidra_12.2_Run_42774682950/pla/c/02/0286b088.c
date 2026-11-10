/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286b088; name: FUN_0286b088
 */


bool FUN_0286b088(long param_1,ulong param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x50) + (param_2 & 0xff) * 0x120 + 0x100) == 0) {
    return true;
  }
  return *(long *)(*(long *)(param_1 + 0x50) + (param_2 & 0xff) * 0x120 + 0x108) == 0;
}


