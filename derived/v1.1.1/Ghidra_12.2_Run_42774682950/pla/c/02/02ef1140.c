/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1140; name: FUN_02ef1140
 */


undefined8 FUN_02ef1140(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_2;
  uStack_14 = param_1;
  FUN_02ef1180(param_3 + 0x20,param_4,&local_18,1);
  *(byte *)(param_3 + 0x54) = *(byte *)(param_3 + 0x54) | 1;
  return 1;
}


