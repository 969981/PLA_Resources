/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087bf1c; name: FUN_0087bf1c
 */


int FUN_0087bf1c(int param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0x38;
  piVar2 = &DAT_041b3cf8;
  do {
    uVar4 = uVar3 >> 1;
    piVar1 = piVar2 + uVar4 * 2 + 2;
    uVar3 = uVar3 + ~uVar4;
    if (param_1 <= piVar2[uVar4 * 2]) {
      piVar1 = piVar2;
      uVar3 = uVar4;
    }
    piVar2 = piVar1;
  } while (uVar3 != 0);
  if ((piVar1 == (int *)0x41b3eb8) || (param_1 < *piVar1)) {
    return 0;
  }
  return piVar1[1];
}


