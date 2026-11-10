/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5d734; name: FUN_01a5d734
 */


void FUN_01a5d734(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0xb4c) == param_1) {
    return;
  }
  *(float *)(param_2 + 0xb4c) = param_1;
  FUN_01a5d0f8(*(undefined4 *)(param_2 + 0xb40),*(undefined4 *)(param_2 + 0xb48),
               *(undefined4 *)(param_2 + 0xb44));
  FUN_01a5d780(param_2);
  return;
}


