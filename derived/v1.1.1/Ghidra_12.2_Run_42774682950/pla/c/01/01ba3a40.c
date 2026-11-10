/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba3a40; name: FUN_01ba3a40
 */


bool FUN_01ba3a40(long param_1,ulong param_2)

{
  return (*(ulong *)(param_1 + 0xad8) & 1L << (param_2 & 0x3f)) != 0;
}


