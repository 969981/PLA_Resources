/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6b08; name: FUN_02ef6b08
 */


void FUN_02ef6b08(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0xa4) == param_1) {
    return;
  }
  *(float *)(param_2 + 0xa4) = param_1;
  *(undefined1 *)(param_2 + 0xf8) = 1;
  return;
}


