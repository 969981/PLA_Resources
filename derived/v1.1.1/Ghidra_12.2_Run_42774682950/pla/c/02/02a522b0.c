/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a522b0; name: FUN_02a522b0
 */


void FUN_02a522b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x2d8);
  puVar4 = *(undefined8 **)(param_1 + 0x2e0);
  *(byte *)(param_1 + 0x33a) = *(byte *)(param_1 + 0x210) ^ 1;
  if (puVar2 != puVar4) {
    do {
      puVar3 = puVar2 + 8;
      (*(code *)*puVar2)(puVar2 + 4);
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x2d8);
    puVar4 = *(undefined8 **)(param_1 + 0x2e0);
    while (puVar3 = puVar4, puVar3 != puVar2) {
      pcVar1 = (code *)puVar3[-7];
      puVar4 = puVar3 + -8;
      if (pcVar1 != (code *)0x0) {
        puVar3[-6] = 0;
        puVar3[-5] = 0;
        puVar3[-8] = 0;
        puVar3[-7] = 0;
        (*pcVar1)(puVar3 + -4);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x2e0) = puVar2;
  if ((*(int *)(param_1 + 0x310) == 0) && (*(char *)(param_1 + 0x211) != '\0')) {
    FUN_02a4ddd4(param_1 + 0xf0,param_2);
    return;
  }
  return;
}


