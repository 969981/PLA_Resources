/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0254b51c; name: FUN_0254b51c
 */


void FUN_0254b51c(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_0254b0e0();
  puVar1 = DAT_043e9450;
  if ((DAT_043e9440 & 1) == 0) {
    puVar1 = &DAT_043e9441;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


