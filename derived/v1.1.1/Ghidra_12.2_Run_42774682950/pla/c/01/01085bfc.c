/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01085bfc; name: FUN_01085bfc
 */


void FUN_01085bfc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_24;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_24 = FUN_00150ba0(param_1,iVar1 + 1,0);
  FUN_01085c5c(param_1,param_2,param_3,&local_24);
  return;
}


