/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5f54; name: FUN_007e5f54
 */


uint FUN_007e5f54(long param_1)

{
  if (*(uint *)(param_1 + 8) < 9) {
    return 0x70U >> (ulong)(*(uint *)(param_1 + 8) & 0x1f) & 1;
  }
  return 0;
}


