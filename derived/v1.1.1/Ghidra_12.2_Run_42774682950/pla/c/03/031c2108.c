/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2108; name: FUN_031c2108
 */


void FUN_031c2108(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar1 = iVar3 + 1;
  *(int *)(param_2 + 0x14) = iVar1;
  *param_1 = iVar3;
  lVar2 = param_2 + (long)iVar5 * 8;
  if (iVar1 == *(int *)(lVar2 + 4)) {
    piVar4 = (int *)(lVar2 + 0xc);
    do {
      iVar5 = iVar5 + 1;
      *(int *)(param_2 + 0x10) = iVar5;
      if (iVar5 == 2) {
        return;
      }
      iVar1 = piVar4[-1];
      *(int *)(param_2 + 0x14) = iVar1;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 2;
    } while (iVar1 == iVar3);
  }
  return;
}


