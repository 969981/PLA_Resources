/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025fe5c8; name: FUN_025fe5c8
 */


bool FUN_025fe5c8(long param_1,ulong param_2)

{
  return (*(ulong *)(param_1 + 0x1f0) & 1L << (param_2 & 0x3f)) != 0;
}


