/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3484; name: FUN_001e3484
 */


byte FUN_001e3484(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 < 0x80) && (param_1 != 0x20)) {
    bVar1 = (&DAT_039c7192)[(int)param_1] & 0x5f;
  }
  return bVar1;
}


