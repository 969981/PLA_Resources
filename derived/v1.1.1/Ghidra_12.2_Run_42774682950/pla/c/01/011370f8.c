/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011370f8; name: FUN_011370f8
 */


void FUN_011370f8(long param_1,ushort param_2)

{
  if (param_2 < 0x78) {
    *(char *)(param_1 + 0x71) = (char)param_2;
  }
  return;
}


