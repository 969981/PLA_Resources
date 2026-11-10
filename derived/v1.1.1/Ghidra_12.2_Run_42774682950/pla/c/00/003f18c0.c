/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f18c0; name: FUN_003f18c0
 */


uint FUN_003f18c0(ulong param_1)

{
  return (uint)(param_1 >> 2) & 2 | (uint)param_1 & 1;
}


