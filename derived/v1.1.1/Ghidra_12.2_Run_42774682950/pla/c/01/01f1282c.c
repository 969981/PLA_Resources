/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1282c; name: FUN_01f1282c
 */


void FUN_01f1282c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0x998;
  plVar2 = *(long **)(param_1 + 0x998);
  while( true ) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    lVar1 = param_1 + lVar3;
    if (*(long **)(lVar1 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x60) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x80) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x80) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xc0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xc0) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xe0) + 0x20))();
    }
    lVar3 = lVar3 + -0x120;
    if (lVar3 == 0x98) break;
    plVar2 = *(long **)(param_1 + lVar3);
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f12934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


