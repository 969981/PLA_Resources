/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01828404; name: FUN_01828404
 */


bool FUN_01828404(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x218)) {
    return *(float *)(param_1 + 0x21c) < *(float *)(param_1 + 0x218);
  }
  return false;
}


