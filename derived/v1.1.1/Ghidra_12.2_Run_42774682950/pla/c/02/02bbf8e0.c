/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbf8e0; name: FUN_02bbf8e0
 */


bool FUN_02bbf8e0(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = param_2[-1];
    uVar1 = *param_1;
    lVar6 = *(long *)(*param_3 + 0x88);
    iVar7 = *(int *)(lVar6 + (ulong)uVar2 * 0x30 + 0x20);
    iVar3 = *(int *)(lVar6 + (ulong)uVar1 * 0x30 + 0x20);
    if (iVar7 == iVar3) {
      fVar14 = *(float *)(lVar6 + (ulong)uVar2 * 0x30 + 0x24);
      fVar15 = *(float *)(lVar6 + (ulong)uVar1 * 0x30 + 0x24);
      if (fVar14 == fVar15) {
        if (uVar2 < uVar1) goto LAB_02bbfb60;
      }
      else if (*(int *)(*param_3 + 0x198) == 2) {
        if (fVar14 < fVar15) goto LAB_02bbfb60;
      }
      else if (fVar15 < fVar14) {
LAB_02bbfb60:
        *param_1 = uVar2;
        param_2[-1] = uVar1;
        return true;
      }
    }
    else if (iVar7 < iVar3) goto LAB_02bbfb60;
    break;
  case 3:
    FUN_02bbf250(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_02bbf480(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_02bbf670(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_02bbf250(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar11 = param_1 + 3;
      puVar10 = param_1 + 2;
      do {
        puVar8 = puVar11;
        uVar1 = *puVar8;
        uVar9 = (ulong)uVar1;
        uVar2 = *puVar10;
        lVar12 = *(long *)(*param_3 + 0x88);
        iVar3 = *(int *)(lVar12 + uVar9 * 0x30 + 0x20);
        iVar4 = *(int *)(lVar12 + (ulong)uVar2 * 0x30 + 0x20);
        if (iVar3 == iVar4) {
          fVar14 = *(float *)(lVar12 + uVar9 * 0x30 + 0x24);
          fVar15 = *(float *)(lVar12 + (ulong)uVar2 * 0x30 + 0x24);
          if (fVar14 == fVar15) {
            if (uVar1 < uVar2) goto LAB_02bbfa2c;
          }
          else if (*(int *)(*param_3 + 0x198) == 2) {
            if (fVar14 < fVar15) goto LAB_02bbfa2c;
          }
          else if (fVar15 < fVar14) {
LAB_02bbfa2c:
            *puVar8 = uVar2;
            puVar11 = param_1;
            if (puVar10 != param_1) {
              lVar12 = lVar6;
              do {
                uVar2 = *(uint *)((long)param_1 + lVar12 + 4);
                lVar13 = *(long *)(*param_3 + 0x88);
                iVar3 = *(int *)(lVar13 + (ulong)uVar2 * 0x30 + 0x20);
                iVar4 = *(int *)(lVar13 + uVar9 * 0x30 + 0x20);
                if (iVar4 == iVar3) {
                  fVar14 = *(float *)(lVar13 + uVar9 * 0x30 + 0x24);
                  fVar15 = *(float *)(lVar13 + (ulong)uVar2 * 0x30 + 0x24);
                  if (fVar14 == fVar15) {
                    if (uVar2 <= uVar1) goto LAB_02bbfae8;
                  }
                  else if (*(int *)(*param_3 + 0x198) == 2) {
                    if (fVar15 <= fVar14) goto LAB_02bbfae8;
                  }
                  else if (fVar14 <= fVar15) {
                    puVar11 = (uint *)((long)param_1 + lVar12 + 8);
                    break;
                  }
                }
                else if (iVar3 <= iVar4) {
LAB_02bbfae8:
                  puVar11 = puVar10;
                  break;
                }
                puVar10 = puVar10 + -1;
                *(uint *)((long)param_1 + lVar12 + 8) = uVar2;
                bVar5 = lVar12 != -4;
                lVar12 = lVar12 + -4;
              } while (bVar5);
            }
            iVar7 = iVar7 + 1;
            *puVar11 = uVar1;
            if (iVar7 == 8) {
              return puVar8 + 1 == param_2;
            }
          }
        }
        else if (iVar3 < iVar4) goto LAB_02bbfa2c;
        lVar6 = lVar6 + 4;
        puVar11 = puVar8 + 1;
        puVar10 = puVar8;
      } while (puVar8 + 1 != param_2);
    }
  }
  return true;
}


