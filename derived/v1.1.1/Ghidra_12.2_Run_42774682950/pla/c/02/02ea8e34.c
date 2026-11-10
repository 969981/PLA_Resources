/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8e34; name: FUN_02ea8e34
 */


void FUN_02ea8e34(undefined8 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*piVar3 == param_2)) {
    piVar5 = piVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 8;
    piVar6 = piVar3;
    do {
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) goto LAB_02ea8eb4;
      piVar5 = piVar6 + 2;
      piVar1 = piVar6 + 2;
      piVar6 = piVar5;
    } while (*piVar1 != param_2);
  }
  if (piVar5 == piVar3 + (ulong)uVar2 * 2) {
LAB_02ea8eb4:
    piVar3 = (int *)FUN_02ea8f54();
    if (piVar3 != (int *)0x0) {
      *piVar3 = param_2;
      piVar3[1] = *param_3;
    }
  }
  else {
    piVar5[1] = *param_3;
  }
  return;
}


