/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018dadac; name: FUN_018dadac
 */


uint FUN_018dadac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 byte param_5,byte param_6)

{
  uint uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  byte local_1c;
  byte local_1b;
  
  local_38 = param_2[1];
  local_40 = *param_2;
  local_28 = param_3[1];
  local_30 = *param_3;
  local_1c = param_5 & 1;
  local_1b = param_6 & 1;
  local_20 = param_4;
  uVar1 = FUN_018d782c(param_1,&local_40);
  return uVar1 & 1;
}


