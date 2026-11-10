/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fab854; name: FUN_01fab854
 */


undefined8 FUN_01fab854(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar3 != puVar1) {
    lVar4 = *param_1;
    do {
      uVar2 = FUN_01fab954(puVar3);
      if ((uVar2 & 1) != 0) goto LAB_01fab894;
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    puVar3 = puVar1;
LAB_01fab894:
    if (puVar3 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar3 + 0x70))();
      *(undefined1 *)(lVar4 + 0x123) = 1;
      return 1;
    }
  }
  return 0;
}


