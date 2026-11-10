/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfdee0; name: FUN_02dfdee0
 */


void FUN_02dfdee0(long param_1,uint param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 4;
      lVar4 = lVar4 + 8;
      piVar1 = (int *)(param_3 + lVar5);
      piVar2 = (int *)(param_4 + lVar5);
      *piVar1 = *(int *)(param_1 + (long)*piVar1 * 4);
      piVar1[1] = *(int *)(param_1 + (long)piVar1[1] * 4);
      piVar1[2] = *(int *)(param_1 + (long)piVar1[2] * 4);
      piVar1[3] = *(int *)(param_1 + (long)piVar1[3] * 4);
      piVar1[4] = *(int *)(param_1 + (long)piVar1[4] * 4);
      piVar1[5] = *(int *)(param_1 + (long)piVar1[5] * 4);
      piVar1[6] = *(int *)(param_1 + (long)piVar1[6] * 4);
      piVar1[7] = *(int *)(param_1 + (long)piVar1[7] * 4);
      *piVar2 = *(int *)(param_1 + (long)*piVar2 * 4);
      piVar2[1] = *(int *)(param_1 + (long)piVar2[1] * 4);
      piVar2[2] = *(int *)(param_1 + (long)piVar2[2] * 4);
      piVar2[3] = *(int *)(param_1 + (long)piVar2[3] * 4);
      piVar2[4] = *(int *)(param_1 + (long)piVar2[4] * 4);
      piVar2[5] = *(int *)(param_1 + (long)piVar2[5] * 4);
      iVar3 = *(int *)(param_1 + (long)piVar2[7] * 4);
      piVar2[6] = *(int *)(param_1 + (long)piVar2[6] * 4);
      piVar2[7] = iVar3;
    } while ((uint)lVar4 < param_2);
  }
  return;
}


