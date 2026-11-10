/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42cec; name: FUN_02f42cec
 */


int FUN_02f42cec(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int in_w14;
  
  lVar8 = *(long *)(param_1 + 0x100);
  uVar4 = *(int *)(param_1 + 0x108) - 1;
  iVar3 = *(int *)(lVar8 + 4);
  iVar9 = iVar3;
  if (1 < uVar4) {
    iVar9 = -param_2;
    if (-1 < param_2) {
      iVar9 = param_2;
    }
    lVar10 = (ulong)uVar4 - 1;
    bVar6 = true;
    lVar7 = lVar8;
    do {
      iVar1 = iVar9;
      if (!bVar6) {
        iVar1 = in_w14;
      }
      iVar5 = *(int *)(lVar7 + 0x14) - (iVar3 + param_2);
      iVar9 = -iVar5;
      if (-1 < iVar5) {
        iVar9 = iVar5;
      }
      bVar6 = lVar8 == 0 || iVar9 < iVar1;
      lVar2 = lVar7 + 0x10;
      if (lVar8 != 0 && iVar9 >= iVar1) {
        lVar2 = lVar8;
      }
      lVar10 = lVar10 + -1;
      lVar8 = lVar2;
      in_w14 = iVar1;
      lVar7 = lVar7 + 0x10;
    } while (lVar10 != 0);
    iVar9 = *(int *)(lVar2 + 4);
  }
  return iVar9 - iVar3;
}


