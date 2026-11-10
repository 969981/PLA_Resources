/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea60c8; name: FUN_02ea60c8
 */


void FUN_02ea60c8(long param_1,int param_2)

{
  undefined4 local_24;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_2 + *(int *)(param_1 + 0x50) * 0xc + 4;
  local_18 = 0x5453494c;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_18,8);
  local_24 = 0x6c746461;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_24,4);
  return;
}


