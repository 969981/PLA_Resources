/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae0e30; name: FUN_01ae0e30
 */


undefined8 FUN_01ae0e30(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined8 *)(&DAT_03a7c9b0 + (long)(int)param_1 * 8);
  }
  return 0x3cea1bafea5d5553;
}


