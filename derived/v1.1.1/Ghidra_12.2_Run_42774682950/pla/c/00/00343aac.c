/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00343aac; name: FUN_00343aac
 */


int * FUN_00343aac(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x7c)) {
    piVar2 = *(int **)(param_1 + 0x48);
    lVar3 = 0;
    iVar1 = *piVar2;
    while( true ) {
      if ((iVar1 <= param_2) && (param_2 < piVar2[1])) {
        return piVar2;
      }
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 4;
      if (*(int *)(param_1 + 0x7c) <= lVar3) break;
      iVar1 = *piVar2;
    }
  }
  return (int *)0x0;
}


