/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0b010; name: FUN_02f0b010
 */


int FUN_02f0b010(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    do {
      iVar1 = FUN_02ed52f0(*puVar3);
      if (iVar1 != 1) {
        for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
          FUN_02ed53a8(*puVar2);
        }
        return iVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10) * 4)
            );
  }
  return 1;
}


