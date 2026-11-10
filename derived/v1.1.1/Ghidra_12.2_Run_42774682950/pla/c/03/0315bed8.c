/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315bed8; name: FUN_0315bed8
 */


void FUN_0315bed8(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  
  if (param_3 <= *(int *)(param_2 + 200)) {
    lVar5 = (long)(param_3 + -1);
    piVar4 = (int *)(*(long *)(param_2 + 0xc0) + (long)(param_3 + -1) * 0x10 + 8);
    iVar3 = 1;
    do {
      iVar2 = *piVar4 + -1;
      if (0 < *piVar4) {
        iVar1 = *(int *)(*(long *)(piVar4 + -2) + (long)iVar2 * 4);
        *param_1 = iVar1;
        *piVar4 = iVar2;
        if (iVar3 == 1) {
          return;
        }
        FUN_0315c63c(*(long *)(param_2 + 0xc0) + (long)-iVar3 * 0x10,iVar1 + param_3);
        return;
      }
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (lVar5 < *(int *)(param_2 + 200));
  }
  *param_1 = -1;
  return;
}


