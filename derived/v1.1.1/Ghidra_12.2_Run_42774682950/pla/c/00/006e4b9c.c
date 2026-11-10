/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4b9c; name: FUN_006e4b9c
 */


void FUN_006e4b9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_002ded3c(lVar1);
    FUN_002e2ea0(PTR_LAB_04373088,lVar1);
    *param_1 = 0;
  }
  return;
}


