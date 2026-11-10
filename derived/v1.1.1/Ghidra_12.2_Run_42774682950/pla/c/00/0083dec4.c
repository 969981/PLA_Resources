/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083dec4; name: FUN_0083dec4
 */


void FUN_0083dec4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xf9) != '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x68) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    do {
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_007e8fc4(param_1 + 0x78,param_1 + 0x78,(long)*(int *)(param_1 + 0x8c) + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_007e8f94(puVar1);
  *(undefined1 *)(param_1 + 0xf9) = 1;
  return;
}


