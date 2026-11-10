/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7d54; name: FUN_02ea7d54
 */


void FUN_02ea7d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    if (param_1 != puVar1) {
      FUN_02f59e70(4,puVar1);
    }
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  puVar1 = (undefined8 *)param_2[1];
  if (param_2 == puVar1) {
    *param_1 = *param_2;
    puVar1 = param_1;
  }
  param_1[1] = puVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


