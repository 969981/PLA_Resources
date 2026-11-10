/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c7b8; name: FUN_0306c7b8
 */


long FUN_0306c7b8(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  if ((param_2 & 1) == 0) {
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 1) goto LAB_0306c7f8;
    lVar2 = *(long *)(param_1 + 8) + 0x100;
  }
  else {
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 1) {
LAB_0306c7f8:
      lVar2 = FUN_032bfafc();
      return lVar2;
    }
    lVar2 = *(long *)(param_1 + 8) + 0x10;
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2;
}


