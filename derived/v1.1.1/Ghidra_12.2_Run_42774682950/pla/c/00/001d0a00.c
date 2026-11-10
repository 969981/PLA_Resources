/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d0a00; name: FUN_001d0a00
 */


bool FUN_001d0a00(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30;
  
  local_60[0] = param_4[2];
  local_70 = param_1;
  local_68 = param_2;
  FUN_001cfea0(&local_70,0,param_3,local_60);
  param_4[2] = local_60[0];
  param_4[1] = uStack_38;
  *param_4 = local_40;
  if (local_30 == 0) {
    return false;
  }
  return (float)local_60[0] != 0.0;
}


