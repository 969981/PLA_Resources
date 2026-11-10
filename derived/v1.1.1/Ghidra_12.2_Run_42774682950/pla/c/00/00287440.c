/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00287440; name: FUN_00287440
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00287440(float *param_1,float *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    if (param_2[-2] < *param_1) {
      return true;
    }
    if ((param_2[-2] == *param_1) && ((int)param_1[1] <= (int)param_2[-1])) {
      return true;
    }
    uVar6 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar14 = param_1[2];
    if (*param_1 <= fVar14) {
      if (fVar14 <= *param_1) {
        bVar4 = (int)param_1[3] < (int)param_1[1];
        fVar15 = param_2[-2];
        bVar3 = NAN(fVar15) || NAN(fVar14);
        goto joined_r0x00287690;
      }
      bVar4 = true;
      fVar15 = param_2[-2];
      bVar3 = NAN(fVar15) || NAN(fVar14);
      if (fVar15 < fVar14) goto LAB_00287524;
LAB_00287694:
      if (fVar15 == fVar14 || bVar3) {
        bVar3 = (int)param_2[-1] < (int)param_1[3];
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar4 = false;
      fVar15 = param_2[-2];
      bVar3 = NAN(fVar15) || NAN(fVar14);
joined_r0x00287690:
      if (fVar14 <= fVar15) goto LAB_00287694;
LAB_00287524:
      bVar3 = false;
    }
    if (!bVar4) {
      if (bVar3) {
        uVar6 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar6;
        if ((*param_1 <= param_1[2]) &&
           ((*param_1 < param_1[2] || ((int)param_1[3] < (int)param_1[1])))) {
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = uVar6;
          return true;
        }
      }
      return true;
    }
    uVar6 = *(undefined8 *)param_1;
    if (!bVar3) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
      if (param_2[-2] < (float)uVar6) {
        return true;
      }
      if ((param_2[-2] == (float)uVar6) && ((int)((ulong)uVar6 >> 0x20) <= (int)param_2[-1])) {
        return true;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_0028753c;
    }
    break;
  case 4:
    FUN_00286ee0(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    return true;
  case 5:
    FUN_00287110(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    fVar15 = param_1[2];
    pfVar5 = param_1 + 4;
    fVar14 = *param_1;
    if (fVar14 <= fVar15) {
      if (fVar14 < fVar15) {
        uVar1 = true;
        fVar13 = *pfVar5;
        uVar2 = NAN(fVar13) || NAN(fVar15);
      }
      else {
        uVar1 = (int)param_1[3] < (int)param_1[1];
        fVar13 = *pfVar5;
        uVar2 = NAN(fVar13) || NAN(fVar15);
      }
    }
    else {
      uVar1 = false;
      fVar13 = *pfVar5;
      uVar2 = NAN(fVar13) || NAN(fVar15);
    }
    if (fVar13 < fVar15) {
      uVar2 = false;
    }
    else if (fVar13 == fVar15 || (bool)uVar2) {
      uVar2 = (int)param_1[5] < (int)param_1[3];
    }
    else {
      uVar2 = true;
    }
    if ((bool)uVar1) {
      uVar6 = *(undefined8 *)param_1;
      fVar14 = (float)uVar6;
      if ((bool)uVar2) {
        uVar9 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = uVar6;
        *(undefined8 *)param_1 = uVar9;
        fVar13 = fVar14;
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar6;
        if ((fVar14 <= fVar13) &&
           ((fVar13 != fVar14 || ((int)param_1[5] < (int)((ulong)uVar6 >> 0x20))))) {
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(param_1 + 4) = uVar6;
          fVar13 = fVar14;
        }
      }
    }
    else if ((bool)uVar2) {
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)(param_1 + 4);
      fVar13 = (float)uVar6;
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)(param_1 + 4) = uVar6;
      if ((fVar14 <= (float)uVar9) &&
         ((fVar14 < (float)uVar9 || ((int)((ulong)uVar9 >> 0x20) < (int)param_1[1])))) {
        uVar6 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 2) = uVar6;
      }
    }
    if (param_1 + 6 == param_2) {
      return true;
    }
    pfVar10 = param_1 + 6;
    lVar7 = 0;
    iVar8 = 0;
    fVar14 = *pfVar10;
    bVar4 = NAN(fVar14) || NAN(fVar13);
    bVar3 = fVar14 == fVar13;
    if (fVar14 < fVar13) goto LAB_002877c4;
    do {
      fVar15 = pfVar10[1];
      if ((!bVar3 && !bVar4) || ((int)fVar15 < (int)pfVar5[1])) {
        *(undefined8 *)pfVar10 = *(undefined8 *)pfVar5;
        pfVar12 = param_1;
        if (pfVar5 != param_1) {
          lVar11 = lVar7;
          do {
            fVar13 = *(float *)((long)param_1 + lVar11 + 8);
            pfVar12 = pfVar5;
            if (fVar14 < fVar13) goto LAB_002877b0;
            if ((fVar14 <= fVar13) && (*(int *)((long)param_1 + lVar11 + 0xc) <= (int)fVar15)) {
              pfVar12 = (float *)((long)param_1 + lVar11 + 0x10);
              goto LAB_002877b0;
            }
            bVar4 = lVar11 != -8;
            *(undefined8 *)((long)param_1 + lVar11 + 0x10) =
                 *(undefined8 *)((long)param_1 + lVar11 + 8);
            lVar11 = lVar11 + -8;
            pfVar5 = pfVar5 + -2;
          } while (bVar4);
          pfVar12 = param_1;
        }
LAB_002877b0:
        iVar8 = iVar8 + 1;
        *pfVar12 = fVar14;
        pfVar12[1] = fVar15;
        if (iVar8 == 8) {
          return pfVar10 + 2 == param_2;
        }
      }
LAB_002877c4:
      do {
        pfVar5 = pfVar10;
        pfVar10 = pfVar5 + 2;
        if (pfVar10 == param_2) {
          return true;
        }
        fVar15 = *pfVar5;
        lVar7 = lVar7 + 8;
        fVar14 = *pfVar10;
        bVar4 = NAN(fVar14) || NAN(fVar15);
        bVar3 = fVar14 == fVar15;
      } while (fVar14 < fVar15);
    } while( true );
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_0028753c:
  *(undefined8 *)(param_2 + -2) = uVar6;
  return true;
}


