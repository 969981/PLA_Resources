/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00eb1858; name: FUN_00eb1858
 */


void FUN_00eb1858(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 local_34;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_34 = FUN_00150ba0(param_1,iVar1 + 2,0);
  FUN_00eb18d0(param_1,param_2,param_3,param_4,param_5,&local_34);
  return;
}


