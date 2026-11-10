/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002896f0; name: FUN_002896f0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_002896f0(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
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
    fVar14 = param_2[-2];
    fVar15 = *param_1;
    if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
      if (fVar14 <= fVar15) {
        return true;
      }
    }
    else if (fVar15 <= fVar14) {
      return true;
    }
    uVar7 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar14 = param_1[2];
    fVar15 = *param_1;
    if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
      bVar2 = fVar15 < fVar14;
      fVar15 = param_2[-2];
      if (fVar14 < 0.0) goto LAB_00289760;
LAB_002898a8:
      bVar1 = fVar14 < fVar15;
    }
    else {
      bVar2 = fVar14 < fVar15;
      fVar15 = param_2[-2];
      if (0.0 <= fVar14) goto LAB_002898a8;
LAB_00289760:
      if (0.0 <= fVar15) goto LAB_002898a8;
      bVar1 = fVar15 < fVar14;
    }
    if (!bVar2) {
      if (!bVar1) {
        return true;
      }
      uVar7 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar7;
      fVar14 = param_1[2];
      fVar15 = *param_1;
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar14 <= fVar15) {
          return true;
        }
      }
      else if (fVar15 <= fVar14) {
        return true;
      }
      uVar7 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar7;
      return true;
    }
    uVar7 = *(undefined8 *)param_1;
    if (!bVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar7;
      fVar14 = (float)uVar7;
      fVar15 = param_2[-2];
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar15 <= fVar14) {
          return true;
        }
      }
      else if (fVar14 <= fVar15) {
        return true;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_00289944;
    }
    break;
  case 4:
    FUN_00289140(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    return true;
  case 5:
    FUN_00289360(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    fVar15 = param_1[2];
    fVar14 = *param_1;
    pfVar3 = param_1 + 4;
    if ((0.0 <= fVar15) || (0.0 <= fVar14)) {
      bVar2 = fVar14 < fVar15;
      fVar13 = *pfVar3;
      if (fVar15 < 0.0) goto LAB_002897dc;
LAB_002898fc:
      bVar1 = fVar15 < fVar13;
      if (bVar2) {
LAB_00289908:
        uVar7 = *(undefined8 *)param_1;
        fVar14 = (float)uVar7;
        if (bVar1) {
          uVar6 = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(param_1 + 4) = uVar7;
          *(undefined8 *)param_1 = uVar6;
          fVar13 = fVar14;
        }
        else {
          *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = uVar7;
          if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
            if (fVar13 <= fVar14) goto joined_r0x00289928;
          }
          else if (fVar14 <= fVar13) goto joined_r0x00289928;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(param_1 + 4) = uVar7;
          fVar13 = fVar14;
        }
        goto joined_r0x00289928;
      }
    }
    else {
      bVar2 = fVar15 < fVar14;
      fVar13 = *pfVar3;
      if (0.0 <= fVar15) goto LAB_002898fc;
LAB_002897dc:
      if (0.0 <= fVar13) goto LAB_002898fc;
      bVar1 = fVar13 < fVar15;
      if (bVar2) goto LAB_00289908;
    }
    if (bVar1) {
      uVar7 = *(undefined8 *)(param_1 + 2);
      uVar6 = *(undefined8 *)(param_1 + 4);
      fVar15 = (float)uVar6;
      fVar13 = (float)uVar7;
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar7;
      if ((0.0 <= fVar14) || (0.0 <= fVar15)) {
        if (fVar15 <= fVar14) goto joined_r0x00289928;
      }
      else if (fVar14 <= fVar15) goto joined_r0x00289928;
      uVar7 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_1 + 2) = uVar7;
    }
joined_r0x00289928:
    if (param_1 + 6 == param_2) {
      return true;
    }
    pfVar8 = param_1 + 6;
    lVar4 = 0;
    iVar5 = 0;
    fVar14 = *pfVar8;
    if (0.0 <= fVar14) goto LAB_00289a20;
    do {
      if (0.0 <= fVar13) goto LAB_00289a20;
      if (fVar14 < fVar13) goto LAB_00289a28;
      while( true ) {
        pfVar3 = pfVar8;
        pfVar8 = pfVar3 + 2;
        if (pfVar8 == param_2) {
          return true;
        }
        fVar13 = *pfVar3;
        lVar4 = lVar4 + 8;
        fVar14 = *pfVar8;
        if (fVar14 < 0.0) break;
LAB_00289a20:
        if (fVar13 < fVar14) {
LAB_00289a28:
          fVar15 = pfVar8[1];
          *(undefined8 *)pfVar8 = *(undefined8 *)pfVar3;
          pfVar12 = param_1;
          if (pfVar3 != param_1) {
            lVar11 = lVar4;
            if (0.0 <= fVar14) {
              do {
                if (fVar14 <= *(float *)((long)param_1 + lVar11 + 8)) {
                  pfVar12 = (float *)((long)param_1 + lVar11 + 0x10);
                  break;
                }
                bVar2 = lVar11 != -8;
                *(undefined8 *)((long)param_1 + lVar11 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar11 + 8);
                lVar11 = lVar11 + -8;
              } while (bVar2);
            }
            else {
              lVar11 = (long)param_1 + lVar4;
              fVar13 = *(float *)(lVar11 + 8);
              lVar10 = lVar4;
              if (fVar13 < 0.0) goto LAB_00289a90;
              while (lVar9 = lVar10, fVar13 < fVar14) {
                while( true ) {
                  lVar10 = lVar9 + -8;
                  pfVar3 = pfVar3 + -2;
                  *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 8);
                  if (lVar9 == -8) goto LAB_00289ad8;
                  lVar11 = (long)param_1 + lVar10;
                  fVar13 = *(float *)(lVar11 + 8);
                  if (0.0 <= fVar13) break;
LAB_00289a90:
                  lVar9 = lVar10;
                  if (fVar13 <= fVar14) {
                    pfVar12 = pfVar3;
                    goto LAB_00289ad8;
                  }
                }
              }
              pfVar12 = (float *)(lVar11 + 0x10);
            }
          }
LAB_00289ad8:
          iVar5 = iVar5 + 1;
          *pfVar12 = fVar14;
          pfVar12[1] = fVar15;
          if (iVar5 == 8) {
            return pfVar8 + 2 == param_2;
          }
        }
      }
    } while( true );
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_00289944:
  *(undefined8 *)(param_2 + -2) = uVar7;
  return true;
}


