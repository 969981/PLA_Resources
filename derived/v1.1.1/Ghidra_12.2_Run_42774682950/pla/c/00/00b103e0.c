/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b103e0; name: FUN_00b103e0
 */


void FUN_00b103e0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x30) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x58) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x58) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x78);
    lVar2 = lVar2 + -0x78;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


