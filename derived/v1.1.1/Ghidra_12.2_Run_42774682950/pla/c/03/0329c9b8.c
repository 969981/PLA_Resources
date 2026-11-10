/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329c9b8; name: FUN_0329c9b8
 */


int FUN_0329c9b8(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    return -1;
  }
  iVar1 = 0;
  lVar3 = (long)*(int *)(param_1 + 0x100) << 3;
  pbVar2 = (byte *)(param_1 + 3);
  while ((pbVar2[-1] != param_2 || (*pbVar2 != param_3))) {
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -8;
    pbVar2 = pbVar2 + 8;
    if (lVar3 == 0) {
      return -1;
    }
  }
  return iVar1;
}


