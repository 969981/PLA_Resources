/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00926f60; name: FUN_00926f60
 */


bool FUN_00926f60(long param_1)

{
  if (*(char *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x138) + 0x68) + 8) +
               0x354) == '\0') {
    return *(char *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x355) == '\0';
  }
  return false;
}


