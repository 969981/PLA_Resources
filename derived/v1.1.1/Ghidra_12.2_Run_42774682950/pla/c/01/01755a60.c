/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01755a60; name: FUN_01755a60
 */


void FUN_01755a60(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = param_3[1];
  *param_3 = 1;
  param_3[1] = iVar1 + 1;
  local_38 = FUN_00150da0(param_2,iVar1 + 2,&local_38);
  FUN_01755ad8(param_1,param_2,param_3,param_4,param_5,&local_38);
  return;
}


