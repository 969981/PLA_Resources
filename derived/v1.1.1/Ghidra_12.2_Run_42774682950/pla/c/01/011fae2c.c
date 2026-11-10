/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fae2c; name: FUN_011fae2c
 */


undefined8 FUN_011fae2c(long param_1)

{
  if ((((*(long *)(param_1 + 0xe0) == 0) || (*(char *)(*(long *)(param_1 + 0xe0) + 0x1e1) == '\0'))
      || (*(long *)(param_1 + 0x110) == 0)) ||
     (*(char *)(*(long *)(param_1 + 0x110) + 0x1e1) == '\0')) {
    return 0;
  }
  return 1;
}


