/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a620e0; name: FUN_02a620e0
 */


int FUN_02a620e0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,long *param_6
                )

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  iVar6 = FUN_02a61f20();
  lVar8 = *param_5;
  lVar11 = *(long *)(*param_6 + 0x1e8);
  lVar10 = *(long *)(*param_6 + 0x1b0);
  uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
  lVar9 = *param_4;
  iVar7 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
  iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  bVar5 = SBORROW4(iVar7,iVar3);
  iVar2 = iVar7 - iVar3;
  if (iVar7 == iVar3) {
    bVar5 = SBORROW4(*(int *)(lVar8 + 0x330),*(int *)(lVar9 + 0x330));
    iVar2 = *(int *)(lVar8 + 0x330) - *(int *)(lVar9 + 0x330);
  }
  iVar7 = iVar6;
  if (iVar2 < 0 != bVar5) {
    *param_4 = lVar8;
    iVar7 = iVar6 + 1;
    *param_5 = lVar9;
    lVar8 = *param_4;
    lVar11 = *(long *)(*param_6 + 0x1e8);
    lVar10 = *(long *)(*param_6 + 0x1b0);
    uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
    lVar9 = *param_3;
    iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
    iVar4 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    bVar5 = SBORROW4(iVar3,iVar4);
    iVar2 = iVar3 - iVar4;
    if (iVar3 == iVar4) {
      bVar5 = SBORROW4(*(int *)(lVar8 + 0x330),*(int *)(lVar9 + 0x330));
      iVar2 = *(int *)(lVar8 + 0x330) - *(int *)(lVar9 + 0x330);
    }
    if (iVar2 < 0 != bVar5) {
      *param_3 = lVar8;
      iVar7 = iVar6 + 2;
      *param_4 = lVar9;
      lVar8 = *param_3;
      lVar11 = *(long *)(*param_6 + 0x1e8);
      lVar10 = *(long *)(*param_6 + 0x1b0);
      uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
      lVar9 = *param_2;
      iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80
                      + 0x78);
      uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
      iVar4 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80
                      + 0x78);
      bVar5 = SBORROW4(iVar3,iVar4);
      iVar2 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar5 = SBORROW4(*(int *)(lVar8 + 0x330),*(int *)(lVar9 + 0x330));
        iVar2 = *(int *)(lVar8 + 0x330) - *(int *)(lVar9 + 0x330);
      }
      if (iVar2 < 0 != bVar5) {
        *param_2 = lVar8;
        iVar7 = iVar6 + 3;
        *param_3 = lVar9;
        lVar9 = *param_2;
        lVar11 = *(long *)(*param_6 + 0x1e8);
        lVar10 = *(long *)(*param_6 + 0x1b0);
        uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
        lVar8 = *param_1;
        iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar1 & 0x1f) * 0x80 + 0x78);
        uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
        iVar4 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar1 & 0x1f) * 0x80 + 0x78);
        bVar5 = SBORROW4(iVar3,iVar4);
        iVar2 = iVar3 - iVar4;
        if (iVar3 == iVar4) {
          bVar5 = SBORROW4(*(int *)(lVar9 + 0x330),*(int *)(lVar8 + 0x330));
          iVar2 = *(int *)(lVar9 + 0x330) - *(int *)(lVar8 + 0x330);
        }
        if (iVar2 < 0 != bVar5) {
          iVar7 = iVar6 + 4;
          *param_1 = lVar9;
          *param_2 = lVar8;
        }
      }
    }
  }
  return iVar7;
}


