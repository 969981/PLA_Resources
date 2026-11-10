/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede7d4; name: FUN_02ede7d4
 */


int * FUN_02ede7d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*piVar4 == param_2)) {
    piVar3 = piVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x18;
    piVar6 = piVar4;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) goto LAB_02ede850;
      piVar3 = piVar6 + 6;
      piVar1 = piVar6 + 6;
      piVar6 = piVar3;
    } while (*piVar1 != param_2);
  }
  if (piVar3 == piVar4 + (ulong)uVar2 * 6) {
LAB_02ede850:
    piVar3 = (int *)FUN_02ede8a8();
    piVar4 = piVar3;
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3 + 2;
      *piVar3 = param_2;
    }
  }
  else {
    piVar4 = piVar3 + 2;
  }
  return piVar4;
}


