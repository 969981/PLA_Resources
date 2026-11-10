/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339ac28; name: FUN_0339ac28
 */


void FUN_0339ac28(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_032d647c(lVar1);
  return;
}


