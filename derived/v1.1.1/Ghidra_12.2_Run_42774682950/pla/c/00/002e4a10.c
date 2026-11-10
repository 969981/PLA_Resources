/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4a10; name: FUN_002e4a10
 */


void FUN_002e4a10(ulong *param_1)

{
  int *__ptr;
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  __ptr = (int *)param_1[1];
  if (*param_1 == 0) {
LAB_002e4a90:
    free(__ptr);
    free(param_1);
    return;
  }
  lVar2 = 0;
  uVar3 = 0;
  iVar1 = *__ptr;
  if (iVar1 != 2) goto LAB_002e4a7c;
  do {
    (**(code **)(*(long *)((long)__ptr + lVar2 + 0x18) + 8))
              (*(undefined8 *)((long)__ptr + lVar2 + 0x10));
    while( true ) {
      free(*(void **)(param_1[1] + lVar2 + 8));
      __ptr = (int *)param_1[1];
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
      if (*param_1 <= uVar3) goto LAB_002e4a90;
      iVar1 = *(int *)((long)__ptr + lVar2);
      if (iVar1 == 2) break;
LAB_002e4a7c:
      if (iVar1 == 0) {
        free(*(void **)((long)__ptr + lVar2 + 0x10));
      }
    }
  } while( true );
}


