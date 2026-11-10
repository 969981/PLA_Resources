/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc9a4; name: FUN_027dc9a4
 */


uint FUN_027dc9a4(long param_1)

{
  return 0x3ff7U >> (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) & 1;
}


