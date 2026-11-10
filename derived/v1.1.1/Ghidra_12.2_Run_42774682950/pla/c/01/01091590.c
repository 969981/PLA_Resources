/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01091590; name: FUN_01091590
 */


undefined1 FUN_01091590(byte param_1)

{
  if (0xef < param_1) {
    return 4;
  }
  if (0xcf < param_1) {
    return 3;
  }
  if (param_1 < 0x30) {
    return 0xf < param_1;
  }
  return 2;
}


