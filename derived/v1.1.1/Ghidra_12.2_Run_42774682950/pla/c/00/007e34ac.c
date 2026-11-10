/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e34ac; name: FUN_007e34ac
 */


void FUN_007e34ac(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  local_18[0] = param_2;
  memset((void *)(param_1 + 8),0,0x10);
  memcpy((void *)(param_1 + 8),local_18,4);
  return;
}


