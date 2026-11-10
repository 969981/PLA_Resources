/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0116322c; name: FUN_0116322c
 */


undefined8 FUN_0116322c(long param_1)

{
  if ((((*(long *)(param_1 + 0x78) == 0) || (*(char *)(*(long *)(param_1 + 0x78) + 0x1e1) == '\0'))
      || (*(long *)(param_1 + 0xa8) == 0)) ||
     (((*(char *)(*(long *)(param_1 + 0xa8) + 0x1e1) == '\0' || (*(long *)(param_1 + 0xd8) == 0)) ||
      (*(char *)(*(long *)(param_1 + 0xd8) + 0x1e1) == '\0')))) {
    return 0;
  }
  return 1;
}


