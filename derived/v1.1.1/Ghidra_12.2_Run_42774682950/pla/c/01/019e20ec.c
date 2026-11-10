/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e20ec; name: FUN_019e20ec
 */


void FUN_019e20ec(long param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x3c0) != 0;
  if (bVar1) {
    FUN_019e2124(param_1);
  }
  *(uint *)(param_1 + 0x208) = (uint)bVar1;
  return;
}


