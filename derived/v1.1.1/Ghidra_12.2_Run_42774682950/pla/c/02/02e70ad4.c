/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70ad4; name: FUN_02e70ad4
 */


void FUN_02e70ad4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    if (puVar3 != param_2) {
      do {
        puVar2 = puVar4;
        puVar4 = (undefined8 *)*puVar2;
      } while (puVar4 != (undefined8 *)0x0 && puVar4 != param_2);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = param_1 + 1;
      if (puVar4 != puVar3) {
        puVar1 = puVar2;
      }
      *puVar1 = *puVar4;
      if ((undefined8 *)*param_1 == puVar4) {
        *param_1 = puVar2;
      }
    }
  }
  return;
}


