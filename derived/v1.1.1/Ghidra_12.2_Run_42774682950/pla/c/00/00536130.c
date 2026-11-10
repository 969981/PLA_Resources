/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536130; name: FUN_00536130
 */


long FUN_00536130(long *param_1)

{
  return (long)param_1 +
         ((ulong)(*(int *)(*(long *)(*param_1 + 0x18) + 0x90) + 0xf) & 0xfffffff0) + 0x70;
}


