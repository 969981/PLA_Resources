/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021bffb4; name: FUN_021bffb4
 */


void FUN_021bffb4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 local_64;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_64 = FUN_00150ba0(param_1,iVar1 + 1,0);
  FUN_021c0068(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               &local_64);
  return;
}


