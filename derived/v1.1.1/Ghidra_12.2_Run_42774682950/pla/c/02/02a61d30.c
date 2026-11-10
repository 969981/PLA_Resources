/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a61d30; name: FUN_02a61d30
 */


undefined8 FUN_02a61d30(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *param_2;
  lVar11 = *(long *)(*param_4 + 0x1e8);
  lVar10 = *(long *)(*param_4 + 0x1b0);
  uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
  lVar8 = *param_1;
  iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
  iVar4 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar2 = iVar3 - iVar4;
  if (iVar3 == iVar4) {
    bVar6 = SBORROW4(*(int *)(lVar9 + 0x330),*(int *)(lVar8 + 0x330));
    iVar2 = *(int *)(lVar9 + 0x330) - *(int *)(lVar8 + 0x330);
  }
  lVar12 = *param_3;
  uVar1 = lVar11 + *(int *)(lVar12 + 0x328);
  iVar5 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                  0x78);
  bVar7 = SBORROW4(iVar5,iVar3);
  iVar4 = iVar5 - iVar3;
  if (iVar5 == iVar3) {
    bVar7 = SBORROW4(*(int *)(lVar12 + 0x330),*(int *)(lVar9 + 0x330));
    iVar4 = *(int *)(lVar12 + 0x330) - *(int *)(lVar9 + 0x330);
  }
  bVar7 = iVar4 < 0 == bVar7;
  if (iVar2 < 0 == bVar6) {
    if (bVar7) {
      return 0;
    }
    *param_2 = lVar12;
    *param_3 = lVar9;
    lVar9 = *param_2;
    lVar11 = *(long *)(*param_4 + 0x1e8);
    lVar10 = *(long *)(*param_4 + 0x1b0);
    uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
    lVar8 = *param_1;
    iVar2 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
    iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    if (iVar2 == iVar3) {
      if (*(int *)(lVar9 + 0x330) < *(int *)(lVar8 + 0x330)) {
LAB_02a61eec:
        *param_1 = lVar9;
        *param_2 = lVar8;
        return 2;
      }
    }
    else if (iVar2 < iVar3) goto LAB_02a61eec;
  }
  else {
    if (!bVar7) {
      *param_1 = lVar12;
      *param_3 = lVar8;
      return 1;
    }
    *param_1 = lVar9;
    *param_2 = lVar8;
    lVar9 = *param_3;
    lVar11 = *(long *)(*param_4 + 0x1e8);
    lVar10 = *(long *)(*param_4 + 0x1b0);
    uVar1 = lVar11 + *(int *)(lVar9 + 0x328);
    iVar2 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    uVar1 = lVar11 + *(int *)(lVar8 + 0x328);
    iVar3 = *(int *)(*(long *)(lVar10 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    if (iVar2 == iVar3) {
      if (*(int *)(lVar9 + 0x330) < *(int *)(lVar8 + 0x330)) {
LAB_02a61f00:
        *param_2 = lVar9;
        *param_3 = lVar8;
        return 2;
      }
    }
    else if (iVar2 < iVar3) goto LAB_02a61f00;
  }
  return 1;
}


