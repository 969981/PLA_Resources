/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4a118; name: FUN_02e4a118
 */


long * FUN_02e4a118(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x1ec]) {
    if (puVar1[0x1ee] != 0) goto LAB_02e4a190;
  }
  puVar1 = (undefined8 *)FUN_02f59e40(10,0xf78,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    puVar1[0xa4] = puVar1 + 0x52;
    puVar1[0xf6] = puVar1 + 0xa4;
    puVar1[0x148] = puVar1 + 0xf6;
    puVar1[0x1ee] = puVar1 + 0x19a;
    puVar1[0x1ec] = 0;
    *puVar1 = 0;
    puVar1[0x52] = puVar1;
    puVar1[0x19a] = puVar1 + 0x148;
    *(undefined4 *)(puVar1 + 0x1ed) = 6;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x1ec] = 0;
LAB_02e4a190:
      plVar2 = (long *)puVar1[0x1ee];
    }
    else {
      puVar1[0x1ec] = *param_1;
      *param_1 = (long)puVar1;
      plVar2 = (long *)puVar1[0x1ee];
    }
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x1ee] = 0;
      }
      else {
        puVar1[0x1ee] = *plVar2;
      }
      *(int *)(puVar1 + 0x1ed) = *(int *)(puVar1 + 0x1ed) + -1;
    }
  }
  return plVar2;
}


