/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a62310; name: FUN_02a62310
 */


bool FUN_02a62310(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar11 = param_2[-1];
    lVar13 = *(long *)(*param_3 + 0x1e8);
    lVar12 = *(long *)(*param_3 + 0x1b0);
    uVar1 = lVar13 + *(int *)(lVar11 + 0x328);
    lVar7 = *param_1;
    iVar8 = *(int *)(*(long *)(lVar12 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    uVar1 = lVar13 + *(int *)(lVar7 + 0x328);
    iVar2 = *(int *)(*(long *)(lVar12 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80 +
                    0x78);
    if (iVar8 == iVar2) {
      if (*(int *)(lVar11 + 0x330) < *(int *)(lVar7 + 0x330)) {
LAB_02a62594:
        *param_1 = lVar11;
        param_2[-1] = lVar7;
        return true;
      }
    }
    else if (iVar8 < iVar2) goto LAB_02a62594;
    break;
  case 3:
    FUN_02a61d30(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_02a61f20(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_02a620e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_02a61d30(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      plVar5 = param_1 + 3;
      plVar9 = param_1 + 2;
      do {
        plVar10 = plVar5;
        lVar11 = *plVar10;
        lVar14 = *(long *)(*param_3 + 0x1e8);
        lVar13 = *(long *)(*param_3 + 0x1b0);
        uVar1 = lVar14 + *(int *)(lVar11 + 0x328);
        lVar12 = *plVar9;
        iVar3 = *(int *)(*(long *)(lVar13 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar1 & 0x1f) * 0x80 + 0x78);
        uVar1 = lVar14 + *(int *)(lVar12 + 0x328);
        iVar4 = *(int *)(*(long *)(lVar13 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar1 & 0x1f) * 0x80 + 0x78);
        bVar6 = SBORROW4(iVar3,iVar4);
        iVar2 = iVar3 - iVar4;
        if (iVar3 == iVar4) {
          bVar6 = SBORROW4(*(int *)(lVar11 + 0x330),*(int *)(lVar12 + 0x330));
          iVar2 = *(int *)(lVar11 + 0x330) - *(int *)(lVar12 + 0x330);
        }
        if (iVar2 < 0 != bVar6) {
          *plVar10 = lVar12;
          if (plVar9 != param_1) {
            lVar12 = lVar7;
            do {
              lVar13 = *(long *)((long)param_1 + lVar12 + 8);
              lVar15 = *(long *)(*param_3 + 0x1e8);
              lVar14 = *(long *)(*param_3 + 0x1b0);
              uVar1 = lVar15 + *(int *)(lVar11 + 0x328);
              iVar2 = *(int *)(*(long *)(lVar14 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                               (uVar1 & 0x1f) * 0x80 + 0x78);
              uVar1 = lVar15 + *(int *)(lVar13 + 0x328);
              iVar3 = *(int *)(*(long *)(lVar14 + (uVar1 >> 2 & 0x3ffffffffffffff8)) +
                               (uVar1 & 0x1f) * 0x80 + 0x78);
              if (iVar2 == iVar3) {
                if (*(int *)(lVar13 + 0x330) <= *(int *)(lVar11 + 0x330)) {
                  plVar9 = (long *)((long)param_1 + lVar12 + 0x10);
                  goto LAB_02a623fc;
                }
              }
              else if (iVar3 <= iVar2) goto LAB_02a623fc;
              plVar9 = plVar9 + -1;
              *(long *)((long)param_1 + lVar12 + 0x10) = lVar13;
              bVar6 = lVar12 != -8;
              lVar12 = lVar12 + -8;
            } while (bVar6);
            plVar9 = param_1;
          }
LAB_02a623fc:
          iVar8 = iVar8 + 1;
          *plVar9 = lVar11;
          if (iVar8 == 8) {
            return plVar10 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        plVar5 = plVar10 + 1;
        plVar9 = plVar10;
      } while (plVar10 + 1 != param_2);
    }
  }
  return true;
}


