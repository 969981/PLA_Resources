/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c8f0; name: FUN_0040c8f0
 */


void FUN_0040c8f0(long *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    piVar2 = (int *)(*param_1 + (long)iVar1 * 4);
    do {
      piVar2 = piVar2 + -1;
      if (*piVar2 != 0) break;
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  return;
}


