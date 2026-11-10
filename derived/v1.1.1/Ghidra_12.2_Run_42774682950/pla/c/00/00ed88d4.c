/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ed88d4; name: FUN_00ed88d4
 */


void FUN_00ed88d4(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_00ed8460();
  puVar1 = DAT_043b2750;
  if ((DAT_043b2740 & 1) == 0) {
    puVar1 = &DAT_043b2741;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


