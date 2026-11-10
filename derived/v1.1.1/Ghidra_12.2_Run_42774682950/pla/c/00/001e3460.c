/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3460; name: FUN_001e3460
 */


byte FUN_001e3460(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_039c7192)[(int)param_1] & 0x44;
  }
  return 0;
}


