/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021714c8; name: FUN_021714c8
 */


uint FUN_021714c8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 local_48;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_48 = FUN_00150da0(param_1,iVar1 + 1,&local_48);
  uVar2 = FUN_0217155c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_48);
  return uVar2 & 1;
}


