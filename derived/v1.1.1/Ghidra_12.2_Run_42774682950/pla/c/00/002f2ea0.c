/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2ea0; name: FUN_002f2ea0
 */


void FUN_002f2ea0(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *__dest;
  
  __n = strlen(param_2);
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    if (__n == 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_002ebd50(__n + 0x38);
    puVar1[5] = 0;
    *puVar1 = puVar1 + 5;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_002f3f58;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[4] = puVar1;
    puVar1[6] = 1;
    __dest = puVar1 + 7;
    *param_1 = puVar1;
    param_1[1] = __n;
    param_1[2] = __dest;
    if (puVar1 != (undefined8 *)0x0) goto LAB_002f2f28;
  }
  __dest = (undefined8 *)((long)param_1 + 9);
LAB_002f2f28:
  memcpy(__dest,param_2,__n);
  return;
}


