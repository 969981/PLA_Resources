/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624398; name: FUN_02624398
 */


uint FUN_02624398(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  
  local_24 = param_2;
  local_34 = FUN_02624470(param_2);
  local_30 = FUN_02624430(param_1 + 0x80,&local_34);
  local_40 = FUN_02624494(param_1 + 0x80);
  uVar1 = FUN_02624400(&local_30,&local_40);
  return uVar1 & 1;
}


