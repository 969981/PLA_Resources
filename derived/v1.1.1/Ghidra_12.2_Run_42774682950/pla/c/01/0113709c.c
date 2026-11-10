/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113709c; name: FUN_0113709c
 */


undefined1 FUN_0113709c(long param_1,int param_2)

{
  if (param_2 - 1U < 6) {
    return *(undefined1 *)(param_1 + (ulong)(param_2 - 1U) * 0x10 + 0x7f);
  }
  return 0;
}


