/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854f4c; name: FUN_00854f4c
 */


undefined8 FUN_00854f4c(long param_1)

{
  if (*(long *)(param_1 + 0x70) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10);
}


