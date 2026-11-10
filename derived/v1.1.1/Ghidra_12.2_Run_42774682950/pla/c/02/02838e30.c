/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02838e30; name: FUN_02838e30
 */


undefined1 FUN_02838e30(long param_1)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x1e1);
}


