/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786e50; name: FUN_02786e50
 */


void FUN_02786e50(undefined4 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  memset(param_1,0,0xa8c);
  lVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = *(uint *)(param_2 + lVar4);
    if ((uVar1 & 0xffff) == 0) break;
    if ((0xffff < uVar1) && (uVar2 = (uVar1 & 0xffff) - 0x6c4, 10 < uVar2 || uVar2 == 5)) {
      param_1[iVar3] = uVar1;
      iVar3 = iVar3 + 1;
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x50);
  if (iVar3 == 0) {
    *param_1 = 0x1065c;
  }
  return;
}


