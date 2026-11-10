/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5fac; name: FUN_02ea5fac
 */


void FUN_02ea5fac(long param_1)

{
  undefined4 local_28;
  uint uStack_24;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x50);
  uStack_24 = local_14 * 0x18 | 4;
  local_28 = 0x20657563;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_28,8);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_14,4);
  return;
}


