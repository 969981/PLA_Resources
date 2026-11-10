/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295720c; name: FUN_0295720c
 */


undefined8 FUN_0295720c(long param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return 1;
}


