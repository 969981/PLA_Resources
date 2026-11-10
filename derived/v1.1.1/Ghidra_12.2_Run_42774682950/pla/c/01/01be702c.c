/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01be702c; name: FUN_01be702c
 */


void FUN_01be702c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  while (lVar3 != lVar2) {
    if (*(long **)(lVar3 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + -8) + 0x20))();
    }
    if (*(long **)(lVar3 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + -0x30) + 0x20))();
    }
    plVar1 = (long *)(lVar3 + -0x50);
    lVar3 = lVar3 + -0x50;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  param_1[1] = lVar2;
  return;
}


