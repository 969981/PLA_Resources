/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01be7158; name: FUN_01be7158
 */


void FUN_01be7158(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(long **)(param_1 + 0x10) = (long *)(lVar2 + -0x30);
    if (*(long **)(lVar2 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x10) + 0x20))();
    }
    plVar1 = *(long **)(lVar2 + -0x30);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


