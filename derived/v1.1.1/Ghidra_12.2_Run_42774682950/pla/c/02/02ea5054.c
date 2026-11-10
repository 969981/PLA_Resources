/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5054; name: FUN_02ea5054
 */


long FUN_02ea5054(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 2;
  puVar1 = (undefined8 *)*puVar2;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar1 = *puVar2;
    *puVar2 = puVar1;
  }
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  else {
    *(undefined8 *)param_1[1] = puVar1;
    puVar1 = (undefined8 *)*puVar2;
  }
  param_1[1] = puVar1;
  param_1[2] = *puVar1;
  *puVar1 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  return param_1[1] + 8;
}


