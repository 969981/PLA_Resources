/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015c02d4; name: FUN_015c02d4
 */


void FUN_015c02d4(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)FUN_015bfa60();
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,pbVar2);
  return;
}


