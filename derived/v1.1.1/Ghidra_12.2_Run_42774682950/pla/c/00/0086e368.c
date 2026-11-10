/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086e368; name: FUN_0086e368
 */


undefined8 FUN_0086e368(undefined2 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x1c) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x1c);
    do {
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_007e8fc4(param_1 + 0x24,param_1 + 0x24,(long)*(int *)(param_1 + 0x2e) + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_007e8f94(puVar1);
  *param_1 = 0;
  return 1;
}


