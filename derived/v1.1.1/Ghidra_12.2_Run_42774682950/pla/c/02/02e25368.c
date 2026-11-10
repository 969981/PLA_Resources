/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25368; name: FUN_02e25368
 */


void FUN_02e25368(int *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    memset(*(void **)(param_1 + 2),0,(ulong)(uint)(*param_1 << 2));
  }
  param_1[4] = 0;
  return;
}


