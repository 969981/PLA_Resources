/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006504e4; name: FUN_006504e4
 */


void FUN_006504e4(undefined8 param_1,undefined8 param_2)

{
  ulong local_40 [3];
  long *local_28;
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_28 = (long *)FUN_00612290();
  local_40[0] = local_40[0] & 0xffffffffffff0000;
  FUN_00650550(param_1,param_2,local_40);
  if ((local_40[0] & 1) != 0) {
    (**(code **)(*local_28 + 0x18))(local_28,local_40[2],local_40[0] & 0xfffffffffffffffe,1);
  }
  return;
}


