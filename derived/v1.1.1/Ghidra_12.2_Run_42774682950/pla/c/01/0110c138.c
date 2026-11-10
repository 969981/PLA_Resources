/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0110c138; name: FUN_0110c138
 */


void FUN_0110c138(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)(param_2 + 0x12ac5);
  lVar4 = 0x20;
  do {
    *param_1 = 0;
    if (*(char *)((long)puVar3 + -1) != '\0') {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      *(undefined8 *)(param_1 + 0x11) = puVar3[2];
      *(undefined8 *)(param_1 + 9) = uVar2;
      *(undefined8 *)(param_1 + 1) = uVar1;
      *param_1 = 1;
    }
    lVar4 = lVar4 + -1;
    puVar3 = (undefined8 *)((long)puVar3 + 0x19);
    param_1 = param_1 + 0x19;
  } while (lVar4 != 0);
  return;
}


