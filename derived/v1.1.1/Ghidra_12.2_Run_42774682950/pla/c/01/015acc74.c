/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015acc74; name: FUN_015acc74
 */


void FUN_015acc74(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_015ac720();
  puVar1 = DAT_043ca278;
  if ((DAT_043ca268 & 1) == 0) {
    puVar1 = &DAT_043ca269;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


