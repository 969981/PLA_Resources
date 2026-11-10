/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b61c; name: FUN_0060b61c
 */


undefined8 FUN_0060b61c(long param_1,undefined1 *param_2)

{
  if ((param_2 == (undefined1 *)0x0) || (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18))) {
    return 0;
  }
  *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return 1;
}


