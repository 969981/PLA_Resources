/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395ad8; name: FUN_01395ad8
 */


int FUN_01395ad8(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0;
  }
  return (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) * -0x40a57eb5;
}


