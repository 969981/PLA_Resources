/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2df7c; name: FUN_00d2df7c
 */


bool FUN_00d2df7c(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x148) != 0;
  if (bVar1) {
    FUN_0283b1e8();
  }
  return bVar1;
}


