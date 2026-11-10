/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b3b52c; name: FUN_00b3b52c
 */


void FUN_00b3b52c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    FUN_00151490();
    return;
  }
  plVar1 = (long *)FUN_00b3b560();
  *plVar1 = param_3;
  FUN_00b3b69c(param_2);
  return;
}


