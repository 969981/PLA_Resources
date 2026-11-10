/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae346c; name: FUN_00ae346c
 */


void FUN_00ae346c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    plVar2 = *(long **)(param_1 + 0xe8);
    for (plVar1 = *(long **)(param_1 + 0xe0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      if (*(int *)(*plVar1 + 0x84) == 1) {
        (**(code **)(*(long *)*plVar1 + 0x88))();
      }
    }
  }
  return;
}


