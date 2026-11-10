/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00287860; name: FUN_00287860
 */


void FUN_00287860(float *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
LAB_0028788c:
  pfVar11 = param_2 + -2;
  pfVar13 = param_2 + -4;
  pfVar7 = param_1;
LAB_00287898:
  param_1 = pfVar7;
  lVar9 = (long)param_2 - (long)param_1;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00287dec_caseD_0;
  case 2:
    fVar14 = param_2[-2];
    fVar15 = *param_1;
    if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
      if (fVar15 <= fVar14) {
        return;
      }
    }
    else if (fVar14 <= fVar15) {
      return;
    }
    uVar10 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar14 = param_1[2];
    fVar15 = *param_1;
    if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
      bVar2 = fVar14 < fVar15;
      fVar15 = param_2[-2];
      if (fVar14 < 0.0) goto LAB_00287ee4;
LAB_00287f30:
      bVar3 = fVar15 < fVar14;
    }
    else {
      bVar2 = fVar15 < fVar14;
      fVar15 = param_2[-2];
      if (0.0 <= fVar14) goto LAB_00287f30;
LAB_00287ee4:
      if (0.0 <= fVar15) goto LAB_00287f30;
      bVar3 = fVar14 < fVar15;
    }
    if (!bVar2) {
      if (!bVar3) {
        return;
      }
      uVar10 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar10;
      fVar14 = param_1[2];
      fVar15 = *param_1;
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar15 <= fVar14) {
          return;
        }
      }
      else if (fVar14 <= fVar15) {
        return;
      }
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar10;
      return;
    }
    uVar10 = *(undefined8 *)param_1;
    if (!bVar3) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar10;
      fVar14 = (float)uVar10;
      fVar15 = param_2[-2];
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar14 <= fVar15) {
          return;
        }
      }
      else if (fVar15 <= fVar14) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_00287f84;
    }
    break;
  case 4:
    FUN_00287fd0(param_1,param_1 + 2,param_1 + 4,pfVar11,param_3);
    return;
  case 5:
    FUN_002881f0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar11,param_3);
    return;
  default:
    if (lVar9 < 0xf8) {
      FUN_00288340(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pfVar7 = param_1 + (uVar5 & 0x3ffffffffffffffe);
    if (lVar9 < 0x1f39) {
      fVar14 = *pfVar7;
      fVar15 = *param_1;
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        bVar2 = fVar14 < fVar15;
        fVar15 = *pfVar11;
        if (fVar14 < 0.0) goto LAB_00287a04;
LAB_00287a64:
        bVar3 = fVar15 < fVar14;
        if (bVar2) goto LAB_00287a70;
LAB_00287a18:
        if (bVar3) {
          uVar10 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = uVar10;
          fVar14 = *pfVar7;
          fVar15 = *param_1;
          if ((fVar14 < 0.0) && (fVar15 < 0.0)) {
            if (fVar15 < fVar14) goto LAB_00287d74;
            goto LAB_00287a84;
          }
          if (fVar15 <= fVar14) goto LAB_00287a84;
LAB_00287d74:
          uVar10 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar10;
LAB_00287d9c:
          iVar4 = 2;
          fVar14 = *param_1;
          fVar15 = *pfVar7;
        }
        else {
          iVar4 = 0;
          fVar14 = *param_1;
          fVar15 = *pfVar7;
        }
      }
      else {
        bVar2 = fVar15 < fVar14;
        fVar15 = *pfVar11;
        if (0.0 <= fVar14) goto LAB_00287a64;
LAB_00287a04:
        if (0.0 <= fVar15) goto LAB_00287a64;
        bVar3 = fVar14 < fVar15;
        if (!bVar2) goto LAB_00287a18;
LAB_00287a70:
        uVar10 = *(undefined8 *)param_1;
        if (bVar3) {
          *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = uVar10;
        }
        else {
          *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
          fVar14 = (float)uVar10;
          *(undefined8 *)pfVar7 = uVar10;
          fVar15 = *pfVar11;
          if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
            if (fVar15 < fVar14) goto LAB_00287d90;
          }
          else if (fVar14 < fVar15) {
LAB_00287d90:
            *(undefined8 *)pfVar7 = *(undefined8 *)pfVar11;
            *(undefined8 *)pfVar11 = uVar10;
            goto LAB_00287d9c;
          }
        }
LAB_00287a84:
        iVar4 = 1;
        fVar14 = *param_1;
        fVar15 = *pfVar7;
      }
      if (fVar14 < 0.0) goto LAB_00287910;
LAB_00287a98:
      if (fVar14 < fVar15) goto joined_r0x00287aac;
LAB_00287adc:
      if (param_1 == pfVar13) {
LAB_00287b44:
        fVar15 = *pfVar11;
        pfVar7 = param_1 + 2;
        if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
          if (fVar14 < fVar15) goto LAB_00287c54;
        }
        else if (fVar15 < fVar14) goto LAB_00287c54;
        if (pfVar7 == pfVar11) {
          return;
        }
        pfVar7 = param_1 + 4;
        if (fVar14 < 0.0) {
          do {
            fVar15 = pfVar7[-2];
            if (fVar15 < 0.0) {
              if (fVar15 < fVar14) goto LAB_00287c40;
            }
            else if (fVar14 < fVar15) goto LAB_00287c40;
            pfVar7 = pfVar7 + 2;
            if (param_2 == pfVar7) {
              return;
            }
          } while( true );
        }
        while (pfVar7[-2] <= fVar14) {
          pfVar7 = pfVar7 + 2;
          if (param_2 == pfVar7) {
            return;
          }
        }
LAB_00287c40:
        uVar10 = *(undefined8 *)(pfVar7 + -2);
        *(undefined8 *)(pfVar7 + -2) = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
LAB_00287c54:
        if (pfVar7 == pfVar11) {
          return;
        }
        fVar14 = *param_1;
        pfVar8 = pfVar11;
        do {
          if (fVar14 < 0.0) {
            do {
              fVar15 = *pfVar7;
              if (fVar15 < 0.0) {
                if (fVar15 < fVar14) goto LAB_00287cc0;
              }
              else if (fVar14 < fVar15) goto LAB_00287cc0;
              pfVar7 = pfVar7 + 2;
            } while( true );
          }
          pfVar7 = pfVar7 + -2;
          do {
            pfVar7 = pfVar7 + 2;
          } while (*pfVar7 <= fVar14);
LAB_00287cc0:
          if (fVar14 < 0.0) {
            do {
              while( true ) {
                pfVar8 = pfVar8 + -2;
                fVar15 = *pfVar8;
                if (0.0 <= fVar15) break;
                if (fVar14 <= fVar15) goto LAB_00287cf4;
              }
            } while (fVar14 < fVar15);
          }
          else {
            do {
              pfVar8 = pfVar8 + -2;
            } while (fVar14 < *pfVar8);
          }
LAB_00287cf4:
          if (pfVar8 <= pfVar7) goto LAB_00287898;
          uVar10 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
          *(undefined8 *)pfVar8 = uVar10;
          fVar14 = *param_1;
          pfVar7 = pfVar7 + 2;
        } while( true );
      }
      pfVar8 = pfVar13;
      if (0.0 <= fVar15) {
        do {
          if (*pfVar8 < fVar15) goto LAB_00287d00;
          pfVar8 = pfVar8 + -2;
        } while (param_1 != pfVar8);
        goto LAB_00287b44;
      }
      fVar16 = *pfVar13;
      if (0.0 <= fVar16) goto LAB_00287b20;
      while (fVar16 <= fVar15) {
        while( true ) {
          pfVar8 = pfVar8 + -2;
          if (param_1 == pfVar8) goto LAB_00287b44;
          fVar16 = *pfVar8;
          if (fVar16 < 0.0) break;
LAB_00287b20:
          if (fVar16 < fVar15) goto LAB_00287d00;
        }
      }
