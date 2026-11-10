/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ac2f8; name: FUN_017ac2f8
 */


void FUN_017ac2f8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_34;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_34 = FUN_00150ba0(param_1,iVar1 + 2,0);
  FUN_017ac368(param_1,param_2,param_3,param_4,&local_34);
  return;
}


