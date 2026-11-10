/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01159150; name: FUN_01159150
 */


bool FUN_01159150(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = param_2[-1];
    iVar9 = *(int *)(*(long *)*param_3 + 0xcc);
    iVar1 = *(int *)(lVar8 + 0x94);
    iVar2 = 0;
    if (iVar9 != 0) {
      iVar2 = iVar1 / iVar9;
    }
    lVar11 = *param_1;
    iVar2 = *(int *)param_3[1] + iVar2 * iVar9;
    iVar4 = *(int *)(lVar11 + 0x94);
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = iVar4 / iVar9;
    }
    iVar9 = *(int *)param_3[1] + iVar3 * iVar9;
    if ((iVar1 != iVar2) || (iVar4 == iVar9)) {
      if (iVar1 != iVar2 && iVar4 == iVar9) {
        return true;
      }
      if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <=
          (ulong)(*(long *)(lVar8 + 0x60) - *(long *)(lVar8 + 0x58))) {
        return true;
      }
    }
    *param_1 = lVar8;
    param_2[-1] = lVar11;
    return true;
  case 3:
    FUN_01158a30(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_01158c90(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_01158ea0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_01158a30(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      plVar6 = param_1 + 3;
      plVar12 = param_1 + 2;
      do {
        plVar10 = plVar6;
        lVar11 = *plVar10;
        lVar13 = *plVar12;
        iVar1 = *(int *)(*(long *)*param_3 + 0xcc);
        iVar2 = *(int *)(lVar11 + 0x94);
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar4 = iVar2 / iVar1;
        }
        iVar4 = *(int *)param_3[1] + iVar4 * iVar1;
        iVar3 = *(int *)(lVar13 + 0x94);
        iVar5 = 0;
        if (iVar1 != 0) {
          iVar5 = iVar3 / iVar1;
        }
        iVar1 = *(int *)param_3[1] + iVar5 * iVar1;
        if (((iVar2 == iVar4) && (iVar3 != iVar1)) ||
           ((iVar2 == iVar4 || iVar3 != iVar1 &&
            ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <
             (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)))))) {
          *plVar10 = lVar13;
          if (plVar12 != param_1) {
            lVar13 = lVar8;
            do {
              lVar14 = *(long *)((long)param_1 + lVar13 + 8);
              iVar1 = *(int *)(*(long *)*param_3 + 0xcc);
              iVar2 = *(int *)(lVar11 + 0x94);
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iVar2 / iVar1;
              }
              iVar4 = *(int *)param_3[1] + iVar4 * iVar1;
              iVar3 = *(int *)(lVar14 + 0x94);
              iVar5 = 0;
              if (iVar1 != 0) {
                iVar5 = iVar3 / iVar1;
              }
              iVar1 = *(int *)param_3[1] + iVar5 * iVar1;
              if (((iVar2 != iVar4) || (iVar3 == iVar1)) &&
                 ((iVar2 != iVar4 && iVar3 == iVar1 ||
                  ((ulong)(*(long *)(lVar14 + 0x60) - *(long *)(lVar14 + 0x58)) <=
                   (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)))))) {
                plVar12 = (long *)((long)param_1 + lVar13 + 0x10);
                goto LAB_01159268;
              }
              bVar7 = lVar13 != -8;
              *(long *)((long)param_1 + lVar13 + 0x10) = lVar14;
              lVar13 = lVar13 + -8;
            } while (bVar7);
            plVar12 = param_1;
          }
LAB_01159268:
          iVar9 = iVar9 + 1;
          *plVar12 = lVar11;
          if (iVar9 == 8) {
            return plVar10 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 8;
        plVar6 = plVar10 + 1;
        plVar12 = plVar10;
      } while (plVar10 + 1 != param_2);
    }
  }
  return true;
}


