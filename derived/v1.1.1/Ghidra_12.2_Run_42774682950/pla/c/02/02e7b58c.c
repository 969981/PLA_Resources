/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b58c; name: FUN_02e7b58c
 */


void FUN_02e7b58c(long param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_02e7c354();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_02e7b2dc(piVar2);
      FUN_02f59e60(0,piVar2);
      return;
    }
  }
  return;
}


