/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e34e8; name: FUN_007e34e8
 */


void FUN_007e34e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
  memset((void *)(param_1 + 8),0,0x10);
  memcpy((void *)(param_1 + 8),&local_20,0x10);
  return;
}


