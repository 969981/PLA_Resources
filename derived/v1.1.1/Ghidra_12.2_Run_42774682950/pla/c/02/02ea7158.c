/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7158; name: FUN_02ea7158
 */


byte FUN_02ea7158(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 1;
    puVar3 = *(undefined8 **)(param_2 + 8);
    do {
      puVar4 = puVar3 + 1;
      lVar1 = FUN_02ea6a44(param_1,*puVar3,0);
      bVar2 = bVar2 & lVar1 != 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8)
            );
  }
  return bVar2;
}


