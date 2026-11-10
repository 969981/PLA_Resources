/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c9fc; name: FUN_0020c9fc
 */


long FUN_0020c9fc(long param_1,long param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  return param_2 - ((ulong)(*(byte *)(param_1 + 0xd) >> 3) & 1);
}


