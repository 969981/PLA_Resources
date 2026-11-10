/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00248874; name: FUN_00248874
 */


undefined8 FUN_00248874(long param_1)

{
  if ((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0xd4) == 1)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x78) == 0) || (*(int *)(*(long *)(param_1 + 0x78) + 0xd4) != 1)) {
    return 0;
  }
  return 1;
}


