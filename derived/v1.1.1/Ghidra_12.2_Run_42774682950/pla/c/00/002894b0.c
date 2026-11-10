/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002894b0; name: FUN_002894b0
 */


void FUN_002894b0(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = param_1[2];
  fVar13 = *param_1;
  pfVar3 = param_1 + 4;
  if ((0.0 <= fVar14) || (0.0 <= fVar13)) {
    bVar2 = fVar13 < fVar14;
    fVar12 = *pfVar3;
    if (fVar14 < 0.0) goto LAB_002894e0;
LAB_00289538:
    bVar1 = fVar14 < fVar12;
    if (bVar2) {
LAB_00289544:
      uVar6 = *(undefined8 *)param_1;
      fVar13 = (float)uVar6;
      if (bVar1) {
        uVar5 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = uVar6;
        *(undefined8 *)param_1 = uVar5;
        fVar12 = fVar13;
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar6;
        if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
          if (fVar12 <= fVar13) goto joined_r0x00289564;
        }
        else if (fVar13 <= fVar12) goto joined_r0x00289564;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = uVar6;
        fVar12 = fVar13;
      }
      goto joined_r0x00289564;
    }
  }
  else {
    bVar2 = fVar14 < fVar13;
    fVar12 = *pfVar3;
    if (0.0 <= fVar14) goto LAB_00289538;
LAB_002894e0:
    if (0.0 <= fVar12) goto LAB_00289538;
    bVar1 = fVar12 < fVar14;
    if (bVar2) goto LAB_00289544;
  }
  if (bVar1) {
    uVar6 = *(undefined8 *)(param_1 + 2);
    uVar5 = *(undefined8 *)(param_1 + 4);
    fVar14 = (float)uVar5;
    fVar12 = (float)uVar6;
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar6;
    if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
      if (fVar14 <= fVar13) goto joined_r0x00289564;
    }
    else if (fVar13 <= fVar14) goto joined_r0x00289564;
    uVar6 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
joined_r0x00289564:
  if (param_1 + 6 == param_2) {
    return;
  }
  pfVar7 = param_1 + 6;
  lVar4 = 0;
  fVar13 = *pfVar7;
  if (fVar13 < 0.0) goto LAB_00289608;
LAB_0028961c:
  if (fVar13 <= fVar12) goto LAB_002896dc;
  do {
    fVar14 = pfVar7[1];
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar3;
    pfVar11 = param_1;
    if (pfVar3 != param_1) {
      lVar10 = lVar4;
      if (0.0 <= fVar13) {
        do {
          if (fVar13 <= *(float *)((long)param_1 + lVar10 + 8)) {
            pfVar11 = (float *)((long)param_1 + lVar10 + 0x10);
            break;
          }
          bVar2 = lVar10 != -8;
          *(undefined8 *)((long)param_1 + lVar10 + 0x10) =
               *(undefined8 *)((long)param_1 + lVar10 + 8);
          lVar10 = lVar10 + -8;
        } while (bVar2);
      }
      else {
        lVar10 = (long)param_1 + lVar4;
        fVar12 = *(float *)(lVar10 + 8);
        lVar9 = lVar4;
        if (fVar12 < 0.0) goto LAB_0028968c;
        while (lVar8 = lVar9, fVar12 < fVar13) {
          while( true ) {
            lVar9 = lVar8 + -8;
            pfVar3 = pfVar3 + -2;
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 8);
            if (lVar8 == -8) goto LAB_002896d4;
            lVar10 = (long)param_1 + lVar9;
            fVar12 = *(float *)(lVar10 + 8);
            if (0.0 <= fVar12) break;
LAB_0028968c:
            lVar8 = lVar9;
            if (fVar12 <= fVar13) {
              pfVar11 = pfVar3;
              goto LAB_002896d4;
            }
          }
        }
        pfVar11 = (float *)(lVar10 + 0x10);
      }
    }
LAB_002896d4:
    *pfVar11 = fVar13;
    pfVar11[1] = fVar14;
LAB_002896dc:
    do {
      pfVar3 = pfVar7;
      pfVar7 = pfVar3 + 2;
      if (pfVar7 == param_2) {
        return;
      }
      fVar12 = *pfVar3;
      lVar4 = lVar4 + 8;
      fVar13 = *pfVar7;
      if (0.0 <= fVar13) goto LAB_0028961c;
LAB_00289608:
      if (0.0 <= fVar12) goto LAB_0028961c;
    } while (fVar12 <= fVar13);
  } while( true );
}


