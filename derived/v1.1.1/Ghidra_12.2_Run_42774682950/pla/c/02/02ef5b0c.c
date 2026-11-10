/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef5b0c; name: FUN_02ef5b0c
 */


long FUN_02ef5b0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1 + 2;
  puVar1 = (undefined8 *)*puVar3;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0xffff;
    *puVar1 = *puVar3;
    *puVar3 = puVar1;
    puVar2 = (undefined8 *)param_1[1];
  }
  else {
    puVar2 = (undefined8 *)param_1[1];
  }
  if (puVar2 == (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar3;
  }
  param_1[1] = puVar1;
  param_1[2] = *puVar1;
  *puVar1 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  return param_1[1] + 8;
}


