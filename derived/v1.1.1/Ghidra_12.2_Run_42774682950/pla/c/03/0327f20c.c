/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327f20c; name: FUN_0327f20c
 */


void FUN_0327f20c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x60);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_0327f55c(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x68);
    *(long *)(param_1 + 0x60) = lVar2;
  }
  *(long *)(lVar2 + (long)iVar3 * 8) = param_2;
  *(int *)(param_1 + 0x68) = iVar1;
  return;
}


