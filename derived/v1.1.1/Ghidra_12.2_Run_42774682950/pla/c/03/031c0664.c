/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0664; name: FUN_031c0664
 */


void FUN_031c0664(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_031c06a4();
  if (*(int *)(param_1 + 0xc) < iVar1) {
    return;
  }
  FUN_031c0720(param_1);
  return;
}


