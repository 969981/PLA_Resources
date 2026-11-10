/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c01c; name: FUN_0083c01c
 */


void FUN_0083c01c(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = (int *)(param_1 + 0x78);
  if (*piVar1 == 1) {
    FUN_007e5d18(piVar1);
  }
  FUN_007e5bd8(piVar1);
  return;
}


