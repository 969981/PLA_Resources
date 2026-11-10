/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0213b258; name: FUN_0213b258
 */


void FUN_0213b258(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_0213a9f0();
  puVar1 = DAT_043db160;
  if ((DAT_043db150 & 1) == 0) {
    puVar1 = &DAT_043db151;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,puVar1);
  return;
}


