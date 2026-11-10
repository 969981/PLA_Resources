/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57ab0; name: FUN_02e57ab0
 */


void FUN_02e57ab0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 1) * 0x28;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if (*plVar2 != 0) {
        FUN_02f59e60(9);
      }
      *plVar2 = 0;
      lVar1 = lVar1 + -0x28;
      *(undefined4 *)(plVar2 + -1) = 0;
      plVar2 = plVar2 + 5;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


