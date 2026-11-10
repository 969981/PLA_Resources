/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a54e0; name: FUN_031a54e0
 */


long FUN_031a54e0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x60);
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) <= iVar1) {
    lVar2 = FUN_031a5918(PTR_PTR_0434a080,iVar1 + 1,lVar2,iVar1);
    *(long *)(param_1 + 0x60) = lVar2;
  }
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  return lVar2 + (long)iVar1 * 8;
}


