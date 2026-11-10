/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed4d30; name: FUN_01ed4d30
 */


undefined1 FUN_01ed4d30(long param_1)

{
  if ((((*(int *)(param_1 + 0xd8) == 0) && (*(int *)(param_1 + 0xdc) == 0)) &&
      (*(int *)(param_1 + 0xe0) == 0)) &&
     (((*(int *)(param_1 + 0xe4) == 0 && (*(int *)(param_1 + 0xe8) == 0)) &&
      (*(int *)(param_1 + 0xec) == 0)))) {
    return *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x27c);
  }
  return 1;
}


