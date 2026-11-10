/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce0a4; name: FUN_02bce0a4
 */


byte FUN_02bce0a4(long param_1)

{
  return *(byte *)(param_1 + 0xc) >> 3 & 1;
}


