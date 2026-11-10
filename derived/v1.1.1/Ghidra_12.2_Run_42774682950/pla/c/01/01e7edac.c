/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e7edac; name: FUN_01e7edac
 */


void FUN_01e7edac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x110;
    if (*(long **)(lVar1 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x28) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x48) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x68) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x68) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x88) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x88) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xb8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xd8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xf8) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


