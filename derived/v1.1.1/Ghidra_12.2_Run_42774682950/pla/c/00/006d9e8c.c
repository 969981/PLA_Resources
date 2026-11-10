/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d9e8c; name: FUN_006d9e8c
 */


long * FUN_006d9e8c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_002e0f54(lVar1);
      FUN_002e2ea0(PTR_LAB_04373088,lVar1);
      *param_1 = 0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


