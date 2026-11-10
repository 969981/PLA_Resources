/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210e20; name: FUN_00210e20
 */


undefined8 FUN_00210e20(long param_1)

{
  if (((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) &&
     ((*(long *)(param_1 + 0x40) == -1 || (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))))
     ) {
    return 0;
  }
  return 0xffffffff;
}


