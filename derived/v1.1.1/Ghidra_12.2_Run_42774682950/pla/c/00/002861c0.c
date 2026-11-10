/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002861c0; name: FUN_002861c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002861c0(float *param_1,float *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = param_1[2];
  pfVar4 = param_1 + 4;
  fVar12 = *param_1;
  if (fVar13 <= fVar12) {
    if (fVar13 < fVar12) {
      uVar1 = true;
      fVar11 = *pfVar4;
    }
    else {
      uVar1 = (int)param_1[3] < (int)param_1[1];
      fVar11 = *pfVar4;
    }
  }
  else {
    uVar1 = false;
    fVar11 = *pfVar4;
  }
  if (fVar13 < fVar11) {
    uVar2 = false;
  }
  else if (fVar13 <= fVar11) {
    uVar2 = (int)param_1[5] < (int)param_1[3];
  }
  else {
    uVar2 = true;
  }
  if ((bool)uVar1) {
    uVar5 = *(undefined8 *)param_1;
    fVar12 = (float)uVar5;
    if ((bool)uVar2) {
      uVar7 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined8 *)param_1 = uVar7;
      fVar11 = fVar12;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar5;
      if ((fVar11 <= fVar12) &&
         ((fVar11 < fVar12 || ((int)param_1[5] < (int)((ulong)uVar5 >> 0x20))))) {
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = uVar5;
        fVar11 = fVar12;
      }
    }
  }
  else if ((bool)uVar2) {
    uVar5 = *(undefined8 *)(param_1 + 2);
    uVar7 = *(undefined8 *)(param_1 + 4);
    fVar11 = (float)uVar5;
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined8 *)(param_1 + 4) = uVar5;
    if (((float)uVar7 <= fVar12) &&
       ((fVar12 != (float)uVar7 || ((int)((ulong)uVar7 >> 0x20) < (int)param_1[1])))) {
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar7;
      *(undefined8 *)(param_1 + 2) = uVar5;
    }
  }
  if (param_1 + 6 == param_2) {
    return;
  }
  pfVar8 = param_1 + 6;
  lVar6 = 0;
  fVar12 = *pfVar8;
  bVar3 = fVar12 < fVar11;
  if (fVar12 != fVar11 && !bVar3) goto LAB_00286354;
  do {
    fVar13 = pfVar8[1];
    if ((bVar3) || ((int)fVar13 < (int)pfVar4[1])) {
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar4;
      pfVar10 = param_1;
      if (pfVar4 != param_1) {
        lVar9 = lVar6;
        do {
          fVar11 = *(float *)((long)param_1 + lVar9 + 8);
          pfVar10 = pfVar4;
          if (fVar11 < fVar12) goto LAB_0028634c;
          if ((fVar11 == fVar12) && (*(int *)((long)param_1 + lVar9 + 0xc) <= (int)fVar13)) {
            pfVar10 = (float *)((long)param_1 + lVar9 + 0x10);
            goto LAB_0028634c;
          }
          bVar3 = lVar9 != -8;
          *(undefined8 *)((long)param_1 + lVar9 + 0x10) = *(undefined8 *)((long)param_1 + lVar9 + 8)
          ;
          lVar9 = lVar9 + -8;
          pfVar4 = pfVar4 + -2;
        } while (bVar3);
        pfVar10 = param_1;
      }
LAB_0028634c:
      *pfVar10 = fVar12;
      pfVar10[1] = fVar13;
    }
LAB_00286354:
    do {
      pfVar4 = pfVar8;
      pfVar8 = pfVar4 + 2;
      if (pfVar8 == param_2) {
        return;
      }
      lVar6 = lVar6 + 8;
      fVar12 = *pfVar8;
      bVar3 = fVar12 < *pfVar4;
    } while (*pfVar4 < fVar12);
  } while( true );
}


