/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397090; name: FUN_03397090
 */


void FUN_03397090(int param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  void *__s;
  int iVar3;
  
  iVar3 = (int)param_2[1];
  if (iVar3 <= param_1) {
    iVar1 = param_1 + 1;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= param_1) {
      lVar2 = FUN_03397158(PTR_PTR_0434a080,iVar1,*param_2);
      iVar3 = (int)param_2[1];
      *param_2 = lVar2;
    }
    if (iVar3 <= param_1) {
      __s = (void *)(*param_2 + (long)iVar3 * 0xc);
      *(int *)(param_2 + 1) = iVar1;
      memset(__s,0,((((*param_2 + (long)iVar1 * 0xc) - (long)__s) - 0xcU) / 0xc) * 0xc + 0xc);
      return;
    }
    if (iVar1 < iVar3) {
      *(int *)(param_2 + 1) = iVar1;
    }
  }
  return;
}


