/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002867e0; name: FUN_002867e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002867e0(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
LAB_0028680c:
  pfVar11 = param_2 + -2;
  pfVar16 = param_2 + -4;
  pfVar13 = param_1;
LAB_00286818:
  param_1 = pfVar13;
  lVar9 = (long)param_2 - (long)param_1;
  uVar7 = lVar9 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00286cf0_caseD_0;
  case 2:
    if (param_2[-2] < *param_1) {
      return;
    }
    if ((param_2[-2] == *param_1) && ((int)param_1[1] <= (int)param_2[-1])) {
      return;
    }
    uVar10 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar17 = param_1[2];
    if (*param_1 <= fVar17) {
      if (fVar17 <= *param_1) {
        bVar3 = (int)param_1[3] < (int)param_1[1];
        fVar18 = param_2[-2];
        bVar1 = NAN(fVar18) || NAN(fVar17);
        goto joined_r0x00286ebc;
      }
      bVar3 = true;
      fVar18 = param_2[-2];
      bVar1 = NAN(fVar18) || NAN(fVar17);
      if (fVar17 <= fVar18) goto LAB_00286e00;
LAB_00286d68:
      bVar1 = false;
    }
    else {
      bVar3 = false;
      fVar18 = param_2[-2];
      bVar1 = NAN(fVar18) || NAN(fVar17);
joined_r0x00286ebc:
      if (fVar18 < fVar17) goto LAB_00286d68;
LAB_00286e00:
      if (fVar18 == fVar17 || bVar1) {
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
      if (param_1[2] < *param_1) {
        return;
      }
      if ((param_1[2] == *param_1) && ((int)param_1[1] <= (int)param_1[3])) {
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
      if (param_2[-2] < (float)uVar10) {
        return;
      }
      if ((param_2[-2] == (float)uVar10) && ((int)((ulong)uVar10 >> 0x20) <= (int)param_2[-1])) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_00286d80;
    }
    break;
  case 4:
    FUN_00286ee0(param_1,param_1 + 2,param_1 + 4,pfVar11,param_3);
    return;
  case 5:
    FUN_00287110(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar11,param_3);
    return;
  default:
    if (lVar9 < 0xf8) {
      FUN_00287240(param_1,param_2,param_3);
      return;
    }
    uVar6 = uVar7;
    if ((long)uVar7 < 0) {
      uVar6 = uVar7 + 1;
    }
    pfVar13 = param_1 + ((long)uVar6 >> 1) * 2;
    if (lVar9 < 0x1f39) {
      fVar17 = *pfVar13;
      if (fVar17 < *param_1) {
        bVar3 = false;
        fVar18 = *pfVar11;
        bVar1 = NAN(fVar18) || NAN(fVar17);
joined_r0x00286c48:
        if (fVar18 < fVar17) goto LAB_002868d4;
LAB_00286908:
        if (fVar18 != fVar17 && !bVar1) {
          bVar1 = true;
          goto joined_r0x002868d8;
        }
        bVar1 = (int)param_2[-1] < (int)pfVar13[1];
        if (bVar3) goto LAB_002868dc;
LAB_00286914:
        if (bVar1) {
          uVar10 = *(undefined8 *)pfVar13;
          *(undefined8 *)pfVar13 = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = uVar10;
          if ((*pfVar13 < *param_1) ||
             ((*pfVar13 == *param_1 && ((int)param_1[1] <= (int)pfVar13[1])))) goto LAB_0028697c;
          uVar10 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
          *(undefined8 *)pfVar13 = uVar10;
LAB_00286ca0:
          iVar5 = 2;
          iVar4 = 2;
          fVar17 = *param_1;
          fVar18 = *pfVar13;
          bVar3 = NAN(fVar17) || NAN(fVar18);
          bVar2 = fVar17 == fVar18;
          bVar1 = fVar17 < fVar18;
        }
        else {
          iVar5 = 0;
          iVar4 = 0;
          fVar17 = *param_1;
          fVar18 = *pfVar13;
          bVar3 = NAN(fVar17) || NAN(fVar18);
          bVar2 = fVar17 == fVar18;
          bVar1 = fVar17 < fVar18;
        }
        if (!bVar1) goto LAB_0028688c;
        goto LAB_00286990;
      }
      if (fVar17 <= *param_1) {
        bVar3 = (int)pfVar13[1] < (int)param_1[1];
        fVar18 = *pfVar11;
        bVar1 = NAN(fVar18) || NAN(fVar17);
        goto joined_r0x00286c48;
      }
      bVar3 = true;
      fVar18 = *pfVar11;
      bVar1 = NAN(fVar18) || NAN(fVar17);
      if (fVar17 <= fVar18) goto LAB_00286908;
LAB_002868d4:
      bVar1 = false;
joined_r0x002868d8:
      if (!bVar3) goto LAB_00286914;
LAB_002868dc:
      uVar10 = *(undefined8 *)param_1;
      if (!bVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = uVar10;
        if ((*pfVar11 < (float)uVar10) ||
           ((*pfVar11 <= (float)uVar10 && ((int)((ulong)uVar10 >> 0x20) <= (int)param_2[-1]))))
        goto LAB_0028697c;
        *(undefined8 *)pfVar13 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
        goto LAB_00286ca0;
      }
      *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
      *(undefined8 *)pfVar11 = uVar10;
LAB_0028697c:
      iVar4 = 1;
      fVar17 = *param_1;
      fVar18 = *pfVar13;
      bVar3 = NAN(fVar17) || NAN(fVar18);
      bVar2 = fVar17 == fVar18;
      bVar1 = false;
      iVar5 = 1;
      if (fVar17 < fVar18) goto LAB_00286990;
LAB_0028688c:
      iVar4 = iVar5;
      if ((bVar2 || bVar1 != bVar3) && ((int)pfVar13[1] <= (int)param_1[1])) goto LAB_00286990;
      pfVar15 = param_1 + 2;
      pfVar8 = pfVar11;
      if (pfVar15 < pfVar11) goto LAB_002869f8;
    }
    else {
      uVar6 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
      lVar9 = (uVar6 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00287110(param_1,(long)param_1 + lVar9,pfVar13,(long)pfVar13 + lVar9,pfVar11,
                           param_3);
      fVar17 = *param_1;
      fVar18 = *pfVar13;
      bVar3 = NAN(fVar17) || NAN(fVar18);
      bVar2 = fVar17 == fVar18;
      bVar1 = false;
      iVar5 = iVar4;
      if (fVar18 <= fVar17) goto LAB_0028688c;
LAB_00286990:
      if (param_1 == pfVar16) {
LAB_00286b24:
        pfVar13 = param_1 + 2;
        if ((fVar17 < *pfVar11) || ((fVar17 == *pfVar11 && ((int)param_2[-1] <= (int)param_1[1]))))
        {
          if (pfVar13 == pfVar11) {
            return;
          }
          fVar18 = param_1[2];
          bVar3 = NAN(fVar17) || NAN(fVar18);
          bVar1 = fVar17 < fVar18;
          pfVar13 = param_1 + 4;
          if (!bVar1) goto LAB_00286b78;
          do {
            do {
              pfVar8 = pfVar13 + 2;
              if (param_2 == pfVar8) {
                return;
              }
              fVar18 = *pfVar13;
              bVar3 = NAN(fVar17) || NAN(fVar18);
              bVar1 = false;
              pfVar13 = pfVar8;
            } while (fVar17 < fVar18);
LAB_00286b78:
          } while ((fVar17 == fVar18 || bVar1 != bVar3) && ((int)pfVar13[-1] <= (int)param_1[1]));
          uVar10 = *(undefined8 *)(pfVar13 + -2);
          *(undefined8 *)(pfVar13 + -2) = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = uVar10;
        }
        if (pfVar13 == pfVar11) {
          return;
        }
        fVar17 = *param_1;
        fVar18 = *pfVar13;
        bVar3 = NAN(fVar17) || NAN(fVar18);
        bVar2 = fVar17 == fVar18;
        bVar1 = fVar17 < fVar18;
        pfVar8 = pfVar11;
        do {
          if (!bVar1) goto LAB_00286bec;
          do {
            do {
              pfVar13 = pfVar13 + 2;
              fVar18 = *pfVar13;
              bVar3 = NAN(fVar17) || NAN(fVar18);
              bVar2 = fVar17 == fVar18;
              bVar1 = false;
            } while (fVar17 < fVar18);
LAB_00286bec:
          } while ((bVar2 || bVar1 != bVar3) && ((int)pfVar13[1] <= (int)param_1[1]));
          do {
            pfVar15 = pfVar8;
            pfVar8 = pfVar15 + -2;
            if (fVar17 < *pfVar8) break;
          } while ((*pfVar8 < fVar17) || ((int)param_1[1] < (int)pfVar15[-1]));
          if (pfVar8 <= pfVar13) goto LAB_00286818;
          uVar10 = *(undefined8 *)pfVar13;
          *(undefined8 *)pfVar13 = *(undefined8 *)pfVar8;
          *(undefined8 *)pfVar8 = uVar10;
          fVar17 = *param_1;
          fVar18 = pfVar13[2];
          bVar3 = NAN(fVar17) || NAN(fVar18);
          bVar2 = fVar17 == fVar18;
          bVar1 = fVar17 < fVar18;
          pfVar13 = pfVar13 + 2;
        } while( true );
      }
      fVar19 = *pfVar16;
      bVar3 = NAN(fVar19) || NAN(fVar18);
      bVar1 = fVar19 < fVar18;
      pfVar8 = pfVar16;
      if (!bVar1) goto LAB_002869c4;
      do {
        do {
          pfVar8 = pfVar8 + -2;
          if (param_1 == pfVar8) goto LAB_00286b24;
          fVar19 = *pfVar8;
          bVar3 = NAN(fVar19) || NAN(fVar18);
          bVar1 = false;
        } while (fVar19 < fVar18);
LAB_002869c4:
      } while ((fVar19 == fVar18 || bVar1 != bVar3) && ((int)pfVar13[1] <= (int)pfVar8[1]));
      uVar10 = *(undefined8 *)param_1;
      iVar4 = iVar4 + 1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar10;
      pfVar15 = param_1 + 2;
      if (pfVar15 < pfVar8) {
LAB_002869f8:
        pfVar14 = param_1 + 2;
        fVar18 = *pfVar14;
        fVar17 = *pfVar13;
        pfVar12 = pfVar13;
        pfVar15 = pfVar14;
        if (fVar17 <= fVar18) goto LAB_00286a18;
LAB_00286a30:
        do {
          do {
            pfVar13 = pfVar8;
            pfVar8 = pfVar13 + -2;
          } while (*pfVar8 < fVar17);
        } while ((*pfVar8 == fVar17) && ((int)pfVar12[1] <= (int)pfVar13[-1]));
        pfVar13 = pfVar12;
        if (pfVar15 <= pfVar8) {
          uVar10 = *(undefined8 *)pfVar15;
          iVar4 = iVar4 + 1;
          pfVar13 = pfVar8;
          if (pfVar12 != pfVar15) {
            pfVar13 = pfVar12;
          }
          pfVar14 = pfVar15 + 2;
          *(undefined8 *)pfVar15 = *(undefined8 *)pfVar8;
          *(undefined8 *)pfVar8 = uVar10;
          fVar18 = *pfVar14;
          fVar17 = *pfVar13;
          pfVar12 = pfVar13;
          pfVar15 = pfVar14;
          if (fVar17 <= fVar18) {
LAB_00286a18:
            do {
              pfVar12 = pfVar13;
              if ((fVar18 <= fVar17) && (pfVar15 = pfVar14, (int)pfVar13[1] <= (int)pfVar14[1]))
              break;
              pfVar14 = pfVar14 + 2;
              fVar18 = *pfVar14;
              pfVar15 = pfVar14;
            } while (fVar17 <= fVar18);
          }
          goto LAB_00286a30;
        }
      }
    }
    if (((pfVar15 != pfVar13) && (*pfVar15 <= *pfVar13)) &&
       ((*pfVar13 != *pfVar15 || ((int)pfVar13[1] < (int)pfVar15[1])))) {
      uVar10 = *(undefined8 *)pfVar15;
      iVar4 = iVar4 + 1;
      *(undefined8 *)pfVar15 = *(undefined8 *)pfVar13;
      *(undefined8 *)pfVar13 = uVar10;
    }
    if (iVar4 == 0) {
      uVar7 = FUN_00287440(param_1,pfVar15,param_3);
      uVar6 = FUN_00287440(pfVar15 + 2,param_2,param_3);
      if ((uVar6 & 1) != 0) goto LAB_00286cd0;
      pfVar13 = pfVar15 + 2;
      if ((uVar7 & 1) != 0) goto LAB_00286818;
    }
    if ((long)param_2 - (long)pfVar15 <= (long)pfVar15 - (long)param_1) {
      FUN_002867e0(pfVar15 + 2,param_2,param_3);
      param_2 = pfVar15;
      goto LAB_0028680c;
    }
    FUN_002867e0(param_1,pfVar15,param_3);
    pfVar13 = pfVar15 + 2;
    goto LAB_00286818;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_00286d80:
  *(undefined8 *)(param_2 + -2) = uVar10;
  return;
LAB_00286cd0:
  param_2 = pfVar15;
  if ((uVar7 & 1) != 0) {
switchD_00286cf0_caseD_0:
    return;
  }
  goto LAB_0028680c;
}


