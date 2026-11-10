/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617900; name: FUN_00617900
 */


ulong FUN_00617900(ulong param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return (ulong)(byte)(&DAT_03a3f08e)[(-param_1 & param_1) * 0x3f566ed27179461 >> 0x3a];
}


