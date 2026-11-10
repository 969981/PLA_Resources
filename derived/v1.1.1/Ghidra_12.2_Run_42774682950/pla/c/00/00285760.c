/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00285760; name: FUN_00285760
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00285760(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
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
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  
LAB_0028578c:
  pfVar11 = param_2 + -2;
  pfVar15 = param_2 + -4;
  pfVar13 = param_1;
LAB_00285798:
  param_1 = pfVar13;
  lVar9 = (long)param_2 - (long)param_1;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00285c70_caseD_0;
  case 2:
    if (*param_1 < param_2[-2]) {
      return;
    }
    if ((*param_1 <= param_2[-2]) && ((int)param_1[1] <= (int)param_2[-1])) {
      return;
    }
    uVar10 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar16 = param_1[2];
    if (fVar16 <= *param_1) {
      if (*param_1 <= fVar16) {
        bVar3 = (int)param_1[3] < (int)param_1[1];
        fVar17 = param_2[-2];
        goto joined_r0x00285e3c;
      }
      bVar3 = true;
      fVar17 = param_2[-2];
      if (fVar17 <= fVar16) goto LAB_00285d80;
LAB_00285ce8:
      bVar1 = false;
    }
    else {
      bVar3 = false;
      fVar17 = param_2[-2];
joined_r0x00285e3c:
      if (fVar16 < fVar17) goto LAB_00285ce8;
LAB_00285d80:
      if (fVar16 <= fVar17) {
        bVar1 = (int)param_2[-1] < (int)param_1[3];
      }
      else {
        bVar1 = true;
      }
    }
    if (!bVar3) {
      if (!bVar1) {
        return;
      }
      uVar10 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar10;
      if (*param_1 < param_1[2]) {
        return;
      }
      if ((*param_1 <= param_1[2]) && ((int)param_1[1] <= (int)param_1[3])) {
        return;
      }
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar10;
      return;
    }
    uVar10 = *(undefined8 *)param_1;
    if (!bVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if ((float)uVar10 < param_2[-2]) {
        return;
      }
      if (((float)uVar10 <= param_2[-2]) && ((int)((ulong)uVar10 >> 0x20) <= (int)param_2[-1])) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_00285d00;
    }
    break;
  case 4:
    FUN_00285e60(param_1,param_1 + 2,param_1 + 4,pfVar11,param_3);
    return;
  case 5:
    FUN_00286090(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar11,param_3);
    return;
  default:
    if (lVar9 < 0xf8) {
      FUN_002861c0(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pfVar13 = param_1 + ((long)uVar5 >> 1) * 2;
    if (0x1f38 < lVar9) {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00286090(param_1,(long)param_1 + lVar9,pfVar13,(long)pfVar13 + lVar9,pfVar11,
                           param_3);
      fVar16 = *param_1;
      fVar17 = *pfVar13;
      bVar3 = fVar16 < fVar17;
      iVar2 = iVar4;
      if (fVar16 <= fVar17) goto LAB_0028580c;
      goto LAB_00285910;
    }
    fVar16 = *pfVar13;
    if (fVar16 <= *param_1) {
      if (*param_1 <= fVar16) {
        bVar3 = (int)pfVar13[1] < (int)param_1[1];
        fVar17 = *pfVar11;
        goto joined_r0x00285bc8;
      }
      bVar3 = true;
      fVar17 = *pfVar11;
      if (fVar17 <= fVar16) goto LAB_00285888;
LAB_00285854:
      bVar1 = false;
joined_r0x00285858:
      if (!bVar3) goto LAB_00285894;
LAB_0028585c:
      uVar10 = *(undefined8 *)param_1;
      if (!bVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = uVar10;
        if (((float)uVar10 < *pfVar11) ||
           (((float)uVar10 <= *pfVar11 && ((int)((ulong)uVar10 >> 0x20) <= (int)param_2[-1]))))
        goto LAB_002858fc;
        *(undefined8 *)pfVar13 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
        goto LAB_00285c20;
      }
      *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
      *(undefined8 *)pfVar11 = uVar10;
LAB_002858fc:
      iVar4 = 1;
      fVar16 = *param_1;
      fVar17 = *pfVar13;
      bVar3 = fVar16 < fVar17;
      iVar2 = 1;
      if (fVar17 < fVar16) goto LAB_00285910;
LAB_0028580c:
      iVar4 = iVar2;
      if ((!bVar3) && ((int)pfVar13[1] <= (int)param_1[1])) goto LAB_00285910;
      pfVar8 = param_1 + 2;
      pfVar7 = pfVar11;
      if (pfVar8 < pfVar11) goto LAB_00285978;
    }
    else {
      bVar3 = false;
      fVar17 = *pfVar11;
joined_r0x00285bc8:
      if (fVar16 < fVar17) goto LAB_00285854;
LAB_00285888:
      if (fVar17 < fVar16) {
        bVar1 = true;
        goto joined_r0x00285858;
      }
      bVar1 = (int)param_2[-1] < (int)pfVar13[1];
      if (bVar3) goto LAB_0028585c;
LAB_00285894:
      if (bVar1) {
        uVar10 = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
        if ((*param_1 < *pfVar13) ||
           ((*param_1 <= *pfVar13 && ((int)param_1[1] <= (int)pfVar13[1])))) goto LAB_002858fc;
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = uVar10;
LAB_00285c20:
        iVar4 = 2;
        fVar16 = *param_1;
        fVar17 = *pfVar13;
        bVar3 = fVar16 < fVar17;
        iVar2 = 2;
        if (fVar16 <= fVar17) goto LAB_0028580c;
      }
      else {
        iVar4 = 0;
        fVar16 = *param_1;
        fVar17 = *pfVar13;
        bVar3 = fVar16 < fVar17;
        iVar2 = 0;
        if (fVar16 <= fVar17) goto LAB_0028580c;
      }
LAB_00285910:
      if (param_1 == pfVar15) {
LAB_00285aa4:
        pfVar7 = param_1 + 2;
        if ((*pfVar11 < fVar16) || ((*pfVar11 <= fVar16 && ((int)param_2[-1] <= (int)param_1[1]))))
        {
          if (pfVar7 == pfVar11) {
            return;
          }
          bVar3 = fVar16 < param_1[2];
          pfVar7 = param_1 + 4;
          if (fVar16 <= param_1[2]) goto LAB_00285af8;
          do {
            do {
              pfVar13 = pfVar7 + 2;
              if (param_2 == pfVar13) {
                return;
              }
              fVar17 = *pfVar7;
              bVar3 = fVar16 < fVar17;
              pfVar7 = pfVar13;
            } while (fVar16 != fVar17 && !bVar3);
LAB_00285af8:
          } while ((!bVar3) && ((int)pfVar7[-1] <= (int)param_1[1]));
          uVar10 = *(undefined8 *)(pfVar7 + -2);
          *(undefined8 *)(pfVar7 + -2) = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = uVar10;
        }
        if (pfVar7 == pfVar11) {
          return;
        }
        fVar16 = *param_1;
        bVar3 = fVar16 < *pfVar7;
        pfVar8 = pfVar11;
        pfVar13 = pfVar7;
        if (fVar16 <= *pfVar7) goto LAB_00285b6c;
        do {
          do {
            pfVar7 = pfVar7 + 2;
            bVar3 = fVar16 < *pfVar7;
            pfVar13 = pfVar7;
          } while (fVar16 != *pfVar7 && !bVar3);
LAB_00285b6c:
          do {
            if ((!bVar3) && (pfVar7 = pfVar13, (int)pfVar13[1] <= (int)param_1[1])) break;
            do {
              pfVar7 = pfVar8;
              pfVar8 = pfVar7 + -2;
              if (*pfVar8 < fVar16) break;
            } while ((fVar16 < *pfVar8) || ((int)param_1[1] < (int)pfVar7[-1]));
            if (pfVar8 <= pfVar13) goto LAB_00285798;
            uVar10 = *(undefined8 *)pfVar13;
            pfVar7 = pfVar13 + 2;
            *(undefined8 *)pfVar13 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar10;
            fVar16 = *param_1;
            bVar3 = fVar16 < *pfVar7;
            pfVar13 = pfVar7;
          } while (fVar16 <= *pfVar7);
        } while( true );
      }
      bVar3 = *pfVar15 < fVar17;
      pfVar7 = pfVar15;
      if (*pfVar15 <= fVar17) goto LAB_00285944;
      do {
        do {
          pfVar7 = pfVar7 + -2;
          if (param_1 == pfVar7) goto LAB_00285aa4;
          bVar3 = *pfVar7 < fVar17;
        } while (*pfVar7 != fVar17 && !bVar3);
LAB_00285944:
      } while ((!bVar3) && ((int)pfVar13[1] <= (int)pfVar7[1]));
      uVar10 = *(undefined8 *)param_1;
      iVar4 = iVar4 + 1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
      *(undefined8 *)pfVar7 = uVar10;
      pfVar8 = param_1 + 2;
      if (pfVar8 < pfVar7) {
LAB_00285978:
        pfVar14 = param_1 + 2;
        fVar17 = *pfVar14;
        fVar16 = *pfVar13;
        pfVar12 = pfVar13;
        pfVar8 = pfVar14;
        if (fVar17 <= fVar16) goto LAB_00285998;
LAB_002859b0:
        do {
          do {
            pfVar13 = pfVar7;
            pfVar7 = pfVar13 + -2;
          } while (fVar16 < *pfVar7);
        } while ((fVar16 <= *pfVar7) && ((int)pfVar12[1] <= (int)pfVar13[-1]));
        pfVar13 = pfVar12;
        if (pfVar8 <= pfVar7) {
          uVar10 = *(undefined8 *)pfVar8;
          iVar4 = iVar4 + 1;
          pfVar13 = pfVar7;
          if (pfVar12 != pfVar8) {
            pfVar13 = pfVar12;
          }
          pfVar14 = pfVar8 + 2;
          *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar10;
          fVar17 = *pfVar14;
          fVar16 = *pfVar13;
          pfVar12 = pfVar13;
          pfVar8 = pfVar14;
          if (fVar17 <= fVar16) {
LAB_00285998:
            do {
              pfVar12 = pfVar13;
              if ((fVar16 <= fVar17) && (pfVar8 = pfVar14, (int)pfVar13[1] <= (int)pfVar14[1]))
              break;
              pfVar14 = pfVar14 + 2;
              fVar17 = *pfVar14;
              pfVar8 = pfVar14;
            } while (fVar17 <= fVar16);
          }
          goto LAB_002859b0;
        }
      }
    }
    if (((pfVar8 != pfVar13) && (*pfVar13 <= *pfVar8)) &&
       ((*pfVar13 < *pfVar8 || ((int)pfVar13[1] < (int)pfVar8[1])))) {
      uVar10 = *(undefined8 *)pfVar8;
      iVar4 = iVar4 + 1;
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar13;
      *(undefined8 *)pfVar13 = uVar10;
    }
    if (iVar4 == 0) {
      uVar6 = FUN_002863c0(param_1,pfVar8,param_3);
      uVar5 = FUN_002863c0(pfVar8 + 2,param_2,param_3);
      if ((uVar5 & 1) != 0) goto LAB_00285c50;
      pfVar13 = pfVar8 + 2;
      if ((uVar6 & 1) != 0) goto LAB_00285798;
    }
    if ((long)param_2 - (long)pfVar8 <= (long)pfVar8 - (long)param_1) {
      FUN_00285760(pfVar8 + 2,param_2,param_3);
      param_2 = pfVar8;
      goto LAB_0028578c;
    }
    FUN_00285760(param_1,pfVar8,param_3);
    pfVar13 = pfVar8 + 2;
    goto LAB_00285798;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_00285d00:
  *(undefined8 *)(param_2 + -2) = uVar10;
  return;
LAB_00285c50:
  param_2 = pfVar8;
  if ((uVar6 & 1) != 0) {
switchD_00285c70_caseD_0:
    return;
  }
  goto LAB_0028578c;
}


