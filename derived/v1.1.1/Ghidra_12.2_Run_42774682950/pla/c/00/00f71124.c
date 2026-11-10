/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f71124; name: FUN_00f71124
 */


void FUN_00f71124(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_00f70890();
  puVar1 = DAT_043b5c38;
  if ((DAT_043b5c28 & 1) == 0) {
    puVar1 = &DAT_043b5c29;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


