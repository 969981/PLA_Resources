/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edfc74; name: FUN_02edfc74
 */


void FUN_02edfc74(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  plVar5 = (long *)*param_3;
  *param_1 = (long)plVar5;
  uVar6 = *(uint *)(param_3 + 1);
  uVar4 = (ulong)uVar6;
  *(uint *)(param_1 + 1) = uVar6;
  lVar1 = param_3[3];
  lVar3 = *(long *)(param_3[2] + 8);
  param_1[2] = lVar3;
  param_1[3] = lVar1;
  if (lVar3 == 0) {
    uVar2 = *(uint *)(plVar5 + 1);
    do {
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) break;
      param_1[3] = 0;
      lVar7 = *(long *)(*plVar5 + (ulong)uVar6 * 8);
      param_1[2] = lVar7;
    } while (lVar7 == 0);
    *(uint *)(param_1 + 1) = uVar6;
  }
  if (lVar1 == 0) {
    plVar5 = (long *)(*param_2 + uVar4 * 8);
  }
  else {
    plVar5 = (long *)(lVar1 + 8);
  }
  *plVar5 = lVar3;
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  return;
}


