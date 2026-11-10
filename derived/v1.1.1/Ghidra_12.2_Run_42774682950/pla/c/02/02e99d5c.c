/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e99d5c; name: FUN_02e99d5c
 */


void FUN_02e99d5c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if ((*(char *)((long)param_2 + 0x23) != '\0') && (*(char *)((long)param_2 + 0x21) != '\0')) {
    iVar1 = *param_2;
    if ((iVar1 == 0) || (iVar1 == 2)) {
      FUN_02f05450(param_1,0);
      return;
    }
    if (iVar1 == 1) {
      FUN_02f05450(param_1,1);
      return;
    }
  }
  return;
}


