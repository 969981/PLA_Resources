/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284cd4c; name: FUN_0284cd4c
 */


undefined8 FUN_0284cd4c(long param_1)

{
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x1e1) == '\0'))
      || (*(long *)(param_1 + 0x48) == 0)) ||
     (((*(char *)(*(long *)(param_1 + 0x48) + 0x1e1) == '\0' || (*(long *)(param_1 + 0x78) == 0)) ||
      (*(char *)(*(long *)(param_1 + 0x78) + 0x1e1) == '\0')))) {
    return 0;
  }
  FUN_0284ccf0();
  return 1;
}


