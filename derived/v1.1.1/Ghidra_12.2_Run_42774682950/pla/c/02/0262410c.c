/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0262410c; name: FUN_0262410c
 */


undefined4 FUN_0262410c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  
  local_24 = param_2;
  local_34 = FUN_02624470(param_2);
  local_30 = FUN_02624430(param_1 + 0x80,&local_34);
  lVar1 = FUN_02624b64(&local_30);
  return *(undefined4 *)(lVar1 + 4);
}


