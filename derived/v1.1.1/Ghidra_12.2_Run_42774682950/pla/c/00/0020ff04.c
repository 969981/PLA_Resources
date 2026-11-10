/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ff04; name: FUN_0020ff04
 */


ulong FUN_0020ff04(byte *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    lVar1 = lVar1 + (ulong)*(uint *)(PTR_DAT_043727f8 + (ulong)*param_1 * 8);
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return lVar1 + 7U >> 3;
}


