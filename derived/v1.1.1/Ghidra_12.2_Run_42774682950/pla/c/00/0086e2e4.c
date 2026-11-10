/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086e2e4; name: FUN_0086e2e4
 */


void FUN_0086e2e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (*(undefined8 **)(param_1 + 0x38) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_007e8fc4(param_1 + 0x48,param_1 + 0x48,(long)*(int *)(param_1 + 0x5c) + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  uVar2 = FUN_007e8f94(puVar1);
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0086debc(auStack_40,uVar2,param_1 + 8);
  }
  return;
}


