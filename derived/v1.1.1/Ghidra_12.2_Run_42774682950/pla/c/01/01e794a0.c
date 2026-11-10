/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e794a0; name: FUN_01e794a0
 */


void FUN_01e794a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x40;
    if (*(long **)(lVar1 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x18) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x38) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


