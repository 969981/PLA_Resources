/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460c04; name: FUN_01460c04
 */


void FUN_01460c04(long param_1)

{
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 4;
  }
  return;
}


