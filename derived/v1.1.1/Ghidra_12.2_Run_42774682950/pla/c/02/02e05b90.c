/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e05b90; name: FUN_02e05b90
 */


void FUN_02e05b90(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 4;
  iVar2 = param_1;
  do {
    while( true ) {
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar2 / iVar3;
      }
      if (iVar2 == iVar4 * iVar3) break;
      iVar4 = iVar3 + 2;
      if (iVar3 == 2) {
        iVar4 = 3;
      }
      iVar1 = 2;
      if (iVar3 != 4) {
        iVar1 = iVar4;
      }
      iVar3 = iVar2;
      if ((double)iVar1 <= (double)(long)SQRT((double)param_1)) {
        iVar3 = iVar1;
      }
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = iVar2 / iVar3;
    }
    *param_2 = iVar3;
    param_2[1] = iVar4;
    param_2 = param_2 + 2;
    iVar2 = iVar4;
  } while (1 < iVar4);
  return;
}


