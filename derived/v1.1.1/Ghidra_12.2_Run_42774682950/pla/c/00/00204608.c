/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204608; name: FUN_00204608
 */


long FUN_00204608(char *param_1,size_t param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != (char *)0x0) {
    iVar1 = snprintf(param_1,param_2,"nn::ssl");
    lVar2 = (long)iVar1;
  }
  return lVar2;
}


