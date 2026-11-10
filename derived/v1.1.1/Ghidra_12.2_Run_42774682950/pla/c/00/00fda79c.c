/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fda79c; name: FUN_00fda79c
 */


void FUN_00fda79c(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_00fd9ee0();
  puVar1 = DAT_043b7a58;
  if ((DAT_043b7a48 & 1) == 0) {
    puVar1 = &DAT_043b7a49;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


