/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e4b78; name: FUN_031e4b78
 */


void FUN_031e4b78(long *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_031e4bf8();
  if ((int)param_1[1] == iVar2) {
    lVar3 = *param_1;
    iVar1 = iVar2 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar2) {
      lVar3 = FUN_031e4d10(PTR_PTR_0434a080,iVar1);
      iVar2 = (int)param_1[1];
      *param_1 = lVar3;
    }
    *(undefined8 *)(lVar3 + (long)iVar2 * 8) = *param_2;
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


