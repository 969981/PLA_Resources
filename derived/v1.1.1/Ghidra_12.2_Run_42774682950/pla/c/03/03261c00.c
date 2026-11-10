/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261c00; name: FUN_03261c00
 */


void FUN_03261c00(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = param_2[1];
  *(undefined2 *)(*param_2 + (long)(int)lVar4 * 2) = 0;
  *(int *)(param_2 + 1) = (int)lVar4 + 1;
  if ((int)uVar1 < 2) {
    iVar3 = 1;
  }
  else {
    piVar6 = (int *)*param_1;
    iVar3 = 1;
    iVar5 = *piVar6;
    lVar4 = 1;
    while( true ) {
      iVar2 = piVar6[lVar4];
      if (iVar2 != iVar5) {
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *(int *)(*param_1 + (long)iVar3 * 4) = iVar2;
        iVar3 = iVar3 + 1;
        iVar5 = iVar2;
      }
      *(short *)(*param_2 + (long)(int)param_2[1] * 2 + -2) = (short)lVar4;
      if ((2 - (ulong)uVar1) + lVar4 == 1) break;
      piVar6 = (int *)*param_1;
      lVar4 = lVar4 + 1;
    }
    if ((1 < iVar3) && (*(int *)*param_1 == ((int *)*param_1)[(long)iVar3 + -1])) {
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      iVar3 = (int)((long)iVar3 + -1);
    }
  }
  if ((int)param_1[1] != iVar3) {
    *(int *)(param_1 + 1) = iVar3;
  }
  return;
}


