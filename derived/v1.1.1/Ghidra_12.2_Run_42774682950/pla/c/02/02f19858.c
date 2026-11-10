/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f19858; name: FUN_02f19858
 */


int * FUN_02f19858(undefined8 *param_1,int param_2)

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
    lVar5 = (ulong)uVar2 * 0x20;
    piVar6 = piVar4;
    do {
      lVar5 = lVar5 + -0x20;
      if (lVar5 == 0) goto LAB_02f198cc;
      piVar3 = piVar6 + 8;
      piVar1 = piVar6 + 8;
      piVar6 = piVar3;
    } while (*piVar1 != param_2);
  }
  if (piVar3 == piVar4 + (ulong)uVar2 * 8) {
LAB_02f198cc:
    piVar3 = (int *)FUN_02f1a334();
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


