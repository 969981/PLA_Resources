/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01264dcc; name: FUN_01264dcc
 */


void FUN_01264dcc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x20;
    if (*(long **)(lVar1 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x18) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


