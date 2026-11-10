/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c46e0; name: FUN_032c46e0
 */


uint FUN_032c46e0(int param_1)

{
  if ((param_1 - 9U & 0xff) < 0x18) {
    return 0x800013U >> (ulong)(param_1 - 9U & 0x1f) & 1;
  }
  return 0;
}


