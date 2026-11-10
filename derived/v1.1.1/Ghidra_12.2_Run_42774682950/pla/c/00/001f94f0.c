/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f94f0; name: FUN_001f94f0
 */


size_t FUN_001f94f0(void *param_1,long param_2,long param_3,long param_4)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = (*(long **)(param_4 + 0x1598))[2] - *(long *)(param_4 + 0x1590);
  __n = param_3 * param_2;
  if (uVar1 <= (ulong)(param_3 * param_2)) {
    __n = uVar1;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(**(long **)(param_4 + 0x1598) + *(long *)(param_4 + 0x1590)),__n);
    *(size_t *)(param_4 + 0x1590) = *(long *)(param_4 + 0x1590) + __n;
  }
  return __n;
}


