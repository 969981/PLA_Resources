/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00229ee8; name: FUN_00229ee8
 */


undefined2 FUN_00229ee8(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x10) + 10);
}


