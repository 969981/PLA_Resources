/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950c34; name: FUN_02950c34
 */


bool FUN_02950c34(long param_1)

{
  return (*(ulong *)(param_1 + 0xb8) & 0x3f07) == 0xf01;
}


