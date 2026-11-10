/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f274c; name: FUN_001f274c
 */


undefined8 FUN_001f274c(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x3ff) >> 2 & 1) == 0) {
    if ((((*(byte *)(param_2 + 0x66c) >> 1 & 1) != 0) ||
        (*(long **)(param_2 + 0x4c8) == (long *)0x0)) || (**(long **)(param_2 + 0x4c8) != param_1))
    {
      return 0;
    }
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) | 2;
  }
  return 1;
}


