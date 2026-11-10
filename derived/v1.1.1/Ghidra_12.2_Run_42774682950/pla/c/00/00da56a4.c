/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da56a4; name: FUN_00da56a4
 */


void FUN_00da56a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x70;
    FUN_00936104(lVar1 + -0x30);
    if (*(long **)(lVar1 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x60) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


