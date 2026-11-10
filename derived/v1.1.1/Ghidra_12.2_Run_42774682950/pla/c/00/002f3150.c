/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3150; name: FUN_002f3150
 */


void FUN_002f3150(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  size_t __n;
  undefined8 *puVar2;
  char *__s;
  
  __s = (char *)*param_2;
  __n = strlen(__s);
  *param_2 = 0;
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    memcpy((void *)((long)param_1 + 9),__s,__n);
  }
  else {
    puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 1) = 3;
      puVar2[4] = puVar2;
      puVar1 = PTR_LAB_043738a0;
      *puVar2 = puVar2 + 5;
      puVar2[2] = puVar2;
      puVar2[3] = puVar1;
      puVar2[6] = 1;
      puVar2[7] = __s;
      param_1[1] = __n;
      param_1[2] = __s;
      *param_1 = puVar2;
      return;
    }
    param_1[1] = __n;
    param_1[2] = __s;
    *param_1 = 0;
  }
  if (__s != (char *)0x0) {
                    /* try { // try from 002f320c to 002f320f has its CatchHandler @ 002f3220 */
    free(__s);
  }
  return;
}


