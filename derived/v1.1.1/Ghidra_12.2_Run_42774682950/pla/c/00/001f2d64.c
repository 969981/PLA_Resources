/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2d64; name: FUN_001f2d64
 */


void FUN_001f2d64(long param_1)

{
  *(undefined8 *)(param_1 + 0xf80) = 0;
  *(undefined8 *)(param_1 + 0xf88) = 0;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xffffff9f;
  return;
}


