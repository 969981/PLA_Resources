/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e2a40; name: FUN_031e2a40
 */


void FUN_031e2a40(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_2[1];
  if (iVar2 % 2 == 1) {
    lVar1 = *param_2;
    iVar4 = iVar2 + -1;
    iVar3 = *param_1;
    if (iVar3 != *(int *)(lVar1 + (long)iVar4 * 4) + 1) {
      iVar4 = iVar2 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar2) {
        lVar1 = FUN_031e2e94(PTR_PTR_0434a090,iVar4);
        *param_2 = lVar1;
        iVar2 = (int)param_2[1];
        iVar3 = *param_1;
      }
      *(int *)(lVar1 + (long)iVar2 * 4) = iVar3;
    }
    *(int *)(param_2 + 1) = iVar4;
  }
  return;
}


