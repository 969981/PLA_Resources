/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e48a0; name: FUN_003e48a0
 */


void FUN_003e48a0(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (void *)*param_1;
  while (__ptr != param_1 + 5) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  if (param_1[10] != 0) {
    FUN_002e4a10();
  }
  free((void *)param_1[0xd]);
  free(param_1);
  return;
}


