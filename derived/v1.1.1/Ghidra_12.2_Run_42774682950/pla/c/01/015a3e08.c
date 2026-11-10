/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a3e08; name: FUN_015a3e08
 */


void FUN_015a3e08(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_015a38b0();
  puVar1 = DAT_043c9f60;
  if ((DAT_043c9f50 & 1) == 0) {
    puVar1 = &DAT_043c9f51;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


