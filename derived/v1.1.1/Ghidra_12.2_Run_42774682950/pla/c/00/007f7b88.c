/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7b88; name: FUN_007f7b88
 */


int FUN_007f7b88(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00821c5c(param_1 + 0x1194);
  return (int)((uVar1 & 0xffffffff) * 0xfffd >> 0x20) + 2;
}


