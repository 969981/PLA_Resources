/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e199c; name: FUN_013e199c
 */


undefined4 FUN_013e199c(long param_1,uint param_2)

{
  if (param_2 - 1 < 0x389) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4);
  }
  return 0x389;
}


