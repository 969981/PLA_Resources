/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf10c; name: FUN_02ecf10c
 */


undefined4 FUN_02ecf10c(long param_1)

{
  if ((*(char *)(param_1 + 0x98) == '\0') || (*(long *)(param_1 + 8) == 0)) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
}


