/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03145250; name: FUN_03145250
 */


void FUN_03145250(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_03144fd0();
  if (*(int *)(param_1 + 0xc) < iVar1) {
    return;
  }
  FUN_031450e8(param_1);
  return;
}


