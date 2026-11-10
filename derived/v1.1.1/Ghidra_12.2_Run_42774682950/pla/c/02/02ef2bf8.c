/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2bf8; name: FUN_02ef2bf8
 */


void FUN_02ef2bf8(undefined8 param_1,long param_2)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    do {
      puVar2 = puVar1 + 1;
      FUN_02ef2fe4(param_1,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8)
            );
  }
  return;
}


