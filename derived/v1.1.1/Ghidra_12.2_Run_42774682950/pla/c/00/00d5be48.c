/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5be48; name: FUN_00d5be48
 */


void FUN_00d5be48(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  long local_18;
  
  local_28 = *(long *)(param_1 + 0xa8);
  local_30 = local_28 + *(long *)(param_1 + 0xb0) * 0x10;
  FUN_00d635d0(&local_18,&local_28,&local_30);
  lVar1 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0) * 0x10;
  if (local_18 != lVar1) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) - (lVar1 - local_18 >> 4);
  }
  return;
}


