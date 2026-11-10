/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082af74; name: FUN_0082af74
 */


uint FUN_0082af74(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
    plVar3 = *(long **)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_007e5f0c();
    plVar3 = *(long **)(param_1 + 0x18);
  }
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x198))();
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}


