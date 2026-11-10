/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e99720; name: FUN_02e99720
 */


int FUN_02e99720(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    do {
      iVar1 = (**(code **)(*(long *)*puVar3 + 0x140))();
      if (iVar1 != 1) {
        for (puVar2 = *(undefined8 **)(param_1 + 0xd0); puVar2 != puVar3; puVar2 = puVar2 + 1) {
          (**(code **)(*(long *)*puVar2 + 0x148))();
        }
        return iVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 8));
  }
  return 1;
}


