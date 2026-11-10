/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0105c43c; name: FUN_0105c43c
 */


void FUN_0105c43c(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_0105bc10();
  puVar1 = DAT_043b94e8;
  if ((DAT_043b94d8 & 1) == 0) {
    puVar1 = &DAT_043b94d9;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


