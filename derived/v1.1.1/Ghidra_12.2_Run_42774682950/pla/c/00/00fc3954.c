/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fc3954; name: FUN_00fc3954
 */


void FUN_00fc3954(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_00fc30f0();
  puVar1 = DAT_043b71a0;
  if ((DAT_043b7190 & 1) == 0) {
    puVar1 = &DAT_043b7191;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