LAB_00287d00:
      uVar10 = *(undefined8 *)param_1;
      iVar4 = iVar4 + 1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar10;
      pfVar12 = param_1 + 2;
      if (pfVar12 < pfVar8) goto LAB_00287930;
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_002881f0(param_1,(long)param_1 + lVar9,pfVar7,(long)pfVar7 + lVar9,pfVar11,param_3
                          );
      fVar14 = *param_1;
      fVar15 = *pfVar7;
      if (0.0 <= fVar14) goto LAB_00287a98;
LAB_00287910:
      if (0.0 <= fVar15) goto LAB_00287a98;
      if (fVar14 <= fVar15) goto LAB_00287adc;
joined_r0x00287aac:
      pfVar12 = param_1 + 2;
      pfVar8 = pfVar11;
      if (pfVar12 < pfVar11) {
LAB_00287930:
        fVar14 = *pfVar7;
        pfVar12 = param_1;
        do {
          pfVar12 = pfVar12 + 2;
          if (fVar14 < 0.0) {
            do {
              fVar15 = *pfVar12;
              if (fVar15 < 0.0) {
                if (fVar15 <= fVar14) goto LAB_00287970;
              }
              else if (fVar14 <= fVar15) goto LAB_00287970;
              pfVar12 = pfVar12 + 2;
            } while( true );
          }
          pfVar12 = pfVar12 + -2;
          do {
            pfVar12 = pfVar12 + 2;
          } while (*pfVar12 < fVar14);
LAB_00287970:
          if (fVar14 < 0.0) {
            do {
              while( true ) {
                pfVar8 = pfVar8 + -2;
                fVar15 = *pfVar8;
                if (0.0 <= fVar15) break;
                if (fVar14 < fVar15) goto LAB_002879a4;
              }
            } while (fVar14 <= fVar15);
          }
          else {
            do {
              pfVar8 = pfVar8 + -2;
            } while (fVar14 <= *pfVar8);
          }
LAB_002879a4:
          if (pfVar8 < pfVar12) break;
          uVar10 = *(undefined8 *)pfVar12;
          iVar4 = iVar4 + 1;
          pfVar1 = pfVar8;
          if (pfVar7 != pfVar12) {
            pfVar1 = pfVar7;
          }
          *(undefined8 *)pfVar12 = *(undefined8 *)pfVar8;
          *(undefined8 *)pfVar8 = uVar10;
          fVar14 = *pfVar1;
          pfVar7 = pfVar1;
        } while( true );
      }
    }
    if (pfVar12 != pfVar7) {
      fVar14 = *pfVar7;
      fVar15 = *pfVar12;
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar14 < fVar15) goto LAB_00287b70;
      }
      else if (fVar15 < fVar14) {
LAB_00287b70:
        uVar10 = *(undefined8 *)pfVar12;
        iVar4 = iVar4 + 1;
        *(undefined8 *)pfVar12 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = uVar10;
      }
    }
    if (iVar4 == 0) {
      uVar6 = FUN_00288580(param_1,pfVar12,param_3);
      uVar5 = FUN_00288580(pfVar12 + 2,param_2,param_3);
      if ((uVar5 & 1) != 0) goto LAB_00287dcc;
      pfVar7 = pfVar12 + 2;
      if ((uVar6 & 1) != 0) goto LAB_00287898;
    }
    if ((long)param_2 - (long)pfVar12 <= (long)pfVar12 - (long)param_1) {
      FUN_00287860(pfVar12 + 2,param_2,param_3);
      param_2 = pfVar12;
      goto LAB_0028788c;
    }
    FUN_00287860(param_1,pfVar12,param_3);
    pfVar7 = pfVar12 + 2;
    goto LAB_00287898;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_00287f84:
  *(undefined8 *)(param_2 + -2) = uVar10;
  return;
LAB_00287dcc:
  param_2 = pfVar12;
  if ((uVar6 & 1) != 0) {
switchD_00287dec_caseD_0:
    return;
  }
  goto LAB_0028788c;
}


