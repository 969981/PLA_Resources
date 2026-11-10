/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b91764; name: FUN_02b91764
 */


void FUN_02b91764(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  puVar4 = (undefined8 *)*puVar1;
  while (puVar1 != puVar4) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 **)(param_1 + 0x98) = puVar1;
  *(undefined8 **)(param_1 + 0xa0) = puVar1;
  puVar4 = (undefined8 *)*puVar2;
  while (puVar2 != puVar4) {
    puVar3 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 **)(param_1 + 0xb0) = puVar2;
  *(undefined8 **)(param_1 + 0xb8) = puVar2;
  puVar4 = (undefined8 *)*puVar3;
  if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  else {
    do {
      while (puVar5 = (undefined8 *)puVar4[1], puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar4[2];
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4 = puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_02b91814;
      }
      puVar4[1] = puVar5[2];
      puVar5[2] = puVar4;
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
LAB_02b91814:
    puVar4 = *(undefined8 **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 **)(param_1 + 0xd0) = puVar3;
    *(undefined8 **)(param_1 + 0xd8) = puVar3;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  while (puVar2 != puVar4) {
    puVar3 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  while (puVar1 != puVar4) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar2;
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_02b92754(param_1 + 0x18);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 4));
  return;
}


