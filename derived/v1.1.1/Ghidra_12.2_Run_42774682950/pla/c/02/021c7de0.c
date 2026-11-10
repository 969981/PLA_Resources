/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c7de0; name: FUN_021c7de0
 */


void FUN_021c7de0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 local_58;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_58 = FUN_00150da0(param_1,iVar1 + 1,&local_58);
  FUN_021c7e8c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_58);
  return;
}


