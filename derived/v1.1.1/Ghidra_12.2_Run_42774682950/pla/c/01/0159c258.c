/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159c258; name: FUN_0159c258
 */


void FUN_0159c258(long param_1,void *param_2,int param_3,uint param_4)

{
  memcpy(param_2,*(void **)(param_1 + 0x90),(long)param_3);
  if ((param_4 & 1) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + (long)param_3;
  }
  return;
}


