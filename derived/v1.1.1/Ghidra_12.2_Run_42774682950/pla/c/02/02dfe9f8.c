/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe9f8; name: FUN_02dfe9f8
 */


void FUN_02dfe9f8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(float *)(param_1 + 0xa0) <= 1.6e-05) && (*(float *)(param_1 + 0x98) <= 1.6e-05)) {
    FUN_02dfe930(param_1,param_2,param_3);
    return;
  }
  FUN_02dfe858(param_1,param_2,param_4);
  FUN_02dfe898(param_1,param_2,param_3,param_4);
  return;
}


