/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ab68; name: FUN_0289ab68
 */


undefined8 FUN_0289ab68(undefined4 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x170) == 0) {
    return 0;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x170) + 0xa8) = param_1;
  return 1;
}


