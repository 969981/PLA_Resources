/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029519e0; name: FUN_029519e0
 */


bool FUN_029519e0(long param_1,uint param_2)

{
  return (1 << (ulong)(param_2 & 7) &
         (uint)*(byte *)(param_1 + (ulong)(param_2 >> 3 & 0xff) + 0x38b)) != 0;
}


