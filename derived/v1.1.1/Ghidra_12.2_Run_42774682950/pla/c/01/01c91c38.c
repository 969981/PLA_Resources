/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c91c38; name: FUN_01c91c38
 */


void FUN_01c91c38(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -8) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x28) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x48) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x68) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x68) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x88);
    lVar2 = lVar2 + -0xb0;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


