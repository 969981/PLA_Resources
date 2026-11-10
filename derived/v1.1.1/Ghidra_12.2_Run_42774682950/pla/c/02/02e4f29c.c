/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4f29c; name: FUN_02e4f29c
 */


long * FUN_02e4f29c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x50]) {
    if (puVar1[0x52] != 0) goto LAB_02e4f330;
  }
  puVar1 = (undefined8 *)FUN_02f59e30(0xb,0x298);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    puVar1[0x50] = 0;
    *puVar1 = 0;
    puVar1[10] = puVar1;
    puVar1[0x14] = puVar1 + 10;
    puVar1[0x1e] = puVar1 + 0x14;
    puVar1[0x28] = puVar1 + 0x1e;
    puVar1[0x3c] = puVar1 + 0x32;
    puVar1[0x32] = puVar1 + 0x28;
    puVar1[0x52] = puVar1 + 0x46;
    puVar1[0x46] = puVar1 + 0x3c;
    *(undefined4 *)(puVar1 + 0x51) = 8;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x50] = 0;
      plVar2 = (long *)puVar1[0x52];
    }
    else {
      puVar1[0x50] = *param_1;
      *param_1 = (long)puVar1;
LAB_02e4f330:
      plVar2 = (long *)puVar1[0x52];
    }
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x52] = 0;
      }
      else {
        puVar1[0x52] = *plVar2;
      }
      *(int *)(puVar1 + 0x51) = *(int *)(puVar1 + 0x51) + -1;
    }
  }
  return plVar2;
}


