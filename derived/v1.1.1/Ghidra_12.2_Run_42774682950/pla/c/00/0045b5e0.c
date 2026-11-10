/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b5e0; name: FUN_0045b5e0
 */


bool FUN_0045b5e0(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = 0 < *(int *)(param_1 + 8);
  }
  return bVar1;
}


