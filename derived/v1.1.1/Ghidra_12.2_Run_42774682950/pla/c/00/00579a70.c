/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00579a70; name: FUN_00579a70
 */


void FUN_00579a70(long param_1)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  
  free(*(void **)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      free(*(void **)((long)__ptr + lVar1));
      free(*(void **)(*(long *)(param_1 + 0x10) + lVar1 + 8));
      __ptr = *(void **)(param_1 + 0x10);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 8));
  }
  free(__ptr);
  return;
}


