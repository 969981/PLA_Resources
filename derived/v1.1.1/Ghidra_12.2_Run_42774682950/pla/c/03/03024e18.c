/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024e18; name: FUN_03024e18
 */


byte * FUN_03024e18(byte *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*param_1 & 0x30) != 0) {
    lVar1 = 0x90;
  }
  return param_1 + lVar1 + (ulong)param_1[4] * 0x20 + 0x40;
}


