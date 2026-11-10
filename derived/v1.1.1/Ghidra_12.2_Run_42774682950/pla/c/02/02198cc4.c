/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02198cc4; name: FUN_02198cc4
 */


void FUN_02198cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    FUN_00151490();
    return;
  }
  plVar1 = (long *)FUN_02198d00();
  *plVar1 = param_3;
  FUN_02198e3c(param_2);
  return;
}


