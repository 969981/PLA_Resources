/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0b094; name: FUN_02f0b094
 */


undefined8 FUN_02f0b094(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar4;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    for (plVar2 = *(long **)(param_1 + 0x120); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (*(int *)(plVar2 + 1) == param_2) {
        if ((param_3 & 1) != 0) {
          uVar1 = FUN_02f0b010(plVar2 + 2);
          return uVar1;
        }
        if (*(int *)(plVar2 + 4) == 0) {
          return 1;
        }
        puVar3 = (undefined4 *)plVar2[3];
        do {
          puVar4 = puVar3 + 1;
          FUN_02ed53a8(*puVar3);
          puVar3 = puVar4;
        } while (puVar4 != (undefined4 *)(plVar2[3] + (ulong)*(uint *)(plVar2 + 4) * 4));
        return 1;
      }
    }
  }
  return 1;
}


