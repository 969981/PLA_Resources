/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5283c; name: FUN_00b5283c
 */


void FUN_00b5283c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1f0);
  if (*(int *)(lVar2 + 0x88) == 0) {
    plVar1 = *(long **)(lVar2 + 0x68);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x40))();
    }
    *(uint *)(lVar2 + 0x88) = (uint)(plVar1 != (long *)0x0);
  }
  return;
}


