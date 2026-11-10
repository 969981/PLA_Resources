/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a75f0; name: FUN_032a75f0
 */


int FUN_032a75f0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = (int)param_1[1];
  lVar2 = *param_1;
  if (iVar1 != 0) {
    iVar3 = 0;
    if (param_3 != 0) goto LAB_032a7634;
    do {
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 == iVar3) goto LAB_032a7644;
      } while (param_3 == iVar3);
LAB_032a7634:
    } while (*(int *)(lVar2 + (long)iVar3 * 4) != param_2);
    if (-1 < iVar3) {
      return iVar3;
    }
  }
LAB_032a7644:
  if (iVar1 < (int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
    iVar3 = iVar1;
  }
  else {
    lVar2 = FUN_032ad690(PTR_PTR_0434a080,iVar1 + 1,lVar2,iVar1);
    iVar3 = (int)param_1[1];
    *param_1 = lVar2;
  }
  *(int *)(lVar2 + (long)iVar3 * 4) = param_2;
  *(int *)(param_1 + 1) = iVar1 + 1;
  return iVar1;
}


