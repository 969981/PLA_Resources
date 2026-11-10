/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e2d0; name: FUN_00d2e2d0
 */


bool FUN_00d2e2d0(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x148) != 0;
  if (bVar1) {
    FUN_0283b430();
  }
  return bVar1;
}


