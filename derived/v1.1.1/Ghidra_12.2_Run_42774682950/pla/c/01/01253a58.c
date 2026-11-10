/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01253a58; name: FUN_01253a58
 */


void FUN_01253a58(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x30) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x38) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x48);
    lVar2 = lVar2 + -0x50;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


