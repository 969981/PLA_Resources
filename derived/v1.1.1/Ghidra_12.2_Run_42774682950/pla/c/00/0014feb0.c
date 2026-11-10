/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014feb0; name: FUN_0014feb0
 */


int FUN_0014feb0(long param_1,int param_2)

{
  if (param_2 + 0xf4627U < 0xf4628) {
    param_2 = (int)((ulong)(*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) >> 4) + param_2
    ;
  }
  return param_2;
}


