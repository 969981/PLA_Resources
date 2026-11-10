/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9bdc; name: FUN_014e9bdc
 */


void FUN_014e9bdc(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined1 local_24 [4];
  
  local_24[0] = 3;
  FUN_027f6cdc(param_1,param_2,local_24);
  *param_1 = &DAT_04217528;
  param_1[9] = &PTR_LAB_042175f8;
  param_1[10] = &PTR_LAB_04217640;
  FUN_027f8800(param_1);
  if (*param_3 != -1) {
    FUN_027f7fe8(param_1,*param_3,1);
  }
  if (param_3[1] != -1) {
    FUN_027f7fe8(param_1,param_3[1],1);
  }
  if (param_3[2] != -1) {
    FUN_027f7fe8(param_1,param_3[2],1);
  }
  if (param_3[3] != -1) {
    FUN_027f7fe8(param_1,param_3[3],1);
  }
  return;
}


