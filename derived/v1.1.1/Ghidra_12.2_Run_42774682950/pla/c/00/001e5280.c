/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e5280; name: FUN_001e5280
 */


long FUN_001e5280(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    do {
      lVar2 = FUN_001e537c(param_1,param_2,sVar1);
      param_1 = *(long *)(param_1 + 8);
      if (param_1 == 0) {
        return lVar2;
      }
    } while (lVar2 == 0);
  }
  return lVar2;
}


