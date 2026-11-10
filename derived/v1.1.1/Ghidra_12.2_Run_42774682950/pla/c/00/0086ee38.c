/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086ee38; name: FUN_0086ee38
 */


undefined8 FUN_0086ee38(long param_1)

{
  if (((*(short *)(param_1 + 0x3dc) == 0) || (*(short *)(param_1 + 0x41c) == 0)) &&
     (*(uint *)(param_1 + 0xa00) < 3)) {
    return 1;
  }
  return 0;
}


