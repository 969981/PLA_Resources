/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086d500; name: FUN_0086d500
 */


undefined8 FUN_0086d500(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x20);
}


