/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a60d00; name: FUN_02a60d00
 */


void FUN_02a60d00(undefined8 param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((((char)((long *)*param_2)[1] != '\0') &&
      (lVar2 = *(long *)*param_2, *(long *)(lVar2 + 0x220) == 0)) && (*(int *)(lVar2 + 0x310) == 0))
  {
    puVar3 = *(undefined8 **)(lVar2 + 0x2d8);
    puVar5 = *(undefined8 **)(lVar2 + 0x2e0);
    *(byte *)(lVar2 + 0x33a) = *(byte *)(lVar2 + 0x210) ^ 1;
    if (puVar3 != puVar5) {
      do {
        puVar4 = puVar3 + 8;
        (*(code *)*puVar3)(puVar3 + 4);
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
      puVar3 = *(undefined8 **)(lVar2 + 0x2d8);
      puVar5 = *(undefined8 **)(lVar2 + 0x2e0);
      while (puVar4 = puVar5, puVar4 != puVar3) {
        pcVar1 = (code *)puVar4[-7];
        puVar5 = puVar4 + -8;
        if (pcVar1 != (code *)0x0) {
          puVar4[-6] = 0;
          puVar4[-5] = 0;
          puVar4[-8] = 0;
          puVar4[-7] = 0;
          (*pcVar1)(puVar4 + -4);
        }
      }
    }
    *(undefined8 **)(lVar2 + 0x2e0) = puVar3;
    if ((*(int *)(lVar2 + 0x310) == 0) && (*(char *)(lVar2 + 0x211) != '\0')) {
      FUN_02a4ddd4(lVar2 + 0xf0,param_3);
      return;
    }
  }
  return;
}


