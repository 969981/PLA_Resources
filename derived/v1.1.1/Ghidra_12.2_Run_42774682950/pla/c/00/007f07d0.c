/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f07d0; name: FUN_007f07d0
 */


bool FUN_007f07d0(long param_1)

{
  if ((*(int *)(param_1 + 8) == 0x32ab9864) && ((*(byte *)(param_1 + 0xc) & 0x7f) == 0xb)) {
    return *(int *)(param_1 + 0x5f8) - 0x1cU < 0x5a5;
  }
  return false;
}


