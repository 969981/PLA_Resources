/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7090; name: FUN_02eb7090
 */


void FUN_02eb7090(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  piVar3 = *(int **)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 == 0) || (*piVar3 == param_2)) {
    piVar4 = piVar3;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x38;
    piVar6 = piVar3;
    do {
      lVar5 = lVar5 + -0x38;
      if (lVar5 == 0) {
        return;
      }
      piVar4 = piVar6 + 0xe;
      piVar1 = piVar6 + 0xe;
      piVar6 = piVar4;
    } while (*piVar1 != param_2);
  }
  if (piVar4 == piVar3 + (ulong)uVar2 * 0xe) {
    return;
  }
  FUN_02eb6fe0(piVar4 + 2,param_1);
  return;
}


