/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162300; name: FUN_00162300
 */


uint FUN_00162300(uint param_1)

{
  if (7 < (int)param_1) {
    param_1 = (param_1 & 7 | 8) << (ulong)((param_1 >> 3) - 1 & 0x1f);
  }
  return param_1;
}


