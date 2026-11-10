/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00287240; name: FUN_00287240
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00287240(float *param_1,float *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = param_1[2];
  pfVar5 = param_1 + 4;
  fVar13 = *param_1;
  if (fVar13 <= fVar14) {
    if (fVar13 < fVar14) {
      uVar1 = true;
      fVar12 = *pfVar5;
      uVar2 = NAN(fVar12) || NAN(fVar14);
    }
    else {
      uVar1 = (int)param_1[3] < (int)param_1[1];
      fVar12 = *pfVar5;
      uVar2 = NAN(fVar12) || NAN(fVar14);
    }
  }
  else {
    uVar1 = false;
    fVar12 = *pfVar5;
    uVar2 = NAN(fVar12) || NAN(fVar14);
  }
  if (fVar12 < fVar14) {
    uVar2 = false;
  }
  else if (fVar12 == fVar14 || (bool)uVar2) {
    uVar2 = (int)param_1[5] < (int)param_1[3];
  }
  else {
    uVar2 = true;
  }
  if ((bool)uVar1) {
    uVar6 = *(undefined8 *)param_1;
    fVar13 = (float)uVar6;
    if ((bool)uVar2) {
      uVar8 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar6;
      *(undefined8 *)param_1 = uVar8;
      fVar12 = fVar13;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
      if ((fVar13 <= fVar12) &&
         ((fVar12 != fVar13 || ((int)param_1[5] < (int)((ulong)uVar6 >> 0x20))))) {
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = uVar6;
        fVar12 = fVar13;
      }
    }
  }
  else if ((bool)uVar2) {
    uVar6 = *(undefined8 *)(param_1 + 2);
    uVar8 = *(undefined8 *)(param_1 + 4);
    fVar12 = (float)uVar6;
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(undefined8 *)(param_1 + 4) = uVar6;
    if ((fVar13 <= (float)uVar8) &&
       ((fVar13 < (float)uVar8 || ((int)((ulong)uVar8 >> 0x20) < (int)param_1[1])))) {
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar6;
    }
  }
  if (param_1 + 6 == param_2) {
    return;
  }
  pfVar9 = param_1 + 6;
  lVar7 = 0;
  fVar13 = *pfVar9;
  bVar4 = NAN(fVar13) || NAN(fVar12);
  bVar3 = fVar13 == fVar12;
  if (fVar13 < fVar12) goto LAB_002873d4;
  do {
    fVar14 = pfVar9[1];
    if ((!bVar3 && !bVar4) || ((int)fVar14 < (int)pfVar5[1])) {
      *(undefined8 *)pfVar9 = *(undefined8 *)pfVar5;
      pfVar11 = param_1;
      if (pfVar5 != param_1) {
        lVar10 = lVar7;
        do {
          fVar12 = *(float *)((long)param_1 + lVar10 + 8);
          pfVar11 = pfVar5;
          if (fVar13 < fVar12) goto LAB_002873cc;
          if ((fVar13 <= fVar12) && (*(int *)((long)param_1 + lVar10 + 0xc) <= (int)fVar14)) {
            pfVar11 = (float *)((long)param_1 + lVar10 + 0x10);
            goto LAB_002873cc;
          }
          bVar4 = lVar10 != -8;
          *(undefined8 *)((long)param_1 + lVar10 + 0x10) =
               *(undefined8 *)((long)param_1 + lVar10 + 8);
          lVar10 = lVar10 + -8;
          pfVar5 = pfVar5 + -2;
        } while (bVar4);
        pfVar11 = param_1;
      }
LAB_002873cc:
      *pfVar11 = fVar13;
      pfVar11[1] = fVar14;
    }
LAB_002873d4:
    do {
      pfVar5 = pfVar9;
      pfVar9 = pfVar5 + 2;
      if (pfVar9 == param_2) {
        return;
      }
      fVar14 = *pfVar5;
      lVar7 = lVar7 + 8;
      fVar13 = *pfVar9;
      bVar4 = NAN(fVar13) || NAN(fVar14);
      bVar3 = fVar13 == fVar14;
    } while (fVar13 < fVar14);
  } while( true );
}


