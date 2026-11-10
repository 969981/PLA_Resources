/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935ed0; name: FUN_00935ed0
 */


undefined4 FUN_00935ed0(long param_1)

{
  if (*(uint *)(param_1 + 0x84) < *(uint *)(param_1 + 0x80)) {
    return *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x84) * 4 + 0x70);
  }
  return 0;
}


