/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0202c4dc; name: FUN_0202c4dc
 */


undefined8 FUN_0202c4dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    FUN_00151490();
  }
  else {
    plVar1 = (long *)FUN_0202c520();
    *plVar1 = param_3;
    FUN_0202c66c(param_2);
  }
  return 1;
}


