/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5db0; name: FUN_004c5db0
 */


bool FUN_004c5db0(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  return *(long *)(param_1 + *(long *)(param_1 + 0x18) * 0x28 + 0x40) != 0;
}


