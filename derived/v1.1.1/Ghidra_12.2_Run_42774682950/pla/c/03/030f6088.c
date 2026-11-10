/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6088; name: FUN_030f6088
 */


void FUN_030f6088(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_032bf564(*(long *)(param_1 + 0x7c0) + 0x18);
  FUN_032beab0(param_1 + 0x6c0,*(undefined8 *)(param_1 + 0x10));
  if (*(long **)(param_1 + 0x7c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x7c0) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    FUN_032be4d0(lVar4);
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0x60);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


