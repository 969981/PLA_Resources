/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bccb8; name: FUN_032bccb8
 */


int FUN_032bccb8(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *param_1;
  iVar1 = *(int *)(lVar4 + (long)param_2 * 4);
  iVar2 = param_2;
  while (iVar3 = iVar1, -1 < iVar3) {
    iVar2 = iVar3;
    iVar1 = *(int *)(lVar4 + (long)iVar3 * 4);
  }
  iVar1 = *(int *)(lVar4 + (long)param_2 * 4);
  if (-1 < iVar1) {
    *(int *)(lVar4 + (long)param_2 * 4) = iVar2;
    piVar5 = (int *)(*param_1 + (long)iVar1 * 4);
    iVar3 = *piVar5;
    if (*piVar5 < 0) {
      return iVar1;
    }
    do {
      param_2 = iVar3;
      *piVar5 = iVar2;
      piVar5 = (int *)(*param_1 + (long)param_2 * 4);
      iVar3 = *piVar5;
    } while (-1 < *piVar5);
  }
  return param_2;
}


