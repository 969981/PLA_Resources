/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01091670; name: FUN_01091670
 */


undefined4 FUN_01091670(int param_1,ushort param_2)

{
  if ((param_1 == 0x1df) && (param_2 < 6)) {
    return *(undefined4 *)(&DAT_03a7895c + (ulong)param_2 * 4);
  }
  return 0;
}


