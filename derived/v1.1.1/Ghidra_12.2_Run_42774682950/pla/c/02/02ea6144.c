/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6144; name: FUN_02ea6144
 */


int FUN_02ea6144(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      sVar3 = strlen(*(char **)(*(long *)(param_1 + 0x48) + lVar5 + 8));
      uVar1 = (int)sVar3 + 1;
      lVar5 = lVar5 + 0x10;
      iVar4 = uVar1 + iVar4 + (uVar1 & 1);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while ((ulong)uVar2 * 0x10 != lVar5);
  }
  return iVar4;
}


