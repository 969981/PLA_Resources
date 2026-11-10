/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024b32dc; name: FUN_024b32dc
 */


void FUN_024b32dc(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_024b2a70();
  puVar1 = DAT_043e7180;
  if ((DAT_043e7170 & 1) == 0) {
    puVar1 = &DAT_043e7171;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


