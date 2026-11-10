/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d99a3c; name: FUN_00d99a3c
 */


bool FUN_00d99a3c(undefined8 *param_1,long param_2)

{
  return (*(ulong *)(param_2 + 8) & *(ulong *)*param_1) != 0;
}


