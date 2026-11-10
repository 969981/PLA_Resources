/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03174b70; name: FUN_03174b70
 */


void FUN_03174b70(long param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  
  do {
    iVar3 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar9 = param_2;
    iVar4 = param_3;
    do {
      while( true ) {
        lVar7 = *param_4;
        fVar10 = *(float *)(lVar7 + (long)iVar3 * 4);
        piVar8 = (int *)(param_1 + (long)iVar9 * 4);
        iVar1 = iVar9;
        do {
          iVar9 = iVar1;
          piVar6 = piVar8;
          iVar1 = iVar9 + 1;
          piVar8 = piVar6 + 1;
        } while (fVar10 < *(float *)(lVar7 + (long)*piVar6 * 4));
        piVar8 = (int *)(param_1 + 4 + (long)iVar4 * 4);
        iVar4 = iVar4 + 1;
        do {
          iVar5 = iVar4;
          piVar8 = piVar8 + -1;
          iVar2 = *piVar8;
          iVar4 = iVar5 + -1;
        } while (*(float *)(lVar7 + (long)iVar2 * 4) < fVar10);
        if (iVar9 <= iVar4) break;
        if (iVar4 < iVar9) goto LAB_03174c14;
      }
      if (iVar9 != iVar4) {
        *piVar8 = *piVar6;
        *piVar6 = iVar2;
      }
      iVar4 = iVar5 + -2;
      iVar9 = iVar1;
    } while (iVar1 <= iVar4);
LAB_03174c14:
    if (param_2 < iVar4) {
      FUN_03174b70(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}


