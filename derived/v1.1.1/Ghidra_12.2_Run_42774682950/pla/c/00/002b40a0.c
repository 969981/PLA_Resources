/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b40a0; name: FUN_002b40a0
 */


void FUN_002b40a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0xe8);
  if (lVar1 != 0) {
    FUN_002b40e4(lVar1,param_2);
  }
  *param_1 = lVar1;
  return;
}


