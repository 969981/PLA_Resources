/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4ae0; name: FUN_003f4ae0
 */


void FUN_003f4ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  undefined8 *__ptr_00;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr_00 = (undefined8 *)*param_1;
    if (__ptr_00 != (undefined8 *)0x0) {
      lVar2 = param_1[1];
      if (lVar2 != 0) {
        __ptr = (void *)*__ptr_00;
        puVar1 = __ptr_00;
        while( true ) {
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
          if ((void *)puVar1[1] != (void *)0x0) {
            free((void *)puVar1[1]);
          }
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar2 = lVar2 + -1;
          puVar1[2] = 0;
          puVar1 = puVar1 + 3;
          if (lVar2 == 0) break;
          __ptr = (void *)*puVar1;
        }
      }
      free(__ptr_00);
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}


