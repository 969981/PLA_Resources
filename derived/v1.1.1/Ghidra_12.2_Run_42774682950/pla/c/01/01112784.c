/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01112784; name: FUN_01112784
 */


undefined1 FUN_01112784(long param_1,byte param_2)

{
  if (param_2 < 4) {
    return *(undefined1 *)(param_1 + (ulong)param_2 + 0xcc);
  }
  return 0;
}


