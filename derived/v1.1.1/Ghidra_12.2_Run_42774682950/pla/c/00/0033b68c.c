/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b68c; name: FUN_0033b68c
 */


long FUN_0033b68c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    lVar4 = 0;
  }
  else {
    iVar5 = 0;
    lVar4 = 0;
    do {
      puVar2 = (uint *)FUN_00326ad0(param_1,iVar5);
      if ((int)*puVar2 < 0) {
        uVar3 = 10;
      }
      else {
        uVar3 = (ulong)(((uint)LZCOUNT(*puVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      iVar5 = iVar5 + 1;
      lVar4 = uVar3 + lVar4;
    } while (iVar1 != iVar5);
  }
  return lVar4;
}


