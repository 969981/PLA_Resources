/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2e08; name: FUN_002f2e08
 */


void FUN_002f2e08(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 *puVar1;
  void *__dest;
  
  if (param_3 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_002ebd50(param_3 + 0x38);
    puVar1[5] = 0;
    *puVar1 = puVar1 + 5;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_002f3f58;
    puVar1[6] = 1;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[4] = puVar1;
    *param_1 = puVar1;
    param_1[1] = param_3;
    param_1[2] = puVar1 + 7;
    if (puVar1 != (undefined8 *)0x0) {
      __dest = (void *)param_1[2];
      goto LAB_002f2e8c;
    }
  }
  __dest = (void *)((long)param_1 + 9);
LAB_002f2e8c:
  memcpy(__dest,param_2,param_3);
  return;
}


