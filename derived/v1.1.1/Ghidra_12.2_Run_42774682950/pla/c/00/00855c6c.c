/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855c6c; name: FUN_00855c6c
 */


void FUN_00855c6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((undefined8 *)param_1[1] != param_1) {
    puVar1 = (undefined8 *)param_1[1];
    do {
      puVar2 = (undefined8 *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_007e8fc4(param_1 + 3,param_1 + 3,(long)*(int *)((long)param_1 + 0x2c) + (long)puVar1);
      puVar1 = puVar2;
    } while (puVar2 != param_1);
  }
  FUN_007e8f94(param_1);
  return;
}


