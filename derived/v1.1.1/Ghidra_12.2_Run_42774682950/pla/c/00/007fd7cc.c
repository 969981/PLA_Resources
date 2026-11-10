/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd7cc; name: FUN_007fd7cc
 */


void FUN_007fd7cc(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  if (uVar1 + param_3 <= *(uint *)(param_1 + 0x10)) {
    memcpy(param_2,(void *)(*(long *)(param_1 + 8) + (ulong)uVar1),(ulong)param_3);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  }
  return;
}


