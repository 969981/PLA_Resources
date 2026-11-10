/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f7050; name: FUN_032f7050
 */


void FUN_032f7050(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  do {
    iVar2 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar8 = param_2;
    iVar4 = param_3;
    do {
      piVar7 = (int *)(param_1 + (long)iVar8 * 4);
      do {
        iVar3 = iVar8;
        piVar6 = piVar7;
        piVar7 = piVar6 + 1;
        iVar8 = iVar3 + 1;
      } while (iVar2 < *piVar6);
      piVar7 = (int *)(param_1 + 4 + (long)iVar4 * 4);
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        piVar7 = piVar7 + -1;
        iVar1 = *piVar7;
        iVar4 = iVar5 + -1;
      } while (iVar1 < iVar2);
      iVar8 = iVar3;
      if (iVar3 <= iVar4) {
        if (iVar3 != iVar4) {
          *piVar7 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar4 = iVar5 + -2;
        iVar8 = iVar3 + 1;
      }
    } while (iVar8 <= iVar4);
    if (param_2 < iVar4) {
      FUN_032f7050(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


