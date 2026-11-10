/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3cf0; name: FUN_004e3cf0
 */


bool FUN_004e3cf0(uint param_1)

{
  if ((param_1 < 0x34) && ((1L << ((ulong)param_1 & 0x3f) & 0xabe0800e17c23U) != 0)) {
    return true;
  }
  return param_1 == 0x3374 || param_1 == 0xff01;
}


