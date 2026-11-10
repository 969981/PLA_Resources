/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c71a0; name: FUN_003c71a0
 */


void FUN_003c71a0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_LAB_04373088;
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (*(undefined8 **)(param_1 + 0x28) == puVar3) {
    puVar2 = puVar3;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x28) + -1;
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    if (puVar2 != (undefined8 *)0x0) goto LAB_003c71ec;
    while (puVar3 != puVar4) {
      while( true ) {
        puVar4 = puVar4 + -1;
        puVar2 = (undefined8 *)*puVar4;
        *puVar4 = 0;
        if (puVar2 == (undefined8 *)0x0) break;
LAB_003c71ec:
        (**(code **)*puVar2)(puVar2);
        FUN_002e2ea0(puVar1,puVar2);
        if (puVar3 == puVar4) goto LAB_003c7210;
      }
    }
LAB_003c7210:
    puVar2 = *(undefined8 **)(param_1 + 0x20);
  }
  puVar1 = PTR_LAB_04373088;
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  FUN_002e2ea0(puVar1,puVar2);
  return;
}


