/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfde30; name: FUN_02dfde30
 */


uint FUN_02dfde30(undefined8 param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar1 = FUN_02dfde74(param_1);
  }
  FUN_02dfdbdc(param_1);
  return uVar1 & 1;
}


