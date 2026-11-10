/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022fbc8; name: FUN_0022fbc8
 */


void FUN_0022fbc8(long param_1,int param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff0f | param_2 << 4;
  return;
}


