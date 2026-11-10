/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbea00; name: FUN_02bbea00
 */


void FUN_02bbea00(uint *param_1,uint *param_2,long *param_3)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  
LAB_02bbea2c:
  puVar16 = param_2 + -1;
  puVar17 = param_1;
LAB_02bbea38:
  param_1 = puVar17;
  lVar13 = (long)param_2 - (long)param_1;
  uVar11 = lVar13 >> 2;
  switch(uVar11) {
  case 0:
  case 1:
    goto switchD_02bbefac_caseD_0;
  case 2:
    uVar3 = *puVar16;
    uVar4 = *param_1;
    lVar13 = *(long *)(*param_3 + 0x88);
    iVar10 = *(int *)(lVar13 + (ulong)uVar3 * 0x30 + 0x20);
    iVar5 = *(int *)(lVar13 + (ulong)uVar4 * 0x30 + 0x20);
    if (iVar10 == iVar5) {
      fVar21 = *(float *)(lVar13 + (ulong)uVar3 * 0x30 + 0x24);
      fVar22 = *(float *)(lVar13 + (ulong)uVar4 * 0x30 + 0x24);
      if (fVar21 == fVar22) {
        if (uVar4 <= uVar3) {
          return;
        }
      }
      else if (*(int *)(*param_3 + 0x198) == 2) {
        if (fVar22 <= fVar21) {
          return;
        }
      }
      else if (fVar21 <= fVar22) {
        return;
      }
    }
    else if (iVar5 <= iVar10) {
      return;
    }
    *param_1 = uVar3;
    *puVar16 = uVar4;
    return;
  case 3:
    FUN_02bbf250(param_1,param_1 + 1,puVar16,param_3);
    return;
  case 4:
    FUN_02bbf480(param_1,param_1 + 1,param_1 + 2,puVar16,param_3);
    return;
  case 5:
    FUN_02bbf670(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar16,param_3);
    return;
  }
  if (lVar13 < 0x7c) {
    FUN_02bbf250(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 0;
    puVar17 = param_1 + 3;
    puVar16 = param_1 + 2;
    goto LAB_02bbf04c;
  }
  uVar18 = uVar11;
  if ((long)uVar11 < 0) {
    uVar18 = uVar11 + 1;
  }
  puVar17 = (uint *)((long)param_1 + (uVar18 & 0x7ffffffffffffffe) * 2);
  if (lVar13 < 0xf9d) {
    iVar10 = FUN_02bbf250(param_1,puVar17,puVar16,param_3);
  }
  else {
    uVar18 = uVar11 + 3;
    if (-1 < (long)uVar11) {
      uVar18 = uVar11;
    }
    iVar10 = FUN_02bbf670(param_1,(long)param_1 + (uVar18 & 0xfffffffffffffffc),puVar17,
                          (long)puVar17 + (uVar18 & 0xfffffffffffffffc),puVar16,param_3);
  }
  lVar13 = *param_3;
  uVar3 = *param_1;
  uVar11 = (ulong)uVar3;
  lVar15 = *(long *)(lVar13 + 0x88);
  uVar4 = *puVar17;
  uVar18 = (ulong)uVar4;
  iVar5 = *(int *)(lVar15 + uVar11 * 0x30 + 0x20);
  iVar6 = *(int *)(lVar15 + uVar18 * 0x30 + 0x20);
  if (iVar5 == iVar6) {
    fVar21 = *(float *)(lVar15 + uVar11 * 0x30 + 0x24);
    fVar22 = *(float *)(lVar15 + uVar18 * 0x30 + 0x24);
    if (fVar21 == fVar22) {
      if (uVar4 <= uVar3) goto LAB_02bbeafc;
    }
    else if (*(int *)(lVar13 + 0x198) == 2) {
      if (fVar22 <= fVar21) {
LAB_02bbeafc:
        if (param_1 != param_2 + -2) {
          puVar14 = param_2 + -2;
          do {
            uVar7 = *puVar14;
            iVar8 = *(int *)(lVar15 + (ulong)uVar7 * 0x30 + 0x20);
            if (iVar8 == iVar6) {
              fVar21 = *(float *)(lVar15 + (ulong)uVar7 * 0x30 + 0x24);
              fVar22 = *(float *)(lVar15 + uVar18 * 0x30 + 0x24);
              if (fVar21 == fVar22) {
                if (uVar7 < uVar4) goto LAB_02bbeb78;
              }
              else if (*(int *)(lVar13 + 0x198) == 2) {
                if (fVar21 < fVar22) goto LAB_02bbeb78;
              }
              else if (fVar22 < fVar21) {
LAB_02bbeb78:
                iVar10 = iVar10 + 1;
                *param_1 = uVar7;
                *puVar14 = uVar3;
                goto LAB_02bbeb90;
              }
            }
            else if (iVar8 < iVar6) goto LAB_02bbeb78;
            puVar14 = puVar14 + -1;
          } while (param_1 != puVar14);
        }
        uVar4 = *puVar16;
        iVar10 = *(int *)(lVar15 + (ulong)uVar4 * 0x30 + 0x20);
        puVar14 = param_1 + 1;
        if (iVar5 == iVar10) {
          fVar21 = *(float *)(lVar15 + uVar11 * 0x30 + 0x24);
          fVar22 = *(float *)(lVar15 + (ulong)uVar4 * 0x30 + 0x24);
          if (fVar21 == fVar22) {
            if (uVar4 <= uVar3) goto LAB_02bbeda8;
          }
          else if (*(int *)(lVar13 + 0x198) == 2) {
            if (fVar22 <= fVar21) goto LAB_02bbeda8;
          }
          else if (fVar21 <= fVar22) {
LAB_02bbeda8:
            if (puVar14 == puVar16) {
              return;
            }
            puVar14 = param_1 + 2;
            do {
              uVar7 = puVar14[-1];
              iVar10 = *(int *)(lVar15 + (ulong)uVar7 * 0x30 + 0x20);
              if (iVar5 == iVar10) {
                fVar21 = *(float *)(lVar15 + uVar11 * 0x30 + 0x24);
                fVar22 = *(float *)(lVar15 + (ulong)uVar7 * 0x30 + 0x24);
                if (fVar21 == fVar22) {
                  if (uVar3 < uVar7) goto LAB_02bbee24;
                }
                else if (*(int *)(lVar13 + 0x198) == 2) {
                  if (fVar21 < fVar22) goto LAB_02bbee24;
                }
                else if (fVar22 < fVar21) goto LAB_02bbee24;
              }
              else if (iVar5 < iVar10) goto LAB_02bbee24;
              puVar14 = puVar14 + 1;
              if (param_2 == puVar14) {
                return;
              }
            } while( true );
          }
        }
        else if (iVar10 <= iVar5) goto LAB_02bbeda8;
        goto LAB_02bbee2c;
      }
    }
    else if (fVar21 <= fVar22) goto LAB_02bbeafc;
  }
  else if (iVar6 <= iVar5) goto LAB_02bbeafc;
  puVar14 = puVar16;
LAB_02bbeb90:
  puVar12 = param_1 + 1;
  puVar20 = puVar12;
  if (puVar12 < puVar14) {
LAB_02bbeb9c:
    lVar13 = *param_3;
    uVar3 = *puVar17;
    lVar15 = *(long *)(lVar13 + 0x88);
    lVar19 = lVar15 + (ulong)uVar3 * 0x30;
    iVar5 = *(int *)(lVar19 + 0x20);
    pfVar1 = (float *)(lVar19 + 0x24);
    puVar20 = puVar12;
    do {
      uVar4 = *puVar20;
      iVar6 = *(int *)(lVar15 + (ulong)uVar4 * 0x30 + 0x20);
      if (iVar6 == iVar5) {
        fVar21 = *(float *)(lVar15 + (ulong)uVar4 * 0x30 + 0x24);
        fVar22 = *pfVar1;
        if (fVar21 == fVar22) {
          if (uVar3 <= uVar4) goto LAB_02bbec1c;
        }
        else if (*(int *)(lVar13 + 0x198) == 2) {
          if (fVar22 <= fVar21) goto LAB_02bbec1c;
        }
        else if (fVar21 <= fVar22) goto LAB_02bbec1c;
      }
      else if (iVar5 <= iVar6) goto LAB_02bbec1c;
      puVar20 = puVar20 + 1;
    } while( true );
  }
LAB_02bbec90:
  if (puVar20 != puVar17) {
    uVar3 = *puVar17;
    uVar4 = *puVar20;
    lVar13 = *(long *)(*param_3 + 0x88);
    iVar5 = *(int *)(lVar13 + (ulong)uVar3 * 0x30 + 0x20);
    iVar6 = *(int *)(lVar13 + (ulong)uVar4 * 0x30 + 0x20);
    if (iVar5 == iVar6) {
      fVar21 = *(float *)(lVar13 + (ulong)uVar3 * 0x30 + 0x24);
      fVar22 = *(float *)(lVar13 + (ulong)uVar4 * 0x30 + 0x24);
      if (fVar21 == fVar22) {
        if (uVar3 < uVar4) goto LAB_02bbed24;
      }
      else if (*(int *)(*param_3 + 0x198) == 2) {
        if (fVar21 < fVar22) goto LAB_02bbed24;
      }
      else if (fVar22 < fVar21) {
LAB_02bbed24:
        iVar10 = iVar10 + 1;
        *puVar20 = uVar3;
        *puVar17 = uVar4;
      }
    }
    else if (iVar5 < iVar6) goto LAB_02bbed24;
  }
  if (iVar10 == 0) {
    uVar11 = FUN_02bbf8e0(param_1,puVar20,param_3);
    uVar18 = FUN_02bbf8e0(puVar20 + 1,param_2,param_3);
    if ((uVar18 & 1) != 0) goto LAB_02bbef8c;
    puVar17 = puVar20 + 1;
    if ((uVar11 & 1) != 0) goto LAB_02bbea38;
  }
  if ((long)param_2 - (long)puVar20 <= (long)puVar20 - (long)param_1) {
    FUN_02bbea00(puVar20 + 1,param_2,param_3);
    param_2 = puVar20;
    goto LAB_02bbea2c;
  }
  FUN_02bbea00(param_1,puVar20,param_3);
  puVar17 = puVar20 + 1;
  goto LAB_02bbea38;
LAB_02bbf04c:
  puVar14 = puVar17;
  uVar3 = *puVar14;
  uVar11 = (ulong)uVar3;
  uVar4 = *puVar16;
  lVar15 = *(long *)(*param_3 + 0x88);
  iVar10 = *(int *)(lVar15 + uVar11 * 0x30 + 0x20);
  iVar5 = *(int *)(lVar15 + (ulong)uVar4 * 0x30 + 0x20);
  if (iVar10 == iVar5) {
    fVar21 = *(float *)(lVar15 + uVar11 * 0x30 + 0x24);
    fVar22 = *(float *)(lVar15 + (ulong)uVar4 * 0x30 + 0x24);
    if (fVar21 == fVar22) {
      if (uVar3 < uVar4) goto LAB_02bbf0a4;
    }
    else if (*(int *)(*param_3 + 0x198) == 2) {
      if (fVar21 < fVar22) goto LAB_02bbf0a4;
    }
    else if (fVar22 < fVar21) {
LAB_02bbf0a4:
      *puVar14 = uVar4;
      puVar17 = param_1;
      if (puVar16 != param_1) {
        lVar15 = lVar13;
        do {
          uVar4 = *(uint *)((long)param_1 + lVar15 + 4);
          lVar19 = *(long *)(*param_3 + 0x88);
          iVar10 = *(int *)(lVar19 + (ulong)uVar4 * 0x30 + 0x20);
          iVar5 = *(int *)(lVar19 + uVar11 * 0x30 + 0x20);
          if (iVar5 == iVar10) {
            fVar21 = *(float *)(lVar19 + uVar11 * 0x30 + 0x24);
            fVar22 = *(float *)(lVar19 + (ulong)uVar4 * 0x30 + 0x24);
            if (fVar21 == fVar22) {
              if (uVar4 <= uVar3) goto LAB_02bbf140;
            }
            else if (*(int *)(*param_3 + 0x198) == 2) {
              if (fVar22 <= fVar21) goto LAB_02bbf140;
            }
            else if (fVar21 <= fVar22) {
LAB_02bbf140:
              puVar17 = puVar16;
              break;
            }
          }
          else if (iVar10 <= iVar5) {
            puVar17 = (uint *)((long)param_1 + lVar15 + 8);
            break;
          }
          puVar16 = puVar16 + -1;
          *(uint *)((long)param_1 + lVar15 + 8) = uVar4;
          bVar9 = lVar15 != -4;
          lVar15 = lVar15 + -4;
        } while (bVar9);
      }
      *puVar17 = uVar3;
    }
  }
  else if (iVar10 < iVar5) goto LAB_02bbf0a4;
  lVar13 = lVar13 + 4;
  puVar17 = puVar14 + 1;
  puVar16 = puVar14;
  if (puVar14 + 1 == param_2) {
switchD_02bbefac_caseD_0:
    return;
  }
  goto LAB_02bbf04c;
LAB_02bbee24:
  puVar14[-1] = uVar4;
  *puVar16 = uVar7;
LAB_02bbee2c:
  if (puVar14 == puVar16) {
    return;
  }
  puVar12 = puVar16;
LAB_02bbee38:
  lVar13 = *param_3;
  uVar3 = *param_1;
  lVar15 = *(long *)(lVar13 + 0x88);
  lVar19 = lVar15 + (ulong)uVar3 * 0x30;
  iVar10 = *(int *)(lVar19 + 0x20);
  pfVar1 = (float *)(lVar19 + 0x24);
  puVar17 = puVar14;
  do {
    uVar4 = *puVar17;
    iVar5 = *(int *)(lVar15 + (ulong)uVar4 * 0x30 + 0x20);
    if (iVar10 == iVar5) {
      fVar21 = *pfVar1;
      fVar22 = *(float *)(lVar15 + (ulong)uVar4 * 0x30 + 0x24);
      if (fVar21 == fVar22) {
        if (uVar3 < uVar4) break;
      }
      else if (*(int *)(lVar13 + 0x198) == 2) {
        if (fVar21 < fVar22) break;
      }
      else if (fVar22 < fVar21) break;
    }
    else if (iVar10 < iVar5) break;
    puVar17 = puVar17 + 1;
  } while( true );
  while (iVar10 < iVar5) {
LAB_02bbeeb8:
    puVar12 = puVar12 + -1;
    uVar7 = *puVar12;
    iVar5 = *(int *)(lVar15 + (ulong)uVar7 * 0x30 + 0x20);
    if (iVar10 == iVar5) {
      fVar21 = *pfVar1;
      fVar22 = *(float *)(lVar15 + (ulong)uVar7 * 0x30 + 0x24);
      if (fVar21 == fVar22) {
        if (uVar7 <= uVar3) break;
      }
      else if (*(int *)(lVar13 + 0x198) == 2) {
        if (fVar22 <= fVar21) break;
      }
      else if (fVar21 <= fVar22) break;
      goto LAB_02bbeeb8;
    }
  }
  if (puVar12 <= puVar17) goto LAB_02bbea38;
  puVar14 = puVar17 + 1;
  *puVar17 = uVar7;
  *puVar12 = uVar4;
  goto LAB_02bbee38;
  while (iVar5 <= iVar6) {
LAB_02bbec1c:
    puVar14 = puVar14 + -1;
    uVar7 = *puVar14;
    iVar6 = *(int *)(lVar15 + (ulong)uVar7 * 0x30 + 0x20);
    if (iVar6 == iVar5) {
      fVar21 = *(float *)(lVar15 + (ulong)uVar7 * 0x30 + 0x24);
      fVar22 = *pfVar1;
      if (fVar21 == fVar22) {
        if (uVar7 < uVar3) break;
      }
      else if (*(int *)(lVar13 + 0x198) == 2) {
        if (fVar21 < fVar22) break;
      }
      else if (fVar22 < fVar21) break;
      goto LAB_02bbec1c;
    }
  }
  if (puVar14 < puVar20) goto LAB_02bbec90;
  iVar10 = iVar10 + 1;
  puVar2 = puVar14;
  if (puVar17 != puVar20) {
    puVar2 = puVar17;
  }
  puVar12 = puVar20 + 1;
  *puVar20 = uVar7;
  *puVar14 = uVar4;
  puVar17 = puVar2;
  goto LAB_02bbeb9c;
LAB_02bbef8c:
  param_2 = puVar20;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB_02bbea2c;
}


