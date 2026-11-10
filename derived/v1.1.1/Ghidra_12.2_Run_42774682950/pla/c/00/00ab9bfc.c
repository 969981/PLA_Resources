/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab9bfc; name: FUN_00ab9bfc
 */


void FUN_00ab9bfc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00ab9c38();
  if (lVar1 == 0) {
    return;
  }
  FUN_0290b66c(lVar1,param_2,param_3 & 1);
  return;
}


