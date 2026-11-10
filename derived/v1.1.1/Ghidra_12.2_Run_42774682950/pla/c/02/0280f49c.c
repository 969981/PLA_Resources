/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280f49c; name: FUN_0280f49c
 */


undefined8 FUN_0280f49c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x468);
  iVar1 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0x1c) == 0) {
    iVar4 = *(int *)(lVar3 + 0xc);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar1 / iVar4;
    }
    iVar4 = iVar1 - iVar2 * iVar4;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x10);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    iVar2 = iVar1 - iVar4 * iVar2;
  }
  return CONCAT44(iVar2,iVar4);
}


