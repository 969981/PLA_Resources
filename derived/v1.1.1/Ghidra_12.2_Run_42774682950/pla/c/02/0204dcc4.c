/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204dcc4; name: FUN_0204dcc4
 */


void FUN_0204dcc4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_28 = FUN_00150da0(param_1,iVar1 + 1,&local_28);
  FUN_0204dd24(param_1,param_2,param_3,&local_28);
  return;
}


