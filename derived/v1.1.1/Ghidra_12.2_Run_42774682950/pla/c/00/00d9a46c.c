/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9a46c; name: FUN_00d9a46c
 */


bool FUN_00d9a46c(long param_1,ulong param_2)

{
  return (*(ulong *)(param_1 + 0xb0) & param_2) != 0;
}


