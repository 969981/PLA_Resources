/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c01f4; name: FUN_021c01f4
 */


void FUN_021c01f4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13)

{
  int iVar1;
  undefined1 local_64 [4];
  
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar1 = FUN_00150cc0();
  local_64[0] = iVar1 != 0;
  FUN_021c02b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,local_64);
  return;
}


