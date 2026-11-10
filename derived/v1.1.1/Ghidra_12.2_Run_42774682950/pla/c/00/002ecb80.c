/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ecb80; name: FUN_002ecb80
 */


long FUN_002ecb80(long param_1,uint param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    while (*(byte *)(param_1 + -1 + param_3) != param_2) {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return 0;
      }
    }
    lVar1 = param_1 + param_3 + -1;
  }
  return lVar1;
}


