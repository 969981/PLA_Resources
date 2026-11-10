/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b467b0; name: FUN_00b467b0
 */


void FUN_00b467b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_34 [4];
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  iVar1 = FUN_00150cc0(param_1,iVar1 + 2);
  local_34[0] = iVar1 != 0;
  FUN_00b46824(param_1,param_2,param_3,param_4,local_34);
  return;
}


