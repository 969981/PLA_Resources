/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e4a0; name: FUN_0026e4a0
 */


void FUN_0026e4a0(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(*(long *)(param_1 + 0xa0) + 0x808) + 1.0 +
          (float)(int)((ulong)*(uint *)(param_1 + 0xac) *
                       (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x80c) >> 0x20);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  *param_2 = fVar1;
  fVar1 = *(float *)(param_1 + 100) * fVar1;
  *param_2 = fVar1;
  *param_2 = *(float *)(*(long *)(param_1 + 0x78) + 0x54) * fVar1;
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x758) == '\0') {
    return;
  }
  FUN_0026e078();
  return;
}


